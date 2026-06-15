/*
 * XREFs of ?InternalAddRef@?$RuntimeClass@U?$InterfaceList@UIAPOWrapperClient@@U?$InterfaceList@UIAudioProcessingObject@@U?$InterfaceList@UIAudioSystemEffects2@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18008BC64
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIAPOWrapperClient@@U?$InterfaceList@UIAudioProcessingObject@@U?$InterfaceList@UIAudioSystemEffects2@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800206A0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIAPOWrapperClient@@U-$InterfaceList@UIAudioProc.c)
 *     ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x1800208E0 (--$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUI.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIAPOWrapperClient@@U?$InterfaceList@UIAudioProcessingObject@@U?$InterfaceList@UIAudioSystemEffects2@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004F4C0 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIAPOWrapperClient@@U-$InterfaceList@UIAudi_ea_18004F4C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IAPOWrapperClient,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObject,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::InternalAddRef(
        __int64 a1,
        volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 28), a2);
}
