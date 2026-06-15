/*
 * XREFs of _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$9 @ 0x1800690C8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSrv::ProcessDeviceInternal_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<CAudioSessionManager>::~CComPtr<CAudioSessionManager>((CAudioSessionManager **)(a2 + 176));
}
