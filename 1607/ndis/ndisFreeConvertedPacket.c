/*
 * XREFs of ndisFreeConvertedPacket @ 0x1C004D034
 * Callers:
 *     ndisXlateReturnPacketToNetBufferList @ 0x1C004D738 (ndisXlateReturnPacketToNetBufferList.c)
 *     ndisXlateSendCompletePacketToNetBufferList @ 0x1C004D850 (ndisXlateSendCompletePacketToNetBufferList.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisFreeConvertedPacket(struct _NDIS_PACKET *a1, __int64 a2, char a3)
{
  bool v3; // zf
  $485E4893DB86C6E41F9F1F07AB0C4B65 *ProtocolReserved; // r8
  _MDL *Head; // rdx
  _MDL *Tail; // rcx
  unsigned int Flags; // eax

  v3 = a3 == 0;
  ProtocolReserved = ($485E4893DB86C6E41F9F1F07AB0C4B65 *)a1->ProtocolReserved;
  if ( v3 )
    ProtocolReserved = &a1->48;
  Head = a1->Private.Head;
  if ( Head )
  {
    Tail = a1->Private.Tail;
    Tail->ByteCount = *(_DWORD *)ProtocolReserved->MiniportReserved;
    Tail->Next = *(struct _MDL **)&ProtocolReserved->MacReserved[8];
    Head->ByteOffset -= *(_DWORD *)(a2 + 16);
    Head->ByteCount += *(_DWORD *)(a2 + 16);
    if ( (Head->MdlFlags & 5) != 0 )
      Head->MappedSystemVa = (char *)Head->MappedSystemVa - *(unsigned int *)(a2 + 16);
  }
  Flags = a1->Private.Flags;
  if ( (Flags & 0x100) != 0 )
  {
    a1->Private.Flags = Flags & 0xFFFFFEFF;
    *(_QWORD *)&a1->MacReserved[a1->Private.NdisPacketOobOffset + 24] = 0LL;
  }
  NdisFreePacket(a1);
}
