/*
 * XREFs of IsProcessDwm @ 0x1C000B420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsProcessDwm(PVOID a1)
{
  return a1 && a1 == g_pepDwm;
}
