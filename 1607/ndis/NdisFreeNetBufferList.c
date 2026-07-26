/*
 * XREFs of NdisFreeNetBufferList @ 0x1C0006F00
 * Callers:
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0005D40 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisAllocateNetBufferList @ 0x1C0006050 (NdisAllocateNetBufferList.c)
 *     ndisReturnPeriodicReceives @ 0x1C0026F18 (ndisReturnPeriodicReceives.c)
 *     NdisFreeReassembledNetBufferList @ 0x1C004CE30 (NdisFreeReassembledNetBufferList.c)
 *     ndisXlateReturnNetBufferListToPacket @ 0x1C004D698 (ndisXlateReturnNetBufferListToPacket.c)
 *     ndisXlateSendCompleteNetBufferListToPacket @ 0x1C004D7C8 (ndisXlateSendCompleteNetBufferListToPacket.c)
 *     ndisXlateSendPacketArrayToNetBufferLists @ 0x1C004DD5C (ndisXlateSendPacketArrayToNetBufferLists.c)
 *     ?ndisFreePacketPoolHdr@@YAXPEAU_NDIS_PKT_POOL_HDR@@PEAU_NDIS_PKT_POOL@@@Z @ 0x1C0050218 (-ndisFreePacketPoolHdr@@YAXPEAU_NDIS_PKT_POOL_HDR@@PEAU_NDIS_PKT_POOL@@@Z.c)
 *     ndisDoLoopbackNetBufferList @ 0x1C0053AA0 (ndisDoLoopbackNetBufferList.c)
 *     ndisFDoLoopbackNetBufferList @ 0x1C0058484 (ndisFDoLoopbackNetBufferList.c)
 *     ?ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z @ 0x1C006568C (-ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z.c)
 *     ndisFreePeriodicReceives @ 0x1C0066010 (ndisFreePeriodicReceives.c)
 * Callees:
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C0006450 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     NdisFreeNetBufferListContext @ 0x1C0010000 (NdisFreeNetBufferListContext.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0026A20 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisFreeNetBufferList(PNET_BUFFER_LIST NetBufferList)
{
  __int64 v1; // rdx
  char *NdisPoolHandle; // r14
  _NET_BUFFER_LIST_CONTEXT *Context; // rcx
  unsigned __int64 v5; // rax
  char *v6; // rdi
  _SLIST_HEADER *v7; // rsi
  _SLIST_HEADER *v8; // rcx
  char *v9; // r14

  NdisPoolHandle = (char *)NetBufferList->NdisPoolHandle;
  Context = NetBufferList->Context;
  if ( Context && (NetBufferList->Flags & 0x400) != 0 )
    NdisFreeNetBufferListContext(NetBufferList, Context->Size - Context->Offset);
  NetBufferList->Flags &= ~0x100u;
  if ( ((unsigned __int64)NetBufferList->NetBufferListInfo[10] & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    LOBYTE(v1) = 1;
    WfpNblInfoCleanup(NetBufferList, v1);
  }
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    ndisNblTrackerRecordEvent(NetBufferList, 0LL, 4u, 0LL, 0);
  if ( ndisMaxNumberOfProcessors != 1 )
  {
    v5 = (unsigned __int64)LODWORD(NetBufferList[-1].NetBufferListInfo[27]) << 8;
    v6 = &NdisPoolHandle[v5 + 384];
    if ( !v6[216] )
      ndisPplLazyInitializeLookaside(
        (PLOOKASIDE_LIST_EX)&NdisPoolHandle[v5 + 384],
        (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(NdisPoolHandle + 128));
    if ( LODWORD(NetBufferList[-1].NetBufferListInfo[27]) == KeGetPcr()->Prcb.Number )
      v7 = (_SLIST_HEADER *)*((_QWORD *)v6 + 24);
    else
      v7 = (_SLIST_HEADER *)*((_QWORD *)v6 + 25);
    ++*((_DWORD *)v6 + 7);
    if ( ExQueryDepthSList(v7) < *((_WORD *)v6 + 8) )
    {
      v8 = v7;
LABEL_15:
      ExpInterlockedPushEntrySList(v8, (PSLIST_ENTRY)NetBufferList);
      return;
    }
    ++*((_DWORD *)v6 + 8);
  }
  v9 = NdisPoolHandle + 128;
  ++*((_DWORD *)v9 + 7);
  if ( ExQueryDepthSList((PSLIST_HEADER)v9) < *((_WORD *)v9 + 8) )
  {
    v8 = (_SLIST_HEADER *)v9;
    goto LABEL_15;
  }
  ++*((_DWORD *)v9 + 8);
  (*((void (__fastcall **)(PNET_BUFFER_LIST, char *))v9 + 7))(NetBufferList, v9);
}
