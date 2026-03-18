/*
 * XREFs of DxgkOpmCreateHandle @ 0x1C00DCB18
 * Callers:
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C0031F10 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C00DCC84 (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C00DDDF8 (-OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall DxgkOpmCreateHandle(ADAPTER_DISPLAY **this, void *a2, void **a3)
{
  __int64 v6; // rcx
  ADAPTER_DISPLAY *v7; // rcx
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  if ( !this )
  {
    v11 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v11 + 24) = 791LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a3 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v12 + 24) = 792LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)this) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v13 + 24) = 793LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v7 = this[266];
  if ( v7 )
  {
    if ( *((struct _KTHREAD **)v7 + 26) != KeGetCurrentThread() )
    {
      v8 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v8 + 24) = 797LL;
      WdLogEvent5_WdAssertion(v8);
    }
    return ADAPTER_DISPLAY::OpmCreateHandle(this[266], a2, a3);
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v10 + 24) = this;
    *(_QWORD *)(v10 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v10);
    return 3221225659LL;
  }
}
