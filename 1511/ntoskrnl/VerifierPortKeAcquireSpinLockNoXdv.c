/*
 * XREFs of VerifierPortKeAcquireSpinLockNoXdv @ 0x1406C6A5C
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfUtilCheckKernelAddress @ 0x1406B7454 (VfUtilCheckKernelAddress.c)
 *     ViTargetIncrementCounter @ 0x1406C44AC (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1406C70A0 (ViKeRaiseIrqlSanityChecks.c)
 */

KIRQL __fastcall VerifierPortKeAcquireSpinLockNoXdv(KSPIN_LOCK *a1, KIRQL *a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  KIRQL result; // al

  ++dword_1402E1888;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a3, 132LL);
  VfUtilCheckKernelAddress((unsigned __int64)a1, 8LL);
  LOBYTE(v5) = 2;
  v6 = ViKeRaiseIrqlSanityChecks(v5, 0LL);
  result = KeAcquireSpinLockRaiseToDpc(a1);
  *a2 = result;
  if ( v6 )
    *(_WORD *)(v6 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
