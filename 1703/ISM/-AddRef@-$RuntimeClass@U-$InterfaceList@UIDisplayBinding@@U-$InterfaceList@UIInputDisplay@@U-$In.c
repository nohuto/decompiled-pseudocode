/*
 * XREFs of ?AddRef@?$RuntimeClass@U?$InterfaceList@UIDisplayBinding@@U?$InterfaceList@UIInputDisplay@@U?$InterfaceList@UIPropertyChangedListener@Input@@U?$InterfaceList@UIInputDisplayOrientationListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180018060
 * Callers:
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIInputDeliveryServer@@U?$InterfaceList@UIInputQueueHost@@U?$InterfaceList@UIInputServiceProxyOwner@@U?$InterfaceList@UIRemoteInputDelivery@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800199D0 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIInputDeliveryServer@@U-$InterfaceList@UIInputQueueHost.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIInputDeliveryServer@@U?$InterfaceList@UIInputQueueHost@@U?$InterfaceList@UIInputServiceProxyOwner@@U?$InterfaceList@UIRemoteInputDelivery@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x180019A60 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIInputDeliveryServer@@U-$InterfaceList@UII_ea_180019A60.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIDisplayBinding@@U?$InterfaceList@UIInputDisplay@@U?$InterfaceList@UIPropertyChangedListener@Input@@U?$InterfaceList@UIInputDisplayOrientationListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180019B40 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIDisplayBinding@@U-$InterfaceList@UIInputD_ea_180019B40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDisplayBinding,Microsoft::WRL::Details::InterfaceList<IInputDisplay,Microsoft::WRL::Details::InterfaceList<Input::IPropertyChangedListener,Microsoft::WRL::Details::InterfaceList<IInputDisplayOrientationListener,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::AddRef(
        __int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 36));
}
