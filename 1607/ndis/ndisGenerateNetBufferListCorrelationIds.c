/*
 * XREFs of ndisGenerateNetBufferListCorrelationIds @ 0x1C0010AE4
 * Callers:
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C00025B0 (NdisMIndicateReceiveNetBufferLists.c)
 *     NdisAllocateCloneNetBufferList @ 0x1C0005360 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0005D40 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisAllocateNetBufferList @ 0x1C0006050 (NdisAllocateNetBufferList.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x1C000E6D0 (NdisFIndicateReceiveNetBufferLists.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C00206A0 (NdisAllocateFragmentNetBufferList.c)
 *     NdisCopyReceiveNetBufferListInfo @ 0x1C0026030 (NdisCopyReceiveNetBufferListInfo.c)
 *     NdisCopySendNetBufferListInfo @ 0x1C0026220 (NdisCopySendNetBufferListInfo.c)
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C004D3CC (ndisXlateRecvPacketArrayToNetBufferLists.c)
 * Callees:
 *     ?NetTrcIsNetBufferListCorrelationIdValid@@YAEPEAU_NET_BUFFER_LIST@@@Z @ 0x1C004C99C (-NetTrcIsNetBufferListCorrelationIdValid@@YAEPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisGenerateCorrelationIds @ 0x1C004D0A4 (ndisGenerateCorrelationIds.c)
 */

char __fastcall ndisGenerateNetBufferListCorrelationIds(struct _NET_BUFFER_LIST *a1)
{
  unsigned int CorrelationIds; // eax
  unsigned int v2; // r8d
  struct _NET_BUFFER_LIST **v3; // r10
  struct _NET_BUFFER_LIST *v4; // r10
  __int64 v5; // r10
  unsigned int v6; // r11d
  __int64 v7; // r11
  struct _NET_BUFFER_LIST *i; // r11

  LOBYTE(CorrelationIds) = NetTrcIsNetBufferListCorrelationIdValid(a1);
  if ( (_BYTE)CorrelationIds )
  {
    for ( i = *v3; i; i = *(struct _NET_BUFFER_LIST **)v7 )
    {
      LOBYTE(CorrelationIds) = NetTrcIsNetBufferListCorrelationIdValid(i);
      if ( !(_BYTE)CorrelationIds )
      {
        CorrelationIds = ndisGenerateCorrelationIds(1LL);
        *(_QWORD *)(v7 + 248) = CorrelationIds;
      }
    }
  }
  else
  {
    for ( LOBYTE(CorrelationIds) = ndisGenerateCorrelationIds(v2); v4; v4 = *(struct _NET_BUFFER_LIST **)v5 )
    {
      LOBYTE(CorrelationIds) = NetTrcIsNetBufferListCorrelationIdValid(v4);
      if ( !(_BYTE)CorrelationIds )
      {
        LOBYTE(CorrelationIds) = v6;
        *(_QWORD *)(v5 + 248) = v6;
      }
    }
  }
  return CorrelationIds;
}
