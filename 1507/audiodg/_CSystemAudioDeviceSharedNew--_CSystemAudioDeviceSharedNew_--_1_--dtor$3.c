/*
 * XREFs of _CSystemAudioDeviceSharedNew::_CSystemAudioDeviceSharedNew_::_1_::dtor$3 @ 0x14001B654
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemAudioDeviceSharedNew::_CSystemAudioDeviceSharedNew_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(*(_QWORD *)(a2 + 80) + 360LL);
}
