/*
 * XREFs of ?AddUniqueFormatToList@@YAJAEAV?$CSimpleArray@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@V?$CSimpleArrayEqualHelper@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@@2@@ATL@@AEAV?$CComHeapPtr@UtWAVEFORMATEX@@@2@@Z @ 0x1800A5214
 * Callers:
 *     ??$ForEachCandidateFormatForMode@V_lambda_418c5ae5971ebab8b75617066dde6fa1_@@@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@U_GUID@@V_lambda_418c5ae5971ebab8b75617066dde6fa1_@@@Z @ 0x1800A4570 (--$ForEachCandidateFormatForMode@V_lambda_418c5ae5971ebab8b75617066dde6fa1_@@@CEndpointCharacter.c)
 * Callees:
 *     ?Add@?$CSimpleArray@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@V?$CSimpleArrayEqualHelper@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@@2@@ATL@@QEAAHAEBV?$CComHeapPtr@UtWAVEFORMATEX@@@2@@Z @ 0x1800A5118 (-Add@-$CSimpleArray@V-$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@V-$CSimpleArrayEqualHelper@V-$CComHeapP.c)
 *     ?IsFormatInList@@YAHAEAV?$CSimpleArray@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@V?$CSimpleArrayEqualHelper@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@@2@@ATL@@PEAUtWAVEFORMATEX@@@Z @ 0x1800A6D40 (-IsFormatInList@@YAHAEAV-$CSimpleArray@V-$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@V-$CSimpleArrayEqual.c)
 */

__int64 __fastcall AddUniqueFormatToList(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( !(unsigned int)IsFormatInList(a1, *a2) )
  {
    if ( (unsigned int)ATL::CSimpleArray<ATL::CComHeapPtr<tWAVEFORMATEX>,ATL::CSimpleArrayEqualHelper<ATL::CComHeapPtr<tWAVEFORMATEX>>>::Add(
                         a1,
                         a2) )
      *a2 = 0LL;
    else
      return (unsigned int)-2147024882;
  }
  return v4;
}
