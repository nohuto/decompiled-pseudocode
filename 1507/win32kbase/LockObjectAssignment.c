/*
 * XREFs of LockObjectAssignment @ 0x1C0050110
 * Callers:
 *     HMChangeOwnerThread @ 0x1C00142F0 (HMChangeOwnerThread.c)
 *     xxxCreateThreadInfo @ 0x1C004D110 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C004DF98 (xxxDestroyThreadInfo.c)
 *     HMAllocObject @ 0x1C004FB70 (HMAllocObject.c)
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
