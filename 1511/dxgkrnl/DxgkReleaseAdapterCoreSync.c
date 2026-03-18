/*
 * XREFs of DxgkReleaseAdapterCoreSync @ 0x1C00A9F00
 * Callers:
 *     DpiEnterSystemDisplay @ 0x1C000D830 (DpiEnterSystemDisplay.c)
 *     DpiLeaveSystemDisplay @ 0x1C0027EA0 (DpiLeaveSystemDisplay.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00A9EA8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiPdoIsChildConnected @ 0x1C00AA280 (DpiPdoIsChildConnected.c)
 *     DpiFdoSetAdapterPowerState @ 0x1C00C9E50 (DpiFdoSetAdapterPowerState.c)
 *     DpiGdoCreateGdiObjects @ 0x1C00CEE00 (DpiGdoCreateGdiObjects.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C00D4150 (DpiFdoCreateRelatedObjects.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1C00E28C0 (DpiPdoGetDeviceDescriptor.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C00E3A40 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     DpiPowerArbiterThread @ 0x1C00E8F50 (DpiPowerArbiterThread.c)
 *     DpiFdoStopAdapter @ 0x1C016CD64 (DpiFdoStopAdapter.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C016FC90 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C016FE50 (DpiEnableMsBddFallbackDriver.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C0171CF0 (DpiAcpiHandleAcpiEvent.c)
 *     DpiAcpiProcessEventRequests @ 0x1C0172080 (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C007A060 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 */

__int64 __fastcall DxgkReleaseAdapterCoreSync(__int64 a1, int a2)
{
  __int64 v3; // rax

  if ( a1 )
  {
    DXGADAPTER::ReleaseCoreSync(a1, a2);
    return 0LL;
  }
  else
  {
    v3 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v3 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v3);
    return 3221225485LL;
  }
}
