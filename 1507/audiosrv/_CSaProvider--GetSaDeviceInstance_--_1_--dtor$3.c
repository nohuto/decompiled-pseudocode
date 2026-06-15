/*
 * XREFs of _CSaProvider::GetSaDeviceInstance_::_1_::dtor$3 @ 0x180074D2C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSaProvider::GetSaDeviceInstance_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR>::~CComHeapPtr<STREAM_GROUP_DESCRIPTOR>((LPVOID *)(a2 + 104));
}
