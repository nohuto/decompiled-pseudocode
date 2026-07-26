/*
 * XREFs of NdisAcquireRWLockRead @ 0x1C000E320
 * Callers:
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001D890 (ndisMDispatchReceiveNetBufferListsWithLock.c)
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
 * Callees:
 *     <none>
 */

void __stdcall NdisAcquireRWLockRead(PNDIS_RW_LOCK_EX Lock, PLOCK_STATE_EX LockState, UCHAR Flags)
{
  __int64 v3; // rax
  unsigned int *v6; // rsi
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  LockState->LockState = 0;
  LockState->Flags = Flags;
  if ( (Flags & 1) == 0 )
    LockState->OldIrql = KfRaiseIrql(2u);
  LODWORD(v3) = KeGetPcr()->Prcb.Number;
  v6 = Lock->RefCount[v3];
  ++*v6;
  _InterlockedOr(v7, 0);
  if ( !KeTestSpinLock(&Lock->WriteLock) && *v6 == 1 && Lock->Owner != KeGetCurrentThread() )
  {
    *v6 = 0;
    KeAcquireSpinLockAtDpcLevel(&Lock->WriteLock);
    ++*v6;
    KeReleaseSpinLockFromDpcLevel(&Lock->WriteLock);
  }
  LockState->LockState = 3;
}
