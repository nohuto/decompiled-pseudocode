/*
 * XREFs of NdisFreePacket @ 0x1C001C4F0
 * Callers:
 *     NdisAllocatePacketPoolEx @ 0x1C001C310 (NdisAllocatePacketPoolEx.c)
 *     ndisFreeConvertedPacket @ 0x1C004D034 (ndisFreeConvertedPacket.c)
 *     NdisMTransferDataComplete @ 0x1C00536A0 (NdisMTransferDataComplete.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C0061DDC (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ndisLWM5IndicateReceive @ 0x1C0066094 (ndisLWM5IndicateReceive.c)
 * Callees:
 *     ?ndisFreePacketPoolHdr@@YAXPEAU_NDIS_PKT_POOL_HDR@@PEAU_NDIS_PKT_POOL@@@Z @ 0x1C0050218 (-ndisFreePacketPoolHdr@@YAXPEAU_NDIS_PKT_POOL_HDR@@PEAU_NDIS_PKT_POOL@@@Z.c)
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
  _SLIST_HEADER *v13; // r14
  LONGLONG v14; // rcx
  unsigned __int64 Alignment; // rcx
  _LIST_ENTRY *p_FreeBlocks; // rax
  _LIST_ENTRY *v17; // rcx

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
        if ( *Blink != (struct _NDIS_PKT_POOL *)&Pool->AgingBlocks )
          __fastfail(3u);
        *(_QWORD *)Flink = &Pool->AgingBlocks;
        *(_QWORD *)(Flink + 8) = Blink;
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
        if ( *v10 != (struct _NDIS_PKT_POOL *)&Pool->FreeBlocks )
          __fastfail(3u);
        *(_QWORD *)Flink = &Pool->FreeBlocks;
        *(_QWORD *)(Flink + 8) = v10;
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
          v13 = (_SLIST_HEADER *)p_AgingBlocks->Flink;
          v14 = (LONGLONG)p_AgingBlocks->Flink[1].Flink + PoolAgingTicks.QuadPart;
          if ( v11 <= v14 )
          {
            Pool->NextScavengeTick.QuadPart = v14;
            break;
          }
          Alignment = v13->Alignment;
          if ( (_LIST_ENTRY *)v13->Region != p_AgingBlocks || *(_SLIST_HEADER **)(Alignment + 8) != v13 )
            __fastfail(3u);
          p_AgingBlocks->Flink = (_LIST_ENTRY *)Alignment;
          *(_QWORD *)(Alignment + 8) = p_AgingBlocks;
          if ( ExQueryDepthSList(v13 + 2) == Pool->PktsPerBlock )
          {
            ndisFreePacketPoolHdr(v13, Pool);
          }
          else
          {
            p_FreeBlocks = &Pool->FreeBlocks;
            v17 = Pool->FreeBlocks.Flink;
            if ( v17->Blink != &Pool->FreeBlocks )
              __fastfail(3u);
            v13->Alignment = (unsigned __int64)v17;
            v13->Region = (unsigned __int64)p_FreeBlocks;
            v17->Blink = (_LIST_ENTRY *)v13;
            p_FreeBlocks->Flink = (_LIST_ENTRY *)v13;
            LODWORD(v13[3].Alignment) = 0;
          }
        }
        KeReleaseSpinLock(&Pool->Lock, v12);
      }
    }
  }
}
