/*
 * XREFs of ndisBugCheckEx @ 0x1C004F098
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0007260 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0007D40 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0008B30 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0009A10 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisIfDereferenceMiniport @ 0x1C0009E74 (ndisIfDereferenceMiniport.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C0009F30 (ndisReferenceMiniportByHandleForNsi.c)
 *     ndisDereferenceMiniportForNsi @ 0x1C000A3BC (ndisDereferenceMiniportForNsi.c)
 *     ndisQueueOidRequest @ 0x1C000A860 (ndisQueueOidRequest.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C000B670 (ndisFOidRequestCompleteInternal.c)
 *     ndisOidRequestComplete @ 0x1C000BB40 (ndisOidRequestComplete.c)
 *     NdisDereferenceWithTag @ 0x1C000CE60 (NdisDereferenceWithTag.c)
 *     ndisQueuedCheckForHang @ 0x1C000F020 (ndisQueuedCheckForHang.c)
 *     ndisMTimerDpcX @ 0x1C000F400 (ndisMTimerDpcX.c)
 *     NdisMRestartComplete @ 0x1C001A2B0 (NdisMRestartComplete.c)
 *     NdisIfAddIfStackEntry @ 0x1C001AC00 (NdisIfAddIfStackEntry.c)
 *     NdisMPauseComplete @ 0x1C001AFE0 (NdisMPauseComplete.c)
 *     ndisDoOidRequests @ 0x1C001B980 (ndisDoOidRequests.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C0021260 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisMTimerObjectDpc @ 0x1C00217D0 (ndisMTimerObjectDpc.c)
 *     ndisOidPostRcvFilterClearFilter @ 0x1C003D050 (ndisOidPostRcvFilterClearFilter.c)
 *     NdisIfDeregisterProvider @ 0x1C0042370 (NdisIfDeregisterProvider.c)
 *     ndisBindRequest @ 0x1C00628E8 (ndisBindRequest.c)
 *     ?NdisPDReportECIteration@@YAXPEAUPD_EC_HANDLE__@@E@Z @ 0x1C0070480 (-NdisPDReportECIteration@@YAXPEAUPD_EC_HANDLE__@@E@Z.c)
 *     ?NdisPDSetupBufferFromMemoryHandle@@YAXPEAU_PD_BUFFER@@PEAUPD_MEMORY_HANDLE__@@KK@Z @ 0x1C00705C0 (-NdisPDSetupBufferFromMemoryHandle@@YAXPEAU_PD_BUFFER@@PEAUPD_MEMORY_HANDLE__@@KK@Z.c)
 *     ?NdisPDSetupBufferFromPdBuffer@@YAXPEAU_PD_BUFFER@@PEBU1@KK@Z @ 0x1C0070620 (-NdisPDSetupBufferFromPdBuffer@@YAXPEAU_PD_BUFFER@@PEBU1@KK@Z.c)
 *     ?ndisTriggerPDDrainNotification@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C0070EB4 (-ndisTriggerPDDrainNotification@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 *     NdisMTriggerPDDrainNotification @ 0x1C00713C0 (NdisMTriggerPDDrainNotification.c)
 *     ndisMIndicatePDConfigChange @ 0x1C0071D64 (ndisMIndicatePDConfigChange.c)
 *     ndisOidPostPDOpenProvider @ 0x1C0071F30 (ndisOidPostPDOpenProvider.c)
 *     ?NdisPDAssociateNotificationEvent@@YAXPEAU_NDIS_PD_QUEUE@@PEAU_KEVENT@@@Z @ 0x1C00DDF50 (-NdisPDAssociateNotificationEvent@@YAXPEAU_NDIS_PD_QUEUE@@PEAU_KEVENT@@@Z.c)
 *     ?NdisPDDeleteBMGroup@@YAXPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@@Z @ 0x1C00DE460 (-NdisPDDeleteBMGroup@@YAXPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@@Z.c)
 *     ?NdisPDPIRequestDrainNotification@@YAXPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C00DF6D0 (-NdisPDPIRequestDrainNotification@@YAXPEAU_NDIS_PD_QUEUE@@@Z.c)
 *     ?NdisPDRemoveProviderFromBMGroup@@YAXPEAUNDIS_PD_PROVIDER_HANDLE__@@@Z @ 0x1C00DFAC0 (-NdisPDRemoveProviderFromBMGroup@@YAXPEAUNDIS_PD_PROVIDER_HANDLE__@@@Z.c)
 *     ?NdisPDStopEC@@YAXPEAUPD_EC_HANDLE__@@@Z @ 0x1C00DFD50 (-NdisPDStopEC@@YAXPEAUPD_EC_HANDLE__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn ndisBugCheckEx(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x7Cu, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
