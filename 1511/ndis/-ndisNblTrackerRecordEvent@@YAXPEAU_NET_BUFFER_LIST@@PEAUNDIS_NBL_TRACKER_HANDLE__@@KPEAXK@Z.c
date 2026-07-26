/*
 * XREFs of ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00266C8
 * Callers:
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C00029D0 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C00031E0 (ndisMSendCompleteNetBufferListsInternal.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C00040C0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisFreeCloneNetBufferList @ 0x1C0004280 (NdisFreeCloneNetBufferList.c)
 *     NdisSendNetBufferLists @ 0x1C000B5B0 (NdisSendNetBufferLists.c)
 *     NdisAllocateCloneNetBufferList @ 0x1C000BDF0 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C000C460 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisAllocateNetBufferList @ 0x1C000C9D0 (NdisAllocateNetBufferList.c)
 *     NdisReturnNetBufferLists @ 0x1C000CF90 (NdisReturnNetBufferLists.c)
 *     NdisFreeNetBufferList @ 0x1C000DC40 (NdisFreeNetBufferList.c)
 *     NdisFSendNetBufferListsComplete @ 0x1C000DE60 (NdisFSendNetBufferListsComplete.c)
 *     ndisMSendNBLToMiniport @ 0x1C000E0D0 (ndisMSendNBLToMiniport.c)
 *     NdisFSendNetBufferLists @ 0x1C000E5E0 (NdisFSendNetBufferLists.c)
 *     NdisFReturnNetBufferLists @ 0x1C000E8D0 (NdisFReturnNetBufferLists.c)
 *     ndisFilterIndicateReceiveNetBufferLists @ 0x1C000EB20 (ndisFilterIndicateReceiveNetBufferLists.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C0014630 (NdisAllocateFragmentNetBufferList.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C0014FA0 (NdisFreeFragmentNetBufferList.c)
 *     NdisAllocateReassembledNetBufferList @ 0x1C0048440 (NdisAllocateReassembledNetBufferList.c)
 *     ndisXlateRecvNetBufferListsToPacketArray @ 0x1C0048C50 (ndisXlateRecvNetBufferListsToPacketArray.c)
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C0048DF8 (ndisXlateRecvPacketArrayToNetBufferLists.c)
 *     ndisXlateReturnNetBufferListToPacket @ 0x1C00490C4 (ndisXlateReturnNetBufferListToPacket.c)
 *     ndisXlateReturnPacketToNetBufferList @ 0x1C0049164 (ndisXlateReturnPacketToNetBufferList.c)
 *     ndisXlateSendCompleteNetBufferListToPacket @ 0x1C00491F4 (ndisXlateSendCompleteNetBufferListToPacket.c)
 *     ndisXlateSendCompletePacketToNetBufferList @ 0x1C004927C (ndisXlateSendCompletePacketToNetBufferList.c)
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C0049378 (ndisXlateSendNetBufferListsToPacketArray.c)
 *     ndisXlateSendPacketArrayToNetBufferLists @ 0x1C004978C (ndisXlateSendPacketArrayToNetBufferLists.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C006006C (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 *     NdisNblTrackerRecordEvent @ 0x1C0060170 (NdisNblTrackerRecordEvent.c)
 *     ndisReplaySendNbls @ 0x1C0066B90 (ndisReplaySendNbls.c)
 * Callees:
 *     ndisReleaseStackTrace @ 0x1C0011C38 (ndisReleaseStackTrace.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     ?ndisIsPossibleSmuggling@@YAET_NDIS_NBL_TRACKER_OWNER@@0PEAX@Z @ 0x1C005FDA0 (-ndisIsPossibleSmuggling@@YAET_NDIS_NBL_TRACKER_OWNER@@0PEAX@Z.c)
 *     ?ndisNblTrackerPrintComponentNameToDebugger@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C005FE68 (-ndisNblTrackerPrintComponentNameToDebugger@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ndisCaptureStackTrace @ 0x1C0065C68 (ndisCaptureStackTrace.c)
 */

void __fastcall ndisNblTrackerRecordEvent(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned int v7; // ebx
  int v10; // r9d
  bool v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  struct _NET_BUFFER_LIST *v15; // r10
  struct _NET_BUFFER_LIST **v16; // r10
  unsigned int v17; // r11d
  char v18; // r12
  unsigned int v19; // esi
  unsigned int v20; // r14d
  unsigned int v21; // r8d
  __int64 v22; // r13
  unsigned int v23; // ebx
  int v24; // ecx
  ULONG_PTR v25; // rcx
  unsigned int Number; // edx
  int v27; // edx
  unsigned int v28; // ecx
  unsigned __int64 *v29; // r10
  unsigned int v30; // r9d
  unsigned __int64 *v31; // r11
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  __int64 v34; // r11
  struct _NET_BUFFER_LIST *v35; // r13
  unsigned __int64 v36; // r14
  unsigned __int64 v37; // r12
  bool v38; // [rsp+20h] [rbp-50h]
  unsigned int v39; // [rsp+24h] [rbp-4Ch]
  int v40; // [rsp+28h] [rbp-48h]
  struct _NET_BUFFER_LIST *v43; // [rsp+40h] [rbp-30h]
  unsigned __int64 v44; // [rsp+48h] [rbp-28h]
  __int64 v45; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v46; // [rsp+58h] [rbp-18h]
  __int64 v47; // [rsp+60h] [rbp-10h]

  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v7 = 0;
  v43 = ndisBreakNbl;
  v10 = 0;
  v40 = 0;
  v11 = a3 >= 0x1F;
  v12 = ndisMaxNumberOfProcessors + 1;
  v38 = a3 >= 0x1F;
  v13 = ndisNblTrackerHistorySize % (unsigned int)v12;
  v14 = a2 & 0xFFFFFFFFFFFFFFFDuLL;
  v44 = a2 | 0x8000000000000002uLL;
  v15 = (struct _NET_BUFFER_LIST *)a1;
  if ( a1 )
  {
    do
    {
      ++v7;
      if ( (unsigned __int8)ndisIsPossibleSmuggling(v14, v15->NetBufferListInfo[26], v15->SourceHandle) )
        ++v7;
      if ( v7 > v17 )
      {
        ndisNblTrackerHistoryItemsDropped = 1;
        return;
      }
      if ( !v11 )
        break;
      v15 = *v16;
    }
    while ( v15 );
    v10 = 0;
  }
  if ( (a4 & 0xFFFFFFFFFFFFF000uLL) != 0 )
  {
    v18 = 0;
    v19 = 16;
  }
  else
  {
    v18 = 1;
    v19 = 8;
  }
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogWithStack )
  {
    v10 = ndisCaptureStackTrace(v12, v13);
    v40 = v10;
  }
  v39 = v19 + 8 * v7;
  v20 = v39 >> 3;
  v21 = ndisNblTrackerHistorySize;
  v22 = _InterlockedExchangeAdd((volatile signed __int32 *)&ndisNblTrackerHistoryNextIndex, v39 >> 3)
      % ndisNblTrackerHistorySize;
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogWithStack )
  {
    v23 = 0;
    if ( v20 )
    {
      do
      {
        v24 = HIDWORD(ndisNblTrackerHistoryBuffer[(v23 + (unsigned int)v22) % v21]);
        if ( v24 >= 0 )
        {
          v25 = v24 & 0x3FFFFFF;
          if ( (_DWORD)v25 )
          {
            ndisReleaseStackTrace(v25);
            v21 = ndisNblTrackerHistorySize;
          }
        }
        ++v23;
      }
      while ( v23 < v20 );
      v10 = v40;
    }
  }
  Number = KeGetPcr()->Prcb.Number;
  LOBYTE(v45) = a3;
  v27 = v45 & 0xFFFFF | (Number << 20);
  LODWORD(v45) = v27;
  v28 = (v10 ^ HIDWORD(v45) ^ (HIDWORD(v45) ^ (a5 << 26)) & 0x3C000000) & 0x3FFFFFF ^ HIDWORD(v45) ^ (HIDWORD(v45) ^ (a5 << 26)) & 0x3C000000;
  if ( v18 )
  {
    HIDWORD(v45) = v28 | 0x40000000;
    LODWORD(v45) = (v27 ^ ((_DWORD)a4 << 8)) & 0xFFF00 ^ v27;
  }
  else
  {
    HIDWORD(v45) = v28 & 0xBFFFFFFF;
    v46 = a4 | 0x8000000000000000uLL;
  }
  v29 = ndisNblTrackerHistoryBuffer;
  v30 = 0;
  if ( v19 >> 3 )
  {
    v31 = (unsigned __int64 *)&v45;
    do
    {
      v32 = (v30 + (unsigned int)v22) % ndisNblTrackerHistorySize;
      v33 = *v31;
      ++v30;
      ++v31;
      v29[v32] = v33;
    }
    while ( v30 < v19 >> 3 );
  }
  if ( v19 < v39 )
  {
    v34 = v22;
    do
    {
      v35 = 0LL;
      v36 = a1;
      v37 = (v34 + ((unsigned __int64)v19 >> 3)) % ndisNblTrackerHistorySize;
      if ( a1 )
      {
        if ( (struct _NET_BUFFER_LIST *)a1 == v43 )
        {
          DbgPrint("Break on NBL %p (ndis!ndisBreakNbl)\n", v43);
          if ( a4 )
          {
            if ( a3 >= 0x1F )
            {
              DbgPrint("NBL will be given to: ");
              ndisNblTrackerPrintComponentNameToDebugger((struct _NDIS_NBL_TRACKER *)(a4 & 0xFFFFFFFFFFFFFFF8uLL));
            }
          }
          __debugbreak();
        }
        if ( !v38 || (v35 = *(struct _NET_BUFFER_LIST **)a1) == 0LL )
          v36 = a1 | 1;
        if ( *(_DWORD *)(a1 + 140) )
          v36 |= 4uLL;
        if ( (unsigned __int8)ndisIsPossibleSmuggling(v14, *(_QWORD *)(a1 + 352), *(_QWORD *)(a1 + 120)) )
        {
          v19 += 8;
          if ( v19 >= v39 )
          {
            v29[(unsigned int)v37] = 0LL;
            return;
          }
          v29[(unsigned int)v37] = v44;
          LODWORD(v37) = (v34 + ((unsigned __int64)v19 >> 3)) % ndisNblTrackerHistorySize;
        }
      }
      v19 += 8;
      a1 = (unsigned __int64)v35;
      v29[(unsigned int)v37] = v36;
    }
    while ( v19 < v39 );
  }
}
