/*
 * XREFs of ??1?$CAutoPtr@UDuckingDescriptor@@@ATL@@QEAA@XZ @ 0x180066D2C
 * Callers:
 *     _CProcess::UpdateStreamCountAndProcessCategory_::_1_::dtor$1 @ 0x18004B4F8 (_CProcess--UpdateStreamCountAndProcessCategory_--_1_--dtor$1.c)
 *     _TsSessionCreate_::_1_::dtor$0 @ 0x18004C16B (_TsSessionCreate_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_418c5ae5971ebab8b75617066dde6fa1____::_1_::dtor$1 @ 0x1800A4AD8 (_CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_418c5ae5971ebab8b7_ea_1800A4AD8.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 */

void __fastcall ATL::CAutoPtr<DuckingDescriptor>::~CAutoPtr<DuckingDescriptor>(void **a1)
{
  operator delete(*a1);
  *a1 = 0LL;
}
