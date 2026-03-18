/*
 * XREFs of ?OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C0126DE4
 * Callers:
 *     DxgkOpmTranslateAndDestroyHandle @ 0x1C012ADD8 (DxgkOpmTranslateAndDestroyHandle.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?OpmValidateAdapterHandle@ADAPTER_DISPLAY@@AEAAEPEAX@Z @ 0x1C00B34A8 (-OpmValidateAdapterHandle@ADAPTER_DISPLAY@@AEAAEPEAX@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::OpmTranslateAndDestroyHandle(DXGADAPTER **this, _QWORD *a2, void **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  _QWORD **v18; // rcx
  void **v19; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v10 + 24) = 22662LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( this[26] != KeGetCurrentThread() )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v11 + 24) = 22663LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( ADAPTER_DISPLAY::OpmValidateAdapterHandle(this, (DXGADAPTER **)a2) )
  {
    v18 = (_QWORD **)*a2;
    *a3 = (void *)a2[2];
    v19 = (void **)a2[1];
    if ( v18[1] != a2 || *v19 != a2 )
      __fastfail(3u);
    *v19 = v18;
    v18[1] = v19;
    operator delete(a2);
    return 0LL;
  }
  else
  {
    v16 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v16 + 24) = 22671LL;
    WdLogEvent5_WdAssertion(v16);
    return 3223192844LL;
  }
}
