/*
 * XREFs of ??$GetComputedDefaultFormat@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180085CB4
 * Callers:
 *     ??$GetDefaultFormat@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@@CEndpointCharacteristics@@AEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180086A7C (--$GetDefaultFormat@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@@CEndpointCharacteristics@@AEAAJ.c)
 * Callees:
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x180029AE0 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x18006772C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ??$FindFirstMatchingPreferredFormat@V_lambda_33f85ea5a64814e7f8077c61f279f339_@@@CEndpointCharacteristics@@AEAAJPEAUWAVEFORMATEXTENSIBLE@@V_lambda_33f85ea5a64814e7f8077c61f279f339_@@@Z @ 0x18008510C (--$FindFirstMatchingPreferredFormat@V_lambda_33f85ea5a64814e7f8077c61f279f339_@@@CEndpointCharac.c)
 *     _lambda_54c77e54e42ef152cdcef462696c326e_::operator() @ 0x180087520 (_lambda_54c77e54e42ef152cdcef462696c326e_--operator().c)
 *     ?AllocateBytes@?$CHeapPtrBase@TKSDATAFORMAT@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x180087B04 (-AllocateBytes@-$CHeapPtrBase@TKSDATAFORMAT@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CEndpointCharacteristics::GetComputedDefaultFormat<_lambda_55a42c7c3426bff891a3f62b8d46795a_>(
        __int64 a1,
        int a2,
        __int64 a3,
        struct tWAVEFORMATEX **a4)
{
  GUID fmtid; // xmm0
  __int64 v8; // rdx
  void *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  const struct tWAVEFORMATEX *v13; // rbx
  ULONGLONG v14; // r15
  char *v15; // rbx
  void *v16; // rcx
  void *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  const struct tWAVEFORMATEX *v22; // rbx
  int v23; // eax
  unsigned int v24; // ebx
  LPCGUID v25; // r8
  LPCGUID v26; // r9
  _BYTE v28[4]; // [rsp+30h] [rbp-D0h] BYREF
  int FirstMatchingPreferred; // [rsp+34h] [rbp-CCh] BYREF
  LPVOID v30; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-B8h] BYREF
  ULONGLONG v33; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID ppv; // [rsp+68h] [rbp-98h] BYREF
  PROPVARIANT pvar; // [rsp+70h] [rbp-90h] BYREF
  __int64 v38; // [rsp+78h] [rbp-88h]
  __int64 v39; // [rsp+80h] [rbp-80h]
  PROPVARIANT v40; // [rsp+88h] [rbp-78h] BYREF
  __int64 v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  __int64 v43; // [rsp+A0h] [rbp-60h]
  _OWORD v44[6]; // [rsp+B0h] [rbp-50h] BYREF
  GUID v45; // [rsp+110h] [rbp+10h] BYREF
  DWORD pid; // [rsp+120h] [rbp+20h]
  GUID v47; // [rsp+128h] [rbp+28h] BYREF
  int v48; // [rsp+138h] [rbp+38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v50[80]; // [rsp+150h] [rbp+50h] BYREF

  v43 = -2LL;
  ppv = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  v34 = 0LL;
  *a4 = 0LL;
  pvar = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  *(_QWORD *)&v45.Data1 = 0x4C7D1B2C233164C8LL;
  *(_QWORD *)v45.Data4 = 0x67257A6871B668BCLL;
  v48 = 1;
  v47 = v45;
  if ( a2 == 3 )
  {
    fmtid = PKEY_Endpoint_KeywordDetector_ConnectorId.fmtid;
    pid = PKEY_Endpoint_KeywordDetector_ConnectorId.pid;
  }
  else
  {
    *(_QWORD *)&v45.Data1 = 0x41B43EBB9A82A7DBLL;
    *(_QWORD *)v45.Data4 = 0xFC181731B718BA83uLL;
    fmtid = v45;
    pid = 1;
  }
  v45 = fmtid;
  FirstMatchingPreferred = (*(__int64 (__fastcall **)(_QWORD, GUID *, PROPVARIANT *))(**(_QWORD **)(a1 + 32) + 40LL))(
                             *(_QWORD *)(a1 + 32),
                             &v47,
                             &pvar);
  if ( FirstMatchingPreferred < 0 )
    goto LABEL_55;
  FirstMatchingPreferred = (*(__int64 (__fastcall **)(_QWORD, GUID *, PROPVARIANT *))(**(_QWORD **)(a1 + 32) + 40LL))(
                             *(_QWORD *)(a1 + 32),
                             &v45,
                             &v40);
  if ( FirstMatchingPreferred < 0 )
    goto LABEL_55;
  FirstMatchingPreferred = CoCreateInstance(
                             &CLSID_MMDeviceEnumerator,
                             0LL,
                             0x17u,
                             &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                             &ppv);
  if ( FirstMatchingPreferred < 0 )
    goto LABEL_55;
  FirstMatchingPreferred = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 40LL))(
                             ppv,
                             v38,
                             &v35);
  if ( FirstMatchingPreferred < 0 )
    goto LABEL_55;
  FirstMatchingPreferred = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, _QWORD, __int64 *))(*(_QWORD *)v35 + 24LL))(
                             v35,
                             &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                             23LL,
                             0LL,
                             &v34);
  if ( FirstMatchingPreferred < 0 )
    goto LABEL_55;
  FirstMatchingPreferred = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v34 + 56LL))(
                             v34,
                             (unsigned int)v41,
                             &v32);
  if ( FirstMatchingPreferred < 0 )
    goto LABEL_55;
  v30 = 0LL;
  FirstMatchingPreferred = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, LPVOID *))(*(_QWORD *)v32 + 104LL))(
                             v32,
                             1LL,
                             &GUID_e792f5ac_33a8_4f03_9840_cbee917b8f81,
                             &v30);
  if ( FirstMatchingPreferred < 0 )
    goto LABEL_11;
  pv = 0LL;
  FirstMatchingPreferred = (*(__int64 (__fastcall **)(LPVOID, LPVOID *))(*(_QWORD *)v30 + 32LL))(v30, &pv);
  v8 = 0x10000044000LL;
  if ( FirstMatchingPreferred < 0 )
    goto LABEL_27;
  v9 = pv;
  if ( pv )
  {
    v10 = *((_QWORD *)pv + 4) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
    if ( !v10 )
      v10 = *((_QWORD *)pv + 5) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    if ( !v10 )
    {
      v11 = *((_QWORD *)pv + 6) - *(_QWORD *)&GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data1;
      if ( !v11 )
        v11 = *((_QWORD *)pv + 7) - *(_QWORD *)GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data4;
      if ( !v11 && *(_DWORD *)pv > 0x40u )
      {
        v12 = *(unsigned int *)pv - 64LL;
        if ( v12 <= 0x28 )
        {
          if ( _bittest64(&v8, v12) )
          {
            v13 = (const struct tWAVEFORMATEX *)((char *)pv + 64);
            v28[0] = 0;
            lambda_54c77e54e42ef152cdcef462696c326e_::operator()(a3, (char *)pv + 64, v28);
            if ( v28[0] )
            {
              FirstMatchingPreferred = CloneWaveFormat(v13, a4);
              if ( FirstMatchingPreferred < 0 )
              {
                CoTaskMemFree(pv);
                pv = 0LL;
LABEL_11:
                if ( v30 )
                  (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v30 + 16LL))(v30);
                goto LABEL_55;
              }
            }
LABEL_27:
            v9 = pv;
          }
        }
      }
    }
  }
  CoTaskMemFree(v9);
  pv = 0LL;
  if ( v30 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v30 + 16LL))(v30);
  FirstMatchingPreferred = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, ULONGLONG *))(*(_QWORD *)v32 + 104LL))(
                             v32,
                             1LL,
                             &GUID_3cb4a69d_bb6f_4d2b_95b7_452d2c155db5,
                             &v33);
  if ( FirstMatchingPreferred >= 0 && !*a4 )
  {
    v14 = v33;
    v30 = 0LL;
    ATL::CHeapPtrBase<KSDATAFORMAT,ATL::CComAllocator>::AllocateBytes(&v30);
    v15 = (char *)v30;
    if ( !v30 )
    {
      FirstMatchingPreferred = -2147024882;
      v16 = 0LL;
LABEL_34:
      CoTaskMemFree(v16);
      goto LABEL_55;
    }
    *(_DWORD *)v30 = 104;
    *((GUID *)v15 + 1) = GUID_73647561_0000_0010_8000_00aa00389b71;
    *((GUID *)v15 + 3) = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
    *((GUID *)v15 + 2) = GUID_00000001_0000_0010_8000_00aa00389b71;
    *((_WORD *)v15 + 32) = -2;
    *(GUID *)(v15 + 88) = GUID_00000000_0000_0010_8000_00aa00389b71;
    *((_DWORD *)v15 + 22) = 1;
    pData.Ptr = v14;
    *(_QWORD *)&pData.Size = v15;
    *(_QWORD *)v50 = a4;
    *(_OWORD *)&v50[8] = *(_OWORD *)a3;
    *(_OWORD *)&v50[24] = *(_OWORD *)(a3 + 16);
    *(_OWORD *)&v50[40] = *(_OWORD *)(a3 + 32);
    *(_OWORD *)&v50[56] = *(_OWORD *)(a3 + 48);
    *(_QWORD *)&v50[72] = *(_QWORD *)(a3 + 64);
    v44[0] = pData;
    v44[1] = *(_OWORD *)v50;
    v44[2] = *(_OWORD *)&v50[16];
    v44[3] = *(_OWORD *)&v50[32];
    v44[4] = *(_OWORD *)&v50[48];
    v44[5] = *(_OWORD *)&v50[64];
    FirstMatchingPreferred = CEndpointCharacteristics::FindFirstMatchingPreferredFormat<_lambda_33f85ea5a64814e7f8077c61f279f339_>(
                               a1,
                               (__int64)(v15 + 64),
                               v44);
    v16 = v15;
    if ( FirstMatchingPreferred < 0 )
      goto LABEL_34;
    CoTaskMemFree(v15);
    if ( *a4 )
      goto LABEL_55;
    v30 = 0LL;
    FirstMatchingPreferred = (*(__int64 (__fastcall **)(ULONGLONG, LPVOID *))(*(_QWORD *)v33 + 32LL))(v33, &v30);
    if ( FirstMatchingPreferred < 0 )
    {
LABEL_38:
      v16 = v30;
      goto LABEL_34;
    }
    v17 = v30;
    if ( v30 )
    {
      v18 = *((_QWORD *)v30 + 4) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
      if ( !v18 )
        v18 = *((_QWORD *)v30 + 5) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
      if ( !v18 )
      {
        v19 = *((_QWORD *)v30 + 6) - *(_QWORD *)&GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data1;
        if ( !v19 )
          v19 = *((_QWORD *)v30 + 7) - *(_QWORD *)GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data4;
        if ( !v19 && *(_DWORD *)v30 > 0x40u )
        {
          v20 = *(unsigned int *)v30 - 64LL;
          if ( v20 <= 0x28 )
          {
            v21 = 0x10000044000LL;
            if ( _bittest64(&v21, v20) )
            {
              v22 = (const struct tWAVEFORMATEX *)((char *)v30 + 64);
              v28[0] = 0;
              lambda_54c77e54e42ef152cdcef462696c326e_::operator()(a3, (char *)v30 + 64, v28);
              if ( v28[0] )
              {
                FirstMatchingPreferred = CloneWaveFormat(v22, a4);
                if ( FirstMatchingPreferred < 0 )
                  goto LABEL_38;
              }
              v17 = v30;
            }
          }
        }
      }
    }
    CoTaskMemFree(v17);
    v23 = FirstMatchingPreferred;
    if ( !*a4 )
      v23 = -2004287480;
    FirstMatchingPreferred = v23;
  }
LABEL_55:
  PropVariantClear(&pvar);
  PropVariantClear(&v40);
  v24 = FirstMatchingPreferred;
  if ( FirstMatchingPreferred < 0 && (unsigned int)hProvider > 2 )
  {
    TlgCreateSz((PEVENT_DATA_DESCRIPTOR)&v50[16], "CEndpointCharacteristics::GetComputedDefaultFormat");
    LODWORD(pv) = 5053;
    *(_QWORD *)&v50[32] = &pv;
    *(_QWORD *)&v50[40] = 4LL;
    *(_QWORD *)&v50[48] = &FirstMatchingPreferred;
    *(_QWORD *)&v50[56] = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800A877D, v25, v26, 5u, &pData);
    v24 = FirstMatchingPreferred;
  }
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  if ( v33 )
    (*(void (__fastcall **)(ULONGLONG))(*(_QWORD *)v33 + 16LL))(v33);
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return v24;
}
