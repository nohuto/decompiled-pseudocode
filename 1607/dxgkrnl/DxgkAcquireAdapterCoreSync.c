/*
 * XREFs of DxgkAcquireAdapterCoreSync @ 0x1C00C2074
 * Callers:
 *     DpiEnterSystemDisplay @ 0x1C000F200 (DpiEnterSystemDisplay.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00C1F58 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoIsChildConnected @ 0x1C00C2C38 (DpiPdoIsChildConnected.c)
 *     DpiFdoSetAdapterPowerState @ 0x1C00DF6A8 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C00EC0D8 (DpiFdoCreateRelatedObjects.c)
 *     DpiGdoCreateGdiObjects @ 0x1C00ECAA8 (DpiGdoCreateGdiObjects.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C00EE86C (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1C00EF834 (DpiPdoGetDeviceDescriptor.c)
 *     DpiPowerArbiterThread @ 0x1C00FBF50 (DpiPowerArbiterThread.c)
 *     DpiFdoStopAdapter @ 0x1C0195AFC (DpiFdoStopAdapter.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C01961C8 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C0196380 (DpiEnableMsBddFallbackDriver.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C019B8E0 (DpiAcpiHandleAcpiEvent.c)
 *     DpiAcpiProcessEventRequests @ 0x1C019BD20 (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C009FBB8 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 */

__int64 __fastcall DxgkAcquireAdapterCoreSync(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax

  v2 = a2;
  if ( a1 )
  {
    if ( a2 > 0 && (a2 <= 4 || a2 == 6) )
    {
      DXGADAPTER::AcquireCoreSync(a1, a2);
      return 0LL;
    }
    v4 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v4 + 24) = v2;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v4 + 24) = -1073741811LL;
  }
  WdLogEvent5_WdError(v4);
  return 3221225485LL;
}
