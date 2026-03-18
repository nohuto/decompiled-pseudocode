/*
 * XREFs of ACPITableLoadCallBack @ 0x1C0029CB0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceInternalSynchronizeRequest @ 0x1C000E51C (ACPIDeviceInternalSynchronizeRequest.c)
 *     ACPIPowerScheduleDpc @ 0x1C0010384 (ACPIPowerScheduleDpc.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C001E8A0 (ACPIGpeBuildWakeMasks.c)
 *     ACPIInternalMoveList @ 0x1C002AC40 (ACPIInternalMoveList.c)
 *     Simulator_RefreshTree @ 0x1C005A324 (Simulator_RefreshTree.c)
 */

void __fastcall ACPITableLoadCallBack(_QWORD *a1, char a2)
{
  if ( !*((_BYTE *)AcpiInformation + 133) )
  {
    KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    ACPIGpeBuildWakeMasks(RootDeviceExtension);
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
    KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
  }
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
  if ( (__int64 *)AcpiPowerDelayedQueueList != &AcpiPowerDelayedQueueList )
  {
    ACPIInternalMoveList(&AcpiPowerDelayedQueueList, &AcpiPowerQueueList);
    ACPIPowerScheduleDpc();
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
  if ( !a2 )
  {
    if ( (int)ACPIDeviceInternalSynchronizeRequest(a1, (int)ACPITableLoadNotifyPnp, 0) < 0 )
      KeBugCheckEx(0xA3u, 1uLL, 0x11009FuLL, 0LL, 0LL);
    if ( g_SimulatorCallbackObject )
      Simulator_RefreshTree();
  }
}
