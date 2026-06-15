/*
 * XREFs of _CAudioSessionGroupingParamChanged::Invoke_::_1_::dtor$0 @ 0x18004C433
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSessionGroupingParamChanged::Invoke_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<ISessionInternalEvents>::~CComPtr<ISessionInternalEvents>(*(_QWORD *)(a2 + 104));
}
