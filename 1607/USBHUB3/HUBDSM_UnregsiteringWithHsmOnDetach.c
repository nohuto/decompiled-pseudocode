/*
 * XREFs of HUBDSM_UnregsiteringWithHsmOnDetach @ 0x1C0018050
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_UnregisterWithHSM @ 0x1C000D6AC (HUBMUX_UnregisterWithHSM.c)
 */

__int64 __fastcall HUBDSM_UnregsiteringWithHsmOnDetach(__int64 a1)
{
  HUBMUX_UnregisterWithHSM(*(_QWORD *)(a1 + 960));
  return 4077LL;
}
