/*
 * XREFs of ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C009EAC0
 * Callers:
 *     sub_1C009D040 @ 0x1C009D040 (sub_1C009D040.c)
 *     OutputDuplProcessDestroyDevice @ 0x1C00BBB98 (OutputDuplProcessDestroyDevice.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C009E5BC (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessDestroyDevice(OUTPUTDUPL_MGR *this, struct DXGDEVICE *a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int i; // esi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax

  v5 = *(_QWORD *)this;
  if ( v5 && !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v5 + 16)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v8 + 24) = 1319LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !*((_DWORD *)a2 + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)a2 + 10)) )
  {
    v9 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
    if ( *(struct _KTHREAD **)(v9 + 112) != KeGetCurrentThread() )
    {
      v10 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v10 + 24) = 1320LL;
      WdLogEvent5_WdAssertion(v10);
    }
  }
  for ( i = 0; i < *((_DWORD *)this + 13); ++i )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this, i, a2, 0, 0, 5);
  OUTPUTDUPL_MGR::ProcessPendingDestroy((PERESOURCE *)this, a2, a3);
}
