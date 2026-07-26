/*
 * XREFs of ndisMSendCompleteSG @ 0x1C0055840
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C001C7E0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     ndisMFreeSGList @ 0x1C004C610 (ndisMFreeSGList.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 *     ?NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0053230 (-NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ndisFreePaddedMdl @ 0x1C0053DD4 (ndisFreePaddedMdl.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C0055774 (ndisMSendCompletePacketToNetBufferLists.c)
 *     ndisMQueueWorkItem @ 0x1C005E968 (ndisMQueueWorkItem.c)
 */

void __fastcall ndisMSendCompleteSG(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2, unsigned int a3)
{
  struct _NDIS_STACK_RESERVED *v6; // r14
  unsigned __int8 *WrapperReserved; // rax
  __int64 v8; // r8
  __int64 v9; // rbp
  unsigned __int8 **v10; // rcx
  __int64 v11; // r8
  __int64 NdisPacketOobOffset; // rax
  struct _NDIS_STACK_RESERVED *v13; // [rsp+50h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C00895CA >= 4u )
    WPP_SF_qqd(0x24u, &WPP_98491548b3413749efaf9ab44284e0a4_Traceguids, a1, a2, a3);
  ++a1->cDpcSendCompletes;
  NDIS_STACK_RESERVED_FROM_PACKET(a2, &v13);
  if ( (*(_DWORD *)v13 & 0xFFFFFF00) != 0x4D4F4300LL && (a2->Private.NdisPacketFlags & 0x10) != 0 )
  {
    if ( !a3 )
      NDISM_SEND_PACKET_STATS(a1, a2);
    if ( (a2->Private.NdisPacketFlags & 8) != 0 )
    {
      *(unsigned int *)((char *)&a2->Private.Count + a2->Private.NdisPacketOobOffset) = a3;
      a2->Private.NdisPacketFlags &= ~8u;
    }
    else
    {
      KeAcquireSpinLockAtDpcLevel(&a1->Lock);
      v6 = v13;
      a1->MiniportThread = KeGetCurrentThread();
      WrapperReserved = a2->WrapperReserved;
      a1->LockDbg = 1509618;
      v8 = *(_QWORD *)&a2->MacReserved[16];
      v9 = *(_QWORD *)v6;
      v10 = *(unsigned __int8 ***)&a2->MacReserved[24];
      if ( *(struct _NDIS_PACKET **)(v8 + 8) != (struct _NDIS_PACKET *)&a2->MacReserved[16] || *v10 != WrapperReserved )
        __fastfail(3u);
      *v10 = (unsigned __int8 *)v8;
      *(_QWORD *)(v8 + 8) = v10;
      *(_QWORD *)&a2->MacReserved[24] = &a2->MacReserved[16];
      *(_QWORD *)WrapperReserved = WrapperReserved;
      a1->Flags |= 0x400000u;
      *(_QWORD *)v6 = 1297040177LL;
      if ( a1->FirstPendingPacket )
        ndisMQueueWorkItem(a1, 1LL);
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLockFromDpcLevel(&a1->Lock);
      if ( *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) )
        ndisMFreeSGList((__int64)a1, (__int64)a2, v11);
      *((_DWORD *)v6 + 2) = 0;
      if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&a2[1].Private.Pool + a2->Private.NdisPacketOobOffset) )
        ndisFreePaddedMdl((__int64)a2);
      NdisPacketOobOffset = a2->Private.NdisPacketOobOffset;
      a2->Private.NdisPacketFlags &= 0xC0u;
      if ( *(_MDL **)((char *)&a2[1].Private.Head + NdisPacketOobOffset) )
        ndisMSendCompletePacketToNetBufferLists((__int64)a1, a2, a3);
      else
        (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v9 + 112))(v9, a2, a3);
    }
  }
  if ( (unsigned __int8)byte_1C00895CA >= 4u )
    WPP_SF_qq(0x25u, &WPP_98491548b3413749efaf9ab44284e0a4_Traceguids, a1, a2);
}
