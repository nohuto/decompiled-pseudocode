/*
 * XREFs of ndisVBusNmrInitializeClient @ 0x1C0103A64
 * Callers:
 *     DriverEntry @ 0x1C01023B0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS ndisVBusNmrInitializeClient()
{
  byte_1C0085248 = 0;
  ExInitializeRundownProtection(&RunRef);
  ExWaitForRundownProtectionRelease(&RunRef);
  WorkItem.Parameter = 0LL;
  WorkItem.WorkerRoutine = ndisVBusDetachComplete;
  WorkItem.List.Flink = 0LL;
  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (_LIST_ENTRY *)ndisVBusNmrClientAttachProvider;
  LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) = 4718592;
  *(_QWORD *)&WPP_MAIN_CB.SectorSize = ndisVBusNmrClientDetachProvider;
  LODWORD(WPP_MAIN_CB.Reserved) = 2621441;
  WPP_MAIN_CB.DeviceObjectExtension = (_DEVOBJ_EXTENSION *)ndisFakeMiniportCancelSendPackets;
  *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) = &NPI_NDIS_VBUS_INTERFACE_ID;
  qword_1C0085210 = (__int64)&NPI_MS_NDIS_MODULEID;
  dword_1C0085218 = 0;
  qword_1C0085220 = 0LL;
  return NmrRegisterClient(
           (PNPI_CLIENT_CHARACTERISTICS)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead,
           0LL,
           &qword_1C0085228);
}
