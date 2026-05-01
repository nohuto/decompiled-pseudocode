/*
 * XREFs of ?ReadSettings@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18001BA14
 * Callers:
 *     ?Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAUIResourceEnforcer@@PEAUIModernResourceEnforcer@@@Z @ 0x18001BEA0 (-Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAUIResourceEnforcer@.c)
 * Callees:
 *     ?ReadRedirectedEstimationKey@ResourceManager@ExecutionModel@@QEAAXPEAUHKEY__@@@Z @ 0x18001BD74 (-ReadRedirectedEstimationKey@ResourceManager@ExecutionModel@@QEAAXPEAUHKEY__@@@Z.c)
 *     ??$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV?$auto_xxx@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@0@@Z @ 0x18001C084 (--$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV-$auto_x.c)
 *     ?ReadPriorityValue@ResourceManager@ExecutionModel@@SA_JPEAUHKEY__@@PEBGPEAW4Enum@Priority@2@@Z @ 0x18001C0B0 (-ReadPriorityValue@ResourceManager@ExecutionModel@@SA_JPEAUHKEY__@@PEBGPEAW4Enum@Priority@2@@Z.c)
 *     ?RmpGetDeviceTier@@YA?AW4Enum@DeviceTier@ExecutionModel@@XZ @ 0x18001C790 (-RmpGetDeviceTier@@YA-AW4Enum@DeviceTier@ExecutionModel@@XZ.c)
 *     ?RmpGetDeviceTierNameEx@@YAPEBGW4Enum@DeviceTier@ExecutionModel@@@Z @ 0x18001C880 (-RmpGetDeviceTierNameEx@@YAPEBGW4Enum@DeviceTier@ExecutionModel@@@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18001C8C0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::ReadSettings(ExecutionModel::ResourceManager *this)
{
  HKEY *v2; // rax
  HKEY *v3; // rax
  HKEY *v4; // rax
  unsigned int DeviceTier; // eax
  __int64 DeviceTierName; // rax
  HKEY v7; // rbx
  HKEY *v8; // rax
  double v10; // xmm1_8
  _BYTE Type[12]; // [rsp+48h] [rbp-C0h] BYREF
  HKEY hkey; // [rsp+58h] [rbp-B0h] BYREF
  HKEY hKey; // [rsp+60h] [rbp-A8h] BYREF
  HKEY v14; // [rsp+68h] [rbp-A0h] BYREF
  HKEY v15; // [rsp+70h] [rbp-98h] BYREF
  WCHAR SubKey[256]; // [rsp+78h] [rbp-90h] BYREF

  *((_QWORD *)this + 8) = 0x10000LL;
  *((_QWORD *)this + 9) = 10485760LL;
  *((_QWORD *)this + 6) = 0x200000LL;
  *((_QWORD *)this + 7) = 5242880LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 16;
  hkey = 0LL;
  v2 = (HKEY *)tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(&hkey);
  if ( !RegOpenKeyW(HKEY_LOCAL_MACHINE, L"System\\ResourceManager", v2) )
  {
    *(_DWORD *)Type = 4;
    if ( !RegGetValueW(hkey, 0LL, L"NetworkBuffer", 0x10u, 0LL, &Type[4], (LPDWORD)Type) )
      *((_QWORD *)this + 8) = *(unsigned int *)&Type[4];
    *(_DWORD *)Type = 4;
    if ( !RegGetValueW(hkey, 0LL, L"ForegroundAppNetworkBuffer", 0x10u, 0LL, &Type[4], (LPDWORD)Type) )
      *((_QWORD *)this + 9) = *(unsigned int *)&Type[4];
    *(_DWORD *)Type = 4;
    if ( !RegGetValueW(hkey, 0LL, L"DatabaseSharedMemSmall", 0x10u, 0LL, &Type[4], (LPDWORD)Type) )
      *((_QWORD *)this + 6) = *(unsigned int *)&Type[4];
    *(_DWORD *)Type = 4;
    if ( !RegGetValueW(hkey, 0LL, L"DatabaseSharedMemLarge", 0x10u, 0LL, &Type[4], (LPDWORD)Type) )
      *((_QWORD *)this + 7) = *(unsigned int *)&Type[4];
    ExecutionModel::ResourceManager::ReadPriorityValue(
      hkey,
      L"MaxPriorityToReleaseWhilePausing",
      (ExecutionModel::ResourceManager *)((char *)this + 80));
    ExecutionModel::ResourceManager::ReadPriorityValue(
      hkey,
      L"TerminalResourceSetPriority",
      (ExecutionModel::ResourceManager *)((char *)this + 84));
  }
  ExecutionModel::ResourceManager::ReadRedirectedEstimationKey(this, hkey);
  v15 = 0LL;
  *((_DWORD *)this + 44) = 10000;
  v3 = (HKEY *)tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(&v15);
  if ( !RegOpenKeyW(HKEY_LOCAL_MACHINE, L"SYSTEM\\WatchdogTimers", v3) )
  {
    *(_DWORD *)Type = 4;
    RegGetValueW(v15, 0LL, L"EmAckTimeout", 0x10u, 0LL, (char *)this + 176, (LPDWORD)Type);
  }
  *((_DWORD *)this + 26) = 5;
  *((_QWORD *)this + 11) = 0x3FD0000000000000LL;
  v14 = 0LL;
  v4 = (HKEY *)tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(&v14);
  if ( !RegOpenKeyW(HKEY_LOCAL_MACHINE, *((LPCWSTR *)this + 4), v4) )
  {
    *(_DWORD *)&Type[8] = 4;
    *(_QWORD *)Type = 0x400000000LL;
    if ( !RegQueryValueExW(v14, L"HistoryWeightPct", 0LL, (LPDWORD)&Type[8], Type, (LPDWORD)&Type[4])
      && *(_QWORD *)&Type[4] == 0x400000004LL )
    {
      v10 = (double)*(int *)Type / 100.0;
      *((double *)this + 11) = v10;
      if ( v10 <= 0.0 || v10 > 1.0 )
        *((_QWORD *)this + 11) = 0x3FD0000000000000LL;
    }
  }
  hKey = 0LL;
  *((_DWORD *)this + 10) = 1;
  DeviceTier = RmpGetDeviceTier();
  DeviceTierName = RmpGetDeviceTierNameEx(DeviceTier);
  StringCchPrintfW(SubKey, 0x100uLL, L"Policy\\%s", DeviceTierName);
  v7 = hkey;
  v8 = (HKEY *)tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(&hKey);
  if ( !RegOpenKeyW(v7, SubKey, v8) )
  {
    *(_QWORD *)Type = 0x400000004LL;
    *(_DWORD *)&Type[8] = 0;
    if ( !RegQueryValueExW(hKey, L"MaxResidentCctApplications", 0LL, (LPDWORD)Type, &Type[8], (LPDWORD)&Type[4])
      && *(_QWORD *)Type == 0x400000004LL )
    {
      *((_DWORD *)this + 10) = *(_DWORD *)&Type[8];
    }
  }
  if ( hKey )
    RegCloseKey(hKey);
  if ( v14 )
    RegCloseKey(v14);
  if ( v15 )
    RegCloseKey(v15);
  if ( hkey )
    RegCloseKey(hkey);
  return 0LL;
}
