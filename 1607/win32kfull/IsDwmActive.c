/*
 * XREFs of IsDwmActive @ 0x1C0053240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 IsDwmActive()
{
  return g_pDwmState != 0LL;
}
