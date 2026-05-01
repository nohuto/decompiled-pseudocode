/*
 * XREFs of ?OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z @ 0x180025D80
 * Callers:
 *     ?GetGameConfigStoreServer@Internal@ExecutionModel@@YAJPEBGPEAPEAVGameConfigStoreServer@2@@Z @ 0x18001C0CC (-GetGameConfigStoreServer@Internal@ExecutionModel@@YAJPEBGPEAPEAVGameConfigStoreServer@2@@Z.c)
 * Callees:
 *     ?GetGameConfigStoreRootPath@Internal@ExecutionModel@@YAPEBGXZ @ 0x180020874 (-GetGameConfigStoreRootPath@Internal@ExecutionModel@@YAPEBGXZ.c)
 *     ?GetGameConfigStoreParentsPath@Internal@ExecutionModel@@YAPEBGXZ @ 0x180020884 (-GetGameConfigStoreParentsPath@Internal@ExecutionModel@@YAPEBGXZ.c)
 *     ?GetGameConfigStoreChildrenPath@Internal@ExecutionModel@@YAPEBGXZ @ 0x180020894 (-GetGameConfigStoreChildrenPath@Internal@ExecutionModel@@YAPEBGXZ.c)
 *     ?GetUserHKCU@Internal@ExecutionModel@@YAJPEBGPEAPEAUHKEY__@@@Z @ 0x180025B08 (-GetUserHKCU@Internal@ExecutionModel@@YAJPEBGPEAPEAUHKEY__@@@Z.c)
 *     ?Create@RegistryKey@Common@@QEAAJQEAUHKEY__@@PEBGKKQEAU_SECURITY_ATTRIBUTES@@PEAK@Z @ 0x180027D3C (-Create@RegistryKey@Common@@QEAAJQEAUHKEY__@@PEBGKKQEAU_SECURITY_ATTRIBUTES@@PEAK@Z.c)
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
  int v10; // edi
  const WCHAR *GameConfigStoreRootPath; // rax
  unsigned int v12; // r9d
  ExecutionModel::Internal *v13; // rcx
  const WCHAR *GameConfigStoreParentsPath; // rax
  unsigned int v15; // r9d
  ExecutionModel::Internal *v16; // rcx
  const WCHAR *GameConfigStoreChildrenPath; // rax
  unsigned int v18; // r9d
  unsigned int v20; // [rsp+20h] [rbp-38h]
  unsigned int v21; // [rsp+20h] [rbp-38h]
  unsigned int v22; // [rsp+20h] [rbp-38h]
  struct _SECURITY_ATTRIBUTES *v23; // [rsp+28h] [rbp-30h]
  struct _SECURITY_ATTRIBUTES *v24; // [rsp+28h] [rbp-30h]
  struct _SECURITY_ATTRIBUTES *v25; // [rsp+28h] [rbp-30h]
  unsigned int *v26; // [rsp+30h] [rbp-28h]
  unsigned int *v27; // [rsp+30h] [rbp-28h]
  unsigned int *v28; // [rsp+30h] [rbp-28h]
  HKEY hKey[3]; // [rsp+40h] [rbp-18h] BYREF

  hKey[0] = 0LL;
  UserHKCU = ExecutionModel::Internal::GetUserHKCU(this, (unsigned __int16 *)hKey, a3);
  v9 = hKey[0];
  v10 = UserHKCU;
  if ( UserHKCU >= 0 )
  {
    GameConfigStoreRootPath = ExecutionModel::Internal::GetGameConfigStoreRootPath(v8);
    v10 = Common::RegistryKey::Create(a2, v9, GameConfigStoreRootPath, v12, v20, v23, v26);
    if ( v10 >= 0 )
    {
      GameConfigStoreParentsPath = ExecutionModel::Internal::GetGameConfigStoreParentsPath(v13);
      v10 = Common::RegistryKey::Create(a3, v9, GameConfigStoreParentsPath, v15, v21, v24, v27);
      if ( v10 >= 0 )
      {
        GameConfigStoreChildrenPath = ExecutionModel::Internal::GetGameConfigStoreChildrenPath(v16);
        v10 = Common::RegistryKey::Create(a4, v9, GameConfigStoreChildrenPath, v18, v22, v25, v28);
      }
    }
  }
  if ( (unsigned __int64)v9 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    RegCloseKey(v9);
  return (unsigned int)v10;
}
