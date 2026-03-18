/*
 * XREFs of MiCleanWorkingSet @ 0x1401088D4
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1404B2FA4 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiChargeWsles @ 0x14003EE30 (MiChargeWsles.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiEmptyPageAccessLog @ 0x1400D71E0 (MiEmptyPageAccessLog.c)
 *     MiRemoveWorkingSetPages @ 0x1401089A0 (MiRemoveWorkingSetPages.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiCleanWorkingSet(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v5; // esi
  signed __int32 v6; // eax
  _QWORD *v7; // rcx
  __int64 v8; // rbx

  v3 = (volatile signed __int32 *)(a1 + 1272);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 1272);
  }
  else
  {
    v5 = 0;
    if ( _interlockedbittestandset(v3, 0x1Fu) )
      v5 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 1272));
    while ( 1 )
    {
      v6 = *v3;
      if ( (*v3 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v6 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v3, v6 | 0x40000000, v6);
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
  }
  *(_BYTE *)(a1 + 1491) |= 1u;
  MiRemoveWorkingSetPages(v3, a2);
  v7 = *(_QWORD **)(a1 + 1288);
  *(_QWORD *)(a1 + 920) -= 5LL;
  if ( v7 )
  {
    MiEmptyPageAccessLog(v7);
    *(_QWORD *)(a1 + 1288) = 0LL;
  }
  v8 = *(_QWORD *)(a1 + 1368);
  MiChargeWsles((__int64)v3, 8 - v8, 1);
  MiUnlockWorkingSetExclusive((__int64)v3, CurrentIrql);
  return v8 - 8;
}
