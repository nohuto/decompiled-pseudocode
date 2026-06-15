/*
 * XREFs of ??$GetDefaultFormat@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@@CEndpointCharacteristics@@AEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180086A7C
 * Callers:
 *     ??$GetDeviceFormatInternal@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@@CEndpointCharacteristics@@AEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180086DDC (--$GetDeviceFormatInternal@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@@CEndpointCharacteristics.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18001A650 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18002947C (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x180029AE0 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x18006772C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ??$GetComputedDefaultFormat@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180085CB4 (--$GetComputedDefaultFormat@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@@CEndpointCharacteristic.c)
 *     _lambda_54c77e54e42ef152cdcef462696c326e_::operator() @ 0x180087520 (_lambda_54c77e54e42ef152cdcef462696c326e_--operator().c)
 *     ?GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x180088F50 (-GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetDefaultFormat<_lambda_55a42c7c3426bff891a3f62b8d46795a_>(
        CEndpointCharacteristics *a1,
        int a2,
        int a3,
        __int64 a4,
        struct tWAVEFORMATEX **a5)
{
  int ComputedDefault; // eax
  __int128 v9; // xmm1
  struct _EVENT_DATA_DESCRIPTOR v10; // xmm0
  __int128 v11; // xmm1
  __int64 result; // rax
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  _BYTE v15[4]; // [rsp+30h] [rbp-51h] BYREF
  int OffloadDeviceFormat; // [rsp+34h] [rbp-4Dh] BYREF
  int v17; // [rsp+38h] [rbp-49h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-21h] BYREF
  __int128 v20; // [rsp+70h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-1h] BYREF
  __int128 v22; // [rsp+90h] [rbp+Fh]
  int *p_OffloadDeviceFormat; // [rsp+A0h] [rbp+1Fh]
  int v24; // [rsp+A8h] [rbp+27h]
  int v25; // [rsp+ACh] [rbp+2Bh]

  OffloadDeviceFormat = 0;
  memset(&pvar, 0, sizeof(pvar));
  if ( a2 )
  {
    OffloadDeviceFormat = CEndpointCharacteristics::GetOffloadDeviceFormat(a1, a5);
    if ( OffloadDeviceFormat >= 0 )
      lambda_54c77e54e42ef152cdcef462696c326e_::operator()(a4, *a5, v15);
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
      && (v15[0] = 0, lambda_54c77e54e42ef152cdcef462696c326e_::operator()(a4, pvar.bstrblobVal.pData, v15), v15[0]) )
    {
      ComputedDefault = CloneWaveFormat((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData, a5);
    }
    else
    {
      v9 = *(_OWORD *)(a4 + 16);
      pData = *(EVENT_DATA_DESCRIPTOR *)a4;
      v10 = *(struct _EVENT_DATA_DESCRIPTOR *)(a4 + 32);
      v20 = v9;
      v11 = *(_OWORD *)(a4 + 48);
      pDesc = v10;
      p_OffloadDeviceFormat = *(int **)(a4 + 64);
      v22 = v11;
      ComputedDefault = CEndpointCharacteristics::GetComputedDefaultFormat<_lambda_55a42c7c3426bff891a3f62b8d46795a_>(
                          (__int64)a1,
                          a3,
                          (__int64)&pData,
                          a5);
    }
    OffloadDeviceFormat = ComputedDefault;
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  result = (unsigned int)OffloadDeviceFormat;
  if ( OffloadDeviceFormat < 0 && (unsigned int)hProvider > 2 )
  {
    TlgCreateSz(&pDesc, "CEndpointCharacteristics::GetDefaultFormat");
    v25 = 0;
    *(_QWORD *)&v22 = &v17;
    p_OffloadDeviceFormat = &OffloadDeviceFormat;
    v17 = 5109;
    *((_QWORD *)&v22 + 1) = 4LL;
    v24 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800A877D, v13, v14, 5u, &pData);
    return (unsigned int)OffloadDeviceFormat;
  }
  return result;
}
