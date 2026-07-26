/*
 * XREFs of NdisGetNetBufferListProtocolId @ 0x1C0010E10
 * Callers:
 *     NdisCopySendNetBufferListInfo @ 0x1C0026220 (NdisCopySendNetBufferListInfo.c)
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C004D94C (ndisXlateSendNetBufferListsToPacketArray.c)
 * Callees:
 *     <none>
 */

UCHAR __stdcall NdisGetNetBufferListProtocolId(PNET_BUFFER_LIST NetBufferList)
{
  UCHAR result; // al

  result = (__int64)NetBufferList->NetBufferListInfo[7] & 0xF;
  if ( !result )
    return *((_BYTE *)NetBufferList->NdisPoolHandle + 88);
  return result;
}
