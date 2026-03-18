/*
 * XREFs of DxgkAcquireAdapterOpmI2CSync @ 0x1C00DD544
 * Callers:
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C0031F10 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C00C44D0 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C00DCC84 (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkAcquireAdapterOpmI2CSync(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rax

  if ( !a1 )
  {
    v4 = WdLogNewEntry5_WdError(0LL);
    v5 = -1073741811;
    *(_QWORD *)(v4 + 24) = -1073741811LL;
    goto LABEL_7;
  }
  v2 = *(_QWORD *)(a1 + 2128);
  if ( !v2 )
  {
    v4 = WdLogNewEntry5_WdError(a1);
    v5 = -1073741637;
    *(_QWORD *)(v4 + 24) = a1;
    *(_QWORD *)(v4 + 32) = -1073741637LL;
LABEL_7:
    WdLogEvent5_WdError(v4);
    return v5;
  }
  if ( *(struct _KTHREAD **)(v2 + 208) == KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v6 + 24) = 3018LL;
    WdLogEvent5_WdAssertion(v6);
  }
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v2 + 200));
  return 0LL;
}
