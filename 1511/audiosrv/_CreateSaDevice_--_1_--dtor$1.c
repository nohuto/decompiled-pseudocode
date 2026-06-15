/*
 * XREFs of _CreateSaDevice_::_1_::dtor$1 @ 0x18008C655
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CreateSaDevice_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR>::~CComHeapPtr<STREAM_GROUP_DESCRIPTOR>((LPVOID *)(a2 + 160));
}
