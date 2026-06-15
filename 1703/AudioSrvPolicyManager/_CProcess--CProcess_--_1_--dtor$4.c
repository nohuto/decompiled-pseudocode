/*
 * XREFs of _CProcess::CProcess_::_1_::dtor$4 @ 0x1800223DB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::CProcess_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioSessionInfo>::~CComPtr<IAudioSessionInfo>((__int64 *)(*(_QWORD *)(a2 + 64) + 240LL));
}
