/*
 * XREFs of ?ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0052020
 * Callers:
 *     <none>
 * Callees:
 *     NdisMCoSendNetBufferListsComplete @ 0x1C0010DF0 (NdisMCoSendNetBufferListsComplete.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C004D94C (ndisXlateSendNetBufferListsToPacketArray.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0052130 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 */

void __fastcall ndisCoSendNetBufferListsToNdisPacket(_QWORD *a1, struct _NET_BUFFER_LIST *a2, int a3)
{
  ULONG v3; // edi
  char v4; // r14
  char v6; // bl
  PNET_BUFFER_LIST Alignment; // rbx
  PNET_BUFFER_LIST v8; // rax
  struct _NDIS_PACKET **v9; // [rsp+20h] [rbp-E0h] BYREF
  int v10; // [rsp+28h] [rbp-D8h]
  PNET_BUFFER_LIST NetBufferLists; // [rsp+30h] [rbp-D0h]
  _NET_BUFFER *FirstNetBuffer; // [rsp+38h] [rbp-C8h]
  unsigned int v13; // [rsp+40h] [rbp-C0h]
  int v14; // [rsp+44h] [rbp-BCh]
  __int64 v15; // [rsp+48h] [rbp-B8h]
  char v16; // [rsp+50h] [rbp-B0h] BYREF

  v10 = 64;
  v9 = (struct _NDIS_PACKET **)&v16;
  v3 = 0;
  v4 = a3;
  FirstNetBuffer = a2->FirstNetBuffer;
  v15 = a1[24];
  NetBufferLists = a2;
  v13 = 0;
  v14 = a3;
  do
  {
    v6 = ndisXlateSendNetBufferListsToPacketArray((__int64 *)&v9, 0);
    if ( v13 )
      ndisCoSendPacketsToNdisPackets(a1, v9, v13);
  }
  while ( v6 );
  Alignment = NetBufferLists;
  if ( NetBufferLists )
  {
    if ( (unsigned __int8)byte_1C00895CA >= 2u )
      WPP_SF_(0x12u, &WPP_4308510b5fb5364aadc32f04d3b40dd6_Traceguids);
    if ( FirstNetBuffer != Alignment->FirstNetBuffer )
      Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
    if ( Alignment )
    {
      v8 = Alignment;
      do
      {
        v8->Status = -1073741823;
        v8 = (PNET_BUFFER_LIST)v8->Link.Alignment;
      }
      while ( v8 );
      if ( (v4 & 1) != 0 )
        v3 = 1;
      NdisMCoSendNetBufferListsComplete(a1, Alignment, v3);
    }
  }
}
