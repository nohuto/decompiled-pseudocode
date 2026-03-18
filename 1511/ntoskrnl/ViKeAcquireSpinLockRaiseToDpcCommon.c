/*
 * XREFs of ViKeAcquireSpinLockRaiseToDpcCommon @ 0x1406C6E04
 * Callers:
 *     VerifierKeAcquireSpinLockRaiseToDpc @ 0x1406C5E54 (VerifierKeAcquireSpinLockRaiseToDpc.c)
 *     VerifierKeAcquireSpinLockRaiseToDpcNoReboot @ 0x1406C5E98 (VerifierKeAcquireSpinLockRaiseToDpcNoReboot.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfUtilCheckKernelAddress @ 0x1406B7454 (VfUtilCheckKernelAddress.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1406C70A0 (ViKeRaiseIrqlSanityChecks.c)
 */

KIRQL __fastcall ViKeAcquireSpinLockRaiseToDpcCommon(PKSPIN_LOCK SpinLock)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  KIRQL result; // al

  VfUtilCheckKernelAddress((unsigned __int64)SpinLock, 8LL);
  LOBYTE(v2) = 2;
  v3 = ViKeRaiseIrqlSanityChecks(v2, ((unsigned int)MmVerifierData >> 17) & 1);
  result = pXdvKeAcquireSpinLockRaiseToDpc(SpinLock);
  if ( v3 )
    *(_WORD *)(v3 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
