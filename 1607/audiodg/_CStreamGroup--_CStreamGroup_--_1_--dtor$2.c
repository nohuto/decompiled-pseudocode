/*
 * XREFs of _CStreamGroup::_CStreamGroup_::_1_::dtor$2 @ 0x14001A630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::_CStreamGroup_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CPipeInstance>::~CAutoPtr<CPipeInstance>(*(_QWORD *)(a2 + 80) + 88LL);
}
