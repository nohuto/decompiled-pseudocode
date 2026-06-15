/*
 * XREFs of _CAudioDGProcess::OnADGProcessTerminated_::_1_::dtor$1 @ 0x18006B583
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioDGProcess::OnADGProcessTerminated_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<ISaProvider>::~CComPtr<ISaProvider>((__int64 *)(a2 + 104), (volatile int *)a2);
}
