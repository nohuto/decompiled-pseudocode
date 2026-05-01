/*
 * XREFs of ??1?$unique_ptr@UPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@U?$default_delete@UPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@@utl@@@utl@@QEAA@XZ @ 0x180036EC8
 * Callers:
 *     ?BeginTransitionBackingResourceSet@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIResourceManager@2@PEAU_ResourceSetInfo@2@PEBU_MemoryPolicyManifest@@PEA_N@Z @ 0x18004E4F8 (-BeginTransitionBackingResourceSet@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIResourceManager@2@P.c)
 * Callees:
 *     ??_GPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@QEAAPEAXI@Z @ 0x18004E45C (--_GPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@QEAAPEAXI@Z.c)
 */

void *__fastcall utl::unique_ptr<ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo,utl::default_delete<ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo>>::~unique_ptr<ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo,utl::default_delete<ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo>>(
        ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo **a1,
        unsigned int a2)
{
  ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo::`scalar deleting destructor'(v2, a2);
  return result;
}
