/*
 * XREFs of ?Add@?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAHAEBQEAVCConnectorProcessingModeCharacteristics@@@Z @ 0x1800345A0
 * Callers:
 *     ?DeserializeProcessingModeCharacteristics@@YAJKPEAEPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x18002DBE4 (-DeserializeProcessingModeCharacteristics@@YAJKPEAEPEAPEAV-$CSimpleArray@PEAVCConnectorProcessin.c)
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x1800880D8 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::Add(
        __int64 a1,
        _QWORD *a2)
{
  int v2; // edi
  int v5; // edi
  __int64 v6; // rax
  _QWORD *v7; // r8
  bool v9; // sf

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 == *(_DWORD *)(a1 + 12) )
  {
    if ( *(_DWORD *)(a1 + 12) )
    {
      v9 = (v2 & 0x40000000) != 0;
      v5 = 2 * v2;
      if ( v9 )
        return 0LL;
    }
    else
    {
      v5 = 1;
    }
    if ( (unsigned __int64)v5 <= 0xFFFFFFF )
    {
      v6 = _o__recalloc(*(_QWORD *)a1, v5, 8LL);
      if ( v6 )
      {
        *(_DWORD *)(a1 + 12) = v5;
        *(_QWORD *)a1 = v6;
        goto LABEL_7;
      }
    }
    return 0LL;
  }
LABEL_7:
  v7 = (_QWORD *)(*(_QWORD *)a1 + 8LL * *(int *)(a1 + 8));
  if ( v7 )
    *v7 = *a2;
  ++*(_DWORD *)(a1 + 8);
  return 1LL;
}
