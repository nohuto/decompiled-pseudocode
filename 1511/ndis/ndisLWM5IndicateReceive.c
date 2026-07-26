/*
 * XREFs of ndisLWM5IndicateReceive @ 0x1C0061E54
 * Callers:
 *     EthIndicateReceive @ 0x1C00619B0 (EthIndicateReceive.c)
 * Callees:
 *     NdisFreePacket @ 0x1C00169D0 (NdisFreePacket.c)
 *     NdisAllocatePacket @ 0x1C0016A80 (NdisAllocatePacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     NdisAllocateBuffer @ 0x1C004B930 (NdisAllocateBuffer.c)
 *     ExFreeToNPagedLookasideList @ 0x1C004E8D8 (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C00619E8 (ExAllocateFromNPagedLookasideList.c)
 */

void __fastcall ndisLWM5IndicateReceive(__int64 a1, __int64 a2, void *a3, int a4, void *a5, unsigned int a6, size_t a7)
{
  __int64 v7; // r14
  struct _NPAGED_LOOKASIDE_LIST *v8; // r15
  size_t v9; // r13
  SIZE_T v10; // rbx
  struct _MDL *PoolWithTag; // rax
  unsigned int v12; // eax
  struct _MDL *v13; // rsi
  SIZE_T v14; // rax
  unsigned __int64 v15; // r12
  int v16; // edi
  __int64 v17; // rbx
  unsigned int v18; // edx
  _MDL *Head; // r12
  MDL *v20; // rax
  __int64 v21; // rbx
  ULONG ByteCount; // edi
  _MDL *v23; // rcx
  PNDIS_PACKET v24; // r10
  unsigned int v25; // ecx
  _MDL *v26; // rbx
  PNDIS_PACKET v27; // r9
  unsigned int v28; // r10d
  PNDIS_PACKET v29; // rcx
  int v30; // [rsp+40h] [rbp-28h] BYREF
  PNDIS_PACKET Packet; // [rsp+48h] [rbp-20h] BYREF
  PNDIS_BUFFER Buffer; // [rsp+50h] [rbp-18h] BYREF
  int Status; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v34; // [rsp+B8h] [rbp+50h]
  void *Src; // [rsp+C0h] [rbp+58h]
  size_t Size; // [rsp+C8h] [rbp+60h]

  LODWORD(Size) = a4;
  Src = a3;
  v34 = a2;
  v7 = *(_QWORD *)(a1 + 296);
  Packet = 0LL;
  v8 = 0LL;
  Status = 0;
  if ( (*(_DWORD *)(v7 + 120) & 0x20000000) == 0 )
    return;
  v9 = (unsigned int)a7;
  ++*(_DWORD *)(v7 + 2700);
  v10 = (unsigned int)(a4 + v9);
  if ( (unsigned int)v10 < (unsigned int)v9 )
    return;
  if ( (unsigned int)v10 >= 0x64 )
  {
    if ( (unsigned int)v10 >= 0x5EA )
    {
      v12 = v10 + ((MmSizeOfMdl((PVOID)0xFFF, (unsigned int)v10) + 7) & 0xFFFFFFF8);
      if ( v12 < (unsigned int)v10 )
        return;
      PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x7254444Eu);
      goto LABEL_10;
    }
    v8 = &ndisRcv1514BytesLL;
  }
  else
  {
    v8 = &ndisRcv100BytesLL;
  }
  PoolWithTag = (struct _MDL *)ExAllocateFromNPagedLookasideList(v8);
LABEL_10:
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return;
  v14 = MmSizeOfMdl((PVOID)0xFFF, v10);
  v13->Next = 0LL;
  v13->MdlFlags = 0;
  v13->ByteCount = v10;
  v15 = (unsigned __int64)v13 + ((v14 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
  v13->StartVa = (PVOID)(v15 & 0xFFFFFFFFFFFFF000uLL);
  v13->Size = 8 * ((((v15 & 0xFFF) + v10 + 4095) >> 12) + 6);
  v13->ByteOffset = ((_DWORD)v13 + ((v14 + 7) & 0xFFFFFFF8)) & 0xFFF;
  MmBuildMdlForNonPagedPool(v13);
  NdisAllocatePacket(&Status, &Packet, ndisRecvPacketPool);
  v16 = Status;
  if ( Status )
    goto LABEL_32;
  Status = 0;
  Packet->Private.Head = v13;
  Packet->Private.Tail = v13;
  *(_QWORD *)Packet->MiniportReserved = v8;
  LODWORD(Packet[-1].Reserved[1]) |= 1u;
  if ( (unsigned int)v9 <= a6 )
  {
    v17 = (unsigned int)Size;
    memmove((void *)v15, Src, (unsigned int)Size);
    memmove((void *)(v17 + v15), a5, v9);
    goto LABEL_27;
  }
  v30 = 0;
  v18 = ++*(_DWORD *)Packet[-1].ProtocolReserved;
  if ( v18 >= 3 * ndisPacketStackSize )
  {
    *(_DWORD *)Packet[-1].ProtocolReserved = v18 - 1;
LABEL_33:
    v29 = Packet;
LABEL_34:
    if ( v29 )
    {
      LODWORD(v29[-1].Reserved[1]) &= ~1u;
      NdisFreePacket(Packet);
    }
    if ( (v13->MdlFlags & 0x20) != 0 )
      MmUnmapLockedPages(v13->MappedSystemVa, v13);
    if ( v8 )
      ExFreeToNPagedLookasideList(v8, v13);
    else
      ExFreePoolWithTag(v13, 0);
    return;
  }
  Head = Packet->Private.Head;
  v20 = (MDL *)((Head->MdlFlags & 5) != 0 ? Head->MappedSystemVa : MmMapLockedPages(Head, 0));
  v21 = (unsigned int)Size;
  ByteCount = Head->ByteCount;
  Buffer = v20;
  memmove(v20, Src, (unsigned int)Size);
  NdisAllocateBuffer(&Status, &Buffer, 0LL, (char *)Buffer + v21, ByteCount - Size);
  v16 = Status;
  if ( Status )
    goto LABEL_32;
  v23 = Buffer;
  Buffer->Next = Head->Next;
  Packet->Private.Head = v23;
  *(_QWORD *)Packet->ProtocolReserved = Head;
  v24 = Packet;
  v25 = *(_DWORD *)Packet[-1].ProtocolReserved;
  if ( v25 < 3 * ndisPacketStackSize )
  {
    *((_QWORD *)&Packet->Private.PhysicalCount + 6 * (v25 / 3 - (unsigned __int64)ndisPacketStackSize) + v25 % 3) = 0LL;
    v24 = Packet;
  }
  v16 = (*(__int64 (__fastcall **)(PNDIS_PACKET, int *, _QWORD, __int64, _DWORD, _DWORD))(*(_QWORD *)(v7 + 3816) + 216LL))(
          v24,
          &v30,
          *(_QWORD *)(v7 + 24),
          v34,
          0,
          v9);
  if ( v16 != 259 )
  {
    v26 = *(_MDL **)Packet->ProtocolReserved;
    IoFreeMdl(Packet->Private.Head);
    Packet->Private.Head = v26;
    *(_QWORD *)Packet->ProtocolReserved = 0LL;
    v27 = Packet;
    v28 = *(_DWORD *)Packet[-1].ProtocolReserved;
    if ( v28 < 3 * ndisPacketStackSize )
    {
      *((_QWORD *)&Packet->Private.PhysicalCount + 6 * (v28 / 3 - (unsigned __int64)ndisPacketStackSize) + v28 % 3) = 0LL;
      v27 = Packet;
    }
    --*(_DWORD *)v27[-1].ProtocolReserved;
  }
  if ( v16 )
  {
LABEL_32:
    if ( v16 == 259 )
      return;
    goto LABEL_33;
  }
LABEL_27:
  *(unsigned int *)((char *)&Packet->Private.Count + Packet->Private.NdisPacketOobOffset) = 0;
  if ( !*(_DWORD *)(v7 + 464) )
    *(_DWORD *)((char *)&Packet->Private.Tail + Packet->Private.NdisPacketOobOffset) = 14;
  (*(void (__fastcall **)(__int64, PNDIS_PACKET *, __int64))(v7 + 432))(v7, &Packet, 1LL);
  if ( (*(_DWORD *)(v7 + 120) & 0x40000) == 0 )
  {
    v29 = Packet;
    if ( *(unsigned int *)((char *)&Packet->Private.Count + Packet->Private.NdisPacketOobOffset) != 259 )
      goto LABEL_34;
  }
}
