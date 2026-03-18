/*
 * XREFs of DxgkReleaseAdapterOpmI2CSync @ 0x1C00DD5B8
 * Callers:
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C0031F10 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C00C44D0 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C00DCC84 (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     ?ReleaseOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C00DDEA8 (-ReleaseOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReleaseAdapterOpmI2CSync(__int64 a1)
{
  ADAPTER_DISPLAY *v2; // rcx
  __int64 v4; // rax
  unsigned int v5; // ebx

  if ( a1 )
  {
    v2 = *(ADAPTER_DISPLAY **)(a1 + 2128);
    if ( v2 )
    {
      ADAPTER_DISPLAY::ReleaseOpmI2CSync(v2);
      return 0LL;
    }
    v4 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v4 + 24) = a1;
    v5 = -1073741637;
    *(_QWORD *)(v4 + 32) = -1073741637LL;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(0LL);
    v5 = -1073741811;
    *(_QWORD *)(v4 + 24) = -1073741811LL;
  }
  WdLogEvent5_WdError(v4);
  return v5;
}
