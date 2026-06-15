/*
 * XREFs of ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x1800A4F3C
 * Callers:
 *     ??$ForEachCandidateFormatForMode@V_lambda_418c5ae5971ebab8b75617066dde6fa1_@@@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@U_GUID@@V_lambda_418c5ae5971ebab8b75617066dde6fa1_@@@Z @ 0x1800A4570 (--$ForEachCandidateFormatForMode@V_lambda_418c5ae5971ebab8b75617066dde6fa1_@@@CEndpointCharacter.c)
 *     ??1CConnectorProcessingModeCharacteristics@@QEAA@XZ @ 0x1800A4B9C (--1CConnectorProcessingModeCharacteristics@@QEAA@XZ.c)
 *     ?IsFormatInList@@YAHAEAV?$CSimpleArray@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@V?$CSimpleArrayEqualHelper@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@@2@@ATL@@PEAUtWAVEFORMATEX@@@Z @ 0x1800A6D40 (-IsFormatInList@@YAHAEAV-$CSimpleArray@V-$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@V-$CSimpleArrayEqual.c)
 *     ?SerializeProcessingModeCharacteristics@@YAJPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAKPEAPEAE@Z @ 0x1800A70F0 (-SerializeProcessingModeCharacteristics@@YAJPEAV-$CSimpleArray@PEAVCConnectorProcessingModeChara.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
        __int64 a1,
        int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 8) )
  {
    RaiseException(0xC000008C, 1u, 0, 0LL);
    JUMPOUT(0x1800A4F6DLL);
  }
  return *(_QWORD *)a1 + 8LL * a2;
}
