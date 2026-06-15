/*
 * XREFs of _CStreamGroup::CStreamGroup_::_1_::dtor$2 @ 0x14001BC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::CStreamGroup_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CPipeInstance>::~CAutoPtr<CPipeInstance>(*(_QWORD *)(a2 + 64) + 88LL);
}
