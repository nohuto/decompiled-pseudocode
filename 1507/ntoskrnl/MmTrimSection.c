/*
 * XREFs of MmTrimSection @ 0x1400F8B8C
 * Callers:
 *     CcPurgeCacheSection @ 0x14008322C (CcPurgeCacheSection.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x1400F8AB8 (CcCoherencyFlushAndPurgeCache.c)
 * Callees:
 *     MiDecrementSubsections @ 0x140054288 (MiDecrementSubsections.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiComputeFlushRange @ 0x140085450 (MiComputeFlushRange.c)
 *     MiCheckControlArea @ 0x14008B090 (MiCheckControlArea.c)
 *     MiTrimSection @ 0x1400FA79C (MiTrimSection.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReturnSubsectionCharges @ 0x140230538 (MiReturnSubsectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MmTrimSection(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // rax
  unsigned int v4; // eax
  __int64 v5; // rdi
  unsigned int v6; // esi
  volatile signed __int32 *v7; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v9; // edi
  signed __int32 v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  _QWORD v16[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+38h] [rbp-20h]
  __int64 v18; // [rsp+40h] [rbp-18h]
  __int64 v19; // [rsp+68h] [rbp+10h] BYREF

  if ( a2 )
  {
    v3 = *a2;
    a2 = &v19;
    v19 = v3;
  }
  if ( !(unsigned int)MiComputeFlushRange(a1, (int)a2, a3, (__int64)v16) )
    return 0LL;
  v4 = MiTrimSection(v16, 0LL, 0LL);
  v5 = v16[0];
  v6 = v4;
  v7 = (volatile signed __int32 *)(v16[0] + 72LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v16[0] + 72LL);
  }
  else
  {
    v9 = 0;
    if ( _interlockedbittestandset(v7, 0x1Fu) )
      v9 = ExpWaitForSpinLockExclusiveAndAcquire(v7);
    while ( 1 )
    {
      v10 = *v7;
      if ( (*v7 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v10 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v7, v10 | 0x40000000, v10);
      if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v9);
    }
    v5 = v16[0];
  }
  v11 = MiDecrementSubsections(v17, v17, 0);
  v12 = MiDecrementSubsections(v18, v18, 0);
  --*(_QWORD *)(v5 + 40);
  LOBYTE(v13) = CurrentIrql;
  v14 = v12 + v11;
  MiCheckControlArea(v5, v13);
  if ( v14 )
    MiReturnSubsectionCharges(v14);
  return v6;
}
