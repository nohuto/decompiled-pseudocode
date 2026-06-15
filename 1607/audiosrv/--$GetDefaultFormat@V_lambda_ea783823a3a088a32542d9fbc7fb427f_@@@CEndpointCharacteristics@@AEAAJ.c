/*
 * XREFs of ??$GetDefaultFormat@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@@CEndpointCharacteristics@@AEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180086C40
 * Callers:
 *     ??$GetDeviceFormatInternal@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@@CEndpointCharacteristics@@AEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001C378 (--$GetDeviceFormatInternal@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@@CEndpointCharacteristics.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180020B70 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18001A650 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18002947C (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x180029AE0 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     _lambda_ea783823a3a088a32542d9fbc7fb427f_::operator() @ 0x180051328 (_lambda_ea783823a3a088a32542d9fbc7fb427f_--operator().c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x18006772C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ??$GetComputedDefaultFormat@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800863C8 (--$GetComputedDefaultFormat@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@@CEndpointCharacteristic.c)
 *     ?GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x180088F50 (-GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetDefaultFormat<_lambda_ea783823a3a088a32542d9fbc7fb427f_>(
        CEndpointCharacteristics *a1,
        int a2,
        int a3,
        _OWORD *a4,
        struct tWAVEFORMATEX **a5)
{
  int ComputedDefault; // eax
  __int128 v9; // xmm1
  __int64 result; // rax
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  int OffloadDeviceFormat; // [rsp+30h] [rbp-61h] BYREF
  int v14; // [rsp+34h] [rbp-5Dh] BYREF
  struct tagPROPVARIANT pvar; // [rsp+38h] [rbp-59h] BYREF
  _OWORD v16[2]; // [rsp+50h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-1h] BYREF
  int *v19; // [rsp+A0h] [rbp+Fh]
  int v20; // [rsp+A8h] [rbp+17h]
  int v21; // [rsp+ACh] [rbp+1Bh]
  int *p_OffloadDeviceFormat; // [rsp+B0h] [rbp+1Fh]
  int v23; // [rsp+B8h] [rbp+27h]
  int v24; // [rsp+BCh] [rbp+2Bh]

  OffloadDeviceFormat = 0;
  memset(&pvar, 0, sizeof(pvar));
  if ( a2 )
  {
    OffloadDeviceFormat = CEndpointCharacteristics::GetOffloadDeviceFormat(a1, a5);
    if ( OffloadDeviceFormat >= 0 )
      lambda_ea783823a3a088a32542d9fbc7fb427f_::operator()((__int64)a4, *a5);
  }
  else
  {
    OffloadDeviceFormat = (*(__int64 (__fastcall **)(_QWORD *, const PROPERTYKEY *, struct tagPROPVARIANT *))(**((_QWORD **)a1 + 4) + 40LL))(
                            *((_QWORD **)a1 + 4),
                            &PKEY_AudioEngine_OEMFormat,
                            &pvar);
    if ( OffloadDeviceFormat >= 0
      && pvar.vt == 65
      && IsValidWfxBlob(&pvar)
      && (OffloadDeviceFormat = ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData),
          OffloadDeviceFormat >= 0)
      && lambda_ea783823a3a088a32542d9fbc7fb427f_::operator()(
           (__int64)a4,
           (const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) )
    {
      ComputedDefault = CloneWaveFormat((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData, a5);
    }
    else
    {
      v9 = a4[1];
      v16[0] = *a4;
      v16[1] = v9;
      ComputedDefault = CEndpointCharacteristics::GetComputedDefaultFormat<_lambda_ea783823a3a088a32542d9fbc7fb427f_>(
                          (__int64)a1,
                          a3,
                          v16,
                          a5);
    }
    OffloadDeviceFormat = ComputedDefault;
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  result = (unsigned int)OffloadDeviceFormat;
  if ( OffloadDeviceFormat < 0 && (unsigned int)hProvider > 2 )
  {
    TlgCreateSz(&pDesc, "CEndpointCharacteristics::GetDefaultFormat");
    v21 = 0;
    v24 = 0;
    v19 = &v14;
    p_OffloadDeviceFormat = &OffloadDeviceFormat;
    v14 = 5109;
    v20 = 4;
    v23 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800A877D, v11, v12, 5u, &pData);
    return (unsigned int)OffloadDeviceFormat;
  }
  return result;
}
