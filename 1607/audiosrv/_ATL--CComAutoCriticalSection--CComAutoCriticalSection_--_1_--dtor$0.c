/*
 * XREFs of _ATL::CComAutoCriticalSection::CComAutoCriticalSection_::_1_::dtor$0 @ 0x18003BCE9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComAutoCriticalSection::CComAutoCriticalSection_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CVolumeControlBase::ProviderFinalRelease(*(CVolumeControlBase **)(a2 + 64));
}
