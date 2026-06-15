/*
 * XREFs of _std::make_shared_CPdcTimerActivation_CPdcActivationClient_____ptr64_const_CVADServer_____ptr64_&___ptr64__::_1_::dtor$5 @ 0x180039B38
 * Callers:
 *     <none>
 * Callees:
 *     ?ProviderFinalRelease@CVolumeControlBase@@UEAAXXZ @ 0x180036A30 (-ProviderFinalRelease@CVolumeControlBase@@UEAAXXZ.c)
 */

void __fastcall std::make_shared_CPdcTimerActivation_CPdcActivationClient_____ptr64_const_CVADServer_____ptr64_____ptr64__::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  CVolumeControlBase::ProviderFinalRelease(*(CVolumeControlBase **)(a2 + 104));
}
