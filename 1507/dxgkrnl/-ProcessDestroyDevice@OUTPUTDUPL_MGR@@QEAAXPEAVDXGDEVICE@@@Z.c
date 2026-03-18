/*
 * XREFs of ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C008E1D4
 * Callers:
 *     OutputDuplProcessDestroyDevice @ 0x1C008EB04 (OutputDuplProcessDestroyDevice.c)
 *     _lambda_b95438d65c4e838b15c388f16397d468_::_helper_func_cdecl_ @ 0x1C008F870 (_lambda_b95438d65c4e838b15c388f16397d468_--_helper_func_cdecl_.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C008DD08 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessDestroyDevice(
        OUTPUTDUPL_MGR *this,
        struct DXGDEVICE *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int i; // esi
  __int64 v10; // rax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax

  v6 = *(_QWORD *)this;
  if ( v6 && !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v6 + 16)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8, v7, a3, a4);
    *(_QWORD *)(v10 + 24) = 1319LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !*((_DWORD *)a2 + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)a2 + 10)) )
  {
    CurrentThread = KeGetCurrentThread();
    v12 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
    if ( *(struct _KTHREAD **)(v12 + 112) != CurrentThread )
    {
      v13 = WdLogNewEntry5_WdAssertion(v12, CurrentThread, a3, a4);
      *(_QWORD *)(v13 + 24) = 1320LL;
      WdLogEvent5_WdAssertion(v13);
    }
  }
  for ( i = 0; i < *((_DWORD *)this + 13); ++i )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this, i, a2, 0, 0, 5);
  OUTPUTDUPL_MGR::ProcessPendingDestroy((PERESOURCE *)this, a2, a3, a4);
}
