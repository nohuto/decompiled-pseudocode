/*
 * XREFs of HUBPSM20_GettingPortLostChangesOnStart @ 0x1C000F0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM20_GettingPortLostChangesOnStart(__int64 a1, __int64 a2)
{
  return HUBHTX_GetPortLostChangeEvent(*(_QWORD **)(a1 + 960), a2);
}
