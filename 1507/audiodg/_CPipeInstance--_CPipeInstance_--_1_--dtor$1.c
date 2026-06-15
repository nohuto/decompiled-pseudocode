/*
 * XREFs of _CPipeInstance::_CPipeInstance_::_1_::dtor$1 @ 0x14001B090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::_CPipeInstance_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::~CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>(*(_QWORD *)(a2 + 64) + 64LL);
}
