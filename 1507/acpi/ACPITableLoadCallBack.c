/*
 * XREFs of ACPITableLoadCallBack @ 0x1C0022480
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceInternalSynchronizeRequest @ 0x1C000A3E8 (ACPIDeviceInternalSynchronizeRequest.c)
 *     ACPIPowerScheduleDpc @ 0x1C000AE54 (ACPIPowerScheduleDpc.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C0014474 (ACPIGpeBuildWakeMasks.c)
 *     ACPIInternalMoveList @ 0x1C001BDCC (ACPIInternalMoveList.c)
 *     Simulator_RefreshTree @ 0x1C0043234 (Simulator_RefreshTree.c)
 */

void __fastcall ACPITableLoadCallBack(int a1, char a2)
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
    ACPIInternalMoveList(&AcpiPowerDelayedQueueList, (__int64)&AcpiPowerQueueList);
    ACPIPowerScheduleDpc();
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
  if ( !a2 )
  {
    if ( (int)ACPIDeviceInternalSynchronizeRequest(a1, (int)ACPITableLoadNotifyPnp, 0) < 0 )
      KeBugCheckEx(0xA3u, 1uLL, 0x11009EuLL, 0LL, 0LL);
    if ( g_SimulatorCallbackObject )
      Simulator_RefreshTree();
  }
}
