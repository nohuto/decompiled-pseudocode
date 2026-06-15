/*
 * XREFs of ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001BC0C
 * Callers:
 *     ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180003988 (-GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioeng.c)
 *     ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800111E0 (-GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x180027514 (-GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 *     ?RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18006D814 (-RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioen.c)
 * Callees:
 *     ??$GetDeviceFormatInternal@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@@CEndpointCharacteristics@@AEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001C378 (--$GetDeviceFormatInternal@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@@CEndpointCharacteristics.c)
 *     ?GetDefaultConnectorProcessingMode@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18001C830 (-GetDefaultConnectorProcessingMode@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MIDL_itf_a.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetDeviceFormat(
        CEndpointCharacteristics *this,
        __int64 a2,
        __int64 a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        struct tWAVEFORMATEX **a5)
{
  __int64 v5; // rsi
  struct _GUID *DefaultConnectorProcessingMode; // rax
  __int64 v8; // rcx
  BOOL v9; // ebx
  struct _GUID v10; // xmm6
  char *v11; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // r9
  __int64 v15; // rax
  _OWORD pvar[2]; // [rsp+30h] [rbp-50h] BYREF
  struct _GUID v18; // [rsp+50h] [rbp-30h] BYREF
  __int128 v19; // [rsp+60h] [rbp-20h]

  v5 = a4;
  DefaultConnectorProcessingMode = CEndpointCharacteristics::GetDefaultConnectorProcessingMode(this, &v18, a4);
  v8 = *((_QWORD *)this + 7);
  v9 = 1;
  v10 = *DefaultConnectorProcessingMode;
  v18 = *DefaultConnectorProcessingMode;
  if ( !v8 )
    goto LABEL_6;
  memset(pvar, 0, 24);
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, _OWORD *))(*(_QWORD *)v8 + 40LL))(
         v8,
         &PKEY_AudioEndpoint_Disable_SysFx,
         pvar) >= 0
    && LOWORD(pvar[0]) == 19 )
  {
    v9 = DWORD2(pvar[0]) == 0;
  }
  PropVariantClear((PROPVARIANT *)pvar);
  if ( v9 || (_DWORD)v5 == 3 )
LABEL_6:
    v11 = (char *)this + 16 * v5 + 208;
  else
    v11 = (char *)this + 336;
  v12 = *((_DWORD *)v11 + 2);
  v13 = 0;
  if ( v12 > 0 )
  {
    v14 = *(_QWORD *)v11;
    do
    {
      v15 = *(_QWORD *)(v14 + 16LL * v13) - *(_QWORD *)&v18.Data1;
      if ( !v15 )
        v15 = *(_QWORD *)(v14 + 16LL * v13 + 8) - *(_QWORD *)v18.Data4;
      if ( !v15 )
        break;
      ++v13;
    }
    while ( v13 < v12 );
  }
  *(struct _GUID *)((char *)pvar + 12) = v10;
  *(_QWORD *)&pvar[0] = this;
  DWORD2(pvar[0]) = v5;
  v19 = pvar[1];
  v18 = (struct _GUID)pvar[0];
  return CEndpointCharacteristics::GetDeviceFormatInternal<_lambda_ea783823a3a088a32542d9fbc7fb427f_>(
           (int)this,
           (__int64)&v18,
           (__int64)a5);
}
