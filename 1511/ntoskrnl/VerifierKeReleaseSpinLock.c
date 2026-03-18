/*
 * XREFs of VerifierKeReleaseSpinLock @ 0x1406C64AC
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     ViKeReleaseSpinLockCommon @ 0x1406C714C (ViKeReleaseSpinLockCommon.c)
 *     VfDeadlockReleaseResource @ 0x1406CC480 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseSpinLock(PKSPIN_LOCK SpinLock, KIRQL a2)
{
  __int64 v4; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = ViKeReleaseSpinLockCommon((int)SpinLock);
  VfDeadlockReleaseResource(SpinLock, 5LL, KeGetCurrentThread(), retaddr);
  pXdvKeReleaseSpinLock(SpinLock, a2);
  return ViKeIrqlLogCommon(v4, 1LL);
}
