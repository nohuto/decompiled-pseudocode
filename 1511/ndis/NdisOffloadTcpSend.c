/*
 * XREFs of NdisOffloadTcpSend @ 0x1C0060750
 * Callers:
 *     <none>
 * Callees:
 *     ?StoreCompletionContext@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0060498 (-StoreCompletionContext@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisNumDataBytesInNblChain@@YA_KPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00604A8 (-ndisNumDataBytesInNblChain@@YA_KPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C0063588 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 */

NDIS_STATUS __stdcall NdisOffloadTcpSend(PNDIS_OFFLOAD_HANDLE NdisOffloadHandle, PNET_BUFFER_LIST NetBufferList)
{
  struct _NDIS_OPEN_BLOCK *v2; // rdi
  __int64 v5; // r8
  unsigned int DatapathEventsMask; // ebx
  unsigned int v7; // eax
  KIRQL v8; // r11
  unsigned __int64 v9; // rax
  struct NDIS_PCW_CONTEXT v11; // [rsp+20h] [rbp-28h] BYREF

  v2 = (struct _NDIS_OPEN_BLOCK *)NdisOffloadHandle->NdisReserved[0];
  v5 = *((_QWORD *)NdisOffloadHandle->NdisReserved[0] + 2);
  DatapathEventsMask = *(_DWORD *)(v5 + 48);
  v11.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v5 + 40);
  v11.CurrentCpu = -1;
  v7 = *(_DWORD *)(v5 + 80);
  v11.DatapathEventsMask = DatapathEventsMask;
  v11.DatapathCyclesMask = v7;
  if ( (DatapathEventsMask & 0x50000) != 0 )
  {
    v8 = KfRaiseIrql(2u);
    if ( (DatapathEventsMask & 0x10000) != 0 )
    {
      ndisPcwAddEvent(&v11, 0x20uLL, 1uLL);
      DatapathEventsMask = v11.DatapathEventsMask;
    }
    if ( (DatapathEventsMask & 0x40000) != 0 )
    {
      v9 = ndisNumDataBytesInNblChain(NetBufferList);
      ndisPcwAddEvent(&v11, 0x22uLL, v9);
    }
    if ( v8 != 2 )
      KeLowerIrql(v8);
  }
  StoreCompletionContext(v2, NetBufferList);
  return v2->MiniportHandle->DriverHandle->TcpOffloadSendHandler(
           v2->MiniportAdapterContext,
           NdisOffloadHandle->MiniportOffloadContext,
           NetBufferList);
}
