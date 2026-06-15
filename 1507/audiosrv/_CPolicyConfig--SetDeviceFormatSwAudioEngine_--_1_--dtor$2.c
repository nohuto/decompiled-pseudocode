/*
 * XREFs of _CPolicyConfig::SetDeviceFormatSwAudioEngine_::_1_::dtor$2 @ 0x1800480AC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPolicyConfig::SetDeviceFormatSwAudioEngine_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<CAudioSessionManager>::~CComPtr<CAudioSessionManager>(a2 + 80);
}
