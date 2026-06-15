/*
 * XREFs of ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180013340
 * Callers:
 *     ?GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x18000EBE0 (-GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180010630 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180080460 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 *     AudioServerGetDevicePeriod @ 0x180089970 (AudioServerGetDevicePeriod.c)
 *     ??$ForEachCandidateFormatForMode@V_lambda_418c5ae5971ebab8b75617066dde6fa1_@@@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@U_GUID@@V_lambda_418c5ae5971ebab8b75617066dde6fa1_@@@Z @ 0x1800A4570 (--$ForEachCandidateFormatForMode@V_lambda_418c5ae5971ebab8b75617066dde6fa1_@@@CEndpointCharacter.c)
 * Callees:
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180067A94 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  void *v7; // r14
  GUID fmtid; // xmm0
  HRESULT v9; // edi
  void *v10; // rcx
  unsigned __int16 *v12; // rbx
  size_t v13; // r8
  const void *v14; // rdx
  struct tWAVEFORMATEX *v15; // rbx
  __int128 v16; // [rsp+30h] [rbp-A9h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-89h] BYREF
  __int64 v18; // [rsp+58h] [rbp-81h] BYREF
  void *v19; // [rsp+60h] [rbp-79h] BYREF
  __int64 v20; // [rsp+68h] [rbp-71h] BYREF
  __int64 v21; // [rsp+70h] [rbp-69h] BYREF
  LPVOID pv; // [rsp+78h] [rbp-61h] BYREF
  __int64 v23; // [rsp+80h] [rbp-59h]
  PROPVARIANT v24; // [rsp+88h] [rbp-51h] BYREF
  __int64 v25; // [rsp+90h] [rbp-49h]
  __int64 v26; // [rsp+98h] [rbp-41h]
  PROPVARIANT pvar; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-31h]
  __int64 v29; // [rsp+B0h] [rbp-29h]
  __int64 v30; // [rsp+B8h] [rbp-21h]
  GUID v31; // [rsp+C0h] [rbp-19h] BYREF
  DWORD pid; // [rsp+D0h] [rbp-9h]
  __int128 v33; // [rsp+D8h] [rbp-1h] BYREF
  int v34; // [rsp+E8h] [rbp+Fh]

  v30 = -2LL;
  v7 = 0LL;
  v19 = 0LL;
  ppv = 0LL;
  v18 = 0LL;
  v23 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  pv = 0LL;
  pvar = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( (a2 & 0xFFFFFFFD) != 0 )
  {
    if ( a2 == eOffloadConnector )
    {
      *(_QWORD *)&v16 = 0x4C7D1B2C233164C8LL;
      *((_QWORD *)&v16 + 1) = 0x67257A6871B668BCLL;
      v33 = v16;
      fmtid = PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId.fmtid;
      pid = PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId.pid;
    }
    else
    {
      if ( a2 != eKeywordDetectorConnector )
      {
        v9 = -2147024809;
        goto LABEL_11;
      }
      *(_QWORD *)&v16 = 0x4C7D1B2C233164C8LL;
      *((_QWORD *)&v16 + 1) = 0x67257A6871B668BCLL;
      v33 = v16;
      fmtid = PKEY_Endpoint_KeywordDetector_ConnectorId.fmtid;
      pid = PKEY_Endpoint_KeywordDetector_ConnectorId.pid;
    }
  }
  else
  {
    *(_QWORD *)&v16 = 0x4C7D1B2C233164C8LL;
    *((_QWORD *)&v16 + 1) = 0x67257A6871B668BCLL;
    *(_QWORD *)&v31.Data1 = 0x41B43EBB9A82A7DBLL;
    *(_QWORD *)v31.Data4 = 0xFC181731B718BA83uLL;
    v33 = v16;
    fmtid = v31;
    pid = 1;
  }
  v34 = 1;
  v31 = fmtid;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 4) + 40LL))(
         *((_QWORD *)this + 4),
         &v33,
         &pvar);
  if ( v9 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, GUID *, PROPVARIANT *))(**((_QWORD **)this + 4) + 40LL))(
           *((_QWORD *)this + 4),
           &v31,
           &v24);
    if ( v9 >= 0 )
    {
      v9 = CoCreateInstance(&CLSID_MMDeviceEnumerator, 0LL, 0x17u, &GUID_a95664d2_9614_4f35_a746_de8db63617e6, &ppv);
      if ( v9 >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, v28, &v18);
        if ( v9 >= 0 )
        {
          v9 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v18 + 24LL))(
                 v18,
                 &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                 23LL);
          if ( v9 >= 0 )
          {
            v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v23 + 56LL))(
                   v23,
                   (unsigned int)v25,
                   &v20);
            if ( v9 >= 0 )
            {
              v9 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v20 + 104LL))(
                     v20,
                     23LL,
                     &GUID_e792f5ac_33a8_4f03_9840_cbee917b8f81,
                     &v21);
              if ( v9 >= 0 )
              {
                v16 = (__int128)*a3;
                v9 = (*(__int64 (__fastcall **)(__int64, __int128 *, LPVOID *))(*(_QWORD *)v21 + 24LL))(v21, &v16, &pv);
                if ( v9 >= 0 )
                {
                  v12 = (unsigned __int16 *)pv;
                  v9 = CTCoAllocPolicy::Alloc(v10, 1u, *((unsigned __int16 *)pv + 40) + 18LL, &v19);
                  if ( v9 < 0 )
                  {
                    v7 = v19;
                  }
                  else
                  {
                    v13 = v12[40] + 18LL;
                    v14 = v12 + 32;
                    v15 = (struct tWAVEFORMATEX *)v19;
                    memcpy_0(v19, v14, v13);
                    *a4 = v15;
                    v7 = 0LL;
                    v9 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_11:
  PropVariantClear(&pvar);
  PropVariantClear(&v24);
  CoTaskMemFree(v7);
  CoTaskMemFree(pv);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v9;
}
