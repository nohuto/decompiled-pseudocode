/*
 * XREFs of ?GetGameIdByPID@GameConfigStoreServer@ExecutionModel@@UEBAJKPEAU_GUID@@@Z @ 0x180007EF0
 * Callers:
 *     GcsSrv_GetGameIdByPID @ 0x1800073E0 (GcsSrv_GetGameIdByPID.c)
 * Callees:
 *     ?GetStoreGameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z @ 0x180007C04 (-GetStoreGameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z.c)
 *     ?GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z @ 0x180007CA0 (-GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreServer::GetGameIdByPID(
        const WCHAR **this,
        DWORD a2,
        struct _GUID *a3)
{
  __int64 result; // rax

  if ( !a2 || !a3 )
    return 2147942487LL;
  result = ExecutionModel::GameConfigStoreServer::GetWin32GameIdFromPID(this, a2, a3);
  if ( (int)result < 0 )
    return ExecutionModel::GameConfigStoreServer::GetStoreGameIdFromPID(
             (ExecutionModel::GameConfigStoreServer *)this,
             a2,
             a3);
  return result;
}
