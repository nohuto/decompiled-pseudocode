/*
 * XREFs of ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C008846C
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0071020 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C00F8030 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::GetCddAllocationHandles(
        DXGADAPTER **this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4)
{
  __int64 v7; // rbp
  __int64 v8; // rcx
  DXGADAPTER *v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax

  v7 = a2;
  if ( a2 >= *((_DWORD *)this + 20) )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v11 + 24) = 819LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v12 + 24) = 820LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v9 = this[14];
  v10 = *((_QWORD *)v9 + 127 * v7 + 11);
  if ( !v10 || (*(_DWORD *)(*(_QWORD *)(v10 + 48) + 4LL) & 0x10) != 0 )
  {
    *a3 = 0;
    *a4 = 0;
  }
  else
  {
    *a3 = *(_DWORD *)(v10 + 16);
    *a4 = *(_DWORD *)(*((_QWORD *)v9 + 127 * v7 + 75) + 16LL);
  }
}
