/*
 * XREFs of ndisMSendCompleteX @ 0x1C0055A20
 * Callers:
 *     ndisMSendPacketsXToMiniport @ 0x1C0025910 (ndisMSendPacketsXToMiniport.c)
 *     ndisMAllocSGList @ 0x1C004BD20 (ndisMAllocSGList.c)
 *     ndisMProcessSGList @ 0x1C004C720 (ndisMProcessSGList.c)
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C001C7E0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     ndisMFreeSGList @ 0x1C004C610 (ndisMFreeSGList.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 *     ?NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0053230 (-NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ndisFreePaddedMdl @ 0x1C0053DD4 (ndisFreePaddedMdl.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C0055774 (ndisMSendCompletePacketToNetBufferLists.c)
 */

void __fastcall ndisMSendCompleteX(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2, unsigned int a3)
{
  KIRQL v6; // bp
  __int64 v7; // r8
  __int64 v8; // r14
  struct _NDIS_STACK_RESERVED *v9; // [rsp+50h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C00895CA >= 4u )
    WPP_SF_qqd(0x12u, &WPP_98491548b3413749efaf9ab44284e0a4_Traceguids, a1, a2, a3);
  ++a1->cDpcSendCompletes;
  v6 = KfRaiseIrql(2u);
  if ( (a1->Flags & 0x40) != 0 && *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) )
    ndisMFreeSGList((__int64)a1, (__int64)a2, v7);
  if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&a2[1].Private.Pool + a2->Private.NdisPacketOobOffset) )
    ndisFreePaddedMdl((__int64)a2);
  NDIS_STACK_RESERVED_FROM_PACKET(a2, &v9);
  v8 = *(_QWORD *)v9;
  *(_QWORD *)v9 = 1297040182LL;
  a2->Private.NdisPacketFlags &= 0xC0u;
  if ( !a3 )
    NDISM_SEND_PACKET_STATS(a1, a2);
  if ( *(_MDL **)((char *)&a2[1].Private.Head + a2->Private.NdisPacketOobOffset) )
    ndisMSendCompletePacketToNetBufferLists((__int64)a1, a2, a3);
  else
    (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v8 + 112))(v8, a2, a3);
  if ( v6 != 2 )
    KeLowerIrql(v6);
  if ( (unsigned __int8)byte_1C00895CA >= 4u )
    WPP_SF_qq(0x13u, &WPP_98491548b3413749efaf9ab44284e0a4_Traceguids, a1, a2);
}
