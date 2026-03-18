/*
 * XREFs of DxgkReleaseAdapterDdiSync @ 0x1C00BBBBC
 * Callers:
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX@Z @ 0x1C002AF74 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiPdoDispatchPnp @ 0x1C005E640 (DpiPdoDispatchPnp.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C00B2490 (DpiPdoHandleOpmIoctls.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C00BA460 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoSetDevicePower @ 0x1C00BC0D8 (DpiPdoSetDevicePower.c)
 *     DpiPdoIsChildConnected @ 0x1C00C4E10 (DpiPdoIsChildConnected.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1C00C7AA0 (DpiPdoGetDeviceDescriptor.c)
 *     DpiGetMonitorDescriptor @ 0x1C00C8010 (DpiGetMonitorDescriptor.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C00DC890 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C016D4E0 (DpiAcpiHandleAcpiEvent.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00022B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
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
