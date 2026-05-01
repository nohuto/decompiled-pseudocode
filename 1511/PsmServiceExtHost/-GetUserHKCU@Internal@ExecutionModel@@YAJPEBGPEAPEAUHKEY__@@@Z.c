/*
 * XREFs of ?GetUserHKCU@Internal@ExecutionModel@@YAJPEBGPEAPEAUHKEY__@@@Z @ 0x180025B08
 * Callers:
 *     ?OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z @ 0x180025D80 (-OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z.c)
 *     ?RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z @ 0x18004A598 (-RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z.c)
 * Callees:
 *     ?Open@RegistryKey@Common@@QEAAJQEAUHKEY__@@PEBGK@Z @ 0x180027AC0 (-Open@RegistryKey@Common@@QEAAJQEAUHKEY__@@PEBGK@Z.c)
 */

__int64 __fastcall ExecutionModel::Internal::GetUserHKCU(LPCWSTR lpSubKey, unsigned __int16 *a2, HKEY *a3)
{
  HKEY v4; // rbx
  int v5; // edi
  HKEY v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  v7 = 0LL;
  v5 = Common::RegistryKey::Open(&v7, HKEY_USERS, lpSubKey, 0xF003Fu);
  if ( v5 < 0 )
  {
    v4 = v7;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    v7 = 0LL;
  }
  if ( (unsigned __int64)v4 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    RegCloseKey(v4);
  return (unsigned int)v5;
}
