/*
 * XREFs of ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x18000D310
 * Callers:
 *     ??$InvokeDelegates@V_lambda_38e201a94f1ead6275cfb8116ae5177e_@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_38e201a94f1ead6275cfb8116ae5177e_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18000CD34 (--$InvokeDelegates@V_lambda_38e201a94f1ead6275cfb8116ae5177e_@@U-$IEventHandler@PEAUIInspectable.c)
 *     ??$InvokeDelegates@V_lambda_4802794436e40c4be599af3779c5c785_@@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_4802794436e40c4be599af3779c5c785_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18000CE64 (--$InvokeDelegates@V_lambda_4802794436e40c4be599af3779c5c785_@@U-$IEventHandler@PEAVAppMemoryUsa.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180001FC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
        volatile signed __int32 **a1,
        volatile signed __int32 *a2)
{
  volatile signed __int32 *v3; // rcx

  if ( *a1 != a2 )
  {
    if ( a2 )
      _InterlockedIncrement(a2 + 3);
    v3 = *a1;
    *a1 = a2;
    if ( v3 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v3);
  }
  return a1;
}
