/*
 * XREFs of ?TdrIsTimeoutForcedFlip@@YA_NXZ @ 0x1C0144610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 TdrIsTimeoutForcedFlip(void)
{
  return _InterlockedExchange(&g_TdrForceTimeout, 0) != 0;
}
