/*
 * XREFs of ACPIDebugGetIrpText @ 0x1C0004B44
 * Callers:
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C0080550 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C00806D0 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryId @ 0x1C0080960 (ACPIBusIrpQueryId.c)
 *     ACPIFilterIrpStartDevice @ 0x1C0082BE0 (ACPIFilterIrpStartDevice.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1C0083BD0 (ACPIRootIrpQueryDeviceRelations.c)
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1C00847F0 (ACPIFilterIrpFilterResourceRequirements.c)
 *     ACPIRootIrpQueryInterface @ 0x1C0084D80 (ACPIRootIrpQueryInterface.c)
 *     ACPIBusIrpQueryResources @ 0x1C0085200 (ACPIBusIrpQueryResources.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1C00855D0 (ACPIRootIrpQueryBusRelations.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C00857B0 (ACPIBusIrpQueryResourceRequirements.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0087560 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C0087EF0 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C008E800 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIInternalDeviceQueryDeviceRelations @ 0x1C008ED00 (ACPIInternalDeviceQueryDeviceRelations.c)
 *     ACPIFilterIrpStartDeviceWorker @ 0x1C008F4A0 (ACPIFilterIrpStartDeviceWorker.c)
 *     ACPIRootIrpQueryCapabilities @ 0x1C008F7D0 (ACPIRootIrpQueryCapabilities.c)
 *     ACPIFilterIrpDeviceUsageNotification @ 0x1C008FAB0 (ACPIFilterIrpDeviceUsageNotification.c)
 *     ACPIBusIrpDeviceUsageNotification @ 0x1C0090000 (ACPIBusIrpDeviceUsageNotification.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C0090230 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C0098150 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryDeviceRelations @ 0x1C00983E0 (ACPIDockIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryID @ 0x1C00987C0 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpQueryInterface @ 0x1C0098AC0 (ACPIDockIrpQueryInterface.c)
 *     ACPIDockIrpQueryPnpDeviceState @ 0x1C0098C60 (ACPIDockIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C0099D80 (ACPIBusAndFilterIrpEject.c)
 *     ACPIBusAndFilterIrpSetLock @ 0x1C009A170 (ACPIBusAndFilterIrpSetLock.c)
 *     ACPIBusIrpCancelRemoveOrStopDevice @ 0x1C009A240 (ACPIBusIrpCancelRemoveOrStopDevice.c)
 *     ACPIBusIrpQueryRemoveOrStopDevice @ 0x1C009A4A0 (ACPIBusIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpStopDevice @ 0x1C009A600 (ACPIBusIrpStopDevice.c)
 *     ACPIFanStartDevice @ 0x1C009BAF0 (ACPIFanStartDevice.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C009BDB0 (ACPIFilterIrpQueryIdCompletion.c)
 *     ACPIFilterIrpStopDevice @ 0x1C009BFA0 (ACPIFilterIrpStopDevice.c)
 *     ACPIFilterIrpSurpriseRemoval @ 0x1C009C120 (ACPIFilterIrpSurpriseRemoval.c)
 *     ACPIRootIrpCancelRemoveOrStopDevice @ 0x1C00A0690 (ACPIRootIrpCancelRemoveOrStopDevice.c)
 *     ACPIRootIrpQueryRemoveOrStopDevice @ 0x1C00A07B0 (ACPIRootIrpQueryRemoveOrStopDevice.c)
 *     ACPIRootIrpStopDevice @ 0x1C00A08E0 (ACPIRootIrpStopDevice.c)
 * Callees:
 *     <none>
 */

char *__fastcall ACPIDebugGetIrpText(__int64 a1, unsigned __int8 a2)
{
  int v2; // ecx

  v2 = 26;
  if ( a2 < 0x1Au )
    v2 = a2;
  return ACPIDispatchPnpTableNames[v2];
}
