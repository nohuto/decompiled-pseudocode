/*
 * XREFs of VerifierExEnterCriticalRegionAndAcquireResourceExclusive @ 0x1406C94C8
 * Callers:
 *     <none>
 * Callees:
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x14003F800 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 *     VfDeadlockAcquireResource @ 0x1406CB730 (VfDeadlockAcquireResource.c)
 */

PVOID __fastcall VerifierExEnterCriticalRegionAndAcquireResourceExclusive(struct _ERESOURCE *a1)
{
  int v1; // edi
  PVOID v2; // rbx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = (int)a1;
  v2 = pXdvExEnterCriticalRegionAndAcquireResourceExclusive(a1);
  VfDeadlockAcquireResource(v1, 8, (unsigned int)KeGetCurrentThread(), 0, retaddr);
  return v2;
}
