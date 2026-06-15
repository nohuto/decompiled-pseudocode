/*
 * XREFs of ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x1800A706C
 * Callers:
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x1800401D0 (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ??1CAtlWinModule@ATL@@QEAA@XZ @ 0x1800469CC (--1CAtlWinModule@ATL@@QEAA@XZ.c)
 *     ??1CAudioSignalProcessingModeArray@CEndpointCharacteristics@@QEAA@XZ @ 0x1800A4B90 (--1CAudioSignalProcessingModeArray@CEndpointCharacteristics@@QEAA@XZ.c)
 *     ??1CConnectorProcessingModeCharacteristics@@QEAA@XZ @ 0x1800A4B9C (--1CConnectorProcessingModeCharacteristics@@QEAA@XZ.c)
 *     ??1CEndpointCharacteristics@@MEAA@XZ @ 0x1800A4C30 (--1CEndpointCharacteristics@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    free(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
}
