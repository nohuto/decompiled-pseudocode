/*
 * XREFs of _CAudioStreamDestroy::Invoke_::_1_::dtor$0 @ 0x18004A550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStreamDestroy::Invoke_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<ISessionInternalEvents>::~CComPtr<ISessionInternalEvents>(*(_QWORD *)(a2 + 88));
}
