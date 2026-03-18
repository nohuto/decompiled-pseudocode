/*
 * XREFs of HUBMISC_RemoveDeviceInfoFromGlobalChildList @ 0x1C0027B08
 * Callers:
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff @ 0x1C0018B50 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff.c)
 *     HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup @ 0x1C0018C00 (HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup.c)
 *     HUBDSM_RemovingDeviceInfoFromGlobalListOnReportedMissingOnHubStopOnDetach @ 0x1C0019200 (HUBDSM_RemovingDeviceInfoFromGlobalListOnReportedMissingOnHubStopOnDetach.c)
 *     HUBDSM_WaitingForPDOD0ExitOnDetachInUnConfigured @ 0x1C0019AD0 (HUBDSM_WaitingForPDOD0ExitOnDetachInUnConfigured.c)
 *     HUBDSM_RequestingDeviceCycleInReportingToPnp @ 0x1C001C1E0 (HUBDSM_RequestingDeviceCycleInReportingToPnp.c)
 *     HUBPDO_EvtDeviceSurpriseRemoval @ 0x1C006B140 (HUBPDO_EvtDeviceSurpriseRemoval.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_RemoveDeviceInfoFromGlobalChildList(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 2136) )
    return USBD_RemoveDeviceFromGlobalList(a1, v1);
  if ( (*(_DWORD *)(v1 + 204) & 0x200) != 0 )
    _InterlockedAnd((volatile signed __int32 *)(v1 + 1336), 0xFFFFFFBF);
  if ( *(_QWORD *)(a1 + 2136) )
    return USBD_RemoveDeviceFromGlobalList(a1, v1);
  return result;
}
