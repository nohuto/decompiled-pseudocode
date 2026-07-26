/*
 * XREFs of ndisMDeferredSendPackets @ 0x1C0054330
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C001C7E0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ?NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0053230 (-NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ndisFreePaddedMdl @ 0x1C0053DD4 (ndisFreePaddedMdl.c)
 *     ndisMLoopbackPacketX @ 0x1C00555D0 (ndisMLoopbackPacketX.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C0055774 (ndisMSendCompletePacketToNetBufferLists.c)
 */

char __fastcall ndisMDeferredSendPackets(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int MaxSendPackets; // r12d
  unsigned int v3; // esi
  _NDIS_PACKET **v4; // rbp
  _NDIS_PACKET *FirstPendingPacket; // rdi
  unsigned __int8 *WrapperReserved; // r14
  __int64 v7; // rax
  __int64 v8; // r9
  unsigned int Flags; // eax
  __int64 v10; // rcx
  struct _NDIS_STACK_RESERVED *v11; // r15
  unsigned __int8 **v12; // rax
  __int64 v13; // r13
  __int64 NdisPacketOobOffset; // rax
  __int64 *v15; // r12
  __int64 v16; // rbp
  __int64 v17; // rdi
  unsigned int v18; // r14d
  struct _NDIS_STACK_RESERVED *v19; // r15
  __int64 v20; // r13
  _QWORD *v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  __int64 v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned int v29; // [rsp+20h] [rbp-D8h]
  struct _NDIS_STACK_RESERVED *v30; // [rsp+28h] [rbp-D0h] BYREF
  void (__fastcall *WSendPacketsHandler)(void *, _NDIS_PACKET **, unsigned int); // [rsp+30h] [rbp-C8h]
  _QWORD v32[16]; // [rsp+40h] [rbp-B8h] BYREF

  MaxSendPackets = a1->MaxSendPackets;
  v29 = MaxSendPackets;
  WSendPacketsHandler = a1->WSendPacketsHandler;
  if ( (unsigned __int8)byte_1C00895CA >= 4u )
    WPP_SF_q(0x16u, &WPP_98491548b3413749efaf9ab44284e0a4_Traceguids, (__int64)a1);
  if ( a1->PacketList.Flink == &a1->PacketList )
    a1->FirstPendingPacket = 0LL;
  if ( !a1->FirstPendingPacket )
    goto LABEL_50;
  while ( (a1->Flags & 0x400000) != 0 )
  {
    v3 = 0;
    v4 = (_NDIS_PACKET **)v32;
    if ( !MaxSendPackets )
      break;
    do
    {
      FirstPendingPacket = a1->FirstPendingPacket;
      if ( !FirstPendingPacket )
        break;
      NDIS_STACK_RESERVED_FROM_PACKET(a1->FirstPendingPacket, &v30);
      a1->FirstPendingPacket = 0LL;
      WrapperReserved = FirstPendingPacket->WrapperReserved;
      v7 = *(_QWORD *)&FirstPendingPacket->MacReserved[16];
      if ( v7 != v8 )
        a1->FirstPendingPacket = (_NDIS_PACKET *)(v7 - 64);
      if ( ((Flags = a1->Flags, (Flags & 0x4000) != 0)
         || (Flags & 0x8800000) != 0 && SLOBYTE(FirstPendingPacket->Private.Flags) >= 0)
        && (unsigned __int8)ndisMLoopbackPacketX(a1, FirstPendingPacket) )
      {
        v10 = *(_QWORD *)WrapperReserved;
        v11 = v30;
        v12 = *(unsigned __int8 ***)&FirstPendingPacket->MacReserved[24];
        v13 = *(_QWORD *)v30;
        if ( *(unsigned __int8 **)(*(_QWORD *)WrapperReserved + 8LL) != WrapperReserved || *v12 != WrapperReserved )
          __fastfail(3u);
        *v12 = (unsigned __int8 *)v10;
        *(_QWORD *)(v10 + 8) = v12;
        *(_QWORD *)&FirstPendingPacket->MacReserved[24] = &FirstPendingPacket->MacReserved[16];
        *(_QWORD *)WrapperReserved = WrapperReserved;
        a1->Flags |= 0x400000u;
        *(_QWORD *)v11 = 1297040178LL;
        a1->MiniportThread = 0LL;
        a1->LockDbg = 0;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        *((_DWORD *)v11 + 2) = 0;
        if ( (a1->SendFlags & 8) != 0
          && *(void **)((char *)&FirstPendingPacket[1].Private.Pool + FirstPendingPacket->Private.NdisPacketOobOffset) )
        {
          ndisFreePaddedMdl((__int64)FirstPendingPacket);
        }
        NdisPacketOobOffset = FirstPendingPacket->Private.NdisPacketOobOffset;
        FirstPendingPacket->Private.NdisPacketFlags &= 0xC0u;
        if ( *(_MDL **)((char *)&FirstPendingPacket[1].Private.Head + NdisPacketOobOffset) )
          ndisMSendCompletePacketToNetBufferLists(a1, FirstPendingPacket, 0LL);
        else
          (*(void (__fastcall **)(__int64, _NDIS_PACKET *))(v13 + 112))(v13, FirstPendingPacket);
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        a1->MiniportThread = KeGetCurrentThread();
        a1->LockDbg = 1508097;
      }
      else
      {
        *v4 = FirstPendingPacket;
        ++v3;
        FirstPendingPacket->Private.NdisPacketFlags |= 0x18u;
        *(unsigned int *)((char *)&FirstPendingPacket->Private.Count + FirstPendingPacket->Private.NdisPacketOobOffset) = 0;
        ++v4;
      }
    }
    while ( v3 < MaxSendPackets );
    if ( !v3 )
      break;
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    v15 = v32;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    WSendPacketsHandler(a1->MiniportAdapterContext, (_NDIS_PACKET **)v32, v3);
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    v16 = 0LL;
    a1->MiniportThread = KeGetCurrentThread();
    a1->LockDbg = 1508142;
    while ( 1 )
    {
      v17 = *v15;
      v18 = *(_DWORD *)(*(unsigned __int16 *)(*v15 + 42) + *v15 + 32);
      *(_BYTE *)(*v15 + 41) &= ~8u;
      if ( v18 != 259 )
        break;
LABEL_41:
      v16 = (unsigned int)(v16 + 1);
      ++v15;
      if ( (unsigned int)v16 >= v3 )
        goto LABEL_46;
    }
    if ( v18 != -1073741670 )
    {
      if ( !v18 )
        NDISM_SEND_PACKET_STATS(a1, (struct _NDIS_PACKET *)v17);
      NDIS_STACK_RESERVED_FROM_PACKET((struct _NDIS_PACKET *)v17, &v30);
      v19 = v30;
      v20 = *(_QWORD *)v30;
      if ( (*(_QWORD *)v30 & 0xFFFFFF00LL) != 0x4D4F4300 )
      {
        v21 = (_QWORD *)(v17 + 64);
        v22 = *(_QWORD *)(v17 + 64);
        v23 = *(_QWORD **)(v17 + 72);
        if ( *(_QWORD *)(v22 + 8) != v17 + 64 || (_QWORD *)*v23 != v21 )
          __fastfail(3u);
        *v23 = v22;
        *(_QWORD *)(v22 + 8) = v23;
        *(_QWORD *)(v17 + 72) = v17 + 64;
        *v21 = v21;
        a1->Flags |= 0x400000u;
        *(_QWORD *)v19 = 1297040179LL;
        a1->MiniportThread = 0LL;
        a1->LockDbg = 0;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        *((_DWORD *)v19 + 2) = 0;
        if ( (a1->SendFlags & 8) != 0 && *(_QWORD *)(*(unsigned __int16 *)(v17 + 42) + v17 + 128) )
          ndisFreePaddedMdl(v17);
        v24 = *(unsigned __int16 *)(v17 + 42);
        *(_BYTE *)(v17 + 41) &= 0xC0u;
        if ( *(_QWORD *)(v24 + v17 + 112) )
          ndisMSendCompletePacketToNetBufferLists(a1, v17, v18);
        else
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(v20 + 112))(v20, v17, v18);
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        a1->MiniportThread = KeGetCurrentThread();
        a1->LockDbg = 1508175;
      }
      goto LABEL_41;
    }
    a1->Flags &= ~0x400000u;
    a1->FirstPendingPacket = (_NDIS_PACKET *)v17;
    if ( (unsigned int)v16 < v3 )
    {
      v25 = &v32[v16];
      v26 = v3 - (unsigned int)v16;
      do
      {
        v27 = *v25++;
        *(_BYTE *)(v27 + 41) &= ~0x10u;
        --v26;
      }
      while ( v26 );
    }
LABEL_46:
    if ( a1->FirstPendingPacket )
    {
      MaxSendPackets = v29;
      continue;
    }
    break;
  }
LABEL_50:
  if ( (unsigned __int8)byte_1C00895CA >= 4u )
    WPP_SF_q(0x17u, &WPP_98491548b3413749efaf9ab44284e0a4_Traceguids, (__int64)a1);
  return 0;
}
