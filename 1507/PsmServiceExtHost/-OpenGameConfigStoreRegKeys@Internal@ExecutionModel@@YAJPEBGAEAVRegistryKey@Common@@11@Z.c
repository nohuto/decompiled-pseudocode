/*
 * XREFs of ?OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z @ 0x1800078A0
 * Callers:
 *     ?GetGameIdByAUMID@GameConfigStoreServer@ExecutionModel@@UEBAJPEBGPEAU_GUID@@@Z @ 0x180002B90 (-GetGameIdByAUMID@GameConfigStoreServer@ExecutionModel@@UEBAJPEBGPEAU_GUID@@@Z.c)
 *     ?GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z @ 0x180007CA0 (-GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z.c)
 *     ?GetGlobalProperty@GameConfigStoreServer@ExecutionModel@@UEBAJW4GlobalProperty_t@2@PEAEPEAI@Z @ 0x180007E10 (-GetGlobalProperty@GameConfigStoreServer@ExecutionModel@@UEBAJW4GlobalProperty_t@2@PEAEPEAI@Z.c)
 *     ?Initialize@GameConfigStoreServer@ExecutionModel@@QEAAJPEBG@Z @ 0x18001BB0C (-Initialize@GameConfigStoreServer@ExecutionModel@@QEAAJPEBG@Z.c)
 *     ?SetGlobalProperty@GameConfigStoreServer@ExecutionModel@@UEBAJW4GlobalProperty_t@2@PEAEI@Z @ 0x18001BC50 (-SetGlobalProperty@GameConfigStoreServer@ExecutionModel@@UEBAJW4GlobalProperty_t@2@PEAEI@Z.c)
 *     ?AddGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJPEBUGameConfig@2@PEAU_GUID@@@Z @ 0x18001BD20 (-AddGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJPEBUGameConfig@2@PEAU_GUID@@@Z.c)
 *     ?GetAllGameIds@GameConfigStoreServer@ExecutionModel@@UEBAJPEAU_GUID@@PEAI@Z @ 0x180043F30 (-GetAllGameIds@GameConfigStoreServer@ExecutionModel@@UEBAJPEAU_GUID@@PEAI@Z.c)
 *     ?GetGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@PEAUGameConfig@2@PEAI@Z @ 0x1800440D0 (-GetGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@PEAUGameConfig@2@PEAI@Z.c)
 *     ?GetGameIdsByExeName@GameConfigStoreServer@ExecutionModel@@UEBAJPEBGPEAU_GUID@@PEAI@Z @ 0x180044200 (-GetGameIdsByExeName@GameConfigStoreServer@ExecutionModel@@UEBAJPEBGPEAU_GUID@@PEAI@Z.c)
 *     ?GetGameProperty@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@W4GameProperty_t@2@PEAEPEAI@Z @ 0x1800442C0 (-GetGameProperty@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@W4GameProperty_t@2@PEAEPEAI@.c)
 *     ?ModifyGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@PEBUGameConfig@2@@Z @ 0x180044D60 (-ModifyGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@PEBUGameConfig@2@@Z.c)
 *     ?RemoveGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@@Z @ 0x1800454C0 (-RemoveGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@@Z.c)
 *     ?SetGameProperty@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@W4GameProperty_t@2@PEAEI@Z @ 0x180045A20 (-SetGameProperty@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@W4GameProperty_t@2@PEAEI@Z.c)
 * Callees:
 *     ?GetUserHKCU@Internal@ExecutionModel@@YAJPEBGPEAPEAUHKEY__@@@Z @ 0x180007A20 (-GetUserHKCU@Internal@ExecutionModel@@YAJPEBGPEAPEAUHKEY__@@@Z.c)
 *     ?GetGameConfigStoreChildrenPath@Internal@ExecutionModel@@YAPEBGXZ @ 0x180007AAC (-GetGameConfigStoreChildrenPath@Internal@ExecutionModel@@YAPEBGXZ.c)
 *     ?GetGameConfigStoreParentsPath@Internal@ExecutionModel@@YAPEBGXZ @ 0x180007ABC (-GetGameConfigStoreParentsPath@Internal@ExecutionModel@@YAPEBGXZ.c)
 *     ?GetGameConfigStoreRootPath@Internal@ExecutionModel@@YAPEBGXZ @ 0x180007ACC (-GetGameConfigStoreRootPath@Internal@ExecutionModel@@YAPEBGXZ.c)
 */

__int64 __fastcall ExecutionModel::Internal::OpenGameConfigStoreRegKeys(
        const WCHAR *this,
        HKEY *a2,
        HKEY *a3,
        HKEY *a4)
{
  int UserHKCU; // eax
  ExecutionModel::Internal *v8; // rcx
  HKEY v9; // rbx
  signed int v10; // edi
  const WCHAR *GameConfigStoreRootPath; // rdi
  LSTATUS Key; // eax
  ExecutionModel::Internal *v13; // rcx
  const WCHAR *GameConfigStoreParentsPath; // rdi
  LSTATUS v15; // eax
  ExecutionModel::Internal *v16; // rcx
  const WCHAR *GameConfigStoreChildrenPath; // rdi
  LSTATUS v18; // eax
  HKEY hKey[2]; // [rsp+50h] [rbp-28h] BYREF

  hKey[0] = 0LL;
  UserHKCU = ExecutionModel::Internal::GetUserHKCU(this, (const unsigned __int16 *)hKey, a3);
  v9 = hKey[0];
  v10 = UserHKCU;
  if ( UserHKCU >= 0 )
  {
    GameConfigStoreRootPath = ExecutionModel::Internal::GetGameConfigStoreRootPath(v8);
    if ( (unsigned __int64)*a2 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
      RegCloseKey(*a2);
    *a2 = 0LL;
    Key = RegCreateKeyExW(v9, GameConfigStoreRootPath, 0, 0LL, 0, 0xF003Fu, 0LL, a2, 0LL);
    v10 = Key;
    if ( Key > 0 )
      v10 = (unsigned __int16)Key | 0x80070000;
    if ( v10 >= 0 )
    {
      GameConfigStoreParentsPath = ExecutionModel::Internal::GetGameConfigStoreParentsPath(v13);
      if ( (unsigned __int64)*a3 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
        RegCloseKey(*a3);
      *a3 = 0LL;
      v15 = RegCreateKeyExW(v9, GameConfigStoreParentsPath, 0, 0LL, 0, 0xF003Fu, 0LL, a3, 0LL);
      v10 = v15;
      if ( v15 > 0 )
        v10 = (unsigned __int16)v15 | 0x80070000;
      if ( v10 >= 0 )
      {
        GameConfigStoreChildrenPath = ExecutionModel::Internal::GetGameConfigStoreChildrenPath(v16);
        if ( (unsigned __int64)*a4 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
          RegCloseKey(*a4);
        *a4 = 0LL;
        v18 = RegCreateKeyExW(v9, GameConfigStoreChildrenPath, 0, 0LL, 0, 0xF003Fu, 0LL, a4, 0LL);
        v10 = v18;
        if ( v18 > 0 )
          v10 = (unsigned __int16)v18 | 0x80070000;
      }
    }
  }
  if ( (unsigned __int64)v9 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    RegCloseKey(v9);
  return (unsigned int)v10;
}
