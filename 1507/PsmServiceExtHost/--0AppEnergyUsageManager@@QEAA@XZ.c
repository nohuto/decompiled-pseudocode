/*
 * XREFs of ??0AppEnergyUsageManager@@QEAA@XZ @ 0x180021964
 * Callers:
 *     ??$MakeAndInitialize@VAppEnergyUsageManager@@V1@AEAPEAUIRMExecServicesProvider@ExecutionModel@@@Details@WRL@Microsoft@@YAJPEAPEAVAppEnergyUsageManager@@AEAPEAUIRMExecServicesProvider@ExecutionModel@@@Z @ 0x1800215C4 (--$MakeAndInitialize@VAppEnergyUsageManager@@V1@AEAPEAUIRMExecServicesProvider@ExecutionModel@@@.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

AppEnergyUsageManager *__fastcall AppEnergyUsageManager::AppEnergyUsageManager(AppEnergyUsageManager *this)
{
  struct Microsoft::WRL::Details::ModuleBase *v1; // rsi

  v1 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRPPackageStateChangeHandler,IAppEnergyUsageManager,ExecutionModel::IRMExecServicesProviderCallback,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRPPackageStateChangeHandler,IAppEnergyUsageManager,ExecutionModel::IRMExecServicesProviderCallback,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IAppEnergyUsageManager'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRPPackageStateChangeHandler,IAppEnergyUsageManager,ExecutionModel::IRMExecServicesProviderCallback,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<ExecutionModel::IRMExecServicesProviderCallback,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_DWORD *)this + 7) = 1;
  if ( v1 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v1 + 8LL))(v1);
  *(_QWORD *)this = &AppEnergyUsageManager::`vftable';
  *((_QWORD *)this + 1) = &AppEnergyUsageManager::`vftable'{for `IAppEnergyUsageManager'};
  *((_QWORD *)this + 2) = &AppEnergyUsageManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<ExecutionModel::IRMExecServicesProviderCallback,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)this + 4) = (char *)this + 32;
  *((_QWORD *)this + 5) = (char *)this + 32;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_WORD *)this + 32) = 2048;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 2, 0, 0);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_QWORD *)this + 9) = 0LL;
  return this;
}
