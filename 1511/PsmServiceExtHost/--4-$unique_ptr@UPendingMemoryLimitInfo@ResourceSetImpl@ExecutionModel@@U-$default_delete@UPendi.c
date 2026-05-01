/*
 * XREFs of ??4?$unique_ptr@UPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@U?$default_delete@UPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@@utl@@@utl@@QEAAAEAV01@$$QEAV01@@Z @ 0x18004E42C
 * Callers:
 *     ?BeginTransitionBackingResourceSet@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIResourceManager@2@PEAU_ResourceSetInfo@2@PEBU_MemoryPolicyManifest@@PEA_N@Z @ 0x18004E4F8 (-BeginTransitionBackingResourceSet@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIResourceManager@2@P.c)
 *     ?TryCancelBackingResourceSetTransition@ResourceSetImpl@ExecutionModel@@IEAAJAEAV?$unique_ptr@UPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@U?$default_delete@UPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@@utl@@@utl@@@Z @ 0x18004EF3C (-TryCancelBackingResourceSetTransition@ResourceSetImpl@ExecutionModel@@IEAAJAEAV-$unique_ptr@UPe.c)
 * Callees:
 *     ??_GPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@QEAAPEAXI@Z @ 0x18004E45C (--_GPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@QEAAPEAXI@Z.c)
 */

ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo **__fastcall utl::unique_ptr<ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo,utl::default_delete<ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo>>::operator=(
        ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo **a1,
        ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo **a2)
{
  ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo *v2; // rax
  ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo *v4; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo::`scalar deleting destructor'(v4, (unsigned int)a2);
  return a1;
}
