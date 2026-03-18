/*
 * XREFs of VerifierExEnterPriorityRegionAndAcquireResourceExclusive @ 0x140717F48
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140713510 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierExEnterPriorityRegionAndAcquireResourceExclusive(__int64 a1)
{
  __int64 v2; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = pXdvExEnterPriorityRegionAndAcquireResourceExclusive();
  VfDeadlockAcquireResource(a1, 8u, (__int64)KeGetCurrentThread(), 0, retaddr);
  return v2;
}
