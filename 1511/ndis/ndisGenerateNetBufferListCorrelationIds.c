/*
 * XREFs of ndisGenerateNetBufferListCorrelationIds @ 0x1C0011BA0
 * Callers:
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C00039D0 (NdisMIndicateReceiveNetBufferLists.c)
 *     NdisAllocateCloneNetBufferList @ 0x1C000BDF0 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C000C460 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisAllocateNetBufferList @ 0x1C000C9D0 (NdisAllocateNetBufferList.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x1C000F0A0 (NdisFIndicateReceiveNetBufferLists.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C0014630 (NdisAllocateFragmentNetBufferList.c)
 *     NdisCopyReceiveNetBufferListInfo @ 0x1C0025C20 (NdisCopyReceiveNetBufferListInfo.c)
 *     NdisCopySendNetBufferListInfo @ 0x1C0025E90 (NdisCopySendNetBufferListInfo.c)
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C0048DF8 (ndisXlateRecvPacketArrayToNetBufferLists.c)
 * Callees:
 *     ?NetTrcIsNetBufferListCorrelationIdValid@@YAEPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00483AC (-NetTrcIsNetBufferListCorrelationIdValid@@YAEPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisGenerateCorrelationIds @ 0x1C0048AB4 (ndisGenerateCorrelationIds.c)
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
        CorrelationIds = ndisGenerateCorrelationIds(1LL);
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
