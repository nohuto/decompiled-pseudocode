/*
 * XREFs of _CSystemAudioDeviceBase::_CSystemAudioDeviceBase_::_1_::dtor$6 @ 0x14001B8FC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemAudioDeviceBase::_CSystemAudioDeviceBase_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(*(_QWORD *)(a2 + 64) + 248LL);
}
