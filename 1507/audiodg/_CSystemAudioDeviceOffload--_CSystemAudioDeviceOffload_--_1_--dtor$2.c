/*
 * XREFs of _CSystemAudioDeviceOffload::_CSystemAudioDeviceOffload_::_1_::dtor$2 @ 0x14001A966
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemAudioDeviceOffload::_CSystemAudioDeviceOffload_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(*(_QWORD *)(a2 + 64) + 384LL);
}
