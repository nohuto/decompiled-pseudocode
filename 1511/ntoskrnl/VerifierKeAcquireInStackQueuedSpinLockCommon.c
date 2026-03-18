/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x1406C5B8C
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLock @ 0x1406C5A78 (VerifierKeAcquireInStackQueuedSpinLock.c)
 *     VerifierKeAcquireInStackQueuedSpinLockNoReboot @ 0x1406C5CC8 (VerifierKeAcquireInStackQueuedSpinLockNoReboot.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     VfUtilCheckKernelAddress @ 0x1406B7454 (VfUtilCheckKernelAddress.c)
 *     ViTargetIncrementCounter @ 0x1406C44AC (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1406C70A0 (ViKeRaiseIrqlSanityChecks.c)
 */

void __fastcall VerifierKeAcquireInStackQueuedSpinLockCommon(
        KSPIN_LOCK *a1,
        __int64 a2,
        struct _KLOCK_QUEUE_HANDLE *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx

  ++dword_1402E1888;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a2, 132LL);
  VfUtilCheckKernelAddress((unsigned __int64)a1, 8LL);
  VfUtilCheckKernelAddress((unsigned __int64)a3, 24LL);
  LOBYTE(v5) = 2;
  v6 = ViKeRaiseIrqlSanityChecks(v5, 0LL);
  pXdvKeAcquireInStackQueuedSpinLock(a1, a3);
  if ( v6 )
    *(_WORD *)(v6 + 10) = KeGetPcr()->Prcb.Number;
}
