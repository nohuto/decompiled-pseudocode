/*
 * XREFs of VerifierExEnterCriticalRegionAndAcquireResourceExclusive @ 0x140717EA8
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140713510 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierExEnterCriticalRegionAndAcquireResourceExclusive(__int64 a1)
{
  __int64 v2; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = pXdvExEnterCriticalRegionAndAcquireResourceExclusive();
  VfDeadlockAcquireResource(a1, 8u, (__int64)KeGetCurrentThread(), 0, retaddr);
  return v2;
}
