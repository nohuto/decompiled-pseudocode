/*
 * XREFs of _CSystemAudioDeviceBase::_CSystemAudioDeviceBase_::_1_::dtor$4 @ 0x14001AE98
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemAudioDeviceBase::_CSystemAudioDeviceBase_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(*(_QWORD *)(a2 + 64) + 224LL);
}
