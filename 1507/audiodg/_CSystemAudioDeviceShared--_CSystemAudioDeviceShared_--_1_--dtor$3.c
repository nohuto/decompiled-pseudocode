/*
 * XREFs of _CSystemAudioDeviceShared::_CSystemAudioDeviceShared_::_1_::dtor$3 @ 0x14002BCA6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemAudioDeviceShared::_CSystemAudioDeviceShared_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((_QWORD *)(*(_QWORD *)(a2 + 64) + 352LL));
}
