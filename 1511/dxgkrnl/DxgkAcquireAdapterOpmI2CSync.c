/*
 * XREFs of DxgkAcquireAdapterOpmI2CSync @ 0x1C00C8450
 * Callers:
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX@Z @ 0x1C002ABDC (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C00C3780 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C00C7CD0 (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkAcquireAdapterOpmI2CSync(__int64 a1)
{
  union _LARGE_INTEGER *v2; // rax
  union _LARGE_INTEGER *v3; // rbx
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rax

  if ( !a1 )
  {
    v5 = WdLogNewEntry5_WdError(0LL);
    v6 = -1073741811;
    *(_QWORD *)(v5 + 24) = -1073741811LL;
    goto LABEL_7;
  }
  v2 = *(union _LARGE_INTEGER **)(a1 + 1984);
  if ( !v2 )
  {
    v5 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v5 + 24) = a1;
    v6 = -1073741637;
    *(_QWORD *)(v5 + 32) = -1073741637LL;
LABEL_7:
    WdLogEvent5_WdError(v5);
    return v6;
  }
  v3 = v2 + 31;
  if ( (struct _KTHREAD *)v2[31].QuadPart == KeGetCurrentThread() )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v7 + 24) = 14294LL;
    WdLogEvent5_WdAssertion(v7);
  }
  DXGFASTMUTEX::Acquire(v3);
  return 0LL;
}
