/*
 * XREFs of _TSSession::_TSSession_::_1_::dtor$5 @ 0x180025AFF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TSSession::_TSSession_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioSessionInfo>::~CComPtr<IAudioSessionInfo>((__int64 *)(*(_QWORD *)(a2 + 96) + 312LL));
}
