/*
 * XREFs of VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x1406C6590
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     VfUtilCheckKernelAddress @ 0x1406B7454 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VerifierKeReleaseSpinLockFromDpcLevelNoReboot(KSPIN_LOCK *a1)
{
  unsigned __int8 CurrentIrql; // cl
  __int16 v3; // [rsp+30h] [rbp-8h]

  VfUtilCheckKernelAddress((unsigned __int64)a1, 8LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u && (v3 & 0x200) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x41uLL, CurrentIrql, (ULONG_PTR)a1, 0LL);
  pXdvKeReleaseSpinLockFromDpcLevel(a1);
}
