/*
 * XREFs of NdisGetNetBufferListProtocolId @ 0x1C0047BE0
 * Callers:
 *     NdisCopySendNetBufferListInfo @ 0x1C0047850 (NdisCopySendNetBufferListInfo.c)
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C00488B0 (ndisXlateSendNetBufferListsToPacketArray.c)
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
