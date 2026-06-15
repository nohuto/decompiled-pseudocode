/*
 * XREFs of _TsSessionIdAddEndpointVolumeReference_::_1_::dtor$2 @ 0x180022B73
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TsSessionIdAddEndpointVolumeReference_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioSessionInfo>::~CComPtr<IAudioSessionInfo>((__int64 *)(*(_QWORD *)(a2 + 120) + 32LL));
}
