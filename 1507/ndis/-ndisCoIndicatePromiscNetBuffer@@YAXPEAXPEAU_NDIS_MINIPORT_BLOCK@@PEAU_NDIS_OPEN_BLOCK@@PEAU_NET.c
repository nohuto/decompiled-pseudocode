/*
 * XREFs of ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C004CB88
 * Callers:
 *     ?ndisCoSendNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C004D090 (-ndisCoSendNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C004DA60 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C004DDB0 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     ndisXlateRecvNetBufferListsToPacketArray @ 0x1C0048188 (ndisXlateRecvNetBufferListsToPacketArray.c)
 *     ndisXlateReturnPacketToNetBufferList @ 0x1C004869C (ndisXlateReturnPacketToNetBufferList.c)
 */

void __fastcall ndisCoIndicatePromiscNetBuffer(
        _QWORD *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_OPEN_BLOCK *a3,
        struct _NET_BUFFER_LIST *a4,
        unsigned int a5,
        unsigned int a6,
        char a7)
{
  __int64 v7; // rbx
  struct _NET_BUFFER_LIST *v10; // r14
  int PmodeOpens; // ecx
  unsigned int v12; // r8d
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // rdi
  struct _NET_BUFFER_LIST *Alignment; // rax
  struct _NET_BUFFER_LIST *v15; // rax
  char v16; // r15
  __int64 v17; // r12
  void *v18; // r14
  __int64 v19; // r13
  struct _NDIS_PACKET *v20; // rbx
  _NDIS_PACKET *v21; // r8
  __int64 v23; // [rsp+38h] [rbp-C8h]
  __int64 v24[6]; // [rsp+40h] [rbp-C0h] BYREF
  char v25; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v26; // [rsp+2F8h] [rbp+1F8h]

  v7 = a1[9];
  v10 = a4;
  memset(&v24[1], 0, 0x28uLL);
  PmodeOpens = a2->PmodeOpens;
  v12 = a6 | 2;
  LODWORD(v24[4]) = 0;
  v24[0] = (__int64)&v25;
  v24[3] = (__int64)v10->FirstNetBuffer;
  v23 = v7;
  v24[1] = 0xC000009A00000040uLL;
  v24[2] = (__int64)v10;
  v24[5] = (__int64)a2;
  v26 = a6 | 2;
  if ( PmodeOpens && a3 )
  {
    do
    {
      if ( a7 )
        FilterNextOpen = a3->FilterNextOpen;
      else
        FilterNextOpen = a3->MiniportNextOpen;
      if ( (a3->OpenFlags & 4) != 0 )
      {
        *((_BYTE *)a3->ReceivedAPacketSlot + (KeGetPcr()->Prcb.Number << 12)) = 1;
        if ( a3->ProtocolHandle->MajorNdisVersion < 6u )
        {
          do
          {
            v16 = ndisXlateRecvNetBufferListsToPacketArray(v24);
            if ( LODWORD(v24[4]) )
            {
              v17 = v24[0];
              v18 = (void *)(v7 + 136);
              v19 = LODWORD(v24[4]);
              do
              {
                v20 = *(struct _NDIS_PACKET **)v17;
                v21 = *(_NDIS_PACKET **)v17;
                *(_DWORD *)(*(_QWORD *)v17 + 36LL) |= 0x100u;
                a3->ProtocolHandle->CoReceivePacketHandler(a3->ProtocolBindingContext, v18, v21);
                ndisXlateReturnPacketToNetBufferList(v20);
                v17 += 8LL;
                --v19;
              }
              while ( v19 );
              v7 = v23;
            }
          }
          while ( v16 );
          v10 = a4;
        }
        else
        {
          Alignment = v10;
          do
          {
            Alignment->Flags |= 0x80u;
            Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          }
          while ( Alignment );
          v10->NblFlags |= 0x8000u;
          a3->ProtocolHandle->CoReceiveNetBufferListsHandler(
            a3->ProtocolBindingContext,
            (void *)(v7 + 136),
            v10,
            a5,
            v12);
          v15 = v10;
          do
          {
            v15->Flags &= ~0x80u;
            v15 = (struct _NET_BUFFER_LIST *)v15->Link.Alignment;
          }
          while ( v15 );
          v10->NblFlags &= ~0x8000u;
        }
        v12 = v26;
      }
      a3 = FilterNextOpen;
    }
    while ( FilterNextOpen );
  }
}
