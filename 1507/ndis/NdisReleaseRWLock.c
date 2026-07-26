/*
 * XREFs of NdisReleaseRWLock @ 0x1C0008FC0
 * Callers:
 *     ndisConfigurePeriodicReceives @ 0x1C0008E54 (ndisConfigurePeriodicReceives.c)
 *     XRemoveBindingFromLists @ 0x1C00109F8 (XRemoveBindingFromLists.c)
 *     ndisPostSetOpenPacketFilter @ 0x1C0018870 (ndisPostSetOpenPacketFilter.c)
 *     XNoteFilterOpenAdapter @ 0x1C0018DDC (XNoteFilterOpenAdapter.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001C1B0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C0049CE8 (ndisBindUnbindPeriodicReceives.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C004D110 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C004D360 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C004D530 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C004DA60 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C004DDB0 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ndisMIsLoopbackNetBuffer @ 0x1C004FEA8 (ndisMIsLoopbackNetBuffer.c)
 *     ndisMIsLoopbackPacket @ 0x1C00500F8 (ndisMIsLoopbackPacket.c)
 *     ndisFIsLoopbackNetBuffer @ 0x1C0053BA4 (ndisFIsLoopbackNetBuffer.c)
 *     EthFilterDprIndicateReceive @ 0x1C005D340 (EthFilterDprIndicateReceive.c)
 *     EthFilterDprIndicateReceiveComplete @ 0x1C005D780 (EthFilterDprIndicateReceiveComplete.c)
 *     EthQueryGlobalFilterAddresses @ 0x1C005D860 (EthQueryGlobalFilterAddresses.c)
 *     EthQueryOpenFilterAddresses @ 0x1C005D8F0 (EthQueryOpenFilterAddresses.c)
 *     ethFilterDprIndicateReceivePacket @ 0x1C005D9C0 (ethFilterDprIndicateReceivePacket.c)
 *     ndisMIndicatePacket @ 0x1C005E750 (ndisMIndicatePacket.c)
 *     ndisPeriodicReceivesWorker @ 0x1C0064280 (ndisPeriodicReceivesWorker.c)
 *     ndisPnPNotifyAllTransports @ 0x1C00E6058 (ndisPnPNotifyAllTransports.c)
 *     ndisCoIndicateStatusInternal @ 0x1C00F97F0 (ndisCoIndicateStatusInternal.c)
 *     NdisMCoReceiveComplete @ 0x1C00FA070 (NdisMCoReceiveComplete.c)
 *     ndisUnloadPeriodicReceives @ 0x1C01065CC (ndisUnloadPeriodicReceives.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisReleaseRWLock(PNDIS_RW_LOCK_EX Lock, PLOCK_STATE_EX LockState)
{
  __int64 v2; // rax
  bool v3; // zf
  unsigned __int64 *p_WriteLock; // rcx

  v2 = LockState->LockState;
  if ( (_BYTE)v2 == 3 )
  {
    LODWORD(v2) = KeGetPcr()->Prcb.Number;
    --*Lock->RefCount[v2];
    v3 = (LockState->Flags & 1) == 0;
    LockState->LockState = -1;
    if ( v3 && LockState->OldIrql != 2 )
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
