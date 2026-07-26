/*
 * XREFs of ?ndisNumDataBytesInNblChain@@YA_KPEAU_NET_BUFFER_LIST@@@Z @ 0x1C0060CE8
 * Callers:
 *     ?NdisMTcpOffloadReceiveIndicate@@YAHPEAXPEAU_NET_BUFFER_LIST@@HPEAK@Z @ 0x1C0060BE0 (-NdisMTcpOffloadReceiveIndicate@@YAHPEAXPEAU_NET_BUFFER_LIST@@HPEAK@Z.c)
 *     NdisOffloadTcpSend @ 0x1C0060F90 (NdisOffloadTcpSend.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ndisNumDataBytesInNblChain(struct _NET_BUFFER_LIST *a1)
{
  unsigned __int64 result; // rax
  struct _NET_BUFFER_LIST *i; // rdx
  _NET_BUFFER *FirstNetBuffer; // r8
  __int64 v4; // r9
  __int64 DataLength; // rcx

  result = 0LL;
  for ( i = a1; i; result += v4 )
  {
    FirstNetBuffer = i->FirstNetBuffer;
    v4 = 0LL;
    while ( FirstNetBuffer )
    {
      DataLength = FirstNetBuffer->DataLength;
      FirstNetBuffer = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
      v4 += DataLength;
    }
    i = (struct _NET_BUFFER_LIST *)i->Link.Alignment;
  }
  return result;
}
