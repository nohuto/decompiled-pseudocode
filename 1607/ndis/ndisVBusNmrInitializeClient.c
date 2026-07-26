/*
 * XREFs of ndisVBusNmrInitializeClient @ 0x1C0103E30
 * Callers:
 *     DriverEntry @ 0x1C01027E0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS ndisVBusNmrInitializeClient()
{
  byte_1C00890D8 = 0;
  ExInitializeRundownProtection(&RunRef);
  ExWaitForRundownProtectionRelease(&RunRef);
  WorkItem.Parameter = 0LL;
  WorkItem.WorkerRoutine = ndisVBusDetachComplete;
  WorkItem.List.Flink = 0LL;
  qword_1C0089078 = (__int64)ndisVBusNmrClientAttachProvider;
  ndisVBus = 4718592;
  qword_1C0089080 = (__int64)ndisVBusNmrClientDetachProvider;
  dword_1C0089090 = 2621441;
  qword_1C0089088 = (__int64)ndisFakeMiniportCancelSendPackets;
  qword_1C0089098 = (__int64)&NPI_NDIS_VBUS_INTERFACE_ID;
  qword_1C00890A0 = (__int64)&NPI_MS_NDIS_MODULEID;
  dword_1C00890A8 = 0;
  qword_1C00890B0 = 0LL;
  return NmrRegisterClient((PNPI_CLIENT_CHARACTERISTICS)&ndisVBus, 0LL, &qword_1C00890B8);
}
