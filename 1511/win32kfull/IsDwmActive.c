/*
 * XREFs of IsDwmActive @ 0x1C004F490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 IsDwmActive()
{
  return g_pDwmState != 0LL;
}
