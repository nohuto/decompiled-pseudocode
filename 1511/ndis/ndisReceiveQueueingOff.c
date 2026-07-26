/*
 * XREFs of ndisReceiveQueueingOff @ 0x1C004AC84
 * Callers:
 *     ndisSwitchMiniportReceiveFunction @ 0x1C00047FC (ndisSwitchMiniportReceiveFunction.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C004A588 (ndisBindUnbindPeriodicReceives.c)
 * Callees:
 *     ndisTracePeriodicRcvOnOff @ 0x1C004AF58 (ndisTracePeriodicRcvOnOff.c)
 */

void *__fastcall ndisReceiveQueueingOff(__int64 a1)
{
  void *result; // rax

  *(_DWORD *)(a1 + 3208) = 0;
  if ( BYTE2(dword_1C0085018) )
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
  --dword_1C0082D60;
  return result;
}
