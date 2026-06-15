/*
 * XREFs of ??1?$CAutoPtr@_N@ATL@@QEAA@XZ @ 0x180087078
 * Callers:
 *     _CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_54c77e54e42ef152cdcef462696c326e____::_1_::dtor$1 @ 0x180085C65 (_CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_54c77e54e42ef152cd_ea_180085C65.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 */

void __fastcall ATL::CAutoPtr<bool>::~CAutoPtr<bool>(void **a1)
{
  operator delete(*a1);
  *a1 = 0LL;
}
