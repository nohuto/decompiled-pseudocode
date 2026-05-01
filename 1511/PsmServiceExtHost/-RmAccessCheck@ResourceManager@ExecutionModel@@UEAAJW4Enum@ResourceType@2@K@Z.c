/*
 * XREFs of ?RmAccessCheck@ResourceManager@ExecutionModel@@UEAAJW4Enum@ResourceType@2@K@Z @ 0x1800023E0
 * Callers:
 *     RmgrSrv_RmAccessCheck @ 0x1800016B0 (RmgrSrv_RmAccessCheck.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAccessCheck(
        ExecutionModel::ResourceManager *a1,
        int a2,
        unsigned int a3)
{
  return ExecutionModel::ResourceManager::RmAccessCheckEx(a1, a2, a3, 1);
}
