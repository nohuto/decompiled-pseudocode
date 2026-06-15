/*
 * XREFs of _TSSession::_TSSession_::_1_::dtor$6 @ 0x180025B12
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TSSession::_TSSession_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioSessionInfo>::~CComPtr<IAudioSessionInfo>((__int64 *)(*(_QWORD *)(a2 + 96) + 320LL));
}
