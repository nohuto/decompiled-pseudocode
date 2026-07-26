/*
 * XREFs of ndisMDeferredSendPackets @ 0x1C004F8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0016CBC (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ?NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C004E7E0 (-NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ndisFreePaddedMdl @ 0x1C004F384 (ndisFreePaddedMdl.c)
 *     ndisMLoopbackPacketX @ 0x1C0050A0C (ndisMLoopbackPacketX.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C0050BA4 (ndisMSendCompletePacketToNetBufferLists.c)
 */

char __fastcall ndisMDeferredSendPackets(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int MaxSendPackets; // r12d
  void (__fastcall *WSendPacketsHandler)(void *, _NDIS_PACKET **, unsigned int); // r14
  unsigned int v4; // esi
  _NDIS_PACKET **v5; // rbp
  _NDIS_PACKET *FirstPendingPacket; // rdi
  unsigned __int8 *WrapperReserved; // r14
  __int64 v8; // rax
  __int64 v9; // r9
  unsigned int Flags; // eax
  __int64 v11; // rcx
  struct _NDIS_STACK_RESERVED *v12; // r15
  unsigned __int8 **v13; // rax
  __int64 v14; // r13
  __int64 NdisPacketOobOffset; // rax
  __int64 *v16; // r12
  __int64 v17; // rbp
  __int64 v18; // rdi
  unsigned int v19; // r14d
  struct _NDIS_STACK_RESERVED *v20; // r15
  __int64 v21; // r13
  _QWORD *v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  __int64 v25; // rax
  __int64 *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  struct _NDIS_STACK_RESERVED *v30; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v31; // [rsp+28h] [rbp-D0h]
  void (__fastcall *v32)(void *, _NDIS_PACKET **, unsigned int); // [rsp+30h] [rbp-C8h]
  _QWORD v33[16]; // [rsp+40h] [rbp-B8h] BYREF

  MaxSendPackets = a1->MaxSendPackets;
  WSendPacketsHandler = a1->WSendPacketsHandler;
  v31 = MaxSendPackets;
  v32 = WSendPacketsHandler;
  if ( (unsigned __int8)byte_1C008370A >= 4u )
    WPP_SF_q(0x16u, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, (__int64)a1);
  if ( a1->PacketList.Flink == &a1->PacketList )
    a1->FirstPendingPacket = 0LL;
  if ( !a1->FirstPendingPacket )
    goto LABEL_50;
  while ( (a1->Flags & 0x400000) != 0 )
  {
    v4 = 0;
    v5 = (_NDIS_PACKET **)v33;
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
      v8 = *(_QWORD *)&FirstPendingPacket->MacReserved[16];
      if ( v8 != v9 )
        a1->FirstPendingPacket = (_NDIS_PACKET *)(v8 - 64);
      if ( ((Flags = a1->Flags, (Flags & 0x4000) != 0)
         || (Flags & 0x8800000) != 0 && SLOBYTE(FirstPendingPacket->Private.Flags) >= 0)
        && (unsigned __int8)ndisMLoopbackPacketX(a1, FirstPendingPacket) )
      {
        v11 = *(_QWORD *)WrapperReserved;
        v12 = v30;
        v13 = *(unsigned __int8 ***)&FirstPendingPacket->MacReserved[24];
        v14 = *(_QWORD *)v30;
        if ( *(unsigned __int8 **)(*(_QWORD *)WrapperReserved + 8LL) != WrapperReserved || *v13 != WrapperReserved )
          __fastfail(3u);
        *v13 = (unsigned __int8 *)v11;
        *(_QWORD *)(v11 + 8) = v13;
        *(_QWORD *)&FirstPendingPacket->MacReserved[24] = &FirstPendingPacket->MacReserved[16];
        *(_QWORD *)WrapperReserved = WrapperReserved;
        a1->Flags |= 0x400000u;
        *(_QWORD *)v12 = 1297040178LL;
        a1->MiniportThread = 0LL;
        a1->LockDbg = 0;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        *((_DWORD *)v12 + 2) = 0;
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
          (*(void (__fastcall **)(__int64, _NDIS_PACKET *))(v14 + 112))(v14, FirstPendingPacket);
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        a1->MiniportThread = KeGetCurrentThread();
        a1->LockDbg = 1508097;
      }
      else
      {
        *v5 = FirstPendingPacket;
        ++v4;
        FirstPendingPacket->Private.NdisPacketFlags |= 0x18u;
        *(unsigned int *)((char *)&FirstPendingPacket->Private.Count + FirstPendingPacket->Private.NdisPacketOobOffset) = 0;
        ++v5;
      }
    }
    while ( v4 < MaxSendPackets );
    if ( !v4 )
      break;
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    v16 = v33;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    v32(a1->MiniportAdapterContext, (_NDIS_PACKET **)v33, v4);
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    v17 = 0LL;
    a1->MiniportThread = KeGetCurrentThread();
    a1->LockDbg = 1508142;
    while ( 1 )
    {
      v18 = *v16;
      v19 = *(_DWORD *)(*(unsigned __int16 *)(*v16 + 42) + *v16 + 32);
      *(_BYTE *)(*v16 + 41) &= ~8u;
      if ( v19 != 259 )
        break;
LABEL_41:
      v17 = (unsigned int)(v17 + 1);
      ++v16;
      if ( (unsigned int)v17 >= v4 )
        goto LABEL_46;
    }
    if ( v19 != -1073741670 )
    {
      if ( !v19 )
        NDISM_SEND_PACKET_STATS(a1, (struct _NDIS_PACKET *)v18);
      NDIS_STACK_RESERVED_FROM_PACKET((struct _NDIS_PACKET *)v18, &v30);
      v20 = v30;
      v21 = *(_QWORD *)v30;
      if ( (*(_QWORD *)v30 & 0xFFFFFF00LL) != 0x4D4F4300 )
      {
        v22 = (_QWORD *)(v18 + 64);
        v23 = *(_QWORD *)(v18 + 64);
        v24 = *(_QWORD **)(v18 + 72);
        if ( *(_QWORD *)(v23 + 8) != v18 + 64 || (_QWORD *)*v24 != v22 )
          __fastfail(3u);
        *v24 = v23;
        *(_QWORD *)(v23 + 8) = v24;
        *(_QWORD *)(v18 + 72) = v18 + 64;
        *v22 = v22;
        a1->Flags |= 0x400000u;
        *(_QWORD *)v20 = 1297040179LL;
        a1->MiniportThread = 0LL;
        a1->LockDbg = 0;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        *((_DWORD *)v20 + 2) = 0;
        if ( (a1->SendFlags & 8) != 0 && *(_QWORD *)(*(unsigned __int16 *)(v18 + 42) + v18 + 128) )
          ndisFreePaddedMdl(v18);
        v25 = *(unsigned __int16 *)(v18 + 42);
        *(_BYTE *)(v18 + 41) &= 0xC0u;
        if ( *(_QWORD *)(v25 + v18 + 112) )
          ndisMSendCompletePacketToNetBufferLists(a1, v18, v19);
        else
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(v21 + 112))(v21, v18, v19);
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        a1->MiniportThread = KeGetCurrentThread();
        a1->LockDbg = 1508175;
      }
      goto LABEL_41;
    }
    a1->Flags &= ~0x400000u;
    a1->FirstPendingPacket = (_NDIS_PACKET *)v18;
    if ( (unsigned int)v17 < v4 )
    {
      v26 = &v33[v17];
      v27 = v4 - (unsigned int)v17;
      do
      {
        v28 = *v26++;
        *(_BYTE *)(v28 + 41) &= ~0x10u;
        --v27;
      }
      while ( v27 );
    }
LABEL_46:
    if ( a1->FirstPendingPacket )
    {
      MaxSendPackets = v31;
      continue;
    }
    break;
  }
LABEL_50:
  if ( (unsigned __int8)byte_1C008370A >= 4u )
    WPP_SF_q(0x17u, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, (__int64)a1);
  return 0;
}
