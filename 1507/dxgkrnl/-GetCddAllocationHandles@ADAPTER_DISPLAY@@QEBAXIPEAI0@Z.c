/*
 * XREFs of ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C00CF9D8
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00D0120 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::GetCddAllocationHandles(
        DXGADAPTER **this,
        __int64 a2,
        unsigned int *a3,
        unsigned int *a4)
{
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  DXGADAPTER *v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax

  v7 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v14 + 24) = 10715LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v15 + 24) = 10716LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v12 = this[14];
  v13 = *((_QWORD *)v12 + 126 * v7 + 11);
  if ( !v13 || (*(_DWORD *)(*(_QWORD *)(v13 + 48) + 4LL) & 0x10) != 0 )
  {
    *a3 = 0;
    *a4 = 0;
  }
  else
  {
    *a3 = *(_DWORD *)(v13 + 16);
    *a4 = *(_DWORD *)(*((_QWORD *)v12 + 126 * v7 + 75) + 16LL);
  }
}
