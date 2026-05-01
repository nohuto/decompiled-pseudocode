/*
 * XREFs of ??$_delete@UResSetCallbackWorkItem@ResourceSetImpl@ExecutionModel@@@tlx@@YAXPEAUResSetCallbackWorkItem@ResourceSetImpl@ExecutionModel@@@Z @ 0x180004B10
 * Callers:
 *     ?QueueCallback@ResourceSetImpl@ExecutionModel@@IEAAXW4WorkItemType@ResSetCallbackWorkItem@12@W4_RM_REVOKE_REASON@@@Z @ 0x1800015F0 (-QueueCallback@ResourceSetImpl@ExecutionModel@@IEAAXW4WorkItemType@ResSetCallbackWorkItem@12@W4_.c)
 *     ??1?$auto_ptr@UResSetCallbackWorkItem@ResourceSetImpl@ExecutionModel@@$1??$_delete@UResSetCallbackWorkItem@ResourceSetImpl@ExecutionModel@@@tlx@@YAXPEAU123@@Z@tlx@@QEAA@XZ @ 0x180005544 (--1-$auto_ptr@UResSetCallbackWorkItem@ResourceSetImpl@ExecutionModel@@$1--$_delete@UResSetCallba.c)
 * Callees:
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180004B88 (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 */

void __fastcall tlx::_delete<ExecutionModel::ResourceSetImpl::ResSetCallbackWorkItem>(char *Block)
{
  if ( Block )
  {
    ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(Block + 8);
    operator delete(Block);
  }
}
