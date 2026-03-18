/*
 * XREFs of HUBPSM30_EnablingInterruptsAndGettingPortEventInNoChange @ 0x1C000EB80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM30_EnablingInterruptsAndGettingPortEventInNoChange(__int64 a1)
{
  return HUBHTX_Get30PortChangeEvent(*(_QWORD **)(a1 + 960));
}
