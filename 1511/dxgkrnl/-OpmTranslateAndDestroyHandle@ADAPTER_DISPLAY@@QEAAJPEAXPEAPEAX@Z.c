/*
 * XREFs of ?OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C012CFBC
 * Callers:
 *     DxgkOpmTranslateAndDestroyHandle @ 0x1C0131378 (DxgkOpmTranslateAndDestroyHandle.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ?OpmValidateAdapterHandle@ADAPTER_DISPLAY@@AEAAEPEAX@Z @ 0x1C00C8BA0 (-OpmValidateAdapterHandle@ADAPTER_DISPLAY@@AEAAEPEAX@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::OpmTranslateAndDestroyHandle(DXGADAPTER **this, _QWORD *a2, void **a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD **v12; // rcx
  void **v13; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 23246LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( this[31] != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v8 + 24) = 23247LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( ADAPTER_DISPLAY::OpmValidateAdapterHandle(this, (DXGADAPTER **)a2) )
  {
    v12 = (_QWORD **)*a2;
    *a3 = (void *)a2[2];
    v13 = (void **)a2[1];
    if ( v12[1] != a2 || *v13 != a2 )
      __fastfail(3u);
    *v13 = v12;
    v12[1] = v13;
    operator delete(a2);
    return 0LL;
  }
  else
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 23255LL;
    WdLogEvent5_WdAssertion(v10);
    return 3223192844LL;
  }
}
