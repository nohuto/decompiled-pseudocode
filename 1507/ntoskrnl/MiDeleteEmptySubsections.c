/*
 * XREFs of MiDeleteEmptySubsections @ 0x140081CCC
 * Callers:
 *     MiDereferenceSegmentThread @ 0x140167DD0 (MiDereferenceSegmentThread.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140028FE0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MI_UNUSED_SUBSECTIONS_COUNT_REMOVE @ 0x140082CB0 (MI_UNUSED_SUBSECTIONS_COUNT_REMOVE.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiDeleteFileExtents @ 0x140230578 (MiDeleteFileExtents.c)
 *     MiMarkFileExtentsDeleted @ 0x140230CE4 (MiMarkFileExtentsDeleted.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteEmptySubsections(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int8 CurrentIrql; // r14
  unsigned int v3; // edi
  signed __int8 v4; // cf
  _QWORD *v5; // rbp
  _QWORD *v6; // rax
  __int64 result; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rsi
  void *v10; // r12
  void *v11; // rbp
  _QWORD *v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rdx
  char v15; // al
  unsigned int v16; // edi
  void *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v19; // [rsp+68h] [rbp+10h]

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E740);
  }
  else
  {
    v3 = 0;
    v4 = _interlockedbittestandset(&dword_14034E740, 0x1Fu);
    if ( v4 )
      v3 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E740);
    while ( (dword_14034E740 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (dword_14034E740 & 0x40000000) == 0 )
        _InterlockedCompareExchange(&dword_14034E740, dword_14034E740 | 0x40000000, dword_14034E740);
      if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v3);
    }
  }
  v5 = (_QWORD *)(v1 + 1392);
  v6 = *(_QWORD **)(v1 + 1392);
  v19 = (_QWORD *)(v1 + 1392);
  if ( v6 != (_QWORD *)(v1 + 1392) )
  {
    do
    {
      v8 = v6 - 10;
      v9 = *(v6 - 10);
      if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v9 + 72)) )
      {
        v10 = 0LL;
        if ( (*((_BYTE *)v8 + 34) & 8) != 0 )
        {
          v11 = (void *)v8[1];
          if ( (*(_DWORD *)(v9 + 56) & 0x40000000) != 0 )
            v10 = (void *)MiMarkFileExtentsDeleted(v8);
          v8[1] = 0LL;
          v12 = v8 + 10;
          v13 = v8[10];
          v14 = (_QWORD *)v8[11];
          if ( *(_QWORD **)(v13 + 8) != v8 + 10 || (_QWORD *)*v14 != v12 )
            __fastfail(3u);
          *v14 = v13;
          *(_QWORD *)(v13 + 8) = v14;
          *((_WORD *)v8 + 17) &= ~8u;
          v8[11] = v8 + 10;
          *v12 = v12;
          MI_UNUSED_SUBSECTIONS_COUNT_REMOVE(v8);
        }
        else
        {
          v11 = 0LL;
        }
        v15 = BYTE6(PerfGlobalGroupMask);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E740, retaddr);
          v15 = BYTE6(PerfGlobalGroupMask);
        }
        else
        {
          dword_14034E740 = 0;
        }
        if ( (v15 & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v9 + 72, retaddr);
        else
          *(_DWORD *)(v9 + 72) = 0;
        __writecr8(CurrentIrql);
        if ( v10 )
          MiDeleteFileExtents(v10);
        if ( v11 )
          ExFreePoolWithTag(v11, 0);
        v5 = v19;
      }
      else
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E740, retaddr);
        else
          dword_14034E740 = 0;
        __writecr8(CurrentIrql);
      }
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E740);
      }
      else
      {
        v16 = 0;
        v4 = _interlockedbittestandset(&dword_14034E740, 0x1Fu);
        if ( v4 )
          v16 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E740);
        while ( (dword_14034E740 & 0xBFFFFFFF) != 0x80000000 )
        {
          if ( (dword_14034E740 & 0x40000000) == 0 )
            _InterlockedCompareExchange(&dword_14034E740, dword_14034E740 | 0x40000000, dword_14034E740);
          if ( (++v16 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v16);
        }
      }
      v6 = (_QWORD *)*v5;
    }
    while ( (_QWORD *)*v5 != v5 );
    v1 = a1;
  }
  *(_QWORD *)(v1 + 1216) = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E740, retaddr);
  else
    dword_14034E740 = 0;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
