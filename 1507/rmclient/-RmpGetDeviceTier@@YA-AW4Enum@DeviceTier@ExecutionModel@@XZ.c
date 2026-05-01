/*
 * XREFs of ?RmpGetDeviceTier@@YA?AW4Enum@DeviceTier@ExecutionModel@@XZ @ 0x180007570
 * Callers:
 *     ?GetDeviceTierName@ResourceManagerClientProxy@@UEAAPEBGXZ @ 0x1800072F0 (-GetDeviceTierName@ResourceManagerClientProxy@@UEAAPEBGXZ.c)
 *     ?GetResourceSetTypeConverter@ResourceManagerProxy@@QEAAJPEAPEAVResourceSetTypeToInfoConverter@ExecutionModel@@@Z @ 0x18000EA20 (-GetResourceSetTypeConverter@ResourceManagerProxy@@QEAAJPEAPEAVResourceSetTypeToInfoConverter@Ex.c)
 *     RmTestGetDeviceTier @ 0x18000F190 (RmTestGetDeviceTier.c)
 *     ?GetDeviceTier@ResourceManagerClientProxy@@UEAA?AW4Enum@DeviceTier@ExecutionModel@@XZ @ 0x180012FE0 (-GetDeviceTier@ResourceManagerClientProxy@@UEAA-AW4Enum@DeviceTier@ExecutionModel@@XZ.c)
 * Callees:
 *     ?RmpGetDeviceTierNameEx@@YAPEBGW4Enum@DeviceTier@ExecutionModel@@@Z @ 0x180007660 (-RmpGetDeviceTierNameEx@@YAPEBGW4Enum@DeviceTier@ExecutionModel@@@Z.c)
 *     __security_check_cookie @ 0x180008770 (__security_check_cookie.c)
 */

__int64 RmpGetDeviceTier()
{
  int i; // ebx
  const WCHAR *DeviceTierName; // rax
  BYTE Data[4]; // [rsp+30h] [rbp-19h] BYREF
  DWORD cbData; // [rsp+34h] [rbp-15h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-11h] BYREF
  DWORD Type[4]; // [rsp+40h] [rbp-9h] BYREF
  _MEMORYSTATUSEX Buffer; // [rsp+50h] [rbp+7h] BYREF

  hKey = 0LL;
  i = 0;
  Buffer.dwLength = 64;
  if ( GlobalMemoryStatusEx(&Buffer)
    && !RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"System\\ResourceManager\\TierThresholds", 0, 0x20019u, &hKey) )
  {
    for ( i = 3; i > 0; --i )
    {
      cbData = 4;
      DeviceTierName = (const WCHAR *)RmpGetDeviceTierNameEx((unsigned int)i);
      if ( !RegQueryValueExW(hKey, DeviceTierName, 0LL, Type, Data, &cbData)
        && Type[0] == 4
        && Buffer.ullTotalPhys >= (unsigned int)(*(_DWORD *)Data << 20) )
      {
        break;
      }
    }
  }
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)i;
}
