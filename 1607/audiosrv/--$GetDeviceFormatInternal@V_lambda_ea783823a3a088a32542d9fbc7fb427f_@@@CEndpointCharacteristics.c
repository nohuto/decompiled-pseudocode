/*
 * XREFs of ??$GetDeviceFormatInternal@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@@CEndpointCharacteristics@@AEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001C378
 * Callers:
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001BC0C (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18001A650 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18001B5C0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18002947C (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x180029AE0 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??$GetDefaultFormat@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@@CEndpointCharacteristics@@AEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180086C40 (--$GetDefaultFormat@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@@CEndpointCharacteristics@@AEAAJ.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18008A600 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetDeviceFormatInternal<_lambda_ea783823a3a088a32542d9fbc7fb427f_>(
        CEndpointCharacteristics *a1,
        char a2,
        bool a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        __int64 a5,
        struct tWAVEFORMATEX **a6)
{
  const PROPERTYKEY *v9; // rax
  const void *v10; // rsi
  __int64 v11; // rdi
  struct tWAVEFORMATEX *v12; // rax
  struct tWAVEFORMATEX *v13; // rbx
  int Default; // edi
  bool v15; // sf
  struct tWAVEFORMATEX *v16; // rax
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  __int64 v20; // [rsp+58h] [rbp-B0h] BYREF
  struct tWAVEFORMATEX *v21; // [rsp+60h] [rbp-A8h] BYREF
  int v22; // [rsp+68h] [rbp-A0h] BYREF
  PROPVARIANT pvar_8[2]; // [rsp+78h] [rbp-90h] BYREF
  void *Src[2]; // [rsp+88h] [rbp-80h]
  int v25[4]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v26; // [rsp+A8h] [rbp-60h]
  __int64 v27; // [rsp+B8h] [rbp-50h]
  GUID fmtid; // [rsp+C0h] [rbp-48h] BYREF
  DWORD pid; // [rsp+D0h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D8h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F8h] [rbp-10h] BYREF
  int *v32; // [rsp+108h] [rbp+0h]
  int v33; // [rsp+110h] [rbp+8h]
  int v34; // [rsp+114h] [rbp+Ch]
  __int64 *v35; // [rsp+118h] [rbp+10h]
  int v36; // [rsp+120h] [rbp+18h]
  int v37; // [rsp+124h] [rbp+1Ch]

  v27 = -2LL;
  LODWORD(v20) = 0;
  v21 = 0LL;
  *a6 = 0LL;
  if ( a2 )
  {
    *(_OWORD *)pvar_8 = *(_OWORD *)a5;
    *(_OWORD *)Src = *(_OWORD *)(a5 + 16);
    Default = CEndpointCharacteristics::GetDefaultFormat<_lambda_ea783823a3a088a32542d9fbc7fb427f_>(
                (int)a1,
                a3,
                a4,
                (int)pvar_8,
                &v21);
    LODWORD(v20) = Default;
    v15 = Default < 0;
  }
  else
  {
    *(_OWORD *)pvar_8 = 0uLL;
    Src[0] = 0LL;
    v9 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
    if ( a4 != eKeywordDetectorConnector )
      v9 = &PKEY_AudioEngine_DeviceFormat;
    fmtid = v9->fmtid;
    pid = v9->pid;
    if ( (*(int (__fastcall **)(_QWORD *, GUID *, PROPVARIANT *))(**((_QWORD **)a1 + 4) + 40LL))(
           *((_QWORD **)a1 + 4),
           &fmtid,
           pvar_8) >= 0
      && LOWORD(pvar_8[0]) == 65
      && (unsigned int)IsValidWfxBlob((struct tagPROPVARIANT *)pvar_8)
      && (*(_OWORD *)v25 = *(_OWORD *)(a5 + 12),
          (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                 *(_QWORD *)a5,
                 *(_DWORD *)(a5 + 8),
                 (const struct tWAVEFORMATEX *)Src[0],
                 v25,
                 0,
                 0LL,
                 0LL,
                 0LL,
                 0LL) >= 0) )
    {
      v10 = Src[0];
      v11 = *((unsigned __int16 *)Src[0] + 8);
      v12 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v11 + 18);
      v13 = v12;
      if ( v12 )
      {
        memcpy_0(v12, v10, v11 + 18);
        Default = 0;
      }
      else
      {
        Default = -2147024882;
      }
      v21 = v13;
      LODWORD(v20) = Default;
      if ( Default < 0 )
        goto LABEL_22;
    }
    else
    {
      *(_OWORD *)v25 = *(_OWORD *)a5;
      v26 = *(_OWORD *)(a5 + 16);
      Default = CEndpointCharacteristics::GetDefaultFormat<_lambda_ea783823a3a088a32542d9fbc7fb427f_>(
                  (int)a1,
                  a3,
                  a4,
                  (int)v25,
                  &v21);
      LODWORD(v20) = Default;
      if ( Default < 0 )
        goto LABEL_16;
      Default = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(a1, a3, a4, v21);
      LODWORD(v20) = Default;
      if ( Default < 0 )
        goto LABEL_16;
    }
    PropVariantClear(pvar_8);
    Default = v20;
    v15 = (int)v20 < 0;
  }
  if ( v15 )
  {
LABEL_16:
    v13 = v21;
    goto LABEL_22;
  }
  v13 = v21;
  Default = ValidateWaveFormatEx(v21);
  LODWORD(v20) = Default;
  if ( Default >= 0 )
  {
    v16 = v13;
    v13 = 0LL;
    v21 = 0LL;
    *a6 = v16;
    goto LABEL_15;
  }
LABEL_22:
  if ( (unsigned int)hProvider > 2 )
  {
    TlgCreateSz(&pDesc, "CEndpointCharacteristics::GetDeviceFormatInternal");
    v22 = 5184;
    v32 = &v22;
    v33 = 4;
    v34 = 0;
    v35 = &v20;
    v36 = 4;
    v37 = 0;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800A877D, v18, v19, 5u, &pData);
    Default = v20;
    v13 = v21;
  }
LABEL_15:
  CoTaskMemFree(v13);
  return (unsigned int)Default;
}
