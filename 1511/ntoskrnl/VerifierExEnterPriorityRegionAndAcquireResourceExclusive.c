/*
 * XREFs of VerifierExEnterPriorityRegionAndAcquireResourceExclusive @ 0x1406C9568
 * Callers:
 *     <none>
 * Callees:
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x14003F6E0 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     VfDeadlockAcquireResource @ 0x1406CB730 (VfDeadlockAcquireResource.c)
 */

PVOID __fastcall VerifierExEnterPriorityRegionAndAcquireResourceExclusive(struct _ERESOURCE *a1)
{
  int v1; // edi
  PVOID v2; // rbx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = (int)a1;
  v2 = pXdvExEnterPriorityRegionAndAcquireResourceExclusive(a1);
  VfDeadlockAcquireResource(v1, 8, (unsigned int)KeGetCurrentThread(), 0, retaddr);
  return v2;
}
