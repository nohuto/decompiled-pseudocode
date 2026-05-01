/*
 * XREFs of ??1?$auto_ptr@UResSetCallbackWorkItem@ResourceSetImpl@ExecutionModel@@$1??$_delete@UResSetCallbackWorkItem@ResourceSetImpl@ExecutionModel@@@tlx@@YAXPEAU123@@Z@tlx@@QEAA@XZ @ 0x180005544
 * Callers:
 *     ?RecvCallback@ResourceSetImpl@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x1800016D0 (-RecvCallback@ResourceSetImpl@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@.c)
 * Callees:
 *     <none>
 */

void __fastcall tlx::auto_ptr<ExecutionModel::ResourceSetImpl::ResSetCallbackWorkItem,&void tlx::_delete<ExecutionModel::ResourceSetImpl::ResSetCallbackWorkItem>(ExecutionModel::ResourceSetImpl::ResSetCallbackWorkItem *)>::~auto_ptr<ExecutionModel::ResourceSetImpl::ResSetCallbackWorkItem,&void tlx::_delete<ExecutionModel::ResourceSetImpl::ResSetCallbackWorkItem>(ExecutionModel::ResourceSetImpl::ResSetCallbackWorkItem *)>(
        char **a1)
{
  char *v1; // rcx

  v1 = *a1;
  if ( v1 )
    tlx::_delete<ExecutionModel::ResourceSetImpl::ResSetCallbackWorkItem>(v1);
}
