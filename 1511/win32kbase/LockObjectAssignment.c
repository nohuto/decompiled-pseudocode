/*
 * XREFs of LockObjectAssignment @ 0x1C0042100
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C003F3A0 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C0040170 (xxxDestroyThreadInfo.c)
 *     HMAllocObject @ 0x1C0041A20 (HMAllocObject.c)
 *     HMChangeOwnerThread @ 0x1C0077980 (HMChangeOwnerThread.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall LockObjectAssignment(void **a1, void *a2)
{
  void *v2; // rdi
  LONG_PTR result; // rax

  v2 = *a1;
  if ( a2 )
    result = ObfReferenceObject(a2);
  *a1 = a2;
  if ( v2 )
    return ObfDereferenceObject(v2);
  return result;
}
