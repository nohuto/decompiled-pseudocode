/*
 * XREFs of ??7?$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEBA_NXZ @ 0x180017084
 * Callers:
 *     ?RecvCallback@ResourceSetImpl@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x1800016D0 (-RecvCallback@ResourceSetImpl@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ATL::CComPtrBase<ExecutionModel::IResourceSetCallback>::operator!(_QWORD *a1)
{
  return *a1 == 0LL;
}
