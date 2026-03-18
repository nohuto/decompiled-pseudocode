/*
 * XREFs of Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C0052800
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0008630 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C001D968 (CommonBuffer_ReleaseBuffer.c)
 *     Controller_ReleaseWdfPowerReferenceForDebugger @ 0x1C001F2AC (Controller_ReleaseWdfPowerReferenceForDebugger.c)
 *     Controller_UpdateSqmDatapoints @ 0x1C00524B8 (Controller_UpdateSqmDatapoints.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceSelfManagedIoCleanup(__int64 a1)
{
  __int64 *v2; // rbx
  void *v3; // rcx
  __int64 v4; // rdx

  v2 = *(__int64 **)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                       WdfDriverGlobals,
                       a1,
                       off_1C0043318)
                   + 8);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(v2[8], 5u, 3u, 0x3Du, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids, a1);
  v3 = (void *)v2[51];
  if ( v3 )
  {
    PoUnregisterPowerSettingCallback(v3);
    v2[51] = 0LL;
  }
  Controller_ReleaseWdfPowerReferenceForDebugger((__int64)v2);
  v4 = v2[43];
  if ( v4 )
  {
    CommonBuffer_ReleaseBuffer(v2[11], v4);
    v2[43] = 0LL;
  }
  return Controller_UpdateSqmDatapoints((__int64)v2);
}
