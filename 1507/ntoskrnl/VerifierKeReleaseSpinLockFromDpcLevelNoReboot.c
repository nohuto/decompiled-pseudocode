/*
 * XREFs of VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x140748BAC
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x1401091F0 (KeReleaseSpinLockFromDpcLevel.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VerifierKeReleaseSpinLockFromDpcLevelNoReboot(KSPIN_LOCK *a1)
{
  unsigned __int8 CurrentIrql; // dl
  __int16 v3; // [rsp+30h] [rbp-8h]

  if ( a1 < MmHighestUserAddress || a1 + 1 < a1 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, (ULONG_PTR)a1, 8uLL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u && (v3 & 0x200) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x41uLL, CurrentIrql, (ULONG_PTR)a1, 0LL);
  pXdvKeReleaseSpinLockFromDpcLevel(a1);
}
