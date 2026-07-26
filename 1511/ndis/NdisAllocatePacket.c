/*
 * XREFs of NdisAllocatePacket @ 0x1C0016A80
 * Callers:
 *     NdisAllocatePacketPoolEx @ 0x1C00167F0 (NdisAllocatePacketPoolEx.c)
 *     ndisNetBufferToPacket @ 0x1C0048B10 (ndisNetBufferToPacket.c)
 *     ndisLWM5IndicateReceive @ 0x1C0061E54 (ndisLWM5IndicateReceive.c)
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0016CBC (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     memset @ 0x1C0026F40 (memset.c)
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
  int v14; // ebp
  __int64 i; // rax
  _SLIST_HEADER *v16; // rsi
  __int64 v17; // rax
  unsigned int v18; // r15d
  unsigned __int64 v19; // rax
  KIRQL v20; // dl
  KSPIN_LOCK *v21; // rcx
  KSPIN_LOCK *v22; // r13
  KIRQL v23; // al
  _QWORD *Alignment; // rdx
  void **Region; // rcx
  char **v26; // rax
  char *v27; // rdi
  unsigned __int64 v28; // rax
  _SLIST_HEADER *v29; // r14
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  LONGLONG v32; // rcx
  struct _NDIS_STACK_RESERVED *v33; // [rsp+20h] [rbp-68h] BYREF
  char *v34; // [rsp+28h] [rbp-60h]
  KSPIN_LOCK *v35; // [rsp+30h] [rbp-58h]
  KIRQL v38; // [rsp+A0h] [rbp+18h]
  KIRQL v39; // [rsp+A0h] [rbp+18h]
  struct _NDIS_PACKET *v40; // [rsp+A8h] [rbp+20h]

  v3 = (unsigned __int64 *)((char *)PoolHandle + 40);
  v4 = (_SLIST_HEADER *)*((_QWORD *)PoolHandle + 5);
  v34 = (char *)PoolHandle + 40;
  v6 = Packet;
  v7 = Status;
  v8 = 0LL;
  if ( v4 != (_SLIST_HEADER *)((char *)PoolHandle + 40) )
  {
    v8 = ExpInterlockedPopEntrySList(v4 + 2);
    if ( v8 )
    {
      if ( *((_WORD *)PoolHandle + 4) <= 1u || ExQueryDepthSList(v4 + 2) )
        goto LABEL_15;
      v22 = (KSPIN_LOCK *)((char *)PoolHandle + 32);
      v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 4);
      Alignment = (_QWORD *)v4->Alignment;
      Region = (void **)v4->Region;
      v39 = v23;
      if ( *(_SLIST_HEADER **)(v4->Alignment + 8) != v4 || *Region != v4 )
        __fastfail(3u);
      *Region = Alignment;
      Alignment[1] = Region;
      if ( ExQueryDepthSList(v4 + 2) )
      {
        v28 = *v3;
        v4->Alignment = *v3;
        v4->Region = (unsigned __int64)v3;
        if ( *(unsigned __int64 **)(v28 + 8) != v3 )
          __fastfail(3u);
        *(_QWORD *)(v28 + 8) = v4;
        *v3 = (unsigned __int64)v4;
        LODWORD(v4[3].Alignment) = 0;
      }
      else
      {
        v26 = (char **)*((_QWORD *)PoolHandle + 8);
        v27 = (char *)PoolHandle + 56;
        v4->Alignment = (unsigned __int64)v27;
        v4->Region = (unsigned __int64)v26;
        if ( *v26 != v27 )
          __fastfail(3u);
        *v26 = (char *)v4;
        *((_QWORD *)v27 + 1) = v4;
        LODWORD(v4[3].Alignment) = 1;
      }
      v20 = v39;
      v21 = v22;
LABEL_14:
      KeReleaseSpinLock(v21, v20);
LABEL_15:
      v7 = Status;
      goto LABEL_16;
    }
  }
  v9 = (KSPIN_LOCK *)((char *)PoolHandle + 32);
  v35 = (KSPIN_LOCK *)((char *)PoolHandle + 32);
  v10 = (_SLIST_HEADER **)((char *)PoolHandle + 72);
  v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 4);
  v11 = v38;
  if ( *v10 != (_SLIST_HEADER *)v10 )
  {
    v29 = *v10;
    v30 = (*v10)->Alignment;
    if ( (_SLIST_HEADER **)(*v10)->Region != v10 || *(_SLIST_HEADER **)(v30 + 8) != v29 )
      __fastfail(3u);
    *v10 = (_SLIST_HEADER *)v30;
    *(_QWORD *)(v30 + 8) = v10;
    v8 = ExpInterlockedPopEntrySList(v29 + 2);
    v31 = *v3;
    v29->Alignment = *v3;
    v29->Region = (unsigned __int64)v3;
    if ( *(unsigned __int64 **)(v31 + 8) != v3 )
      __fastfail(3u);
    *(_QWORD *)(v31 + 8) = v29;
    v32 = 0LL;
    *v3 = (unsigned __int64)v29;
    LODWORD(v29[3].Alignment) = 0;
    if ( *v10 != (_SLIST_HEADER *)v10 )
      v32 = PoolAgingTicks.QuadPart + (*v10)[1].Alignment;
    *((_QWORD *)PoolHandle + 13) = v32;
    goto LABEL_13;
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
      v14 = *((unsigned __int16 *)PoolHandle + 3);
      if ( *((_WORD *)PoolHandle + 3) )
      {
        i = ndisPacketStackSize;
        v16 = v13 + 4;
        do
        {
          v40 = (struct _NDIS_PACKET *)&v16[3 * i + 1];
          v40->Private.NdisPacketFlags = 0;
          v16 = (_SLIST_HEADER *)((char *)v16 + *((unsigned __int16 *)PoolHandle + 2));
          ExpInterlockedPushEntrySList(v13 + 2, (PSLIST_ENTRY)v40);
          v40->Private.Pool = PoolHandle;
          v40->Private.Flags = *((_DWORD *)PoolHandle + 4);
          v17 = (unsigned __int16)(*((_WORD *)PoolHandle + 2) - 48 * ndisPacketStackSize - 152);
          v40->Private.NdisPacketOobOffset = v17;
          *(_QWORD *)&v40->ProtocolReserved[v17] = v40;
          v18 = 0;
          for ( i = ndisPacketStackSize; v18 < ndisPacketStackSize; ++v18 )
          {
            *(_DWORD *)&v40[-1].ProtocolReserved[4] = v18;
            NDIS_STACK_RESERVED_FROM_PACKET(v40, &v33);
            KeInitializeSpinLock((PKSPIN_LOCK)v33 + 3);
            i = ndisPacketStackSize;
          }
          --v14;
        }
        while ( v14 );
        v3 = (unsigned __int64 *)v34;
        v6 = Packet;
        v9 = v35;
        v11 = v38;
      }
      v8 = ExpInterlockedPopEntrySList(v13 + 2);
      v19 = *v3;
      v13->Alignment = *v3;
      v13->Region = (unsigned __int64)v3;
      if ( *(unsigned __int64 **)(v19 + 8) != v3 )
        __fastfail(3u);
      *(_QWORD *)(v19 + 8) = v13;
      *v3 = (unsigned __int64)v13;
      LODWORD(v13[3].Alignment) = 0;
LABEL_13:
      v20 = v11;
      v21 = v9;
      goto LABEL_14;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 4, v38);
LABEL_16:
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
