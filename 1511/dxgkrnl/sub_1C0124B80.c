/*
 * XREFs of sub_1C0124B80 @ 0x1C0124B80
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C009E5BC (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 */

__int64 __fastcall sub_1C0124B80(struct OUTPUTDUPL_MGR *a1, void *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int i; // edi

  v3 = *(_QWORD *)a1;
  if ( v3 && !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v3 + 16)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 1300LL;
    WdLogEvent5_WdAssertion(v5);
  }
  for ( i = 0; i < *((_DWORD *)a1 + 13); ++i )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(a1, i, 0LL, 0, 0, 2);
  return 0LL;
}
