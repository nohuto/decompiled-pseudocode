/*
 * XREFs of ?OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C00C8CA8
 * Callers:
 *     DxgkOpmCreateHandle @ 0x1C00C7B5C (DxgkOpmCreateHandle.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::OpmCreateHandle(DXGADAPTER **this, void *a2, void **a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  _BYTE *v8; // rax
  DXGADAPTER *v9; // rdx
  __int64 v11; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v11 + 24) = 23166LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( this[31] != KeGetCurrentThread() )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 23167LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = operator new[](0x20uLL, 0x4B677844u, PagedPool);
  if ( !v8 )
    return 3221225495LL;
  v8[24] = 0;
  *((_QWORD *)v8 + 2) = a2;
  v9 = this[29];
  *(_QWORD *)v8 = v9;
  *((_QWORD *)v8 + 1) = this + 29;
  if ( *((DXGADAPTER ***)v9 + 1) != this + 29 )
    __fastfail(3u);
  *((_QWORD *)v9 + 1) = v8;
  this[29] = (DXGADAPTER *)v8;
  *a3 = v8;
  return 0LL;
}
