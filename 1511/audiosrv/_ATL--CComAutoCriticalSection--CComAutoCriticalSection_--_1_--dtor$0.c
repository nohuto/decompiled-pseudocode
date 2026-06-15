/*
 * XREFs of _ATL::CComAutoCriticalSection::CComAutoCriticalSection_::_1_::dtor$0 @ 0x18004C95E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComAutoCriticalSection::CComAutoCriticalSection_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CBackgroundSessionCallbacks::OnTaskInstanceCompleted(*(CBackgroundSessionCallbacks **)(a2 + 64), (struct _GUID *)a2);
}
