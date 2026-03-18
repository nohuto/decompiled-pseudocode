/*
 * XREFs of _lambda_e1b948e1d41ccab4a78cb003c390c9f7_::_helper_func_cdecl_ @ 0x1C011F090
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C008DD08 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 */

__int64 __fastcall lambda_e1b948e1d41ccab4a78cb003c390c9f7_::_helper_func_cdecl_(struct OUTPUTDUPL_MGR *a1, void *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  unsigned int i; // edi

  v3 = *(_QWORD *)a1;
  if ( v3 && !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v3 + 16)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v8 + 24) = 1300LL;
    WdLogEvent5_WdAssertion(v8);
  }
  for ( i = 0; i < *((_DWORD *)a1 + 13); ++i )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(a1, i, 0LL, 0, 0, 2);
  return 0LL;
}
