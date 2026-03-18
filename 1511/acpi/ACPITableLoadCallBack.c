/*
 * XREFs of ACPITableLoadCallBack @ 0x1C0022C00
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceInternalSynchronizeRequest @ 0x1C000A388 (ACPIDeviceInternalSynchronizeRequest.c)
 *     ACPIPowerScheduleDpc @ 0x1C000AF24 (ACPIPowerScheduleDpc.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C00153A4 (ACPIGpeBuildWakeMasks.c)
 *     ACPIInternalMoveList @ 0x1C001C65C (ACPIInternalMoveList.c)
 *     Simulator_RefreshTree @ 0x1C0042C54 (Simulator_RefreshTree.c)
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
