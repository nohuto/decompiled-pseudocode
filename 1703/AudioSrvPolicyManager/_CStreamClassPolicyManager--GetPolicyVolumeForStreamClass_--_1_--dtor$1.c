/*
 * XREFs of _CStreamClassPolicyManager::GetPolicyVolumeForStreamClass_::_1_::dtor$1 @ 0x1800228E2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamClassPolicyManager::GetPolicyVolumeForStreamClass_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioSessionInfo>::~CComPtr<IAudioSessionInfo>((__int64 *)(a2 + 64));
}
