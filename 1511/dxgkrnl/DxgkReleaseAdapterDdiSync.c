/*
 * XREFs of DxgkReleaseAdapterDdiSync @ 0x1C00E25D8
 * Callers:
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX@Z @ 0x1C002ABDC (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiPdoIsChildConnected @ 0x1C00AA280 (DpiPdoIsChildConnected.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C00C3780 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoDispatchPnp @ 0x1C00C3B20 (DpiPdoDispatchPnp.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C00C7CD0 (DpiPdoHandleOpmIoctls.c)
 *     DpiPdoSetDevicePower @ 0x1C00CA378 (DpiPdoSetDevicePower.c)
 *     DpiGetMonitorDescriptor @ 0x1C00E252C (DpiGetMonitorDescriptor.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1C00E28C0 (DpiPdoGetDeviceDescriptor.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C00E3A40 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C0171CF0 (DpiAcpiHandleAcpiEvent.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReleaseAdapterDdiSync(DXGADAPTER *a1)
{
  __int64 v2; // rax

  if ( a1 )
  {
    DXGADAPTER::ReleaseDdiSync(a1);
    return 0LL;
  }
  else
  {
    v2 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v2 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v2);
    return 3221225485LL;
  }
}
