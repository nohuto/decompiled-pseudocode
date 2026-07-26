/*
 * XREFs of NdisAllocatePacket @ 0x1C001C5A0
 * Callers:
 *     NdisAllocatePacketPoolEx @ 0x1C001C310 (NdisAllocatePacketPoolEx.c)
 *     ndisNetBufferToPacket @ 0x1C004D0E4 (ndisNetBufferToPacket.c)
 *     ndisLWM5IndicateReceive @ 0x1C0066094 (ndisLWM5IndicateReceive.c)
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C001C7E0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     memset @ 0x1C0027500 (memset.c)
 */

void __stdcall NdisAllocatePacket(PNDIS_STATUS Status, PNDIS_PACKET *Packet, NDIS_HANDLE PoolHandle)
{
  char *v3; // rsi
  _SLIST_HEADER *v4; // rbx
  PNDIS_PACKET *v6; // r15
  PNDIS_STATUS v7; // r13
  PSLIST_ENTRY v8; // rbp
  KSPIN_LOCK *v9; // r12
  _SLIST_HEADER **v10; // r14
  KIRQL v11; // r13
  _SLIST_HEADER *PoolWithTag; // rax
  _SLIST_HEADER *v13; // rbx
  int v14; // ebp
  __int64 i; // rax
  _SLIST_HEADER *v16; // rsi
  __int64 v17; // rax
  unsigned int v18; // r15d
  unsigned __int64 v19; // rax
  KSPIN_LOCK *v20; // rcx
  KIRQL v21; // dl
  KSPIN_LOCK *v22; // r13
  KIRQL v23; // al
  unsigned __int64 v24; // rdx
  _SLIST_HEADER **Region; // rcx
  _SLIST_HEADER **v26; // rax
  char *v27; // rdi
  unsigned __int64 v28; // rax
  _SLIST_HEADER *v29; // rbx
  unsigned __int64 Alignment; // rax
  unsigned __int64 v31; // rax
  struct _NDIS_STACK_RESERVED *v32; // [rsp+20h] [rbp-68h] BYREF
  char *v33; // [rsp+28h] [rbp-60h]
  KSPIN_LOCK *v34; // [rsp+30h] [rbp-58h]
  KIRQL v37; // [rsp+A0h] [rbp+18h]
  KIRQL v38; // [rsp+A0h] [rbp+18h]
  struct _NDIS_PACKET *v39; // [rsp+A8h] [rbp+20h]

  v3 = (char *)PoolHandle + 40;
  v4 = (_SLIST_HEADER *)*((_QWORD *)PoolHandle + 5);
  v33 = (char *)PoolHandle + 40;
  v6 = Packet;
  v7 = Status;
  v8 = 0LL;
  if ( v4 == (_SLIST_HEADER *)((char *)PoolHandle + 40) || (v8 = ExpInterlockedPopEntrySList(v4 + 2)) == 0LL )
  {
    v9 = (KSPIN_LOCK *)((char *)PoolHandle + 32);
    v34 = (KSPIN_LOCK *)((char *)PoolHandle + 32);
    v10 = (_SLIST_HEADER **)((char *)PoolHandle + 72);
    v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 4);
    v11 = v37;
    if ( *v10 == (_SLIST_HEADER *)v10 )
    {
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
          v14 = *((unsigned __int16 *)PoolHandle + 3);
          if ( *((_WORD *)PoolHandle + 3) )
          {
            i = ndisPacketStackSize;
            v16 = v13 + 4;
            do
            {
              v39 = (struct _NDIS_PACKET *)&v16[3 * i + 1];
              v39->Private.NdisPacketFlags = 0;
              v16 = (_SLIST_HEADER *)((char *)v16 + *((unsigned __int16 *)PoolHandle + 2));
              ExpInterlockedPushEntrySList(v13 + 2, (PSLIST_ENTRY)v39);
              v39->Private.Pool = PoolHandle;
              v39->Private.Flags = *((_DWORD *)PoolHandle + 4);
              v17 = (unsigned __int16)(*((_WORD *)PoolHandle + 2) - 48 * ndisPacketStackSize - 152);
              v39->Private.NdisPacketOobOffset = v17;
              *(_QWORD *)&v39->ProtocolReserved[v17] = v39;
              v18 = 0;
              for ( i = ndisPacketStackSize; v18 < ndisPacketStackSize; ++v18 )
              {
                *(_DWORD *)&v39[-1].ProtocolReserved[4] = v18;
                NDIS_STACK_RESERVED_FROM_PACKET(v39, &v32);
                KeInitializeSpinLock((PKSPIN_LOCK)v32 + 3);
                i = ndisPacketStackSize;
              }
              --v14;
            }
            while ( v14 );
            v3 = v33;
            v6 = Packet;
            v9 = v34;
            v11 = v37;
          }
          v8 = ExpInterlockedPopEntrySList(v13 + 2);
          v19 = *(_QWORD *)v3;
          if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 )
            __fastfail(3u);
          v13->Alignment = v19;
          v13->Region = (unsigned __int64)v3;
          *(_QWORD *)(v19 + 8) = v13;
          *(_QWORD *)v3 = v13;
          LODWORD(v13[3].Alignment) = 0;
        }
      }
    }
    else
    {
      v29 = *v10;
      Alignment = (*v10)->Alignment;
      if ( (_SLIST_HEADER **)(*v10)->Region != v10 || *(_SLIST_HEADER **)(Alignment + 8) != v29 )
        __fastfail(3u);
      *v10 = (_SLIST_HEADER *)Alignment;
      *(_QWORD *)(Alignment + 8) = v10;
      v8 = ExpInterlockedPopEntrySList(v29 + 2);
      v31 = *(_QWORD *)v3;
      if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 )
        __fastfail(3u);
      v29->Alignment = v31;
      v29->Region = (unsigned __int64)v3;
      *(_QWORD *)(v31 + 8) = v29;
      *(_QWORD *)v3 = v29;
      LODWORD(v29[3].Alignment) = 0;
      if ( *v10 == (_SLIST_HEADER *)v10 )
        *((_QWORD *)PoolHandle + 13) = 0LL;
      else
        *((_QWORD *)PoolHandle + 13) = PoolAgingTicks.QuadPart + (*v10)[1].Alignment;
    }
    v20 = v9;
    v21 = v11;
  }
  else
  {
    if ( *((_WORD *)PoolHandle + 4) <= 1u || ExQueryDepthSList(v4 + 2) )
      goto LABEL_15;
    v22 = (KSPIN_LOCK *)((char *)PoolHandle + 32);
    v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 4);
    v24 = v4->Alignment;
    Region = (_SLIST_HEADER **)v4->Region;
    v38 = v23;
    if ( *(_SLIST_HEADER **)(v4->Alignment + 8) != v4 || *Region != v4 )
      __fastfail(3u);
    *Region = (_SLIST_HEADER *)v24;
    *(_QWORD *)(v24 + 8) = Region;
    if ( ExQueryDepthSList(v4 + 2) )
    {
      v28 = *(_QWORD *)v3;
      if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 )
        __fastfail(3u);
      v4->Alignment = v28;
      v4->Region = (unsigned __int64)v3;
      *(_QWORD *)(v28 + 8) = v4;
      *(_QWORD *)v3 = v4;
      LODWORD(v4[3].Alignment) = 0;
    }
    else
    {
      v26 = (_SLIST_HEADER **)*((_QWORD *)PoolHandle + 8);
      v27 = (char *)PoolHandle + 56;
      if ( *v26 != (_SLIST_HEADER *)v27 )
        __fastfail(3u);
      v4->Alignment = (unsigned __int64)v27;
      v4->Region = (unsigned __int64)v26;
      *v26 = v4;
      *((_QWORD *)v27 + 1) = v4;
      LODWORD(v4[3].Alignment) = 1;
    }
    v21 = v38;
    v20 = v22;
  }
  KeReleaseSpinLock(v20, v21);
  v7 = Status;
LABEL_15:
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
