/*
 * XREFs of NdisAcquireRWLockRead @ 0x1C000AB30
 * Callers:
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001C1B0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
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
