/*
 * XREFs of _TsSessionCreate_::_1_::dtor$0 @ 0x180025C06
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall TsSessionCreate_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<DuckingDescriptor>::~CAutoPtr<DuckingDescriptor>((void **)(a2 + 200));
}
