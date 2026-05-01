/*
 * XREFs of ?ReadSettings@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18001DB00
 * Callers:
 *     ?Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@@Z @ 0x18001DF7C (-Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnfo.c)
 * Callees:
 *     ?ReadRedirectedEstimationKey@ResourceManager@ExecutionModel@@QEAAXPEAUHKEY__@@@Z @ 0x18001DE50 (-ReadRedirectedEstimationKey@ResourceManager@ExecutionModel@@QEAAXPEAUHKEY__@@@Z.c)
 *     ?ReadPriorityValue@ResourceManager@ExecutionModel@@SA_JPEAUHKEY__@@PEBGPEAW4Enum@Priority@2@@Z @ 0x18001E0DC (-ReadPriorityValue@ResourceManager@ExecutionModel@@SA_JPEAUHKEY__@@PEBGPEAW4Enum@Priority@2@@Z.c)
 *     ?RmpGetDeviceTier@@YA?AW4Enum@DeviceTier@ExecutionModel@@XZ @ 0x18001E7C0 (-RmpGetDeviceTier@@YA-AW4Enum@DeviceTier@ExecutionModel@@XZ.c)
 *     ?RmpGetDeviceTierNameEx@@YAPEBGW4Enum@DeviceTier@ExecutionModel@@@Z @ 0x18001E8AC (-RmpGetDeviceTierNameEx@@YAPEBGW4Enum@DeviceTier@ExecutionModel@@@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18001E8E4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::ReadSettings(ExecutionModel::ResourceManager *this)
{
  const WCHAR *v2; // rdx
  unsigned int DeviceTier; // eax
  __int64 DeviceTierName; // rax
  double v6; // xmm1_8
  _BYTE Type[12]; // [rsp+48h] [rbp-C0h] BYREF
  HKEY phkResult; // [rsp+58h] [rbp-B0h] BYREF
  HKEY hKey; // [rsp+60h] [rbp-A8h] BYREF
  HKEY v10; // [rsp+68h] [rbp-A0h] BYREF
  HKEY hkey; // [rsp+70h] [rbp-98h] BYREF
  WCHAR SubKey[256]; // [rsp+78h] [rbp-90h] BYREF

  *((_QWORD *)this + 6) = 0x10000LL;
  *((_QWORD *)this + 7) = 10485760LL;
  *((_QWORD *)this + 4) = 0x200000LL;
  *((_QWORD *)this + 5) = 5242880LL;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 16;
  phkResult = 0LL;
  if ( !RegOpenKeyW(HKEY_LOCAL_MACHINE, L"System\\ResourceManager", &phkResult) )
  {
    *(_DWORD *)Type = 4;
    if ( !RegGetValueW(phkResult, 0LL, L"NetworkBuffer", 0x10u, 0LL, &Type[4], (LPDWORD)Type) )
      *((_QWORD *)this + 6) = *(unsigned int *)&Type[4];
    *(_DWORD *)Type = 4;
    if ( !RegGetValueW(phkResult, 0LL, L"ForegroundAppNetworkBuffer", 0x10u, 0LL, &Type[4], (LPDWORD)Type) )
      *((_QWORD *)this + 7) = *(unsigned int *)&Type[4];
    *(_DWORD *)Type = 4;
    if ( !RegGetValueW(phkResult, 0LL, L"DatabaseSharedMemSmall", 0x10u, 0LL, &Type[4], (LPDWORD)Type) )
      *((_QWORD *)this + 4) = *(unsigned int *)&Type[4];
    *(_DWORD *)Type = 4;
    if ( !RegGetValueW(phkResult, 0LL, L"DatabaseSharedMemLarge", 0x10u, 0LL, &Type[4], (LPDWORD)Type) )
      *((_QWORD *)this + 5) = *(unsigned int *)&Type[4];
    ExecutionModel::ResourceManager::ReadPriorityValue(
      phkResult,
      L"MaxPriorityToReleaseWhilePausing",
      (ExecutionModel::ResourceManager *)((char *)this + 64));
    ExecutionModel::ResourceManager::ReadPriorityValue(
      phkResult,
      L"TerminalResourceSetPriority",
      (ExecutionModel::ResourceManager *)((char *)this + 68));
  }
  ExecutionModel::ResourceManager::ReadRedirectedEstimationKey(this, phkResult);
  hkey = 0LL;
  *((_DWORD *)this + 40) = 10000;
  if ( !RegOpenKeyW(HKEY_LOCAL_MACHINE, L"SYSTEM\\WatchdogTimers", &hkey) )
  {
    *(_DWORD *)Type = 4;
    RegGetValueW(hkey, 0LL, L"EmAckTimeout", 0x10u, 0LL, (char *)this + 160, (LPDWORD)Type);
  }
  v2 = (const WCHAR *)*((_QWORD *)this + 2);
  *((_DWORD *)this + 22) = 5;
  *((_QWORD *)this + 9) = 0x3FD0000000000000LL;
  v10 = 0LL;
  if ( !RegOpenKeyW(HKEY_LOCAL_MACHINE, v2, &v10) )
  {
    *(_DWORD *)&Type[8] = 4;
    *(_QWORD *)Type = 0x400000000LL;
    if ( !RegQueryValueExW(v10, L"HistoryWeightPct", 0LL, (LPDWORD)&Type[8], Type, (LPDWORD)&Type[4])
      && *(_QWORD *)&Type[4] == 0x400000004LL )
    {
      v6 = (double)*(int *)Type / 100.0;
      *((double *)this + 9) = v6;
      if ( v6 <= 0.0 || v6 > 1.0 )
        *((_QWORD *)this + 9) = 0x3FD0000000000000LL;
    }
  }
  hKey = 0LL;
  *((_DWORD *)this + 6) = 1;
  DeviceTier = RmpGetDeviceTier();
  DeviceTierName = RmpGetDeviceTierNameEx(DeviceTier);
  StringCchPrintfW(SubKey, 0x100uLL, L"Policy\\%s", DeviceTierName);
  if ( hKey )
    RegCloseKey(hKey);
  hKey = 0LL;
  if ( !RegOpenKeyW(phkResult, SubKey, &hKey) )
  {
    *(_QWORD *)Type = 0x400000004LL;
    *(_DWORD *)&Type[8] = 0;
    if ( !RegQueryValueExW(hKey, L"MaxResidentCctApplications", 0LL, (LPDWORD)Type, &Type[8], (LPDWORD)&Type[4])
      && *(_QWORD *)Type == 0x400000004LL )
    {
      *((_DWORD *)this + 6) = *(_DWORD *)&Type[8];
    }
  }
  if ( hKey )
    RegCloseKey(hKey);
  if ( v10 )
    RegCloseKey(v10);
  if ( hkey )
    RegCloseKey(hkey);
  if ( phkResult )
    RegCloseKey(phkResult);
  return 0LL;
}
