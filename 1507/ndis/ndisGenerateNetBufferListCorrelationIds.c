/*
 * XREFs of ndisGenerateNetBufferListCorrelationIds @ 0x1C0047FB0
 * Callers:
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C00024B0 (NdisMIndicateReceiveNetBufferLists.c)
 *     NdisAllocateNetBufferList @ 0x1C0009B90 (NdisAllocateNetBufferList.c)
 *     NdisAllocateCloneNetBufferList @ 0x1C000AEA0 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C000B7E0 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x1C000CFC0 (NdisFIndicateReceiveNetBufferLists.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C0020B60 (NdisAllocateFragmentNetBufferList.c)
 *     NdisCopyReceiveNetBufferListInfo @ 0x1C0047680 (NdisCopyReceiveNetBufferListInfo.c)
 *     NdisCopySendNetBufferListInfo @ 0x1C0047850 (NdisCopySendNetBufferListInfo.c)
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C0048330 (ndisXlateRecvPacketArrayToNetBufferLists.c)
 * Callees:
 *     ?NetTrcIsNetBufferListCorrelationIdValid@@YAEPEAU_NET_BUFFER_LIST@@@Z @ 0x1C004708C (-NetTrcIsNetBufferListCorrelationIdValid@@YAEPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisGenerateCorrelationIds @ 0x1C0047F70 (ndisGenerateCorrelationIds.c)
 */

char __fastcall ndisGenerateNetBufferListCorrelationIds(struct _NET_BUFFER_LIST *a1)
{
  unsigned int CorrelationIds; // eax
  unsigned int v2; // r8d
  struct _NET_BUFFER_LIST **v3; // r10
  struct _NET_BUFFER_LIST *v4; // r10
  __int64 v5; // r10
  unsigned int v6; // r11d
  struct _NET_BUFFER_LIST *i; // r11
  __int64 v8; // r11

  LOBYTE(CorrelationIds) = NetTrcIsNetBufferListCorrelationIdValid(a1);
  if ( (_BYTE)CorrelationIds )
  {
    for ( i = *v3; i; i = *(struct _NET_BUFFER_LIST **)v8 )
    {
      LOBYTE(CorrelationIds) = NetTrcIsNetBufferListCorrelationIdValid(i);
      if ( !(_BYTE)CorrelationIds )
      {
        CorrelationIds = ndisGenerateCorrelationIds(1u);
        *(_QWORD *)(v8 + 248) = CorrelationIds;
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
