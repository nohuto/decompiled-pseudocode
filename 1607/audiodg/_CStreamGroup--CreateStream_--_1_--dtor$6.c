/*
 * XREFs of _CStreamGroup::CreateStream_::_1_::dtor$6 @ 0x14001A54F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::CreateStream_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CStreamInstance>::~CAutoPtr<CStreamInstance>(a2 + 80);
}
