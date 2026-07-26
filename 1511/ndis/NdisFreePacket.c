/*
 * XREFs of NdisFreePacket @ 0x1C00169D0
 * Callers:
 *     NdisAllocatePacketPoolEx @ 0x1C00167F0 (NdisAllocatePacketPoolEx.c)
 *     ndisFreeConvertedPacket @ 0x1C0048A44 (ndisFreeConvertedPacket.c)
 *     NdisMTransferDataComplete @ 0x1C004EC50 (NdisMTransferDataComplete.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C005DDDC (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ndisLWM5IndicateReceive @ 0x1C0061E54 (ndisLWM5IndicateReceive.c)
 * Callees:
 *     ?ndisFreePacketPoolHdr@@YAXPEAU_NDIS_PKT_POOL_HDR@@PEAU_NDIS_PKT_POOL@@@Z @ 0x1C004B8A4 (-ndisFreePacketPoolHdr@@YAXPEAU_NDIS_PKT_POOL_HDR@@PEAU_NDIS_PKT_POOL@@@Z.c)
 */

void __stdcall NdisFreePacket(PNDIS_PACKET Packet)
{
  struct _NDIS_PKT_POOL *Pool; // rdi
  unsigned __int64 Flink; // rbx
  _LIST_ENTRY *p_AgingBlocks; // rsi
  KIRQL v4; // r14
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  struct _NDIS_PKT_POOL **Blink; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  struct _NDIS_PKT_POOL **v10; // rcx
  LONGLONG v11; // rbx
  KIRQL v12; // r15
  _LIST_ENTRY *v13; // r14
  LONGLONG v14; // rcx
  _LIST_ENTRY *v15; // rcx
  _LIST_ENTRY *v16; // rcx

  Pool = (struct _NDIS_PKT_POOL *)Packet->Private.Pool;
  Flink = (unsigned __int64)Packet & 0xFFFFFFFFFFFFF000uLL;
  Packet->Private.NdisPacketFlags = 0;
  if ( Pool->BlockSize != 4096 )
    Flink = (unsigned __int64)Pool->FreeBlocks.Flink;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)(Flink + 32), (PSLIST_ENTRY)Packet);
  if ( Pool->MaxBlocks > 1u )
  {
    if ( Pool->BlocksAllocated > 1 && ExQueryDepthSList((PSLIST_HEADER)(Flink + 32)) == Pool->PktsPerBlock
      || *(_DWORD *)(Flink + 48) == 1 )
    {
      v4 = KeAcquireSpinLockRaiseToDpc(&Pool->Lock);
      if ( ExQueryDepthSList((PSLIST_HEADER)(Flink + 32)) == Pool->PktsPerBlock )
      {
        *(_QWORD *)(Flink + 16) = MEMORY[0xFFFFF78000000320];
        v5 = *(_QWORD *)Flink;
        v6 = *(_QWORD **)(Flink + 8);
        if ( *(_QWORD *)(*(_QWORD *)Flink + 8LL) != Flink || *v6 != Flink )
          __fastfail(3u);
        *v6 = v5;
        *(_QWORD *)(v5 + 8) = v6;
        Blink = (struct _NDIS_PKT_POOL **)Pool->AgingBlocks.Blink;
        *(_QWORD *)Flink = &Pool->AgingBlocks;
        *(_QWORD *)(Flink + 8) = Blink;
        if ( *Blink != (struct _NDIS_PKT_POOL *)&Pool->AgingBlocks )
          __fastfail(3u);
        *Blink = (struct _NDIS_PKT_POOL *)Flink;
        Pool->AgingBlocks.Blink = (_LIST_ENTRY *)Flink;
        *(_DWORD *)(Flink + 48) = 2;
      }
      else if ( *(_DWORD *)(Flink + 48) == 1 )
      {
        v8 = *(_QWORD *)Flink;
        v9 = *(_QWORD **)(Flink + 8);
        if ( *(_QWORD *)(*(_QWORD *)Flink + 8LL) != Flink || *v9 != Flink )
          __fastfail(3u);
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        v10 = (struct _NDIS_PKT_POOL **)Pool->FreeBlocks.Blink;
        *(_QWORD *)Flink = &Pool->FreeBlocks;
        *(_QWORD *)(Flink + 8) = v10;
        if ( *v10 != (struct _NDIS_PKT_POOL *)&Pool->FreeBlocks )
          __fastfail(3u);
        *v10 = (struct _NDIS_PKT_POOL *)Flink;
        Pool->FreeBlocks.Blink = (_LIST_ENTRY *)Flink;
        *(_DWORD *)(Flink + 48) = 0;
      }
      KeReleaseSpinLock(&Pool->Lock, v4);
    }
    p_AgingBlocks = &Pool->AgingBlocks;
    if ( p_AgingBlocks->Flink != p_AgingBlocks )
    {
      v11 = MEMORY[0xFFFFF78000000320];
      if ( MEMORY[0xFFFFF78000000320] > Pool->NextScavengeTick.QuadPart )
      {
        v12 = KeAcquireSpinLockRaiseToDpc(&Pool->Lock);
        while ( p_AgingBlocks->Flink != p_AgingBlocks )
        {
          v13 = p_AgingBlocks->Flink;
          v14 = (LONGLONG)p_AgingBlocks->Flink[1].Flink + PoolAgingTicks.QuadPart;
          if ( v11 <= v14 )
          {
            Pool->NextScavengeTick.QuadPart = v14;
            break;
          }
          v15 = v13->Flink;
          if ( v13->Blink != p_AgingBlocks || v15->Blink != v13 )
            __fastfail(3u);
          p_AgingBlocks->Flink = v15;
          v15->Blink = p_AgingBlocks;
          if ( ExQueryDepthSList((PSLIST_HEADER)&v13[2]) == Pool->PktsPerBlock )
          {
            ndisFreePacketPoolHdr(v13, Pool);
          }
          else
          {
            v16 = Pool->FreeBlocks.Flink;
            v13->Flink = v16;
            v13->Blink = &Pool->FreeBlocks;
            if ( v16->Blink != &Pool->FreeBlocks )
              __fastfail(3u);
            v16->Blink = v13;
            Pool->FreeBlocks.Flink = v13;
            LODWORD(v13[3].Flink) = 0;
          }
        }
        KeReleaseSpinLock(&Pool->Lock, v12);
      }
    }
  }
}
