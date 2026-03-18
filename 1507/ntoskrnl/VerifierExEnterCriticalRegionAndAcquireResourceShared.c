/*
 * XREFs of VerifierExEnterCriticalRegionAndAcquireResourceShared @ 0x14074C138
 * Callers:
 *     <none>
 * Callees:
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x14012D2C0 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     VfDeadlockAcquireResource @ 0x14074EDC4 (VfDeadlockAcquireResource.c)
 */

PVOID __fastcall VerifierExEnterCriticalRegionAndAcquireResourceShared(struct _ERESOURCE *a1)
{
  int v1; // edi
  PVOID v2; // rbx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = (int)a1;
  v2 = pXdvExEnterCriticalRegionAndAcquireResourceShared(a1);
  VfDeadlockAcquireResource(v1, 8, (unsigned int)KeGetCurrentThread(), 0, retaddr);
  return v2;
}
