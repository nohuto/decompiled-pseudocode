/*
 * XREFs of ?TdrIsDodVSyncTimeoutForcedFlip@@YA_NXZ @ 0x1C01443F4
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C00E51EC (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 TdrIsDodVSyncTimeoutForcedFlip(void)
{
  return _InterlockedExchange(&g_TdrForceDodVSyncTimeout, 0) != 0;
}
