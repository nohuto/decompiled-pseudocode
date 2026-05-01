/*
 * XREFs of ??0AppEnergyInformation@@QEAA@XZ @ 0x18004F958
 * Callers:
 *     ??$MakeAndInitialize@VAppEnergyInformation@@V1@PEAUIEnergyNotificationServer@@PEAUIRMExecServicesProvider@ExecutionModel@@AEAPEBGAEAU_WNF_STATE_NAME@@@Details@WRL@Microsoft@@YAJPEAPEAVAppEnergyInformation@@$$QEAPEAUIEnergyNotificationServer@@$$QEAPEAUIRMExecServicesProvider@ExecutionModel@@AEAPEBGAEAU_WNF_STATE_NAME@@@Z @ 0x18004F26C (--$MakeAndInitialize@VAppEnergyInformation@@V1@PEAUIEnergyNotificationServer@@PEAUIRMExecService.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??0HistoricalEnergyTracker@@QEAA@XZ @ 0x18004FA7C (--0HistoricalEnergyTracker@@QEAA@XZ.c)
 */

AppEnergyInformation *__fastcall AppEnergyInformation::AppEnergyInformation(AppEnergyInformation *this)
{
  struct Microsoft::WRL::Details::ModuleBase *v1; // rsi

  v1 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IEnergyNotificationHandler,ExecutionModel::IRMExecServicesProviderCallback,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IEnergyNotificationHandler'};
  *((_DWORD *)this + 5) = 1;
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IEnergyNotificationHandler,ExecutionModel::IRMExecServicesProviderCallback,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<ExecutionModel::IRMExecServicesProviderCallback,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( v1 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v1 + 8LL))(v1);
  *(_QWORD *)this = &AppEnergyInformation::`vftable'{for `IEnergyNotificationHandler'};
  *((_QWORD *)this + 1) = &AppEnergyInformation::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<ExecutionModel::IRMExecServicesProviderCallback,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)this + 3) = (char *)this + 24;
  *((_QWORD *)this + 4) = (char *)this + 24;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *(_QWORD *)((char *)this + 68) = 0LL;
  *(_QWORD *)((char *)this + 76) = 0LL;
  *((_DWORD *)this + 21) = 0;
  HistoricalEnergyTracker::HistoricalEnergyTracker((AppEnergyInformation *)((char *)this + 88));
  HistoricalEnergyTracker::HistoricalEnergyTracker((AppEnergyInformation *)((char *)this + 160));
  *((_QWORD *)this + 30) = (char *)this + 256;
  *((_QWORD *)this + 31) = (char *)this + 256;
  *((_WORD *)this + 128) = 0;
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 72) = 0;
  *((_QWORD *)this + 37) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 304), 0, 0);
  *((_DWORD *)this + 58) = AppEnergyUsageManager::s_pfnGetTickCount(AppEnergyUsageManager::s_pfnGetTickCount);
  *((_QWORD *)this + 35) = 0LL;
  return this;
}
