/*
 * XREFs of ndisFLoopbackNetBufferLists @ 0x1C00268AC
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C0004690 (NdisSendNetBufferLists.c)
 *     ndisFilterSendNetBufferLists @ 0x1C000D780 (ndisFilterSendNetBufferLists.c)
 *     NdisFSendNetBufferLists @ 0x1C000DFF0 (NdisFSendNetBufferLists.c)
 *     ndisSendNBLToFilter @ 0x1C0058FE0 (ndisSendNBLToFilter.c)
 * Callees:
 *     NdisFSendNetBufferListsComplete @ 0x1C000D870 (NdisFSendNetBufferListsComplete.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     ndisFDoLoopbackNetBufferList @ 0x1C0058484 (ndisFDoLoopbackNetBufferList.c)
 *     ndisFIsLoopbackNetBuffer @ 0x1C00589C4 (ndisFIsLoopbackNetBuffer.c)
 */

_QWORD *__fastcall ndisFLoopbackNetBufferLists(
        struct _LOCK_STATE_EX *NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  PNET_BUFFER_LIST v7; // rbx
  struct _NET_BUFFER_LIST *Alignment; // rsi
  $9AA51D7C58828BF91589D7C4AE47BC25 *FirstNetBuffer; // rdi
  _QWORD *result; // rax
  unsigned __int64 v11; // [rsp+38h] [rbp-40h]

  if ( (unsigned __int8)byte_1C00895CA >= 4u )
    WPP_SF_qq(100LL, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, NdisFilterHandle, NetBufferList);
  v7 = NetBufferList;
  do
  {
    Alignment = (struct _NET_BUFFER_LIST *)v7->Link.Alignment;
    v11 = v7->Link.Alignment;
    if ( (v7->Flags & 0x800) == 0 )
    {
      FirstNetBuffer = ($9AA51D7C58828BF91589D7C4AE47BC25 *)v7->FirstNetBuffer;
      do
      {
        ndisFIsLoopbackNetBuffer(NdisFilterHandle);
        FirstNetBuffer = ($9AA51D7C58828BF91589D7C4AE47BC25 *)FirstNetBuffer->Link.Alignment;
      }
      while ( FirstNetBuffer );
      Alignment = (struct _NET_BUFFER_LIST *)v11;
    }
    v7 = Alignment;
  }
  while ( Alignment );
  result = a5;
  *a5 = NetBufferList;
  if ( (unsigned __int8)byte_1C00895CA >= 4u )
    return (_QWORD *)WPP_SF_qq(101LL, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, NdisFilterHandle, NetBufferList);
  return result;
}
