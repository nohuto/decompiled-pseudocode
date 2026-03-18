/*
 * XREFs of HUBDSM_FlushingPnpEventsWithPortOff @ 0x1C001AD10
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_SignalPnpPowerFailureEvent @ 0x1C0013A74 (HUBPDO_SignalPnpPowerFailureEvent.c)
 */

__int64 __fastcall HUBDSM_FlushingPnpEventsWithPortOff(__int64 a1)
{
  HUBPDO_SignalPnpPowerFailureEvent(*(_QWORD *)(a1 + 960));
  return 4077LL;
}
