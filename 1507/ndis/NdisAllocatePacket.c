/*
 * XREFs of NdisAllocatePacket @ 0x1C0011730
 * Callers:
 *     NdisAllocatePacketPoolEx @ 0x1C00114A0 (NdisAllocatePacketPoolEx.c)
 *     ndisNetBufferToPacket @ 0x1C0048048 (ndisNetBufferToPacket.c)
 *     ndisLWM5IndicateReceive @ 0x1C0062CD4 (ndisLWM5IndicateReceive.c)
 * Callees:
 *     memset @ 0x1C0023A40 (memset.c)
 */

void __stdcall NdisAllocatePacket(PNDIS_STATUS Status, PNDIS_PACKET *Packet, NDIS_HANDLE PoolHandle)
{
  unsigned __int64 *v3; // rsi
  _SLIST_HEADER *v4; // rbx
  PNDIS_PACKET *v6; // r15
  PNDIS_STATUS v7; // r14
  PSLIST_ENTRY v8; // rbp
  KSPIN_LOCK *v9; // r12
  _SLIST_HEADER **v10; // rbx
  KIRQL v11; // r13
  _SLIST_HEADER *PoolWithTag; // rax
  _SLIST_HEADER *v13; // rbx
  __int64 v14; // rax
  _SLIST_HEADER *v15; // r13
  int v16; // r15d
  _SLIST_HEADER *v17; // rsi
  __int64 v18; // rax
  unsigned int v19; // ebp
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  KIRQL v22; // dl
  KSPIN_LOCK *v23; // rcx
  KSPIN_LOCK *v24; // r13
  KIRQL v25; // al
  _QWORD *Alignment; // rdx
  void **Region; // rcx
  char **v28; // rax
  char *v29; // rdi
  unsigned __int64 v30; // rax
  _SLIST_HEADER *v31; // r14
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  LONGLONG v34; // rcx
  char *v35; // [rsp+20h] [rbp-58h]
  KIRQL v38; // [rsp+90h] [rbp+18h]
  KIRQL v39; // [rsp+90h] [rbp+18h]
  char *v40; // [rsp+98h] [rbp+20h]

  v3 = (unsigned __int64 *)((char *)PoolHandle + 40);
  v4 = (_SLIST_HEADER *)*((_QWORD *)PoolHandle + 5);
  v35 = (char *)PoolHandle + 40;
  v6 = Packet;
  v7 = Status;
  v8 = 0LL;
  if ( v4 != (_SLIST_HEADER *)((char *)PoolHandle + 40) )
  {
    v8 = ExpInterlockedPopEntrySList(v4 + 2);
    if ( v8 )
    {
      if ( *((_WORD *)PoolHandle + 4) <= 1u || ExQueryDepthSList(v4 + 2) )
        goto LABEL_18;
      v24 = (KSPIN_LOCK *)((char *)PoolHandle + 32);
      v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 4);
      Alignment = (_QWORD *)v4->Alignment;
      Region = (void **)v4->Region;
      v39 = v25;
      if ( *(_SLIST_HEADER **)(v4->Alignment + 8) != v4 || *Region != v4 )
        __fastfail(3u);
      *Region = Alignment;
      Alignment[1] = Region;
      if ( ExQueryDepthSList(v4 + 2) )
      {
        v30 = *v3;
        v4->Alignment = *v3;
        v4->Region = (unsigned __int64)v3;
        if ( *(unsigned __int64 **)(v30 + 8) != v3 )
          __fastfail(3u);
        *(_QWORD *)(v30 + 8) = v4;
        *v3 = (unsigned __int64)v4;
        LODWORD(v4[3].Alignment) = 0;
      }
      else
      {
        v28 = (char **)*((_QWORD *)PoolHandle + 8);
        v29 = (char *)PoolHandle + 56;
        v4->Alignment = (unsigned __int64)v29;
        v4->Region = (unsigned __int64)v28;
        if ( *v28 != v29 )
          __fastfail(3u);
        *v28 = (char *)v4;
        *((_QWORD *)v29 + 1) = v4;
        LODWORD(v4[3].Alignment) = 1;
      }
      v22 = v39;
      v23 = v24;
LABEL_17:
      KeReleaseSpinLock(v23, v22);
LABEL_18:
      v7 = Status;
      goto LABEL_19;
    }
  }
  v9 = (KSPIN_LOCK *)((char *)PoolHandle + 32);
  v10 = (_SLIST_HEADER **)((char *)PoolHandle + 72);
  v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 4);
  v11 = v38;
  if ( *v10 != (_SLIST_HEADER *)v10 )
  {
    v31 = *v10;
    v32 = (*v10)->Alignment;
    if ( (_SLIST_HEADER **)(*v10)->Region != v10 || *(_SLIST_HEADER **)(v32 + 8) != v31 )
      __fastfail(3u);
    *v10 = (_SLIST_HEADER *)v32;
    *(_QWORD *)(v32 + 8) = v10;
    v8 = ExpInterlockedPopEntrySList(v31 + 2);
    v33 = *v3;
    v31->Alignment = *v3;
    v31->Region = (unsigned __int64)v3;
    if ( *(unsigned __int64 **)(v33 + 8) != v3 )
      __fastfail(3u);
    *(_QWORD *)(v33 + 8) = v31;
    v34 = 0LL;
    *v3 = (unsigned __int64)v31;
    LODWORD(v31[3].Alignment) = 0;
    if ( *v10 != (_SLIST_HEADER *)v10 )
      v34 = PoolAgingTicks.QuadPart + (*v10)[1].Alignment;
    *((_QWORD *)PoolHandle + 13) = v34;
    goto LABEL_16;
  }
  if ( *((_DWORD *)PoolHandle + 3) < (int)*((unsigned __int16 *)PoolHandle + 4) )
  {
    PoolWithTag = (_SLIST_HEADER *)ExAllocatePoolWithTag(
                                     NonPagedPoolNx,
                                     *((unsigned int *)PoolHandle + 5),
                                     *(_DWORD *)PoolHandle);
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, *((unsigned int *)PoolHandle + 5));
      ++*((_DWORD *)PoolHandle + 3);
      v13->Region = (unsigned __int64)v13;
      v13->Alignment = (unsigned __int64)v13;
      InitializeSListHead(v13 + 2);
      if ( *((_WORD *)PoolHandle + 3) )
      {
        v14 = ndisPacketStackSize;
        v15 = v13 + 2;
        v16 = *((unsigned __int16 *)PoolHandle + 3);
        v17 = v13 + 4;
        do
        {
          v40 = (char *)&v17[3 * v14 + 1];
          v40[41] = 0;
          v17 = (_SLIST_HEADER *)((char *)v17 + *((unsigned __int16 *)PoolHandle + 2));
          ExpInterlockedPushEntrySList(v15, (PSLIST_ENTRY)v40);
          *((_QWORD *)v40 + 3) = PoolHandle;
          *((_DWORD *)v40 + 9) = *((_DWORD *)PoolHandle + 4);
          v18 = (unsigned __int16)(*((_WORD *)PoolHandle + 2) - 48 * ndisPacketStackSize - 152);
          *((_WORD *)v40 + 21) = v18;
          *(_QWORD *)&v40[v18 + 96] = v40;
          v19 = 0;
          v14 = ndisPacketStackSize;
          if ( ndisPacketStackSize )
          {
            do
            {
              *((_DWORD *)v40 - 1) = v19;
              if ( v19 >= ndisPacketStackSize )
                v20 = 0LL;
              else
                v20 = (unsigned __int64)&v40[48 * (v19 - (unsigned __int64)ndisPacketStackSize) - 16];
              KeInitializeSpinLock((PKSPIN_LOCK)(v20 + 40));
              v14 = ndisPacketStackSize;
              ++v19;
            }
            while ( v19 < ndisPacketStackSize );
            v15 = v13 + 2;
          }
          --v16;
        }
        while ( v16 );
        v3 = (unsigned __int64 *)v35;
        v6 = Packet;
        v9 = (KSPIN_LOCK *)((char *)PoolHandle + 32);
        v11 = v38;
      }
      v8 = ExpInterlockedPopEntrySList(v13 + 2);
      v21 = *v3;
      v13->Alignment = *v3;
      v13->Region = (unsigned __int64)v3;
      if ( *(unsigned __int64 **)(v21 + 8) != v3 )
        __fastfail(3u);
      *(_QWORD *)(v21 + 8) = v13;
      *v3 = (unsigned __int64)v13;
      LODWORD(v13[3].Alignment) = 0;
LABEL_16:
      v22 = v11;
      v23 = v9;
      goto LABEL_17;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 4, v38);
LABEL_19:
  if ( v8 )
  {
    *v6 = (PNDIS_PACKET)v8;
    *v7 = 0;
    *(_DWORD *)&(*v6)[-1].ProtocolReserved[4] = -1;
    *(_DWORD *)(*v6)[-1].ProtocolReserved = -1;
    *(_QWORD *)&(*v6)->ProtocolReserved[(*v6)->Private.NdisPacketOobOffset] = *v6;
    (*v6)->Private.Head = 0LL;
    (*v6)->Private.ValidCounts = 0;
    (*v6)->Private.NdisPacketFlags = 0x80;
  }
  else
  {
    *v6 = 0LL;
    *v7 = -1073741670;
  }
}
