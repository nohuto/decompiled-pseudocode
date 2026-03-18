/*
 * XREFs of ?OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C00B35B0
 * Callers:
 *     DxgkOpmCreateHandle @ 0x1C00B231C (DxgkOpmCreateHandle.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::OpmCreateHandle(DXGADAPTER **this, void *a2, void **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  _BYTE *v11; // rax
  DXGADAPTER *v12; // rdx
  __int64 v14; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v14 + 24) = 22582LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( this[26] != KeGetCurrentThread() )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v10 + 24) = 22583LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = operator new[](0x20uLL, 0x4B677844u, PagedPool);
  if ( !v11 )
    return 3221225495LL;
  v11[24] = 0;
  *((_QWORD *)v11 + 2) = a2;
  v12 = this[23];
  *(_QWORD *)v11 = v12;
  *((_QWORD *)v11 + 1) = this + 23;
  if ( *((DXGADAPTER ***)v12 + 1) != this + 23 )
    __fastfail(3u);
  *((_QWORD *)v12 + 1) = v11;
  this[23] = (DXGADAPTER *)v11;
  *a3 = v11;
  return 0LL;
}
