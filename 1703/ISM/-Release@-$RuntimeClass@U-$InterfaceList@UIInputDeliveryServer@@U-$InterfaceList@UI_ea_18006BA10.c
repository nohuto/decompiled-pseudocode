/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@UIInputDeliveryServer@@U?$InterfaceList@UIInputQueueHost@@U?$InterfaceList@UIInputServiceProxyOwner@@U?$InterfaceList@UIRemoteInputDelivery@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006BA10
 * Callers:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIInputDeliveryServer@@U?$InterfaceList@UIInputQueueHost@@U?$InterfaceList@UIInputServiceProxyOwner@@U?$InterfaceList@UIRemoteInputDelivery@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x18006B760 (-Release@-$RuntimeClass@U-$InterfaceList@UIInputDeliveryServer@@U-$InterfaceList@UIInputQueueHos.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIInputDeliveryServer@@U?$InterfaceList@UIInputQueueHost@@U?$InterfaceList@UIInputServiceProxyOwner@@U?$InterfaceList@UIRemoteInputDelivery@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x18006B780 (-Release@-$RuntimeClass@U-$InterfaceList@UIInputDeliveryServer@@U-$InterfaceList@UI_ea_18006B780.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIInputDeliveryServer@@U?$InterfaceList@UIInputQueueHost@@U?$InterfaceList@UIInputServiceProxyOwner@@U?$InterfaceList@UIRemoteInputDelivery@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18006B7A0 (-Release@-$RuntimeClass@U-$InterfaceList@UIInputDeliveryServer@@U-$InterfaceList@UI_ea_18006B7A0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IInputDeliveryServer,Microsoft::WRL::Details::InterfaceList<IInputQueueHost,Microsoft::WRL::Details::InterfaceList<IInputServiceProxyOwner,Microsoft::WRL::Details::InterfaceList<IRemoteInputDelivery,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 9);
  if ( !v1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 56LL))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v1;
}
