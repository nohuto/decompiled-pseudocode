/*
 * XREFs of VerifierKeTryToAcquireSpinLockAtDpcLevelNoReboot @ 0x140748FFC
 * Callers:
 *     <none>
 * Callees:
 *     KeTryToAcquireSpinLockAtDpcLevel @ 0x14000631C (KeTryToAcquireSpinLockAtDpcLevel.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetIncrementCounter @ 0x140745D60 (ViTargetIncrementCounter.c)
 */

BOOLEAN __fastcall VerifierKeTryToAcquireSpinLockAtDpcLevelNoReboot(KSPIN_LOCK *a1)
{
  unsigned __int8 CurrentIrql; // dl
  __int16 v4; // [rsp+30h] [rbp-8h]
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  ++dword_140331D08;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 132LL);
  if ( a1 < MmHighestUserAddress || a1 + 1 < a1 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, (ULONG_PTR)a1, 8uLL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u && (v4 & 0x200) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x40uLL, CurrentIrql, (ULONG_PTR)a1, 0LL);
  return pXdvKeTryToAcquireSpinLockAtDpcLevel(a1);
}
