/*
 * XREFs of _ATL::CAtlArray_CAudioSessionNotificationProcess_ATL::CElementTraits_CAudioSessionNotificationProcess___::Add_::_1_::dtor$0 @ 0x180061A9A
 * Callers:
 *     <none>
 * Callees:
 *     ?ProviderFinalRelease@CVolumeControlBase@@UEAAXXZ @ 0x180036A30 (-ProviderFinalRelease@CVolumeControlBase@@UEAAXXZ.c)
 */

void __fastcall ATL::CAtlArray_CAudioSessionNotificationProcess_ATL::CElementTraits_CAudioSessionNotificationProcess___::Add_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  CVolumeControlBase::ProviderFinalRelease(*(CVolumeControlBase **)(a2 + 104));
}
