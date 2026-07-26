/*
 * XREFs of ndisMTransferData @ 0x1C00568C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     NdisCopyFromPacketToPacketSafe @ 0x1C0050680 (NdisCopyFromPacketToPacketSafe.c)
 */

__int64 __fastcall ndisMTransferData(
        __int64 a1,
        struct _NDIS_PACKET *a2,
        int a3,
        UINT a4,
        PNDIS_PACKET Destination,
        unsigned int *BytesCopied)
{
  __int64 v6; // rax
  __int64 v7; // r11
  __int64 v12; // rdx
  unsigned int v13; // r9d
  unsigned int v14; // r9d
  unsigned int v15; // ecx
  _MDL *Head; // rdi
  unsigned int v18; // ecx
  unsigned int v19; // r10d

  v7 = *(_QWORD *)(a1 + 16);
  LODWORD(v6) = KeGetPcr()->Prcb.Number;
  v12 = *(_QWORD *)(v7 + 1600);
  if ( a2 == *(struct _NDIS_PACKET **)(v12 + 8 * v6) )
  {
    LODWORD(v6) = KeGetPcr()->Prcb.Number;
    if ( *(_QWORD *)(v12 + 8 * v6) )
    {
      NdisCopyFromPacketToPacketSafe(
        Destination,
        0,
        a4,
        a2,
        a3 + *(_DWORD *)((char *)&a2->Private.Tail + a2->Private.NdisPacketOobOffset),
        BytesCopied,
        NormalPagePriority);
      return a4 != *BytesCopied ? 0xC0000001 : 0;
    }
  }
  ++*(_DWORD *)Destination[-1].ProtocolReserved;
  v14 = ndisPacketStackSize;
  v15 = *(_DWORD *)Destination[-1].ProtocolReserved;
  if ( v15 >= 3 * ndisPacketStackSize )
  {
    *(_DWORD *)Destination[-1].ProtocolReserved = v15 - 1;
    return (unsigned int)-1073741670;
  }
  if ( (*(_BYTE *)(v7 + 928) & 2) == 0 )
  {
    Head = Destination->Private.Head;
    if ( Head )
    {
      while ( (Head->MdlFlags & 5) != 0
            ? Head->MappedSystemVa
            : MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag | 0x20) )
      {
        Head = Head->Next;
        if ( !Head )
        {
          v14 = ndisPacketStackSize;
          goto LABEL_15;
        }
      }
      return (unsigned int)-1073741670;
    }
  }
LABEL_15:
  v18 = *(_DWORD *)Destination[-1].ProtocolReserved;
  if ( v18 < 3 * v14 )
    *((_QWORD *)&Destination->Private.PhysicalCount + 6 * (v18 / 3 - (unsigned __int64)v14) + v18 % 3) = a1;
  v13 = (*(__int64 (__fastcall **)(PNDIS_PACKET, unsigned int *, _QWORD, struct _NDIS_PACKET *, int, UINT))(a1 + 280))(
          Destination,
          BytesCopied,
          *(_QWORD *)(a1 + 56),
          a2,
          a3,
          a4);
  if ( v13 != 259 )
  {
    v19 = *(_DWORD *)Destination[-1].ProtocolReserved;
    if ( v19 < 3 * ndisPacketStackSize )
      *((_QWORD *)&Destination->Private.PhysicalCount + 6 * (v19 / 3 - (unsigned __int64)ndisPacketStackSize) + v19 % 3) = 0LL;
    --*(_DWORD *)Destination[-1].ProtocolReserved;
  }
  return v13;
}
