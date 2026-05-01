/*
 * XREFs of ?AddRef@WnfStateRegistration@ExecutionModel@@UEAAKXZ @ 0x18002C010
 * Callers:
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIRPPackageStateChangeHandler@@U?$InterfaceList@UIAppEnergyUsageManager@@U?$InterfaceList@UIRMExecServicesProviderCallback@ExecutionModel@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18002C020 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIRPPackageStateChangeHandler@@U-$InterfaceList@UIAppEne.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIRPPackageStateChangeHandler@@U?$InterfaceList@UIAppEnergyUsageManager@@U?$InterfaceList@UIRMExecServicesProviderCallback@ExecutionModel@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x18002C030 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIRPPackageStateChangeHandler@@U-$Interface_ea_18002C030.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::WnfStateRegistration::AddRef(ExecutionModel::WnfStateRegistration *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 7);
}
