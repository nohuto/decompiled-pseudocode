/*
 * XREFs of _CStreamGroup::CreateStream_::_1_::dtor$7 @ 0x14001ABB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::CreateStream_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CStreamInstance>::~CAutoPtr<CStreamInstance>(a2 + 64);
}
