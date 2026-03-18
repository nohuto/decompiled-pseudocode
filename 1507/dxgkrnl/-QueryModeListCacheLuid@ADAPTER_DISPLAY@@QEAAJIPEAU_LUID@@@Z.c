/*
 * XREFs of ?QueryModeListCacheLuid@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x1C0006360
 * Callers:
 *     DxgkQueryModeListCacheLuid @ 0x1C00B0A80 (DxgkQueryModeListCacheLuid.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::QueryModeListCacheLuid(DXGADAPTER **this, unsigned int a2, struct _LUID *a3)
{
  __int64 v4; // rdi
  DXGADAPTER *v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v8 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v8 + 24) = 4084LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 20) )
  {
    v9 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v9 + 24) = 4085LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !*((_BYTE *)this + 132) )
    return 3221225473LL;
  v6 = this[14];
  if ( !*((_BYTE *)v6 + 1008 * v4 + 980) )
    return 3221225473LL;
  *a3 = *(struct _LUID *)((char *)v6 + 1008 * v4 + 984);
  return 0LL;
}
