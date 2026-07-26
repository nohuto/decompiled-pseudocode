/*
 * XREFs of NdisMSendComplete @ 0x1C004E9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0016CBC (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 *     ?NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C004E7E0 (-NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ndisFreePaddedMdl @ 0x1C004F384 (ndisFreePaddedMdl.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C0050BA4 (ndisMSendCompletePacketToNetBufferLists.c)
 *     ndisMQueueWorkItem @ 0x1C005A54C (ndisMQueueWorkItem.c)
 */

void __fastcall NdisMSendComplete(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2, unsigned int a3)
{
  struct _NDIS_STACK_RESERVED *v6; // r14
  unsigned __int8 *WrapperReserved; // rax
  __int64 v8; // r8
  __int64 v9; // rbp
  unsigned __int8 **v10; // rcx
  __int64 NdisPacketOobOffset; // rax
  struct _NDIS_STACK_RESERVED *v12; // [rsp+50h] [rbp+8h] BYREF

  ++a1->cDpcSendCompletes;
  if ( (unsigned __int8)byte_1C008370A >= 4u )
    WPP_SF_qqd(0x10u, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, a1, a2, a3);
  NDIS_STACK_RESERVED_FROM_PACKET(a2, &v12);
  if ( (*(_DWORD *)v12 & 0xFFFFFF00) != 0x4D4F4300LL && (a2->Private.NdisPacketFlags & 0x10) != 0 )
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
      v6 = v12;
      a1->MiniportThread = KeGetCurrentThread();
      WrapperReserved = a2->WrapperReserved;
      a1->LockDbg = 1507840;
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
      *((_DWORD *)v6 + 2) = 0;
      if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&a2[1].Private.Pool + a2->Private.NdisPacketOobOffset) )
        ndisFreePaddedMdl(a2);
      NdisPacketOobOffset = a2->Private.NdisPacketOobOffset;
      a2->Private.NdisPacketFlags &= 0xC0u;
      if ( *(_MDL **)((char *)&a2[1].Private.Head + NdisPacketOobOffset) )
        ndisMSendCompletePacketToNetBufferLists(a1, a2, a3);
      else
        (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v9 + 112))(v9, a2, a3);
    }
  }
  if ( (unsigned __int8)byte_1C008370A >= 4u )
    WPP_SF_qq(0x11u, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, a1, a2);
}
