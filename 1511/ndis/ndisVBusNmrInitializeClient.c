/*
 * XREFs of ndisVBusNmrInitializeClient @ 0x1C00FD8C8
 * Callers:
 *     DriverEntry @ 0x1C00FC3C0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS ndisVBusNmrInitializeClient()
{
  *((_BYTE *)&WPP_MAIN_CB.Reserved + 8) = 0;
  ExInitializeRundownProtection(&RunRef);
  ExWaitForRundownProtectionRelease(&RunRef);
  WorkItem.Parameter = 0LL;
  WorkItem.WorkerRoutine = ndisVBusDetachComplete;
  WorkItem.List.Flink = 0LL;
  WPP_MAIN_CB.Dpc.DeferredContext = ndisVBusNmrClientAttachProvider;
  LODWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) = 4718592;
  WPP_MAIN_CB.Dpc.SystemArgument1 = ndisVBusNmrClientDetachProvider;
  LODWORD(WPP_MAIN_CB.Dpc.DpcData) = 2621441;
  WPP_MAIN_CB.Dpc.SystemArgument2 = ndisFakeMiniportCancelSendPackets;
  *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount = &NPI_NDIS_VBUS_INTERFACE_ID;
  WPP_MAIN_CB.SecurityDescriptor = (void *)&NPI_MS_NDIS_MODULEID;
  WPP_MAIN_CB.DeviceLock.Header.LockNV = 0;
  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = 0LL;
  return NmrRegisterClient(
           (PNPI_CLIENT_CHARACTERISTICS)&WPP_MAIN_CB.Dpc.DeferredRoutine,
           0LL,
           (PHANDLE)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink);
}
