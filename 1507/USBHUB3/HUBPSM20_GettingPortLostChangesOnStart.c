/*
 * XREFs of HUBPSM20_GettingPortLostChangesOnStart @ 0x1C000DE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM20_GettingPortLostChangesOnStart(__int64 a1)
{
  return HUBHTX_GetPortLostChangeEvent(*(_QWORD **)(a1 + 960));
}
