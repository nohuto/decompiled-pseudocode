/*
 * XREFs of ndisPeriodicReceivesGetMaxNblCount @ 0x1C00670B4
 * Callers:
 *     ndisMIndicateReceiveNblsWithThrottling @ 0x1C00266C0 (ndisMIndicateReceiveNblsWithThrottling.c)
 *     ?ndisGetMiniportIndicateList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0065A5C (-ndisGetMiniportIndicateList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisPeriodicReceivesGetMaxNblCount(__int64 a1)
{
  __int64 result; // rax

  if ( !HIBYTE(WPP_MAIN_CB.DeviceQueue.Type) )
    return 0xFFFFFFFFLL;
  if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
    return *(unsigned int *)(&WPP_MAIN_CB.DeviceQueue.Size + 1);
  result = (unsigned int)ndisPeriodicReceivesNblCounts[*(unsigned int *)(*(_QWORD *)(a1 + 3344)
                                                                       + (KeGetPcr()->Prcb.Number << 12))];
  if ( *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) < (unsigned int)result )
    return *(unsigned int *)(&WPP_MAIN_CB.DeviceQueue.Size + 1);
  return result;
}
