/*
 * XREFs of ?TdrIsTimeoutForcedFlip@@YA_NXZ @ 0x1C0167320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 TdrIsTimeoutForcedFlip(void)
{
  return _InterlockedExchange(&g_TdrForceTimeout, 0) != 0;
}
