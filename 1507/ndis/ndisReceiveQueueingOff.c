/*
 * XREFs of ndisReceiveQueueingOff @ 0x1C004A3E4
 * Callers:
 *     ndisSwitchMiniportReceiveFunction @ 0x1C00014E4 (ndisSwitchMiniportReceiveFunction.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C0049CE8 (ndisBindUnbindPeriodicReceives.c)
 * Callees:
 *     ndisTracePeriodicRcvOnOff @ 0x1C004A6B8 (ndisTracePeriodicRcvOnOff.c)
 */

void (__fastcall *__fastcall ndisReceiveQueueingOff(
        __int64 a1))(struct _NDIS_FILTER_BLOCK *a1, struct _NET_BUFFER_LIST *a2, unsigned int a3, unsigned int a4, int NewIrql)
{
  void (__fastcall *result)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, int); // rax

  *(_DWORD *)(a1 + 3208) = 0;
  if ( BYTE2(dword_1C00870D8) )
    ndisTracePeriodicRcvOnOff(a1, 0LL, 0LL, 0LL);
  if ( *(_BYTE *)(a1 + 1995) )
  {
    *(_BYTE *)(a1 + 2673) = 0;
    result = ndisMDispatchReceiveNetBufferListsWithLock;
  }
  else
  {
    *(_BYTE *)(a1 + 2673) = 1;
    result = (void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, int))ndisMDispatchReceiveNetBufferLists;
  }
  *(_QWORD *)(a1 + 2152) = result;
  *(_QWORD *)(a1 + 2144) = result;
  --dword_1C0084D60;
  return result;
}
