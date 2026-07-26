/*
 * XREFs of ndisBugCheckEx @ 0x1C004A708
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0004F10 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisIfDereferenceMiniport @ 0x1C00056B0 (ndisIfDereferenceMiniport.c)
 *     ndisDereferenceMiniportForNsi @ 0x1C00057E0 (ndisDereferenceMiniportForNsi.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0005B90 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C00066F0 (ndisFOidRequestCompleteInternal.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C00069E0 (ndisReferenceMiniportByHandleForNsi.c)
 *     ndisQueueOidRequest @ 0x1C0007420 (ndisQueueOidRequest.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0007B50 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisOidRequestComplete @ 0x1C0008250 (ndisOidRequestComplete.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00094B0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ndisMTimerDpcX @ 0x1C000A040 (ndisMTimerDpcX.c)
 *     ndisDoOidRequests @ 0x1C000AF60 (ndisDoOidRequests.c)
 *     ndisDereferenceWithTag @ 0x1C000B124 (ndisDereferenceWithTag.c)
 *     ndisQueuedCheckForHang @ 0x1C000F390 (ndisQueuedCheckForHang.c)
 *     NdisMPauseComplete @ 0x1C0013D00 (NdisMPauseComplete.c)
 *     ndisMTimerObjectDpc @ 0x1C0015390 (ndisMTimerObjectDpc.c)
 *     NdisIfAddIfStackEntry @ 0x1C0018B70 (NdisIfAddIfStackEntry.c)
 *     NdisMRestartComplete @ 0x1C0019690 (NdisMRestartComplete.c)
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C0026A28 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ndisOidPostRcvFilterClearFilter @ 0x1C00390D0 (ndisOidPostRcvFilterClearFilter.c)
 *     NdisIfDeregisterProvider @ 0x1C003E700 (NdisIfDeregisterProvider.c)
 *     ndisBindRequest @ 0x1C005E910 (ndisBindRequest.c)
 *     ?NdisPDReportECIteration@@YAXPEAUPD_EC_HANDLE__@@E@Z @ 0x1C006B830 (-NdisPDReportECIteration@@YAXPEAUPD_EC_HANDLE__@@E@Z.c)
 *     ?NdisPDSetupBufferFromMemoryHandle@@YAXPEAU_PD_BUFFER@@PEAUPD_MEMORY_HANDLE__@@KK@Z @ 0x1C006B970 (-NdisPDSetupBufferFromMemoryHandle@@YAXPEAU_PD_BUFFER@@PEAUPD_MEMORY_HANDLE__@@KK@Z.c)
 *     ?NdisPDSetupBufferFromPdBuffer@@YAXPEAU_PD_BUFFER@@PEBU1@KK@Z @ 0x1C006B9D0 (-NdisPDSetupBufferFromPdBuffer@@YAXPEAU_PD_BUFFER@@PEBU1@KK@Z.c)
 *     ?ndisTriggerPDDrainNotification@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C006C264 (-ndisTriggerPDDrainNotification@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 *     NdisMTriggerPDDrainNotification @ 0x1C006C770 (NdisMTriggerPDDrainNotification.c)
 *     ndisMIndicatePDConfigChange @ 0x1C006D1F0 (ndisMIndicatePDConfigChange.c)
 *     ndisOidPostPDOpenProvider @ 0x1C006D3B0 (ndisOidPostPDOpenProvider.c)
 *     ?NdisPDAssociateNotificationEvent@@YAXPEAU_NDIS_PD_QUEUE@@PEAU_KEVENT@@@Z @ 0x1C00D8090 (-NdisPDAssociateNotificationEvent@@YAXPEAU_NDIS_PD_QUEUE@@PEAU_KEVENT@@@Z.c)
 *     ?NdisPDDeleteBMGroup@@YAXPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@@Z @ 0x1C00D85A0 (-NdisPDDeleteBMGroup@@YAXPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@@Z.c)
 *     ?NdisPDPIRequestDrainNotification@@YAXPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C00D9810 (-NdisPDPIRequestDrainNotification@@YAXPEAU_NDIS_PD_QUEUE@@@Z.c)
 *     ?NdisPDRemoveProviderFromBMGroup@@YAXPEAUNDIS_PD_PROVIDER_HANDLE__@@@Z @ 0x1C00D9C00 (-NdisPDRemoveProviderFromBMGroup@@YAXPEAUNDIS_PD_PROVIDER_HANDLE__@@@Z.c)
 *     ?NdisPDStopEC@@YAXPEAUPD_EC_HANDLE__@@@Z @ 0x1C00D9E90 (-NdisPDStopEC@@YAXPEAUPD_EC_HANDLE__@@@Z.c)
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
