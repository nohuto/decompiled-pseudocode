/*
 * XREFs of ndisReceiveQueueingOn @ 0x1C004F708
 * Callers:
 *     ndisSwitchMiniportReceiveFunction @ 0x1C002505C (ndisSwitchMiniportReceiveFunction.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C004EF18 (ndisBindUnbindPeriodicReceives.c)
 * Callees:
 *     ndisTracePeriodicRcvOnOff @ 0x1C004F974 (ndisTracePeriodicRcvOnOff.c)
 */

__int64 __fastcall ndisReceiveQueueingOn(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 2673) = 0;
  *(_QWORD *)(a1 + 2144) = ndisMIndicateReceiveNblsWithThrottling;
  *(_QWORD *)(a1 + 3200) = WPP_MAIN_CB.DeviceQueue.Lock;
  ++*(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy;
  WPP_MAIN_CB.DeviceQueue.Lock = a1;
  result = (unsigned int)(*(_BYTE *)(a1 + 3268) == 1) + 1;
  *(_DWORD *)(a1 + 3208) = result;
  if ( BYTE2(dword_1C008AE58) )
  {
    LOBYTE(a2) = 1;
    return ndisTracePeriodicRcvOnOff(
             a1,
             a2,
             *(unsigned int *)(&WPP_MAIN_CB.DeviceQueue.Size + 1),
             *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong);
  }
  return result;
}
