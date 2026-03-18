/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLock @ 0x1406C61D0
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x1406CC480 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseInStackQueuedSpinLock(__int64 a1)
{
  int v1; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1;
  VfDeadlockReleaseResource(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFFCuLL, 6LL, KeGetCurrentThread(), retaddr);
  return VerifierKeReleaseInStackQueuedSpinLockCommon(v1);
}
