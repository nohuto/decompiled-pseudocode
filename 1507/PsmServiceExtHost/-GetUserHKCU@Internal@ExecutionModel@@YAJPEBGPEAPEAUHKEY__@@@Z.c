/*
 * XREFs of ?GetUserHKCU@Internal@ExecutionModel@@YAJPEBGPEAPEAUHKEY__@@@Z @ 0x180007A20
 * Callers:
 *     ?OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z @ 0x1800078A0 (-OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z.c)
 *     ?RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z @ 0x180045018 (-RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::Internal::GetUserHKCU(LPCWSTR lpSubKey, unsigned __int16 *a2, HKEY *a3)
{
  HKEY v4; // rbx
  LSTATUS v5; // eax
  signed int v6; // edi
  HKEY v8; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  v8 = 0LL;
  v5 = RegOpenKeyExW(HKEY_USERS, lpSubKey, 0, 0xF003Fu, &v8);
  v6 = v5;
  if ( v5 > 0 )
    v6 = (unsigned __int16)v5 | 0x80070000;
  if ( v6 < 0 )
  {
    v4 = v8;
  }
  else
  {
    *(_QWORD *)a2 = v8;
    v8 = 0LL;
  }
  if ( (unsigned __int64)v4 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    RegCloseKey(v4);
  return (unsigned int)v6;
}
