/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140712334
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x14071425C (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel(__int64 a1)
{
  int v1; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1;
  VfDeadlockReleaseResource(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFFCuLL, 6LL, KeGetCurrentThread(), retaddr);
  return VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon(v1);
}
