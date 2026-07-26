/*
 * XREFs of ndisBugCheckEx @ 0x1C0049E68
 * Callers:
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C0001000 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisDoOidRequests @ 0x1C0002EF0 (ndisDoOidRequests.c)
 *     ndisDereferenceWithTag @ 0x1C00030DC (ndisDereferenceWithTag.c)
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisIfDereferenceMiniport @ 0x1C0003420 (ndisIfDereferenceMiniport.c)
 *     ndisDereferenceMiniportForNsi @ 0x1C00034D8 (ndisDereferenceMiniportForNsi.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0003870 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0004170 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C0004BD0 (ndisFOidRequestCompleteInternal.c)
 *     ndisMTimerDpcX @ 0x1C0004ED0 (ndisMTimerDpcX.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C0005060 (ndisReferenceMiniportByHandleForNsi.c)
 *     ndisQueueOidRequest @ 0x1C0005360 (ndisQueueOidRequest.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0005A90 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0006530 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisOidRequestComplete @ 0x1C0006CB0 (ndisOidRequestComplete.c)
 *     ndisQueuedCheckForHang @ 0x1C000D360 (ndisQueuedCheckForHang.c)
 *     ndisIndicateStatusInternal @ 0x1C00152FC (ndisIndicateStatusInternal.c)
 *     NdisMRestartComplete @ 0x1C0017830 (NdisMRestartComplete.c)
 *     NdisIfAddIfStackEntry @ 0x1C001A910 (NdisIfAddIfStackEntry.c)
 *     NdisMPauseComplete @ 0x1C001EF10 (NdisMPauseComplete.c)
 *     ndisMTimerObjectDpc @ 0x1C0021640 (ndisMTimerObjectDpc.c)
 *     ndisOidPostRcvFilterClearFilter @ 0x1C00383E0 (ndisOidPostRcvFilterClearFilter.c)
 *     NdisIfDeregisterProvider @ 0x1C003D670 (NdisIfDeregisterProvider.c)
 *     ?ndisCheckOidBufferIntegrity@@YAXPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_OBJECT_HEADER@@@Z @ 0x1C003EA70 (-ndisCheckOidBufferIntegrity@@YAXPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ndisBindRequest @ 0x1C005EFB0 (ndisBindRequest.c)
 *     ?NdisPDReportECIteration@@YAXPEAUPD_EC_HANDLE__@@E@Z @ 0x1C006C730 (-NdisPDReportECIteration@@YAXPEAUPD_EC_HANDLE__@@E@Z.c)
 *     ?NdisPDSetupBufferFromMemoryHandle@@YAXPEAU_PD_BUFFER@@PEAUPD_MEMORY_HANDLE__@@KK@Z @ 0x1C006C860 (-NdisPDSetupBufferFromMemoryHandle@@YAXPEAU_PD_BUFFER@@PEAUPD_MEMORY_HANDLE__@@KK@Z.c)
 *     ?NdisPDSetupBufferFromPdBuffer@@YAXPEAU_PD_BUFFER@@PEBU1@KK@Z @ 0x1C006C8C0 (-NdisPDSetupBufferFromPdBuffer@@YAXPEAU_PD_BUFFER@@PEBU1@KK@Z.c)
 *     ?ndisTriggerPDDrainNotification@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C006CDE8 (-ndisTriggerPDDrainNotification@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 *     NdisMTriggerPDDrainNotification @ 0x1C006D2F0 (NdisMTriggerPDDrainNotification.c)
 *     ndisMIndicatePDConfigChange @ 0x1C006DD70 (ndisMIndicatePDConfigChange.c)
 *     ndisOidPostPDOpenProvider @ 0x1C006DF30 (ndisOidPostPDOpenProvider.c)
 *     ?NdisPDAssociateNotificationEvent@@YAXPEAU_NDIS_PD_QUEUE@@PEAU_KEVENT@@@Z @ 0x1C00DE750 (-NdisPDAssociateNotificationEvent@@YAXPEAU_NDIS_PD_QUEUE@@PEAU_KEVENT@@@Z.c)
 *     ?NdisPDDeleteBMGroup@@YAXPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@@Z @ 0x1C00DEBC0 (-NdisPDDeleteBMGroup@@YAXPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@@Z.c)
 *     ?NdisPDPIRequestDrainNotification@@YAXPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C00DFDC0 (-NdisPDPIRequestDrainNotification@@YAXPEAU_NDIS_PD_QUEUE@@@Z.c)
 *     ?NdisPDRemoveProviderFromBMGroup@@YAXPEAUNDIS_PD_PROVIDER_HANDLE__@@@Z @ 0x1C00E01A0 (-NdisPDRemoveProviderFromBMGroup@@YAXPEAUNDIS_PD_PROVIDER_HANDLE__@@@Z.c)
 *     ?NdisPDStopEC@@YAXPEAUPD_EC_HANDLE__@@@Z @ 0x1C00E0410 (-NdisPDStopEC@@YAXPEAUPD_EC_HANDLE__@@@Z.c)
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
