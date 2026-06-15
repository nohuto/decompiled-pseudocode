/*
 * XREFs of _CVolumeStrip::_CVolumeStrip_::_1_::dtor$1 @ 0x18006FFC3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVolumeStrip::_CVolumeStrip_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::~CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>((LPCRITICAL_SECTION)(*(_QWORD *)(a2 + 64) + 112LL));
}
