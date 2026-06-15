/*
 * XREFs of ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18003D134
 * Callers:
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x18003B8D8 (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ @ 0x18003BB10 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@CEndpointCharacteristics@@QEAAJIPEBU_GUID@@@Z @ 0x18003D0B4 (-AddMultiple@CAudioSignalProcessingModeArray@CEndpointCharacteristics@@QEAAJIPEBU_GUID@@@Z.c)
 * Callees:
 *     _recalloc @ 0x180043990 (_recalloc.c)
 */

__int64 __fastcall ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(__int64 a1, _OWORD *a2)
{
  int v2; // edi
  int v5; // edi
  void *v6; // rax
  _OWORD *v7; // rcx
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
    if ( (unsigned __int64)v5 <= 0x7FFFFFF )
    {
      v6 = _recalloc(*(void **)a1, v5, 0x10uLL);
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
  v7 = (_OWORD *)(*(_QWORD *)a1 + 16LL * *(int *)(a1 + 8));
  if ( v7 )
    *v7 = *a2;
  ++*(_DWORD *)(a1 + 8);
  return 1LL;
}
