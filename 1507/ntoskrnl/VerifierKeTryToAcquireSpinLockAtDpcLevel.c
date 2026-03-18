/*
 * XREFs of VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x140748F20
 * Callers:
 *     <none>
 * Callees:
 *     KeTryToAcquireSpinLockAtDpcLevel @ 0x14000631C (KeTryToAcquireSpinLockAtDpcLevel.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetIncrementCounter @ 0x140745D60 (ViTargetIncrementCounter.c)
 *     VfDeadlockAcquireResource @ 0x14074EDC4 (VfDeadlockAcquireResource.c)
 */

BOOLEAN __fastcall VerifierKeTryToAcquireSpinLockAtDpcLevel(KSPIN_LOCK *a1)
{
  unsigned __int8 CurrentIrql; // dl
  BOOLEAN v3; // di
  __int16 v5; // [rsp+30h] [rbp-8h]
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  ++dword_140331D08;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 132LL);
  if ( a1 < MmHighestUserAddress || a1 + 1 < a1 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, (ULONG_PTR)a1, 8uLL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u && (v5 & 0x200) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x40uLL, CurrentIrql, (ULONG_PTR)a1, 0LL);
  v3 = pXdvKeTryToAcquireSpinLockAtDpcLevel(a1);
  if ( v3 )
    VfDeadlockAcquireResource((_DWORD)a1, 5, (unsigned int)KeGetCurrentThread(), 1, retaddr);
  return v3;
}
