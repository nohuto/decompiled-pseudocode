/*
 * XREFs of _CreateSaDevice_::_1_::dtor$1 @ 0x18004716C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreateSaDevice_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR>::~CComHeapPtr<STREAM_GROUP_DESCRIPTOR>(a2 + 224);
}
