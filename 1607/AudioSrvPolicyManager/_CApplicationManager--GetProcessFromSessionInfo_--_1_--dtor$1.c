/*
 * XREFs of _CApplicationManager::GetProcessFromSessionInfo_::_1_::dtor$1 @ 0x1800257BF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::GetProcessFromSessionInfo_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioSessionInfo>::~CComPtr<IAudioSessionInfo>((__int64 *)(a2 + 88));
}
