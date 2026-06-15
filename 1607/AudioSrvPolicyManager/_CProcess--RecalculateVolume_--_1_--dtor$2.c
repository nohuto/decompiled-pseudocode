/*
 * XREFs of _CProcess::RecalculateVolume_::_1_::dtor$2 @ 0x180025723
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::RecalculateVolume_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioSessionInfo>::~CComPtr<IAudioSessionInfo>((__int64 *)(a2 + 128));
}
