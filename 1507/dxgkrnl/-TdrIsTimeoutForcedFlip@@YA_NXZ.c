/*
 * XREFs of ?TdrIsTimeoutForcedFlip@@YA_NXZ @ 0x1C013E1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 TdrIsTimeoutForcedFlip(void)
{
  return _InterlockedExchange(&g_TdrForceTimeout, 0) != 0;
}
