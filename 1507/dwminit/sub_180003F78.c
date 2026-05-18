/*
 * XREFs of sub_180003F78 @ 0x180003F78
 * Callers:
 *     sub_180003E6C @ 0x180003E6C (sub_180003E6C.c)
 * Callees:
 *     sub_180003F0C @ 0x180003F0C (sub_180003F0C.c)
 */

bool __fastcall sub_180003F78(__int64 a1, __int64 a2, _DWORD *a3)
{
  bool v4; // bl
  __int64 v5; // rdx
  HKEY hKey; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  hKey = 0LL;
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Avalon.Graphics", 0, 0x20019u, &hKey) )
  {
    v4 = sub_180003F0C(hKey, v5, a3);
    RegCloseKey(hKey);
  }
  return v4;
}
