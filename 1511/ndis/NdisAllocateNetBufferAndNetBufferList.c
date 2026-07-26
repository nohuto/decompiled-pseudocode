/*
 * XREFs of NdisAllocateNetBufferAndNetBufferList @ 0x1C000C460
 * Callers:
 *     NdisAllocateReassembledNetBufferList @ 0x1C0048440 (NdisAllocateReassembledNetBufferList.c)
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C0048DF8 (ndisXlateRecvPacketArrayToNetBufferLists.c)
 *     ndisXlateSendPacketArrayToNetBufferLists @ 0x1C004978C (ndisXlateSendPacketArrayToNetBufferLists.c)
 *     ndisDoLoopbackNetBufferList @ 0x1C004F050 (ndisDoLoopbackNetBufferList.c)
 *     ndisFDoLoopbackNetBufferList @ 0x1C0053A54 (ndisFDoLoopbackNetBufferList.c)
 *     ?ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z @ 0x1C00612AC (-ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z.c)
 * Callees:
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C000CDC8 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     NdisFreeNetBufferList @ 0x1C000DC40 (NdisFreeNetBufferList.c)
 *     NdisAllocateNetBufferListContext @ 0x1C0010EB0 (NdisAllocateNetBufferListContext.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C0011BA0 (ndisGenerateNetBufferListCorrelationIds.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00266C8 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     memset @ 0x1C0026F40 (memset.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateNetBufferAndNetBufferList(
        NDIS_HANDLE PoolHandle,
        USHORT ContextSize,
        USHORT ContextBackFill,
        PMDL MdlChain,
        ULONG DataOffset,
        SIZE_T DataLength)
{
  unsigned int Number; // r13d
  int v10; // r12d
  unsigned __int64 v11; // rax
  char *v12; // rdi
  _SLIST_HEADER *v13; // rcx
  PSLIST_ENTRY v14; // rbx
  int v15; // eax
  __int16 v16; // di
  int v17; // eax
  ULONG v18; // ecx
  unsigned __int64 v20; // rax
  _SLIST_ENTRY *PoolWithTagPriority; // rax
  KIRQL v22; // al
  __int64 v23; // r8
  _QWORD *v24; // rcx
  ULONG ByteCount; // eax
  KIRQL v26; // al
  __int64 v27; // r8
  bool v28; // zf
  _SLIST_ENTRY *v29; // rax

  if ( PoolHandle )
  {
    if ( (*((_DWORD *)PoolHandle + 15) & 5) == 1 )
    {
      if ( (((unsigned __int8)ContextBackFill | (unsigned __int8)ContextSize) & 7) == 0 )
      {
        Number = KeGetPcr()->Prcb.Number;
        v10 = 1;
        if ( ndisMaxNumberOfProcessors != 1 )
        {
          v11 = (unsigned __int64)Number << 8;
          v12 = (char *)PoolHandle + v11 + 384;
          if ( !v12[216] )
            ndisPplLazyInitializeLookaside(
              (PLOOKASIDE_LIST_EX)((char *)PoolHandle + v11 + 384),
              (struct _NDIS_NPAGED_LOOKASIDE_LIST *)((char *)PoolHandle + 128));
          v13 = (_SLIST_HEADER *)*((_QWORD *)v12 + 24);
          ++*((_DWORD *)v12 + 5);
          v14 = ExpInterlockedPopEntrySList(v13);
          if ( !v14 )
          {
            if ( ExQueryDepthSList(*((PSLIST_HEADER *)v12 + 25)) < 0xAu
              || (v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v12 + 26),
                  v27 = *((_QWORD *)v12 + 24),
                  *((_QWORD *)v12 + 24) = *((_QWORD *)v12 + 25),
                  *((_QWORD *)v12 + 25) = v27,
                  KeReleaseSpinLock((PKSPIN_LOCK)v12 + 26, v26),
                  (v14 = ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v12 + 24))) == 0LL) )
            {
              ++*((_DWORD *)v12 + 6);
            }
          }
          if ( v14 )
            goto LABEL_9;
        }
        ++*((_DWORD *)PoolHandle + 37);
        v14 = ExpInterlockedPopEntrySList((PSLIST_HEADER)PoolHandle + 8);
        if ( v14 )
          goto LABEL_25;
        v20 = *((unsigned int *)PoolHandle + 43);
        ++*((_DWORD *)PoolHandle + 38);
        if ( v20 + 32 >= v20 )
        {
          PoolWithTagPriority = (_SLIST_ENTRY *)ExAllocatePoolWithTagPriority(
                                                  NonPagedPoolNx,
                                                  v20 + 32,
                                                  *((_DWORD *)PoolHandle + 42),
                                                  NormalPoolPriority);
          if ( PoolWithTagPriority )
          {
            v14 = PoolWithTagPriority + 2;
            PoolWithTagPriority->Next = 0LL;
            if ( PoolWithTagPriority != (_SLIST_ENTRY *)-32LL )
            {
              PoolWithTagPriority->Next = (_SLIST_ENTRY *)PoolHandle;
              v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 1);
              v23 = *((_QWORD *)PoolHandle + 2);
              v24 = &v14[-2].Next + 1;
              *v24 = v23;
              v24[1] = (char *)PoolHandle + 16;
              if ( *(NDIS_HANDLE *)(v23 + 8) != (char *)PoolHandle + 16 )
                __fastfail(3u);
              *(_QWORD *)(v23 + 8) = v24;
              *((_QWORD *)PoolHandle + 2) = v24;
              KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 1, v22);
            }
          }
          else
          {
            v14 = 0LL;
          }
          v10 = 0;
          if ( v14 )
          {
LABEL_25:
            *((_DWORD *)&v14[-1].Next + 2) = Number;
LABEL_9:
            if ( v10 )
              v15 = 27;
            else
              v15 = 28;
            v16 = *((_WORD *)&v14[3].Next + 5);
            memset(v14, 0, 8 * v15 + 136 + 8LL);
            v14[2].Next = (_SLIST_ENTRY *)PoolHandle;
            *((_DWORD *)&v14[8].Next + 2) = 256;
            if ( v10 )
              *((_WORD *)&v14[3].Next + 5) = v16;
            if ( Microsoft_Windows_Networking_CorrelationEnabled )
              ndisGenerateNetBufferListCorrelationIds(v14, 1LL);
            *((_BYTE *)&v14[12].Next + 8) = *((_BYTE *)PoolHandle + 88);
            v17 = *((_DWORD *)PoolHandle + 15);
            if ( (v17 & 2) == 0 )
              goto LABEL_16;
            v28 = (v17 & 1) == 0;
            v29 = v14 + 34;
            if ( v28 )
              v29 = v14 + 23;
            v14[1].Next = v29;
            v29->Next = 0LL;
            *((_WORD *)&v14[1].Next->Next + 4) = *((_WORD *)PoolHandle + 17);
            *((_WORD *)&v14[1].Next->Next + 5) = *((_WORD *)PoolHandle + 17);
            if ( *((_WORD *)PoolHandle + 17) >= ContextSize )
            {
              *((_WORD *)&v14[1].Next->Next + 5) -= ContextSize;
            }
            else
            {
LABEL_16:
              if ( ContextSize )
              {
                if ( NdisAllocateNetBufferListContext(
                       (PNET_BUFFER_LIST)v14,
                       ContextSize,
                       ContextBackFill,
                       *((_DWORD *)PoolHandle + 14)) )
                {
                  NdisFreeNetBufferList((PNET_BUFFER_LIST)v14);
                  v14 = 0LL;
                }
                else
                {
                  *((_DWORD *)&v14[8].Next + 2) |= 0x400u;
                }
              }
            }
            if ( v14 )
            {
              memset(&v14[23], 0, 0xB0uLL);
              v18 = DataOffset;
              *((_DWORD *)&v14[25].Next + 2) = DataOffset;
              *((_DWORD *)&v14[24].Next + 2) = DataLength;
              v14[25].Next = (_SLIST_ENTRY *)MdlChain;
              for ( *((_QWORD *)&v14[26].Next + 1) = PoolHandle; MdlChain; v18 -= ByteCount )
              {
                ByteCount = MdlChain->ByteCount;
                if ( v18 < ByteCount )
                  break;
                MdlChain = MdlChain->Next;
              }
              *((_QWORD *)&v14[23].Next + 1) = MdlChain;
              LODWORD(v14[24].Next) = v18;
              *((_QWORD *)&v14->Next + 1) = v14 + 23;
              if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
                ndisNblTrackerRecordEvent((struct _NET_BUFFER_LIST *)v14, 0LL, 3u, 0LL, 0);
            }
            return (PNET_BUFFER_LIST)v14;
          }
        }
      }
      return 0LL;
    }
    DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool %p wrong pool type.\n", PoolHandle);
  }
  else
  {
    DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool is NULL\n");
  }
  return 0LL;
}
