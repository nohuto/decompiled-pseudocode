/*
 * XREFs of _CStreamGroup::CreateStream_::_1_::dtor$4 @ 0x14001AB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::CreateStream_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CStreamInstance>::~CAutoPtr<CStreamInstance>(a2 + 208);
}
