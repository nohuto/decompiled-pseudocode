/*
 * XREFs of DxgkOpmTranslateHandle @ 0x1C00DCBCC
 * Callers:
 *     DpiPdoHandleOpmIoctls @ 0x1C00DCC84 (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C00DDD68 (-OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall DxgkOpmTranslateHandle(ADAPTER_DISPLAY **this, void *a2, void **a3)
{
  __int64 v6; // rcx
  ADAPTER_DISPLAY *v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  if ( !this )
  {
    v11 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v11 + 24) = 829LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a3 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v12 + 24) = 830LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)this) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v13 + 24) = 831LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v7 = this[266];
  if ( v7 )
  {
    if ( *((struct _KTHREAD **)v7 + 26) != KeGetCurrentThread() )
    {
      v9 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v9 + 24) = 835LL;
      WdLogEvent5_WdAssertion(v9);
    }
    return ADAPTER_DISPLAY::OpmTranslateHandle(this[266], a2, a3);
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
