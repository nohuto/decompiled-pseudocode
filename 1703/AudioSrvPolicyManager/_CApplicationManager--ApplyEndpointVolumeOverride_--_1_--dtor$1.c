/*
 * XREFs of _CApplicationManager::ApplyEndpointVolumeOverride_::_1_::dtor$1 @ 0x1800227CE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::ApplyEndpointVolumeOverride_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioSessionInfo>::~CComPtr<IAudioSessionInfo>((__int64 *)(a2 + 80));
}
