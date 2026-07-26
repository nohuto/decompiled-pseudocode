/*
 * XREFs of NdisReleaseRWLock @ 0x1C00046F0
 * Callers:
 *     ndisConfigurePeriodicReceives @ 0x1C0004588 (ndisConfigurePeriodicReceives.c)
 *     XRemoveBindingFromLists @ 0x1C0014548 (XRemoveBindingFromLists.c)
 *     ndisPostSetOpenPacketFilter @ 0x1C0019C20 (ndisPostSetOpenPacketFilter.c)
 *     XNoteFilterOpenAdapter @ 0x1C001AA84 (XNoteFilterOpenAdapter.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C0021200 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C004A588 (ndisBindUnbindPeriodicReceives.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C004D6E0 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C004D930 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C004DB00 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C004E030 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C004E380 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ndisMIsLoopbackNetBuffer @ 0x1C0050448 (ndisMIsLoopbackNetBuffer.c)
 *     ndisMIsLoopbackPacket @ 0x1C0050698 (ndisMIsLoopbackPacket.c)
 *     ndisFIsLoopbackNetBuffer @ 0x1C0053F94 (ndisFIsLoopbackNetBuffer.c)
 *     EthFilterDprIndicateReceive @ 0x1C005CCA0 (EthFilterDprIndicateReceive.c)
 *     EthFilterDprIndicateReceiveComplete @ 0x1C005D0E0 (EthFilterDprIndicateReceiveComplete.c)
 *     EthQueryGlobalFilterAddresses @ 0x1C005D1C0 (EthQueryGlobalFilterAddresses.c)
 *     EthQueryOpenFilterAddresses @ 0x1C005D250 (EthQueryOpenFilterAddresses.c)
 *     ethFilterDprIndicateReceivePacket @ 0x1C005D320 (ethFilterDprIndicateReceivePacket.c)
 *     ndisMIndicatePacket @ 0x1C005E0B0 (ndisMIndicatePacket.c)
 *     ndisPeriodicReceivesWorker @ 0x1C0062D40 (ndisPeriodicReceivesWorker.c)
 *     ndisPnPNotifyAllTransports @ 0x1C00E0B98 (ndisPnPNotifyAllTransports.c)
 *     ndisCoIndicateStatusInternal @ 0x1C00F37F0 (ndisCoIndicateStatusInternal.c)
 *     NdisMCoReceiveComplete @ 0x1C00F4070 (NdisMCoReceiveComplete.c)
 *     ndisUnloadPeriodicReceives @ 0x1C01005EC (ndisUnloadPeriodicReceives.c)
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
