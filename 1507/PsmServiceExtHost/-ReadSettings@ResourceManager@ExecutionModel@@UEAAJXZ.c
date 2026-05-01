/*
 * XREFs of ?ReadSettings@ResourceManager@ExecutionModel@@UEAAJXZ @ 0x18001F9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180017EC0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV?$auto_xxx@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@0@@Z @ 0x180020288 (--$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV-$auto_x.c)
 *     ?ReadPriorityValue@ResourceManager@ExecutionModel@@SA_JPEAUHKEY__@@PEBGPEAW4Enum@Priority@2@@Z @ 0x1800203E4 (-ReadPriorityValue@ResourceManager@ExecutionModel@@SA_JPEAUHKEY__@@PEBGPEAW4Enum@Priority@2@@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::ReadSettings(ExecutionModel::ResourceManager *this)
{
  HKEY *v2; // rax
  HKEY *v3; // rax
  HKEY *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  HKEY v7; // rbx
  HKEY *v8; // rax
  double v10; // xmm1_8
  _BYTE Type[12]; // [rsp+48h] [rbp-C0h] BYREF
  HKEY hkey; // [rsp+58h] [rbp-B0h] BYREF
  HKEY v13; // [rsp+60h] [rbp-A8h] BYREF
  HKEY v14; // [rsp+68h] [rbp-A0h] BYREF
  HKEY hKey; // [rsp+70h] [rbp-98h] BYREF
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
  v14 = 0LL;
  *((_DWORD *)this + 48) = 10000;
  v3 = (HKEY *)tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(&v14);
  if ( !RegOpenKeyW(HKEY_LOCAL_MACHINE, L"SYSTEM\\WatchdogTimers", v3) )
  {
    *(_DWORD *)Type = 4;
    RegGetValueW(v14, 0LL, L"EmAckTimeout", 0x10u, 0LL, (char *)this + 192, (LPDWORD)Type);
  }
  *((_DWORD *)this + 26) = 5;
  *((_QWORD *)this + 11) = 0x3FD0000000000000LL;
  v13 = 0LL;
  v4 = (HKEY *)tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(&v13);
  if ( !RegOpenKeyW(HKEY_LOCAL_MACHINE, L"System\\ResourceManager\\MemoryHistory", v4) )
  {
    *(_DWORD *)&Type[8] = 4;
    *(_QWORD *)Type = 0x400000000LL;
    if ( !RegQueryValueExW(v13, L"HistoryWeightPct", 0LL, (LPDWORD)&Type[8], Type, (LPDWORD)&Type[4])
      && *(_QWORD *)&Type[4] == 0x400000004LL )
    {
      v10 = (double)*(int *)Type / 100.0;
      *((double *)this + 11) = v10;
      if ( v10 <= 0.0 || v10 > 1.0 )
        *((_QWORD *)this + 11) = 0x3FD0000000000000LL;
    }
  }
  v5 = *(_QWORD *)this;
  hKey = 0LL;
  *((_DWORD *)this + 10) = 1;
  v6 = (*(__int64 (__fastcall **)(ExecutionModel::ResourceManager *))(v5 + 136))(this);
  StringCchPrintfW(SubKey, 256LL, L"Policy\\%s", v6);
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
  if ( v13 )
    RegCloseKey(v13);
  if ( v14 )
    RegCloseKey(v14);
  if ( hkey )
    RegCloseKey(hkey);
  return 0LL;
}
