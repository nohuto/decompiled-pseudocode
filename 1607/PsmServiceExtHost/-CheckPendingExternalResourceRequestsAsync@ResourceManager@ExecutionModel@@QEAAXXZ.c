/*
 * XREFs of ?CheckPendingExternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x18000FC80
 * Callers:
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x180011440 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z @ 0x1800124A0 (-SetExternalResourcePriorities@ResourceSet@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002C90C (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::ResourceManager::CheckPendingExternalResourceRequestsAsync(
        ExecutionModel::ResourceManager *this)
{
  if ( (*((_BYTE *)this + 256) & 2) == 0 )
    TpPostWork(*((_QWORD *)this + 31));
}
