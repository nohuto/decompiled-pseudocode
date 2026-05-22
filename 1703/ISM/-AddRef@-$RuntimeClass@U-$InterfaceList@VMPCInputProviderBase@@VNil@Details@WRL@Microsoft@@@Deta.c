/*
 * XREFs of ?AddRef@?$RuntimeClass@U?$InterfaceList@VMPCInputProviderBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180046350
 * Callers:
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VMPCInputProviderBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180046E20 (-AddRef@-$RuntimeClass@U-$InterfaceList@VMPCInputProviderBase@@VNil@Details@WRL@Mic_ea_180046E20.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VMPCInputProviderBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180046E30 (-AddRef@-$RuntimeClass@U-$InterfaceList@VMPCInputProviderBase@@VNil@Details@WRL@Mic_ea_180046E30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<MPCInputProviderBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::AddRef(
        __int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 164));
}
