/*
 * XREFs of VerifierExEnterPriorityRegionAndAcquireResourceShared @ 0x1406C95B8
 * Callers:
 *     <none>
 * Callees:
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x14003F010 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     VfDeadlockAcquireResource @ 0x1406CB730 (VfDeadlockAcquireResource.c)
 */

PVOID __fastcall VerifierExEnterPriorityRegionAndAcquireResourceShared(struct _ERESOURCE *a1)
{
  int v1; // edi
  PVOID v2; // rbx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = (int)a1;
  v2 = pXdvExEnterPriorityRegionAndAcquireResourceShared(a1);
  VfDeadlockAcquireResource(v1, 8, (unsigned int)KeGetCurrentThread(), 0, retaddr);
  return v2;
}
