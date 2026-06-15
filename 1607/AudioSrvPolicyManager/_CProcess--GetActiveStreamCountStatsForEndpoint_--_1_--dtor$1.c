/*
 * XREFs of _CProcess::GetActiveStreamCountStatsForEndpoint_::_1_::dtor$1 @ 0x18002558C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall CProcess::GetActiveStreamCountStatsForEndpoint_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<DuckingDescriptor>::~CAutoPtr<DuckingDescriptor>((void **)(a2 + 32));
}
