/*
 * XREFs of ?QueryModeListCacheLuid@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x1C00071D4
 * Callers:
 *     DxgkQueryModeListCacheLuid @ 0x1C00C5330 (DxgkQueryModeListCacheLuid.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::QueryModeListCacheLuid(DXGADAPTER **this, unsigned int a2, struct _LUID *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  DXGADAPTER *v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rax

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v9 + 24) = 4232LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 26) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v10 + 24) = 4233LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !*((_BYTE *)this + 156) )
    return 3221225473LL;
  v7 = this[17];
  if ( !*((_BYTE *)v7 + 1016 * v4 + 980) )
    return 3221225473LL;
  *a3 = *(struct _LUID *)((char *)v7 + 1016 * v4 + 984);
  return 0LL;
}
