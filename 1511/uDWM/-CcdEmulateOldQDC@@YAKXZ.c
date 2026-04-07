/*
 * XREFs of ?CcdEmulateOldQDC@@YAKXZ @ 0x1800A01E0
 * Callers:
 *     ?CcdQueryDisplayConfig@@YAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@0PEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1800A0270 (-CcdQueryDisplayConfig@@YAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@0PEAUDISPLAYCONFIG_MODE_INFO@@PEAW4.c)
 * Callees:
 *     <none>
 */

__int64 CcdEmulateOldQDC(void)
{
  DWORD cbData; // [rsp+40h] [rbp+8h] BYREF
  DWORD Type; // [rsp+48h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+50h] [rbp+18h] BYREF

  hKey = 0LL;
  if ( !RegOpenKeyExA(HKEY_CURRENT_USER, "Control Panel\\Display", 0, 1u, &hKey) )
  {
    cbData = 4;
    Type = 4;
    RegQueryValueExA(hKey, "EmulateOldQDC", 0LL, &Type, &Data, &cbData);
    RegCloseKey(hKey);
  }
  return *(unsigned int *)&Data;
}
