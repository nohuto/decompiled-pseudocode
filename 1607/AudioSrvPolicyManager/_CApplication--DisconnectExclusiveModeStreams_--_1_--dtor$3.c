/*
 * XREFs of _CApplication::DisconnectExclusiveModeStreams_::_1_::dtor$3 @ 0x1800254A9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplication::DisconnectExclusiveModeStreams_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioSessionInfo>::~CComPtr<IAudioSessionInfo>((__int64 *)(a2 + 112));
}
