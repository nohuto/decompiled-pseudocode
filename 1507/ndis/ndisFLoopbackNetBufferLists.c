/*
 * XREFs of ndisFLoopbackNetBufferLists @ 0x1C0053DFC
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C00016E0 (NdisSendNetBufferLists.c)
 *     ndisFilterSendNetBufferLists @ 0x1C000BFC0 (ndisFilterSendNetBufferLists.c)
 *     ndisSendNBLToFilter @ 0x1C0054880 (ndisSendNBLToFilter.c)
 * Callees:
 *     NdisFSendNetBufferListsComplete @ 0x1C000ABD0 (NdisFSendNetBufferListsComplete.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     ndisFDoLoopbackNetBufferList @ 0x1C0053664 (ndisFDoLoopbackNetBufferList.c)
 *     ndisFIsLoopbackNetBuffer @ 0x1C0053BA4 (ndisFIsLoopbackNetBuffer.c)
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
  $C499D399BBA72F2528A00A318724AE5E *FirstNetBuffer; // rdi
  char v14; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int8 v15[7]; // [rsp+31h] [rbp-47h] BYREF
  struct _NET_BUFFER_LIST *v16; // [rsp+38h] [rbp-40h]

  v14 = 0;
  v6 = 0LL;
  v7 = 0;
  if ( (unsigned __int8)byte_1C008530A >= 4u )
    WPP_SF_qq(0x64u, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, NdisFilterHandle, NetBufferList);
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
    FirstNetBuffer = ($C499D399BBA72F2528A00A318724AE5E *)v9->FirstNetBuffer;
    do
    {
      ndisFIsLoopbackNetBuffer(NdisFilterHandle, (__int64)FirstNetBuffer, (__int64)v9, &v14, v15);
      if ( v14 == 1 )
      {
        v14 = 0;
        ndisFDoLoopbackNetBufferList((__int64)NdisFilterHandle, (__int64)FirstNetBuffer, (__int64)v9, a3, a4);
      }
      FirstNetBuffer = ($C499D399BBA72F2528A00A318724AE5E *)FirstNetBuffer->Link.Alignment;
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
  if ( (unsigned __int8)byte_1C008530A >= 4u )
    WPP_SF_qq(0x65u, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, NdisFilterHandle, NetBufferList);
}
