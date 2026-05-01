/*
 * XREFs of ?OnEnergyConsumedInternal@AppEnergyInformation@@IEAAJKH@Z @ 0x18004B1F8
 * Callers:
 *     ?GetCurrentEnergyUsage@AppEnergyInformation@@IEAAJW4AppEnergyManagerUsageFlags@@PEAK@Z @ 0x18004951C (-GetCurrentEnergyUsage@AppEnergyInformation@@IEAAJW4AppEnergyManagerUsageFlags@@PEAK@Z.c)
 *     ?RecvCallback@AppEnergyInformation@@UEAAXW4RMExecServiceProviderCallbackType@2ExecutionModel@@PEAXJ@Z @ 0x18004B9D0 (-RecvCallback@AppEnergyInformation@@UEAAXW4RMExecServiceProviderCallbackType@2ExecutionModel@@PE.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?FireChangeEventsIfRequired@AppEnergyInformation@@IEAAXHKK@Z @ 0x18004935C (-FireChangeEventsIfRequired@AppEnergyInformation@@IEAAXHKK@Z.c)
 *     ?GetHistoricalEnergyUsage@HistoricalEnergyTracker@@QEAAKXZ @ 0x180049A20 (-GetHistoricalEnergyUsage@HistoricalEnergyTracker@@QEAAKXZ.c)
 *     ?ReportNewEnergyUsage@HistoricalEnergyTracker@@QEAAJK@Z @ 0x18004C11C (-ReportNewEnergyUsage@HistoricalEnergyTracker@@QEAAJK@Z.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C420 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AppEnergyInformation::OnEnergyConsumedInternal(AppEnergyInformation *this, unsigned int a2, int a3)
{
  HistoricalEnergyTracker *v6; // rsi
  unsigned int HistoricalEnergyUsage; // r14d
  int v8; // eax
  unsigned int v9; // ebp
  unsigned int v10; // eax
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *((_DWORD *)this + 58) = AppEnergyUsageManager::s_pfnGetTickCount(AppEnergyUsageManager::s_pfnGetTickCount);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 304));
  v6 = (AppEnergyInformation *)((char *)this + 160);
  if ( !a3 )
    v6 = (AppEnergyInformation *)((char *)this + 88);
  HistoricalEnergyUsage = HistoricalEnergyTracker::GetHistoricalEnergyUsage(v6);
  v8 = HistoricalEnergyTracker::ReportNewEnergyUsage(v6, a2);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = HistoricalEnergyTracker::GetHistoricalEnergyUsage(v6);
    AppEnergyInformation::FireChangeEventsIfRequired(this, a3, HistoricalEnergyUsage, v10);
  }
  else
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      (void *)0x5F9,
      (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
      (const char *)(unsigned int)v8,
      v12);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 304));
  return v9;
}
