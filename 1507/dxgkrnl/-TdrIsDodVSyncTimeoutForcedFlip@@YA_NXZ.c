/*
 * XREFs of ?TdrIsDodVSyncTimeoutForcedFlip@@YA_NXZ @ 0x1C013DFB4
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C00D24E0 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 TdrIsDodVSyncTimeoutForcedFlip(void)
{
  return _InterlockedExchange(&g_TdrForceDodVSyncTimeout, 0) != 0;
}
