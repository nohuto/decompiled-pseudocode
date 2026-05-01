/*
 * XREFs of ?RuntimeClassInitialize@AppEnergyUsageManager@@QEAAJPEAUIRMExecServicesProvider@ExecutionModel@@@Z @ 0x1800217CC
 * Callers:
 *     ??$MakeAndInitialize@VAppEnergyUsageManager@@V1@AEAPEAUIRMExecServicesProvider@ExecutionModel@@@Details@WRL@Microsoft@@YAJPEAPEAVAppEnergyUsageManager@@AEAPEAUIRMExecServicesProvider@ExecutionModel@@@Z @ 0x1800215C4 (--$MakeAndInitialize@VAppEnergyUsageManager@@V1@AEAPEAUIRMExecServicesProvider@ExecutionModel@@@.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180016A90 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ?CreatePackageEnergyStateChangeWnfState@AppEnergyUsageManager@@IEAAJXZ @ 0x180021720 (-CreatePackageEnergyStateChangeWnfState@AppEnergyUsageManager@@IEAAJXZ.c)
 *     ??4?$ComPtr@UIRMExecServicesProvider@ExecutionModel@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRMExecServicesProvider@ExecutionModel@@@Z @ 0x180021CC8 (--4-$ComPtr@UIRMExecServicesProvider@ExecutionModel@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRMExecServ.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C420 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AppEnergyUsageManager::RuntimeClassInitialize(
        AppEnergyUsageManager *this,
        struct ExecutionModel::IRMExecServicesProvider *a2)
{
  _QWORD *v2; // r14
  int v4; // eax
  unsigned int v5; // edi
  bool v6; // sf
  int v7; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  int phkResult; // [rsp+20h] [rbp-E0h]
  DWORD pcbData; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE SystemInformation[4]; // [rsp+44h] [rbp-BCh] BYREF
  HKEY hkey; // [rsp+48h] [rbp-B8h] BYREF
  __int64 pvData[64]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18[64]; // [rsp+250h] [rbp+150h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+488h] [rbp+388h]

  v2 = (_QWORD *)((char *)this + 128);
  hkey = 0LL;
  pcbData = 4;
  Microsoft::WRL::ComPtr<ExecutionModel::IRMExecServicesProvider>::operator=((char *)this + 128, a2);
  v4 = AppEnergyUsageManager::CreatePackageEnergyStateChangeWnfState(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      (void *)0x63,
      (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
      (const char *)(unsigned int)v4,
      phkResult);
    return v5;
  }
  else
  {
    AppEnergyUsageManager::s_pfnGetTickCount = (unsigned int (*)(void))GetTickCount;
    AppEnergyUsageManager::s_dwHistoricalTimeInterval = 1800000;
    AppEnergyUsageManager::s_dwEnergyIncreaseEventChange = 50;
    AppEnergyUsageManager::s_dwEnergyDecreaseEventLevel = 50;
    AppEnergyUsageManager::s_dwLowUsageLevel = 50;
    AppEnergyUsageManager::s_dwBadEnergyLevel = 500;
    AppEnergyUsageManager::s_dwEnergyWarningEventLevel = 90;
    AppEnergyUsageManager::s_dwMaxAcceptableUsageLevel = 100;
    AppEnergyUsageManager::s_ExcessiveUsageLevel = 150;
    AppEnergyUsageManager::s_NearTerminationUsageLevel = 450;
    *((_DWORD *)this + 34) = 21600000;
    v6 = NtQuerySystemInformation(SystemMirrorMemoryInformation|0x80, SystemInformation, 1u, 0LL) < 0;
    v7 = SystemInformation[0];
    if ( v6 )
      v7 = 0;
    *((_DWORD *)this + 38) = v7;
    if ( !RegOpenKeyExW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows NT\\CurrentVersion\\EnergyModel",
            0,
            0x20019u,
            &hkey) )
    {
      pcbData = 4;
      RegGetValueW(
        hkey,
        0LL,
        L"HistoricTimeInterval",
        0x18u,
        0LL,
        &AppEnergyUsageManager::s_dwHistoricalTimeInterval,
        &pcbData);
      pcbData = 4;
      RegGetValueW(hkey, 0LL, L"BadEnergyLevel", 0x18u, 0LL, &AppEnergyUsageManager::s_dwBadEnergyLevel, &pcbData);
      pcbData = 4;
      RegGetValueW(
        hkey,
        0LL,
        L"WarnEnergyLevel",
        0x18u,
        0LL,
        &AppEnergyUsageManager::s_dwEnergyWarningEventLevel,
        &pcbData);
      pcbData = 4;
      RegGetValueW(
        hkey,
        0LL,
        L"IncreaseEnergyDeltaEvent",
        0x18u,
        0LL,
        &AppEnergyUsageManager::s_dwEnergyIncreaseEventChange,
        &pcbData);
      pcbData = 4;
      RegGetValueW(
        hkey,
        0LL,
        L"DecreaseEnergyLevelEvent",
        0x18u,
        0LL,
        &AppEnergyUsageManager::s_dwEnergyDecreaseEventLevel,
        &pcbData);
      pcbData = 4;
      RegGetValueW(hkey, 0LL, L"LowUsageLevel", 0x18u, 0LL, &AppEnergyUsageManager::s_dwLowUsageLevel, &pcbData);
      pcbData = 4;
      RegGetValueW(
        hkey,
        0LL,
        L"MaxAcceptableUsageLevel",
        0x18u,
        0LL,
        &AppEnergyUsageManager::s_dwMaxAcceptableUsageLevel,
        &pcbData);
      pcbData = 4;
      RegGetValueW(hkey, 0LL, L"AllowedInactiveTimerInterval", 0x18u, 0LL, (char *)this + 136, &pcbData);
      pcbData = 4;
      RegGetValueW(
        hkey,
        0LL,
        L"ExcessiveUsageLevel",
        0x18u,
        0LL,
        &AppEnergyUsageManager::s_ExcessiveUsageLevel,
        &pcbData);
      pcbData = 4;
      RegGetValueW(
        hkey,
        0LL,
        L"NearTerminationUsageLevel",
        0x18u,
        0LL,
        &AppEnergyUsageManager::s_NearTerminationUsageLevel,
        &pcbData);
      pcbData = 256;
      if ( !RegGetValueW(hkey, 0LL, L"ExcessiveUsageToast", 0xFFFFu, 0LL, pvData, &pcbData) )
        utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
          (__int64)&AppEnergyUsageManager::s_strExcessiveUsageMessage,
          pvData,
          v9,
          v10);
      pcbData = 256;
      if ( !RegGetValueW(hkey, 0LL, L"NearTerminationUsageToast", 0xFFFFu, 0LL, v18, &pcbData) )
        utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
          (__int64)&AppEnergyUsageManager::s_strNearTerminationUsageMessage,
          v18,
          v11,
          v12);
      RegCloseKey(hkey);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char *, _QWORD, char *))(*(_QWORD *)*v2 + 24LL))(
      *v2,
      *((unsigned int *)this + 34),
      1000LL,
      (char *)this + 16,
      0LL,
      (char *)this + 144);
    return 0LL;
  }
}
