/*
 * XREFs of ?TryCancelBackingResourceSetTransition@ResourceSetImpl@ExecutionModel@@IEAAJAEAV?$unique_ptr@UPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@U?$default_delete@UPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@@utl@@@utl@@@Z @ 0x18004EF3C
 * Callers:
 *     ?BeginTransitionBackingResourceSet@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIResourceManager@2@PEAU_ResourceSetInfo@2@PEBU_MemoryPolicyManifest@@PEA_N@Z @ 0x18004E4F8 (-BeginTransitionBackingResourceSet@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIResourceManager@2@P.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??4?$unique_ptr@UPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@U?$default_delete@UPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@@utl@@@utl@@QEAAAEAV01@$$QEAV01@@Z @ 0x18004E42C (--4-$unique_ptr@UPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@U-$default_delete@UPendi.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::TryCancelBackingResourceSetTransition(
        __int64 a1,
        ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo **a2)
{
  ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo **v2; // rsi
  __int64 *v4; // rdi
  __int64 v5; // rdi

  v2 = (ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo **)(a1 + 200);
  v4 = *(__int64 **)(a1 + 200);
  if ( !v4 )
    return 2147500037LL;
  v5 = *v4;
  if ( !v5 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 88LL))(v5) )
    return 2147500037LL;
  utl::unique_ptr<ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo,utl::default_delete<ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo>>::operator=(
    a2,
    v2);
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)*a2 + 120LL))(*(_QWORD *)*a2);
}
