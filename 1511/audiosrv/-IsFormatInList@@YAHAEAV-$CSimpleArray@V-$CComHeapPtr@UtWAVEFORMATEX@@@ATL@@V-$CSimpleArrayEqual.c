/*
 * XREFs of ?IsFormatInList@@YAHAEAV?$CSimpleArray@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@V?$CSimpleArrayEqualHelper@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@@2@@ATL@@PEAUtWAVEFORMATEX@@@Z @ 0x1800A6D40
 * Callers:
 *     ??$ForEachCandidateFormatForMode@V_lambda_418c5ae5971ebab8b75617066dde6fa1_@@@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@U_GUID@@V_lambda_418c5ae5971ebab8b75617066dde6fa1_@@@Z @ 0x1800A4570 (--$ForEachCandidateFormatForMode@V_lambda_418c5ae5971ebab8b75617066dde6fa1_@@@CEndpointCharacter.c)
 *     ?AddUniqueFormatToList@@YAJAEAV?$CSimpleArray@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@V?$CSimpleArrayEqualHelper@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@@2@@ATL@@AEAV?$CComHeapPtr@UtWAVEFORMATEX@@@2@@Z @ 0x1800A5214 (-AddUniqueFormatToList@@YAJAEAV-$CSimpleArray@V-$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@V-$CSimpleArr.c)
 * Callees:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18008B80C (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x1800A4F3C (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 */

__int64 __fastcall IsFormatInList(__int64 a1, const struct tWAVEFORMATEX *a2)
{
  int v2; // ebx
  const struct tWAVEFORMATEX **v5; // rax

  v2 = 0;
  if ( *(int *)(a1 + 8) <= 0 )
    return 0LL;
  while ( 1 )
  {
    v5 = (const struct tWAVEFORMATEX **)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                                          a1,
                                          v2);
    if ( (unsigned int)CompareWaveFormat(*v5, a2) )
      break;
    if ( ++v2 >= *(_DWORD *)(a1 + 8) )
      return 0LL;
  }
  return 1LL;
}
