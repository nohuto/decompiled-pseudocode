/*
 * XREFs of ?ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C004D5C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C0049378 (ndisXlateSendNetBufferListsToPacketArray.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C004D6E0 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 */

void __fastcall ndisCoSendNetBufferListsToNdisPacket(_QWORD *a1, struct _NET_BUFFER_LIST *a2, int a3)
{
  unsigned int v3; // edi
  char v4; // r14
  char v6; // bl
  _SLIST_HEADER *Alignment; // rbx
  _SLIST_HEADER *v8; // rax
  struct _NDIS_PACKET **v9; // [rsp+20h] [rbp-E0h] BYREF
  int v10; // [rsp+28h] [rbp-D8h]
  struct _NET_BUFFER_LIST *v11; // [rsp+30h] [rbp-D0h]
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
  v11 = a2;
  v13 = 0;
  v14 = a3;
  do
  {
    v6 = ndisXlateSendNetBufferListsToPacketArray((__int64 *)&v9, 0);
    if ( v13 )
      ndisCoSendPacketsToNdisPackets(a1, v9, v13);
  }
  while ( v6 );
  Alignment = (_SLIST_HEADER *)v11;
  if ( v11 )
  {
    if ( (unsigned __int8)byte_1C008370A >= 2u )
      WPP_SF_(0x12u, &WPP_8f35a3663126a6381ade30b0d8399dbd_Traceguids);
    if ( FirstNetBuffer != (_NET_BUFFER *)Alignment->Region )
      Alignment = (_SLIST_HEADER *)Alignment->Alignment;
    if ( Alignment )
    {
      v8 = Alignment;
      do
      {
        *((_DWORD *)&v8[8].HeaderX64 + 3) = -1073741823;
        v8 = (_SLIST_HEADER *)v8->Alignment;
      }
      while ( v8 );
      if ( (v4 & 1) != 0 )
        v3 = 1;
      ((void (__fastcall *)(_QWORD *, _SLIST_HEADER *, _QWORD))a1[32])(a1, Alignment, v3);
    }
  }
}
