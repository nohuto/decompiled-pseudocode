/*
 * XREFs of ??1?$CAutoPtr@UDuckingDescriptor@@@ATL@@QEAA@XZ @ 0x180068630
 * Callers:
 *     _CProcess::UpdateStreamCountAndProcessCategory_::_1_::dtor$1 @ 0x180046348 (_CProcess--UpdateStreamCountAndProcessCategory_--_1_--dtor$1.c)
 *     _TsSessionCreate_::_1_::dtor$0 @ 0x180048487 (_TsSessionCreate_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_ee82c780731b3ceedd1db5bd5f3d58d6____::_1_::dtor$2 @ 0x1800A7441 (_CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_ee82c780731b3ceedd_ea_1800A7441.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 */

void __fastcall ATL::CAutoPtr<DuckingDescriptor>::~CAutoPtr<DuckingDescriptor>(void **a1)
{
  operator delete(*a1);
  *a1 = 0LL;
}
