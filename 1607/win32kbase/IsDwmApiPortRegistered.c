/*
 * XREFs of IsDwmApiPortRegistered @ 0x1C0082D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 IsDwmApiPortRegistered()
{
  return g_pDwmApiPort != 0LL;
}
