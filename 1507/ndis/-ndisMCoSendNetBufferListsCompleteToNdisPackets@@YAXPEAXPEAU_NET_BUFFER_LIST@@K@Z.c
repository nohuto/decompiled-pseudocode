/*
 * XREFs of ?ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C004E060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     ndisXlateSendCompleteNetBufferListToPacket @ 0x1C004872C (ndisXlateSendCompleteNetBufferListToPacket.c)
 *     WPP_SF_Lqq @ 0x1C004E1F0 (WPP_SF_Lqq.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0057DD0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 */

void __fastcall ndisMCoSendNetBufferListsCompleteToNdisPackets(_QWORD *a1, struct _NET_BUFFER_LIST *a2)
{
  __int64 v2; // r14
  unsigned int v3; // ebp
  struct _NET_BUFFER_LIST *v6; // rcx
  struct _NET_BUFFER_LIST *Alignment; // rbx
  unsigned int v8; // [rsp+60h] [rbp+8h] BYREF
  struct _NDIS_PACKET *v9; // [rsp+68h] [rbp+10h] BYREF
  struct _NDIS_STACK_RESERVED *v10; // [rsp+78h] [rbp+20h] BYREF

  v2 = a1[9];
  v3 = 0;
  v8 = 0;
  if ( (unsigned __int8)byte_1C008530A >= 4u )
    WPP_SF_Lqq(19LL, a2, 0LL, a1, a2);
  v6 = a2;
  if ( a2 )
  {
    do
    {
      Alignment = (struct _NET_BUFFER_LIST *)v6->Link.Alignment;
      ndisXlateSendCompleteNetBufferListToPacket(v6, (__int64 *)&v9, (int *)&v8);
      NDIS_STACK_RESERVED_FROM_PACKET(v9, &v10);
      v3 = v8;
      *((_DWORD *)v10 + 2) = 0;
      --*(_DWORD *)&v9[-1].ProtocolReserved[4];
      (*(void (__fastcall **)(_QWORD, _QWORD, struct _NDIS_PACKET *))(v2 + 48))(v3, *(_QWORD *)(v2 + 24), v9);
      v6 = Alignment;
    }
    while ( Alignment );
  }
  if ( (unsigned __int8)byte_1C008530A >= 4u )
    WPP_SF_Lqq(20LL, a2, v3, a1, a2);
}
