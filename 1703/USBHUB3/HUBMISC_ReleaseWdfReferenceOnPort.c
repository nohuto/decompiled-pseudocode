/*
 * XREFs of HUBMISC_ReleaseWdfReferenceOnPort @ 0x1C0029790
 * Callers:
 *     HUBDSM_RemovingDeviceInfoFromGlobalListOnReportedMissingOnHubStopOnDetach @ 0x1C0019200 (HUBDSM_RemovingDeviceInfoFromGlobalListOnReportedMissingOnHubStopOnDetach.c)
 *     HUBDSM_UnregisteringWithHSMOnDetachAfterCleanup @ 0x1C0019A20 (HUBDSM_UnregisteringWithHSMOnDetachAfterCleanup.c)
 *     HUBDSM_WaitingForPDOD0ExitOnDetachInUnConfigured @ 0x1C0019AD0 (HUBDSM_WaitingForPDOD0ExitOnDetachInUnConfigured.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBMISC_ReleaseWdfReferenceOnPort(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 8));
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
           WdfDriverGlobals,
           v1,
           "DSM Tag",
           8134LL,
           "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
}
