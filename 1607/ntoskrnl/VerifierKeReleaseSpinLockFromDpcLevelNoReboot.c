/*
 * XREFs of VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x1407125E0
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140702C74 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierKeReleaseSpinLockFromDpcLevelNoReboot(unsigned __int64 a1)
{
  unsigned __int8 CurrentIrql; // cl
  __int16 v4; // [rsp+30h] [rbp-8h]

  VfUtilCheckKernelAddress(a1, 8LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u && (v4 & 0x200) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x41uLL, CurrentIrql, a1, 0LL);
  return pXdvKeReleaseSpinLockFromDpcLevel(a1);
}
