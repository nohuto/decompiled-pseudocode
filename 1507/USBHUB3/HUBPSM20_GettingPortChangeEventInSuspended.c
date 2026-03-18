/*
 * XREFs of HUBPSM20_GettingPortChangeEventInSuspended @ 0x1C000E000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM20_GettingPortChangeEventInSuspended(__int64 a1)
{
  return HUBHTX_Get20PortChangeEvent(*(_QWORD **)(a1 + 960));
}
