/*
 * XREFs of MiInsertUnusedSegment @ 0x140089B00
 * Callers:
 *     MiCheckControlArea @ 0x14008B090 (MiCheckControlArea.c)
 *     MiCleanSection @ 0x140158DAC (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x140210914 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140210AF8 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x140211468 (MiFlushControlArea.c)
 *     MiProcessDeleteOnClose @ 0x1402119C8 (MiProcessDeleteOnClose.c)
 *     MiSetDeleteOnClose @ 0x1402122AC (MiSetDeleteOnClose.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiConvertStaticSubsections @ 0x1400887D8 (MiConvertStaticSubsections.c)
 *     MiReleaseControlAreaCharges @ 0x140089C74 (MiReleaseControlAreaCharges.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiInsertUnusedSegment(__int64 a1)
{
  __int64 v2; // rdi
  __int16 *v3; // rbp
  int v4; // eax
  unsigned int v5; // esi
  int v6; // eax
  __int16 **v7; // rdx
  __int64 v8; // rax
  __int16 *v10; // rbx
  __int16 **v11; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0LL;
  v3 = MiPartitionIdToPointer(*(_WORD *)(a1 + 60) & 0x3FF);
  v4 = *(_DWORD *)(a1 + 56);
  if ( (v4 & 0x100) != 0 )
    return 0LL;
  if ( (v4 & 0x20) == 0 && *(_QWORD *)(a1 + 64) && (v4 & 0x400) == 0 )
    v2 = MiConvertStaticSubsections(a1);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E740);
  }
  else
  {
    v5 = 0;
    if ( _interlockedbittestandset(&dword_14034E740, 0x1Fu) )
      v5 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E740);
    while ( (dword_14034E740 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (dword_14034E740 & 0x40000000) == 0 )
        _InterlockedCompareExchange(&dword_14034E740, dword_14034E740 | 0x40000000, dword_14034E740);
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
  }
  if ( !v2 )
    v2 = MiReleaseControlAreaCharges(a1, 1LL);
  v6 = *(_DWORD *)(a1 + 56) | 0x8000000;
  *(_DWORD *)(a1 + 56) = v6;
  if ( (v6 & 0x40000) != 0 )
  {
    v10 = (__int16 *)(a1 + 8);
    v11 = (__int16 **)*((_QWORD *)v3 + 160);
    *(_QWORD *)v10 = v3 + 636;
    *((_QWORD *)v10 + 1) = v11;
    if ( *v11 != v3 + 636 )
      __fastfail(3u);
    *v11 = v10;
    *((_QWORD *)v3 + 160) = v10;
    ++*((_DWORD *)v3 + 339);
    if ( !*((_BYTE *)v3 + 1352) )
    {
      *((_BYTE *)v3 + 1352) = 1;
      KiSetTimerEx((__int64)(v3 + 644), Mi10Milliseconds.QuadPart, 0, 0, 0LL);
    }
  }
  else
  {
    v7 = (__int16 **)*((_QWORD *)v3 + 171);
    v8 = a1 + 8;
    *(_QWORD *)(a1 + 8) = v3 + 680;
    *(_QWORD *)(a1 + 16) = v7;
    if ( *v7 != v3 + 680 )
      __fastfail(3u);
    *v7 = (__int16 *)v8;
    *((_QWORD *)v3 + 171) = v8;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E740, retaddr);
  else
    dword_14034E740 = 0;
  return v2;
}
