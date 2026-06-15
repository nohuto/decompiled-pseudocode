/*
 * XREFs of _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$5 @ 0x180069098
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSrv::ProcessDeviceInternal_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR>::~CComHeapPtr<STREAM_GROUP_DESCRIPTOR>((LPVOID *)(a2 + 32));
}
