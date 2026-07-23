/*
 * XREFs of ViKeAcquireSpinLockRaiseToDpcCommon @ 0x140712E54
 * Callers:
 *     VerifierKeAcquireSpinLockRaiseToDpc @ 0x140711EA4 (VerifierKeAcquireSpinLockRaiseToDpc.c)
 *     VerifierKeAcquireSpinLockRaiseToDpcNoReboot @ 0x140711EE8 (VerifierKeAcquireSpinLockRaiseToDpcNoReboot.c)
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140702C74 (VfUtilCheckKernelAddress.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1407130E8 (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall ViKeAcquireSpinLockRaiseToDpcCommon(unsigned __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 result; // rax

  VfUtilCheckKernelAddress(a1, 8LL);
  LOBYTE(v2) = 2;
  v3 = ViKeRaiseIrqlSanityChecks(v2, ((unsigned int)MmVerifierData >> 17) & 1);
  result = pXdvKeAcquireSpinLockRaiseToDpc(a1);
  if ( v3 )
    *(_WORD *)(v3 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
