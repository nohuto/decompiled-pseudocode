/*
 * XREFs of ??$GetDeviceFormatInternal@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@@CEndpointCharacteristics@@AEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180086DDC
 * Callers:
 *     ??$ForEachCandidateFormatForMode@V_lambda_54c77e54e42ef152cdcef462696c326e_@@@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@U_GUID@@V_lambda_54c77e54e42ef152cdcef462696c326e_@@@Z @ 0x1800854E4 (--$ForEachCandidateFormatForMode@V_lambda_54c77e54e42ef152cdcef462696c326e_@@@CEndpointCharacter.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18001A650 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18002947C (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x180029AE0 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x18006772C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ??$GetDefaultFormat@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@@CEndpointCharacteristics@@AEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180086A7C (--$GetDefaultFormat@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@@CEndpointCharacteristics@@AEAAJ.c)
 *     _lambda_54c77e54e42ef152cdcef462696c326e_::operator() @ 0x180087520 (_lambda_54c77e54e42ef152cdcef462696c326e_--operator().c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18008A600 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetDeviceFormatInternal<_lambda_55a42c7c3426bff891a3f62b8d46795a_>(
        CEndpointCharacteristics *a1,
        char a2,
        bool a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        __int64 a5,
        struct tWAVEFORMATEX **a6)
{
  int Default; // edi
  bool v10; // sf
  const PROPERTYKEY *v11; // rax
  int updated; // eax
  struct tWAVEFORMATEX *v13; // rbx
  struct tWAVEFORMATEX *v14; // rax
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  char v18; // [rsp+38h] [rbp-89h] BYREF
  int v19; // [rsp+3Ch] [rbp-85h] BYREF
  struct tWAVEFORMATEX *v20; // [rsp+40h] [rbp-81h] BYREF
  int v21; // [rsp+48h] [rbp-79h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+50h] [rbp-71h] BYREF
  __int64 v23; // [rsp+68h] [rbp-59h]
  GUID fmtid; // [rsp+70h] [rbp-51h] BYREF
  DWORD pid; // [rsp+80h] [rbp-41h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-39h] BYREF
  __int128 v27; // [rsp+98h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v29; // [rsp+B8h] [rbp-9h]
  int *v30; // [rsp+C8h] [rbp+7h]
  int v31; // [rsp+D0h] [rbp+Fh]
  int v32; // [rsp+D4h] [rbp+13h]

  v23 = -2LL;
  v19 = 0;
  v20 = 0LL;
  *a6 = 0LL;
  if ( a2 )
  {
    pData = *(EVENT_DATA_DESCRIPTOR *)a5;
    v27 = *(_OWORD *)(a5 + 16);
    pDesc = *(struct _EVENT_DATA_DESCRIPTOR *)(a5 + 32);
    v29 = *(_OWORD *)(a5 + 48);
    v30 = *(int **)(a5 + 64);
    Default = CEndpointCharacteristics::GetDefaultFormat<_lambda_55a42c7c3426bff891a3f62b8d46795a_>(
                a1,
                a3,
                a4,
                (__int64)&pData,
                &v20);
    v19 = Default;
    v10 = Default < 0;
    goto LABEL_14;
  }
  memset(&pvar, 0, sizeof(pvar));
  v11 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
  if ( a4 != eKeywordDetectorConnector )
    v11 = &PKEY_AudioEngine_DeviceFormat;
  fmtid = v11->fmtid;
  pid = v11->pid;
  if ( (*(int (__fastcall **)(_QWORD *, GUID *, struct tagPROPVARIANT *))(**((_QWORD **)a1 + 4) + 40LL))(
         *((_QWORD **)a1 + 4),
         &fmtid,
         &pvar) >= 0
    && pvar.vt == 65
    && IsValidWfxBlob(&pvar)
    && (v18 = 0, lambda_54c77e54e42ef152cdcef462696c326e_::operator()(a5, pvar.bstrblobVal.pData, &v18), v18) )
  {
    updated = CloneWaveFormat((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData, &v20);
  }
  else
  {
    pData = *(EVENT_DATA_DESCRIPTOR *)a5;
    v27 = *(_OWORD *)(a5 + 16);
    pDesc = *(struct _EVENT_DATA_DESCRIPTOR *)(a5 + 32);
    v29 = *(_OWORD *)(a5 + 48);
    v30 = *(int **)(a5 + 64);
    Default = CEndpointCharacteristics::GetDefaultFormat<_lambda_55a42c7c3426bff891a3f62b8d46795a_>(
                a1,
                a3,
                a4,
                (__int64)&pData,
                &v20);
    v19 = Default;
    if ( Default < 0 )
    {
LABEL_17:
      v13 = v20;
      goto LABEL_18;
    }
    updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(a1, a3, a4, v20);
  }
  v19 = updated;
  Default = updated;
  if ( updated < 0 )
    goto LABEL_17;
  PropVariantClear((PROPVARIANT *)&pvar);
  Default = v19;
  v10 = v19 < 0;
LABEL_14:
  if ( v10 )
    goto LABEL_17;
  v13 = v20;
  Default = ValidateWaveFormatEx(v20);
  v19 = Default;
  if ( Default >= 0 )
  {
    v14 = v13;
    v13 = 0LL;
    v20 = 0LL;
    *a6 = v14;
    goto LABEL_20;
  }
LABEL_18:
  if ( (unsigned int)hProvider > 2 )
  {
    TlgCreateSz(&pDesc, "CEndpointCharacteristics::GetDeviceFormatInternal");
    v21 = 5184;
    *(_QWORD *)&v29 = &v21;
    *((_QWORD *)&v29 + 1) = 4LL;
    v30 = &v19;
    v31 = 4;
    v32 = 0;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800A877D, v15, v16, 5u, &pData);
    Default = v19;
    v13 = v20;
  }
LABEL_20:
  CoTaskMemFree(v13);
  return (unsigned int)Default;
}
