/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_CEndpointCharacteristics_CEndpointCharacteristics_unsigned_short_const_____ptr64_&___ptr64_int_&___ptr64__::_1_::dtor$2 @ 0x18003C798
 * Callers:
 *     <none>
 * Callees:
 *     ?ProviderFinalRelease@CVolumeControlBase@@UEAAXXZ @ 0x180036A30 (-ProviderFinalRelease@CVolumeControlBase@@UEAAXXZ.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_CEndpointCharacteristics_CEndpointCharacteristics_unsigned_short_const_____ptr64_____ptr64_int_____ptr64__::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  CVolumeControlBase::ProviderFinalRelease(*(CVolumeControlBase **)(a2 + 48));
}
