/*
 * XREFs of _ATL::CAtlMap_CAudioSessionInstanceId_CAudioSession_____ptr64_CAudioSessionInstanceIdTraits_ATL::CElementTraits_CAudioSession_____ptr64___::NewNode_::_1_::dtor$0 @ 0x18003C5CC
 * Callers:
 *     <none>
 * Callees:
 *     ?ProviderFinalRelease@CVolumeControlBase@@UEAAXXZ @ 0x180036A30 (-ProviderFinalRelease@CVolumeControlBase@@UEAAXXZ.c)
 */

void __fastcall ATL::CAtlMap_CAudioSessionInstanceId_CAudioSession_____ptr64_CAudioSessionInstanceIdTraits_ATL::CElementTraits_CAudioSession_____ptr64___::NewNode_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  CVolumeControlBase::ProviderFinalRelease(*(CVolumeControlBase **)(a2 + 48));
}
