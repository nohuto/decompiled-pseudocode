/*
 * XREFs of VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x1406C67C8
 * Callers:
 *     <none>
 * Callees:
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1406C71AC (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     VfDeadlockAcquireResource @ 0x1406CB730 (VfDeadlockAcquireResource.c)
 */

char __fastcall VerifierKeTryToAcquireSpinLockAtDpcLevel(int a1)
{
  char v2; // bl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v2 = ViKeTryToAcquireSpinLockAtDpcLevelCommon(a1);
  if ( v2 )
    VfDeadlockAcquireResource(a1, 5, (unsigned int)KeGetCurrentThread(), 1, retaddr);
  return v2;
}
