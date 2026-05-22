/*
 * XREFs of ?AddRef@?$RuntimeClass@U?$InterfaceList@UIInputServiceProxy@@U?$InterfaceList@UIMessageProxyReconnectAdapterOwner@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800889F0
 * Callers:
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIInputServiceProxy@@U?$InterfaceList@UIMessageProxyReconnectAdapterOwner@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180088B80 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIInputServiceProxy@@U-$InterfaceList@UIMes_ea_180088B80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IInputServiceProxy,Microsoft::WRL::Details::InterfaceList<IMessageProxyReconnectAdapterOwner,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::AddRef(
        __int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 20));
}
