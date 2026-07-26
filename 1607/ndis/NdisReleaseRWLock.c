/*
 * XREFs of NdisReleaseRWLock @ 0x1C000DF90
 * Callers:
 *     XNoteFilterOpenAdapter @ 0x1C0018B60 (XNoteFilterOpenAdapter.c)
 *     ndisPostSetOpenPacketFilter @ 0x1C001989C (ndisPostSetOpenPacketFilter.c)
 *     ndisConfigurePeriodicReceives @ 0x1C001C1A4 (ndisConfigurePeriodicReceives.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001D890 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     XRemoveBindingFromLists @ 0x1C001F4BC (XRemoveBindingFromLists.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C004EF18 (ndisBindUnbindPeriodicReceives.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0052130 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0052380 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0052550 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0052A80 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0052DD0 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ndisMIsLoopbackNetBuffer @ 0x1C0054EA8 (ndisMIsLoopbackNetBuffer.c)
 *     ndisMIsLoopbackPacket @ 0x1C00550E4 (ndisMIsLoopbackPacket.c)
 *     ndisFIsLoopbackNetBuffer @ 0x1C00589C4 (ndisFIsLoopbackNetBuffer.c)
 *     EthFilterDprIndicateReceive @ 0x1C0060CA0 (EthFilterDprIndicateReceive.c)
 *     EthFilterDprIndicateReceiveComplete @ 0x1C00610E0 (EthFilterDprIndicateReceiveComplete.c)
 *     EthQueryGlobalFilterAddresses @ 0x1C00611C0 (EthQueryGlobalFilterAddresses.c)
 *     EthQueryOpenFilterAddresses @ 0x1C0061250 (EthQueryOpenFilterAddresses.c)
 *     ethFilterDprIndicateReceivePacket @ 0x1C0061320 (ethFilterDprIndicateReceivePacket.c)
 *     ndisMIndicatePacket @ 0x1C00620B0 (ndisMIndicatePacket.c)
 *     ndisPeriodicReceivesWorker @ 0x1C0067110 (ndisPeriodicReceivesWorker.c)
 *     ndisPnPNotifyAllTransports @ 0x1C00E90B8 (ndisPnPNotifyAllTransports.c)
 *     ndisCoIndicateStatusInternal @ 0x1C00F97E0 (ndisCoIndicateStatusInternal.c)
 *     NdisMCoReceiveComplete @ 0x1C00FA060 (NdisMCoReceiveComplete.c)
 *     ndisUnloadPeriodicReceives @ 0x1C010650C (ndisUnloadPeriodicReceives.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisReleaseRWLock(PNDIS_RW_LOCK_EX Lock, PLOCK_STATE_EX LockState)
{
  __int64 v2; // rax
  unsigned __int64 *p_WriteLock; // rcx
  bool v4; // zf

  v2 = LockState->LockState;
  if ( (_BYTE)v2 == 3 )
  {
    LODWORD(v2) = KeGetPcr()->Prcb.Number;
    --*Lock->RefCount[v2];
    v4 = (LockState->Flags & 1) == 0;
    LockState->LockState = -1;
    if ( v4 && LockState->OldIrql != 2 )
      KeLowerIrql(LockState->OldIrql);
  }
  else if ( (_BYTE)v2 == 4 )
  {
    LockState->LockState = -1;
    Lock->Owner = 0LL;
    p_WriteLock = &Lock->WriteLock;
    if ( (LockState->Flags & 1) != 0 )
      KeReleaseSpinLockFromDpcLevel(p_WriteLock);
    else
      KeReleaseSpinLock(p_WriteLock, LockState->OldIrql);
  }
}
