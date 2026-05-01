/*
 * XREFs of ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18004C568
 * Callers:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIRPPackageStateChangeHandler@@U?$InterfaceList@UIAppEnergyUsageManager@@U?$InterfaceList@UIRMExecServicesProviderCallback@ExecutionModel@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180020E60 (-Release@-$RuntimeClass@U-$InterfaceList@UIRPPackageStateChangeHandler@@U-$InterfaceList@UIAppEn.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIEnergyNotificationHandler@@U?$InterfaceList@UIRMExecServicesProviderCallback@ExecutionModel@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004BD40 (-Release@-$RuntimeClass@U-$InterfaceList@UIEnergyNotificationHandler@@U-$InterfaceL_ea_18004BD40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::SafeUnknownDecrementReference(
        Microsoft::WRL::Details *this,
        volatile int *a2)
{
  signed __int32 v2; // r8d

  do
    v2 = *(_DWORD *)this;
  while ( *(_DWORD *)this != 0x7FFFFFFF
       && v2 != _InterlockedCompareExchange((volatile signed __int32 *)this, v2 - 1, v2) );
  return (unsigned int)(v2 - 1);
}
