/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_CDeviceGraphObjectsStore_IDeviceGraphObjectsStore__::_1_::dtor$2 @ 0x18003B5DA
 * Callers:
 *     <none>
 * Callees:
 *     ?ProviderFinalRelease@CVolumeControlBase@@UEAAXXZ @ 0x180036A30 (-ProviderFinalRelease@CVolumeControlBase@@UEAAXXZ.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_CDeviceGraphObjectsStore_IDeviceGraphObjectsStore__::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  CVolumeControlBase::ProviderFinalRelease(*(CVolumeControlBase **)(a2 + 104));
}
