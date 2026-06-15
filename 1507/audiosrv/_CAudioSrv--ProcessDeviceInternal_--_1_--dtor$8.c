/*
 * XREFs of _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$8 @ 0x18006A579
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSrv::ProcessDeviceInternal_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<CAudioSessionManagerProvider>::~CComPtr<CAudioSessionManagerProvider>(
           (__int64 *)(a2 + 48),
           (volatile int *)a2);
}
