/*
 * XREFs of ?WriteProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x1800A9A28
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18003B4FC (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?SerializeProcessingModeCharacteristics@@YAJPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAKPEAPEAE@Z @ 0x1800A9740 (-SerializeProcessingModeCharacteristics@@YAJPEAV-$CSimpleArray@PEAVCConnectorProcessingModeChara.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::WriteProcessingModeCharacteristics(__int64 a1, int a2, int *a3)
{
  int v4; // esi
  __int64 v6; // [rsp+20h] [rbp-50h] BYREF
  PROPVARIANT pvar; // [rsp+28h] [rbp-48h] BYREF
  __int64 v8; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v9[2]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v10; // [rsp+48h] [rbp-28h] BYREF
  int v11; // [rsp+58h] [rbp-18h]

  v9[1] = -2LL;
  v6 = 0LL;
  pvar = 0LL;
  v8 = 0LL;
  v9[0] = 0LL;
  v10 = PKEY_AudioEngine_ConnectorSignalProcessingMode_Specific_Characteristics;
  v11 = 200 * a2 + 2;
  v4 = SerializeProcessingModeCharacteristics(a3, (unsigned int *)&v8, v9);
  if ( v4 >= 0 )
  {
    LOWORD(pvar) = 65;
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 16) + 32LL))(
           *(_QWORD *)(a1 + 16),
           2LL,
           &v6);
    if ( v4 >= 0 )
      v4 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v6 + 48LL))(v6, &v10, &pvar);
  }
  PropVariantClear(&pvar);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v4;
}
