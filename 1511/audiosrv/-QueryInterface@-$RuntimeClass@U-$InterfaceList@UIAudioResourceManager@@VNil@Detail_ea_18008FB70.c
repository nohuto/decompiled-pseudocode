/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIAudioResourceManager@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008FB70
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIAudioResourceManager@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180049370 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIAudioResourceManager@@VNil@Details@WRL@Microso.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIAudioResourceManager@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180049380 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIAudioResourceManager@@VNil@Detail_ea_180049380.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IAudioResourceManager,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IAudioResourceManager,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>>(
           a1,
           a2,
           a3);
}
