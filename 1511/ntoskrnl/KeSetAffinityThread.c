/*
 * XREFs of KeSetAffinityThread @ 0x14012DAD4
 * Callers:
 *     ExpWorkerThread @ 0x14006F990 (ExpWorkerThread.c)
 *     NtSetInformationThread @ 0x140425860 (NtSetInformationThread.c)
 *     ExpWorkerThreadBalanceManager @ 0x140536444 (ExpWorkerThreadBalanceManager.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiProcessDeferredReadyList @ 0x14007DC70 (KiProcessDeferredReadyList.c)
 *     KiSetAffinityThread @ 0x140095508 (KiSetAffinityThread.c)
 *     KiExtendProcessAffinity @ 0x1401CB498 (KiExtendProcessAffinity.c)
 */

__int64 __fastcall KeSetAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v8; // r8
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(unsigned __int16 *)(a2 + 8);
  v4 = *(_QWORD *)(a1 + 544);
  v10 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  v8 = *(_QWORD *)(v4 + 8 * v2 + 88);
  if ( !v8 || (v8 & *(_QWORD *)a2) != *(_QWORD *)a2 )
    KiExtendProcessAffinity(v4, (unsigned __int16)v2);
  if ( !*(_QWORD *)a2 )
    *(_QWORD *)a2 = *(_QWORD *)(v4 + 8LL * (unsigned int)v2 + 88);
  KiSetAffinityThread(a1, (__int64)&v10, a2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  return KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)&v10, CurrentIrql);
}
