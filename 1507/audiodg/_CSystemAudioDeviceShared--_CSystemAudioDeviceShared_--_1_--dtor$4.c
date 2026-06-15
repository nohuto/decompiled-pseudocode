/*
 * XREFs of _CSystemAudioDeviceShared::_CSystemAudioDeviceShared_::_1_::dtor$4 @ 0x14002BCB9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemAudioDeviceShared::_CSystemAudioDeviceShared_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((_QWORD *)(*(_QWORD *)(a2 + 64) + 360LL));
}
