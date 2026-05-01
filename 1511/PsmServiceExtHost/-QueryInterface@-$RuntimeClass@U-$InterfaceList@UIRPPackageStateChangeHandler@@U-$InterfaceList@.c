/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIRPPackageStateChangeHandler@@U?$InterfaceList@UIAppEnergyUsageManager@@U?$InterfaceList@UIRMExecServicesProviderCallback@ExecutionModel@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180025510
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIRPPackageStateChangeHandler@@U?$InterfaceList@UIAppEnergyUsageManager@@U?$InterfaceList@UIRMExecServicesProviderCallback@ExecutionModel@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002C050 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIRPPackageStateChangeHandler@@U-$I_ea_18002C050.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIRPPackageStateChangeHandler@@U?$InterfaceList@UIAppEnergyUsageManager@@U?$InterfaceList@UIRMExecServicesProviderCallback@ExecutionModel@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002C060 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIRPPackageStateChangeHandler@@U-$I_ea_18002C060.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002558C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$InterfaceList@UIRMExecServicesProviderCallback@ExecutionModel@@VNil@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18004FED8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$InterfaceList@UIRMExecS.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IRPPackageStateChangeHandler,Microsoft::WRL::Details::InterfaceList<IAppEnergyUsageManager,Microsoft::WRL::Details::InterfaceList<ExecutionModel::IRMExecServicesProviderCallback,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  const struct _GUID *v4; // rcx
  _QWORD *v5; // r8
  const struct _GUID *v6; // rcx
  _QWORD *v7; // r8
  int CanCastTo; // esi
  __int64 v10; // r9

  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v5 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return 0;
  }
  if ( (unsigned int)InlineIsEqualGUID(v4, &GUID_39534eb9_29bf_4cf7_a077_95d02ab8e79b)
    || (a1 += 8LL, (unsigned int)InlineIsEqualGUID(v6, &GUID_fc019b15_9eb8_46b8_959e_a465664f6818)) )
  {
    *v7 = a1;
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<ExecutionModel::IRMExecServicesProviderCallback,Microsoft::WRL::Details::Nil>,1,0>::CanCastTo(
                  a1 + 8,
                  v10);
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
  return (unsigned int)CanCastTo;
}
