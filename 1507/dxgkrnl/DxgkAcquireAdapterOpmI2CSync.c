/*
 * XREFs of DxgkAcquireAdapterOpmI2CSync @ 0x1C00B2C10
 * Callers:
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX@Z @ 0x1C002AF74 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C00B2490 (DpiPdoHandleOpmIoctls.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C00BA460 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004A54 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkAcquireAdapterOpmI2CSync(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rax

  if ( !a1 )
  {
    v7 = WdLogNewEntry5_WdError(0LL);
    v8 = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    goto LABEL_7;
  }
  v5 = *(_QWORD *)(a1 + 1976);
  if ( !v5 )
  {
    v7 = WdLogNewEntry5_WdError(a1);
    v8 = -1073741637;
    *(_QWORD *)(v7 + 24) = a1;
    *(_QWORD *)(v7 + 32) = -1073741637LL;
LABEL_7:
    WdLogEvent5_WdError(v7);
    return v8;
  }
  if ( *(struct _KTHREAD **)(v5 + 208) == KeGetCurrentThread() )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 13928LL;
    WdLogEvent5_WdAssertion(v9);
  }
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v5 + 200));
  return 0LL;
}
