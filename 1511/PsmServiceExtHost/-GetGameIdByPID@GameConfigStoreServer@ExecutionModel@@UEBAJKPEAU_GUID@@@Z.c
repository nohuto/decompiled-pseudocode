/*
 * XREFs of ?GetGameIdByPID@GameConfigStoreServer@ExecutionModel@@UEBAJKPEAU_GUID@@@Z @ 0x18001C740
 * Callers:
 *     GcsSrv_GetGameIdByPID @ 0x18001D040 (GcsSrv_GetGameIdByPID.c)
 *     GcsSrv_GetGameConfigSizeForClientProcess @ 0x18001D0E0 (GcsSrv_GetGameConfigSizeForClientProcess.c)
 * Callees:
 *     ?GetStoreGameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z @ 0x18001C550 (-GetStoreGameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z.c)
 *     ?GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z @ 0x18001C610 (-GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreServer::GetGameIdByPID(
        ExecutionModel::GameConfigStoreServer *this,
        DWORD dwProcessId,
        struct _GUID *a3)
{
  __int64 result; // rax

  if ( !dwProcessId || !a3 )
    return 2147942487LL;
  result = ExecutionModel::GameConfigStoreServer::GetWin32GameIdFromPID(this, dwProcessId, a3);
  if ( (int)result < 0 )
    return ExecutionModel::GameConfigStoreServer::GetStoreGameIdFromPID(this, dwProcessId, a3);
  return result;
}
