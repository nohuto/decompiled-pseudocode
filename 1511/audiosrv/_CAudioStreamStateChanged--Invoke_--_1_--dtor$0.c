/*
 * XREFs of _CAudioStreamStateChanged::Invoke_::_1_::dtor$0 @ 0x18004AA70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStreamStateChanged::Invoke_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<ISessionInternalEvents>::~CComPtr<ISessionInternalEvents>(*(_QWORD *)(a2 + 120));
}
