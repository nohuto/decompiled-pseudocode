/*
 * XREFs of VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x140712818
 * Callers:
 *     <none>
 * Callees:
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1407131F4 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     VfDeadlockAcquireResource @ 0x140713510 (VfDeadlockAcquireResource.c)
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
