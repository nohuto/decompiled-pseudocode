/*
 * XREFs of _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$7 @ 0x18006A56D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CAudioSrv::ProcessDeviceInternal_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<CEndpointCharacteristics>::~CComPtr<CEndpointCharacteristics>(
           (__int64 *)(a2 + 176),
           (volatile int *)a2);
}
