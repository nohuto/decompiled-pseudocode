/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockForDpc @ 0x1406C6268
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x1406CC480 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseInStackQueuedSpinLockForDpc(__int64 a1)
{
  int v1; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1;
  VfDeadlockReleaseResource(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFFCuLL, 6LL, KeGetCurrentThread(), retaddr);
  return VerifierKeReleaseInStackQueuedSpinLockForDpcCommon(v1);
}
