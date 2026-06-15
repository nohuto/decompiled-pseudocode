/*
 * XREFs of _CStreamGroup::CreateStream_::_1_::dtor$1 @ 0x14001A4DC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::CreateStream_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CPipeInstance>::~CAutoPtr<CPipeInstance>(a2 + 72);
}
