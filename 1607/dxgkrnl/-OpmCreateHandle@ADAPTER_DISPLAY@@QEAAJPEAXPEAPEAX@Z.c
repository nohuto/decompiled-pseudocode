/*
 * XREFs of ?OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C00DDDF8
 * Callers:
 *     DxgkOpmCreateHandle @ 0x1C00DCB18 (DxgkOpmCreateHandle.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::OpmCreateHandle(DXGADAPTER **this, void *a2, void **a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  _BYTE *v8; // rax
  _QWORD *v9; // rcx
  DXGADAPTER *v10; // rdx
  __int64 v12; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v12 + 24) = 5141LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( this[26] != KeGetCurrentThread() )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 5142LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = operator new(0x20uLL, 0x4B677844u, PagedPool);
  if ( !v8 )
    return 3221225495LL;
  v9 = this + 23;
  v8[24] = 0;
  *((_QWORD *)v8 + 2) = a2;
  v10 = this[23];
  if ( *((DXGADAPTER ***)v10 + 1) != this + 23 )
    __fastfail(3u);
  *(_QWORD *)v8 = v10;
  *((_QWORD *)v8 + 1) = v9;
  *((_QWORD *)v10 + 1) = v8;
  *v9 = v8;
  *a3 = v8;
  return 0LL;
}
