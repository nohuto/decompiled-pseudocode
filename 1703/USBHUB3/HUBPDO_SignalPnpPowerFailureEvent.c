/*
 * XREFs of HUBPDO_SignalPnpPowerFailureEvent @ 0x1C0014C14
 * Callers:
 *     HUBDSM_FlushingPnpEventsWithPortOff @ 0x1C001CAF0 (HUBDSM_FlushingPnpEventsWithPortOff.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPDO_SignalPnpPowerFailureEvent(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 1560) = -1073741823;
  KeSetEvent((PRKEVENT)(a1 + 1568), 0, 0);
  result = *(unsigned int *)(a1 + 1620);
  if ( (result & 0x40) != 0 )
  {
    result = 0LL;
    *(_QWORD *)(a1 + 1500) = 0LL;
    *(_QWORD *)(a1 + 1508) = 0LL;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1620), 0xFFFFFFBF);
  }
  return result;
}
