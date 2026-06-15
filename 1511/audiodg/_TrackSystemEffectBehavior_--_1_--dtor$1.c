/*
 * XREFs of _TrackSystemEffectBehavior_::_1_::dtor$1 @ 0x14001B45C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TrackSystemEffectBehavior_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IMMDeviceEnumerator>::~CComPtr<IMMDeviceEnumerator>(a2 + 48);
}
