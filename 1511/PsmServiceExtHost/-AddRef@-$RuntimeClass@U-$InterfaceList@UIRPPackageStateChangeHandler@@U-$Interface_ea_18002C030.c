/*
 * XREFs of ?AddRef@?$RuntimeClass@U?$InterfaceList@UIRPPackageStateChangeHandler@@U?$InterfaceList@UIAppEnergyUsageManager@@U?$InterfaceList@UIRMExecServicesProviderCallback@ExecutionModel@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x18002C030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IRPPackageStateChangeHandler,Microsoft::WRL::Details::InterfaceList<IAppEnergyUsageManager,Microsoft::WRL::Details::InterfaceList<ExecutionModel::IRMExecServicesProviderCallback,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::AddRef(
        __int64 a1)
{
  return ExecutionModel::WnfStateRegistration::AddRef((ExecutionModel::WnfStateRegistration *)(a1 - 16));
}
