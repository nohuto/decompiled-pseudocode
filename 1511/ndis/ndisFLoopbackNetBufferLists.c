/*
 * XREFs of ndisFLoopbackNetBufferLists @ 0x1C00541EC
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C000B5B0 (NdisSendNetBufferLists.c)
 *     ndisFilterSendNetBufferLists @ 0x1C000DD70 (ndisFilterSendNetBufferLists.c)
 *     ndisSendNBLToFilter @ 0x1C0054960 (ndisSendNBLToFilter.c)
 * Callees:
 *     NdisFSendNetBufferListsComplete @ 0x1C000DE60 (NdisFSendNetBufferListsComplete.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     ndisFDoLoopbackNetBufferList @ 0x1C0053A54 (ndisFDoLoopbackNetBufferList.c)
 *     ndisFIsLoopbackNetBuffer @ 0x1C0053F94 (ndisFIsLoopbackNetBuffer.c)
 */

void __fastcall ndisFLoopbackNetBufferLists(
        struct _LOCK_STATE_EX *NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        unsigned int a3,
        char a4,
        PNET_BUFFER_LIST *a5)
{
  _SLIST_HEADER *v6; // r13
  ULONG v7; // r12d
  PNET_BUFFER_LIST v9; // rbx
  PNET_BUFFER_LIST v10; // r15
  bool v11; // zf
  struct _NET_BUFFER_LIST *Alignment; // rsi
  $AB958A78F4F289CAB9C75B711BD3874F *FirstNetBuffer; // rdi
  char v14; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int8 v15[7]; // [rsp+31h] [rbp-47h] BYREF
  struct _NET_BUFFER_LIST *v16; // [rsp+38h] [rbp-40h]

  v14 = 0;
  v6 = 0LL;
  v7 = 0;
  if ( (unsigned __int8)byte_1C008370A >= 4u )
    WPP_SF_qq(0x64u, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, NdisFilterHandle, NetBufferList);
  v9 = NetBufferList;
  v14 = 0;
  v10 = NetBufferList;
  v15[0] = 0;
  do
  {
    v11 = (v9->Flags & 0x800) == 0;
    Alignment = (struct _NET_BUFFER_LIST *)v9->Link.Alignment;
    v16 = (struct _NET_BUFFER_LIST *)v9->Link.Alignment;
    if ( !v11 )
    {
      v15[0] = 0;
LABEL_17:
      v6 = (_SLIST_HEADER *)v9;
      goto LABEL_18;
    }
    FirstNetBuffer = ($AB958A78F4F289CAB9C75B711BD3874F *)v9->FirstNetBuffer;
    do
    {
      ndisFIsLoopbackNetBuffer(NdisFilterHandle, (__int64)FirstNetBuffer, (__int64)v9, &v14, v15);
      if ( v14 == 1 )
      {
        v14 = 0;
        ndisFDoLoopbackNetBufferList((__int64)NdisFilterHandle, (__int64)FirstNetBuffer, (__int64)v9, a3, a4);
      }
      FirstNetBuffer = ($AB958A78F4F289CAB9C75B711BD3874F *)FirstNetBuffer->Link.Alignment;
    }
    while ( FirstNetBuffer );
    Alignment = v16;
    if ( v15[0] != 1 )
      goto LABEL_17;
    v15[0] = 0;
    if ( v10 == v9 )
      v10 = v16;
    else
      v6->Alignment = (unsigned __int64)v16;
    v9->Link.Alignment = 0LL;
    v9->Status = 0;
    if ( (a4 & 1) != 0 )
      v7 |= 1u;
    NdisFSendNetBufferListsComplete(NdisFilterHandle, v9, v7);
LABEL_18:
    v9 = Alignment;
  }
  while ( Alignment );
  *a5 = v10;
  if ( (unsigned __int8)byte_1C008370A >= 4u )
    WPP_SF_qq(0x65u, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, NdisFilterHandle, NetBufferList);
}
