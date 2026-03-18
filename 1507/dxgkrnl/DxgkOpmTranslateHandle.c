/*
 * XREFs of DxgkOpmTranslateHandle @ 0x1C00B23D4
 * Callers:
 *     DpiPdoHandleOpmIoctls @ 0x1C00B2490 (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C00B3520 (-OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall DxgkOpmTranslateHandle(ADAPTER_DISPLAY **this, void *a2, void **a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  ADAPTER_DISPLAY *v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  if ( !this )
  {
    v15 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v15 + 24) = 9177LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !a3 )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v16 + 24) = 9178LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)this) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v17 + 24) = 9179LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v11 = this[247];
  if ( v11 )
  {
    if ( *((struct _KTHREAD **)v11 + 26) != KeGetCurrentThread() )
    {
      v13 = WdLogNewEntry5_WdAssertion(v11, v7, v9, v10);
      *(_QWORD *)(v13 + 24) = 9183LL;
      WdLogEvent5_WdAssertion(v13);
    }
    return ADAPTER_DISPLAY::OpmTranslateHandle(this[247], a2, a3);
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v14 + 24) = this;
    *(_QWORD *)(v14 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v14);
    return 3221225659LL;
  }
}
