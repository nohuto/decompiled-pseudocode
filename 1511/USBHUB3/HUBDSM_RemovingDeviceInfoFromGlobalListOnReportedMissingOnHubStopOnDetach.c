/*
 * XREFs of HUBDSM_RemovingDeviceInfoFromGlobalListOnReportedMissingOnHubStopOnDetach @ 0x1C00177B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_ReleaseWdfReferenceOnPort @ 0x1C00271F4 (HUBMISC_ReleaseWdfReferenceOnPort.c)
 */

__int64 __fastcall HUBDSM_RemovingDeviceInfoFromGlobalListOnReportedMissingOnHubStopOnDetach(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_QWORD *)(v1 + 2136) )
    USBD_RemoveDeviceFromGlobalList(*(_QWORD *)(a1 + 960));
  HUBMISC_ReleaseWdfReferenceOnPort(v1);
  return 4077LL;
}
