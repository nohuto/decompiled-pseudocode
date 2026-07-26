/*
 * XREFs of ndisReceiveQueueingOff @ 0x1C004F6A0
 * Callers:
 *     ndisSwitchMiniportReceiveFunction @ 0x1C002505C (ndisSwitchMiniportReceiveFunction.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C004EF18 (ndisBindUnbindPeriodicReceives.c)
 * Callees:
 *     ndisTracePeriodicRcvOnOff @ 0x1C004F974 (ndisTracePeriodicRcvOnOff.c)
 */

void *__fastcall ndisReceiveQueueingOff(__int64 a1)
{
  void *result; // rax

  *(_DWORD *)(a1 + 3208) = 0;
  if ( BYTE2(dword_1C008AE58) )
    ndisTracePeriodicRcvOnOff(a1, 0LL, 0LL, 0LL);
  if ( *(_BYTE *)(a1 + 1995) )
  {
    *(_BYTE *)(a1 + 2673) = 0;
    result = ndisMDispatchReceiveNetBufferListsWithLock;
  }
  else
  {
    *(_BYTE *)(a1 + 2673) = 1;
    result = ndisMDispatchReceiveNetBufferLists;
  }
  *(_QWORD *)(a1 + 2152) = result;
  *(_QWORD *)(a1 + 2144) = result;
  --*(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy;
  return result;
}
