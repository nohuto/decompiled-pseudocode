/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$InterfaceList@UIRMExecServicesProviderCallback@ExecutionModel@@VNil@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180048F2C
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIRPPackageStateChangeHandler@@U?$InterfaceList@UIAppEnergyUsageManager@@U?$InterfaceList@UIRMExecServicesProviderCallback@ExecutionModel@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180020EE0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIRPPackageStateChangeHandler@@U-$InterfaceList@.c)
 *     ??$AsIID@V?$RuntimeClass@U?$InterfaceList@UIEnergyNotificationHandler@@U?$InterfaceList@UIRMExecServicesProviderCallback@ExecutionModel@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClass@U?$InterfaceList@UIEnergyNotificationHandler@@U?$InterfaceList@UIRMExecServicesProviderCallback@ExecutionModel@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180048218 (--$AsIID@V-$RuntimeClass@U-$InterfaceList@UIEnergyNotificationHandler@@U-$InterfaceList@UIRMExec.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180020F5C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<ExecutionModel::IRMExecServicesProviderCallback,Microsoft::WRL::Details::Nil>,1,0>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // r9

  if ( !InlineIsEqualGUID(a2, &GUID_97b402ad_4704_4657_a963_85d39de6975e) )
    return 2147500034LL;
  *v2 = v3;
  return 0LL;
}
