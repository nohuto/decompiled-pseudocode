/*
 * XREFs of ?GetDefaultConnectorProcessingMode@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18001C830
 * Callers:
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x1800038A4 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001BC0C (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x180027514 (-GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 *     ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18004EF3C (-GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_.c)
 * Callees:
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x18001B214 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18001C9C4 (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z @ 0x18002765C (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

struct _GUID *__fastcall CEndpointCharacteristics::GetDefaultConnectorProcessingMode(
        CEndpointCharacteristics *this,
        struct _GUID *__return_ptr retstr,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3)
{
  int v3; // r14d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v4; // ebx
  __int64 v7; // rcx
  BOOL v8; // ebp
  char *v9; // rax
  int v10; // r11d
  int v11; // edx
  __int64 v12; // r9
  __int64 v13; // rax
  char *v14; // rax
  int v15; // edx
  __int64 v16; // r8
  __int64 v17; // rcx
  GUID v18; // xmm0
  struct _GUID *result; // rax
  struct CEndpointCharacteristics::CAudioSignalProcessingModeArray *SupportedConnectorModes; // rax
  PROPVARIANT pvar; // [rsp+30h] [rbp-28h] BYREF
  __int64 v22; // [rsp+38h] [rbp-20h]
  __int64 v23; // [rsp+40h] [rbp-18h]

  v3 = 0;
  v4 = a3;
  if ( a3 == eLoopbackConnector )
    v4 = eHostProcessConnector;
  if ( v4 )
    goto LABEL_5;
  v7 = *((_QWORD *)this + 7);
  v8 = 1;
  if ( !v7 )
    goto LABEL_5;
  pvar = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v7 + 40LL))(
         v7,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &pvar) >= 0
    && (_WORD)pvar == 19 )
  {
    v8 = v22 == 0;
  }
  PropVariantClear(&pvar);
  if ( v8 )
LABEL_5:
    v9 = (char *)this + 16 * v4 + 64;
  else
    v9 = (char *)this + 128;
  v10 = *((_DWORD *)v9 + 2);
  v11 = 0;
  if ( v10 <= 0 )
    goto LABEL_12;
  v12 = *(_QWORD *)v9;
  while ( 1 )
  {
    v13 = *(_QWORD *)(v12 + 16LL * v11) - *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1;
    if ( !v13 )
      v13 = *(_QWORD *)(v12 + 16LL * v11 + 8) - *(_QWORD *)GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data4;
    if ( !v13 )
      break;
    if ( ++v11 >= v10 )
      goto LABEL_12;
  }
  if ( v11 == -1 )
  {
LABEL_12:
    if ( v4 || CEndpointCharacteristics::AreEnhancementsEnabled(this) )
      v14 = (char *)this + 16 * v4 + 64;
    else
      v14 = (char *)this + 128;
    v15 = *((_DWORD *)v14 + 2);
    if ( v15 <= 0 )
      goto LABEL_32;
    v16 = *(_QWORD *)v14;
    while ( 1 )
    {
      v17 = *(_QWORD *)(v16 + 16LL * v3) - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
      if ( !v17 )
        v17 = *(_QWORD *)(v16 + 16LL * v3 + 8) - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
      if ( !v17 )
        break;
      if ( ++v3 >= v15 )
        goto LABEL_32;
    }
    if ( v3 == -1 )
    {
LABEL_32:
      SupportedConnectorModes = CEndpointCharacteristics::GetSupportedConnectorModes(this, v4);
      v18 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                       SupportedConnectorModes,
                       0LL);
    }
    else
    {
      v18 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    }
  }
  else
  {
    v18 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  }
  result = retstr;
  *retstr = v18;
  return result;
}
