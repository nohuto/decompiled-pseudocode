/*
 * XREFs of ?AddRef@?$RuntimeClass@U?$InterfaceList@UIRawInputProvider@@U?$InterfaceList@VMPCInputProviderBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002ECF0
 * Callers:
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIRawInputProvider@@U?$InterfaceList@VMPCInputProviderBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x18002F380 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIRawInputProvider@@U-$InterfaceList@VMPCIn_ea_18002F380.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIRawInputProvider@@U?$InterfaceList@VMPCInputProviderBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18002F3D0 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIRawInputProvider@@U-$InterfaceList@VMPCIn_ea_18002F3D0.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIRawInputProvider@@U?$InterfaceList@VMPCInputProviderBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x18002F400 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIRawInputProvider@@U-$InterfaceList@VMPCIn_ea_18002F400.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IRawInputProvider,Microsoft::WRL::Details::InterfaceList<MPCInputProviderBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::AddRef(
        __int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 172));
}
