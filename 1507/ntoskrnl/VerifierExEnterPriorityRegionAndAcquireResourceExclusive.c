/*
 * XREFs of VerifierExEnterPriorityRegionAndAcquireResourceExclusive @ 0x14074C188
 * Callers:
 *     <none>
 * Callees:
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x1400C88C0 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     VfDeadlockAcquireResource @ 0x14074EDC4 (VfDeadlockAcquireResource.c)
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
