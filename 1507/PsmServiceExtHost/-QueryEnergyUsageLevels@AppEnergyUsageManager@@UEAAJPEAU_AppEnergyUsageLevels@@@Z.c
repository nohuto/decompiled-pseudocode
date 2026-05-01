/*
 * XREFs of ?QueryEnergyUsageLevels@AppEnergyUsageManager@@UEAAJPEAU_AppEnergyUsageLevels@@@Z @ 0x18004B6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C420 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AppEnergyUsageManager::QueryEnergyUsageLevels(
        AppEnergyUsageManager *this,
        struct _AppEnergyUsageLevels *a2)
{
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    *(_DWORD *)a2 = AppEnergyUsageManager::s_dwLowUsageLevel;
    *((_DWORD *)a2 + 1) = AppEnergyUsageManager::s_dwEnergyWarningEventLevel;
    *((_DWORD *)a2 + 2) = AppEnergyUsageManager::s_dwMaxAcceptableUsageLevel;
    *((_DWORD *)a2 + 3) = AppEnergyUsageManager::s_ExcessiveUsageLevel;
    *((_DWORD *)a2 + 4) = AppEnergyUsageManager::s_NearTerminationUsageLevel;
    *((_DWORD *)a2 + 5) = AppEnergyUsageManager::s_dwBadEnergyLevel;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      (void *)0x18F,
      (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
      (const char *)0x80070057LL,
      v3);
    return 2147942487LL;
  }
}
