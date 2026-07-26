/*
 * XREFs of NdisMTransferDataComplete @ 0x1C004E6B0
 * Callers:
 *     <none>
 * Callees:
 *     NdisFreePacket @ 0x1C0011680 (NdisFreePacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     ExFreeToNPagedLookasideList @ 0x1C004E338 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall NdisMTransferDataComplete(__int64 a1, struct _NDIS_PACKET *a2, unsigned int a3, unsigned int a4)
{
  KIRQL v4; // di
  unsigned int v5; // ebx
  PNDIS_PACKET v8; // r10
  _NDIS_PACKET_PRIVATE *v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rsi
  int v13; // ecx
  _MDL *v14; // rbx
  PNDIS_PACKET v15; // r9
  unsigned int v16; // ecx
  _MDL *Head; // rbx
  struct _NPAGED_LOOKASIDE_LIST *v18; // rsi
  SIZE_T ByteCount; // r14
  PNDIS_PACKET Packet; // [rsp+68h] [rbp+38h] BYREF

  Packet = a2;
  v4 = 0;
  v5 = *(_DWORD *)a2[-1].ProtocolReserved;
  v8 = a2;
  if ( v5 >= 3 * ndisPacketStackSize )
  {
    v12 = 0LL;
  }
  else
  {
    v10 = &a2->Private + v5 / 3 - (unsigned __int64)ndisPacketStackSize;
    v11 = v5 % 3;
    v12 = *((_QWORD *)&v10->PhysicalCount + v11);
    *((_QWORD *)&v10->PhysicalCount + v11) = 0LL;
    v8 = Packet;
  }
  v13 = *(_DWORD *)v8[-1].ProtocolReserved;
  if ( v13 || (v8[-1].Reserved[1] & 1) == 0 )
  {
    if ( v12 )
    {
      *(_DWORD *)v8[-1].ProtocolReserved = v13 - 1;
      if ( (*(_DWORD *)(a1 + 120) & 0x40000) != 0 )
        v4 = KfRaiseIrql(2u);
      (*(void (__fastcall **)(_QWORD, PNDIS_PACKET, _QWORD, _QWORD))(v12 + 120))(*(_QWORD *)(v12 + 32), Packet, a3, a4);
      if ( (*(_DWORD *)(a1 + 120) & 0x40000) != 0 && v4 != 2 )
        KeLowerIrql(v4);
    }
  }
  else
  {
    v14 = *(_MDL **)v8->ProtocolReserved;
    IoFreeMdl(v8->Private.Head);
    Packet->Private.Head = v14;
    *(_QWORD *)Packet->ProtocolReserved = 0LL;
    v15 = Packet;
    v16 = *(_DWORD *)Packet[-1].ProtocolReserved;
    if ( v16 < 3 * ndisPacketStackSize )
    {
      *((_QWORD *)&Packet->Private.PhysicalCount + 6 * (v16 / 3 - (unsigned __int64)ndisPacketStackSize) + v16 % 3) = 0LL;
      v15 = Packet;
    }
    --*(_DWORD *)v15[-1].ProtocolReserved;
    *(unsigned int *)((char *)&Packet->Private.Count + Packet->Private.NdisPacketOobOffset) = 0;
    *(_DWORD *)((char *)&Packet->Private.Tail + Packet->Private.NdisPacketOobOffset) = 14;
    (*(void (__fastcall **)(__int64, PNDIS_PACKET *, __int64))(a1 + 432))(a1, &Packet, 1LL);
    if ( (*(_DWORD *)(a1 + 120) & 0x40000) == 0
      && *(unsigned int *)((char *)&Packet->Private.Count + Packet->Private.NdisPacketOobOffset) != 259 )
    {
      Head = Packet->Private.Head;
      v18 = *(struct _NPAGED_LOOKASIDE_LIST **)Packet->MiniportReserved;
      ByteCount = Head->ByteCount;
      if ( (Head->MdlFlags & 0x20) != 0 )
        MmUnmapLockedPages(Head->MappedSystemVa, Head);
      if ( v18 )
      {
        ExFreeToNPagedLookasideList(v18, Head);
      }
      else
      {
        MmSizeOfMdl((PVOID)0xFFF, ByteCount);
        ExFreePoolWithTag(Head, 0);
      }
      NdisFreePacket(Packet);
    }
  }
}
