/*
 * XREFs of KeSetAffinityThread @ 0x14015B334
 * Callers:
 *     ExpWorkerThread @ 0x1400316D0 (ExpWorkerThread.c)
 *     NtSetInformationThread @ 0x140478220 (NtSetInformationThread.c)
 *     ExpWorkerThreadBalanceManager @ 0x1405B12E8 (ExpWorkerThreadBalanceManager.c)
 * Callees:
 *     KiSetAffinityThread @ 0x1400434D0 (KiSetAffinityThread.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiProcessDeferredReadyList @ 0x14009BE20 (KiProcessDeferredReadyList.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiExtendProcessAffinity @ 0x14020A558 (KiExtendProcessAffinity.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __fastcall KeSetAffinityThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // r14
  __int64 v6; // rbp
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r13
  volatile signed __int32 *v10; // rbx
  unsigned int v11; // esi
  signed __int32 i; // edx
  __int64 v13; // r8
  void *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_WORD *)(a2 + 8);
  v6 = *(_QWORD *)(a1 + 544);
  v15 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = (volatile signed __int32 *)(v6 + 64);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v6 + 64);
  }
  else
  {
    v11 = 0;
    if ( _interlockedbittestandset(v10, 0x1Fu) )
      v11 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v6 + 64));
    for ( i = *v10; (*v10 & 0xBFFFFFFF) != 0x80000000; i = *v10 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v10, i | 0x40000000, i);
      if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v11);
    }
  }
  v13 = *(_QWORD *)(v6 + 8LL * v4 + 88);
  if ( !v13 || (v13 & *(_QWORD *)a2) != *(_QWORD *)a2 )
    KiExtendProcessAffinity(v6, v4);
  if ( !*(_QWORD *)a2 )
    *(_QWORD *)a2 = *(_QWORD *)(v6 + 8LL * v4 + 88);
  KiSetAffinityThread(a1, (__int64 *)&v15, (__int64 *)a2, a4);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v6 + 64, retaddr);
  else
    *v10 = 0;
  KiProcessDeferredReadyList((__int64)CurrentPrcb, &v15, CurrentIrql);
}
