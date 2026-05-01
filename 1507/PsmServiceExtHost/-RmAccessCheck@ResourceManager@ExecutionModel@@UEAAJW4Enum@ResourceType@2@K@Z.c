/*
 * XREFs of ?RmAccessCheck@ResourceManager@ExecutionModel@@UEAAJW4Enum@ResourceType@2@K@Z @ 0x180011430
 * Callers:
 *     RmgrSrv_RmAccessCheck @ 0x180006470 (RmgrSrv_RmAccessCheck.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAccessCheck(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  LOBYTE(a4) = 1;
  return ExecutionModel::ResourceManager::RmAccessCheckEx(a1, a2, a3, a4);
}
