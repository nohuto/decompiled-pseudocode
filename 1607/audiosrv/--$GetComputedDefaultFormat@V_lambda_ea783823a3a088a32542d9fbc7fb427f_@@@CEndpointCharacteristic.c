/*
 * XREFs of ??$GetComputedDefaultFormat@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800863C8
 * Callers:
 *     ??$GetDefaultFormat@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@@CEndpointCharacteristics@@AEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180086C40 (--$GetDefaultFormat@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@@CEndpointCharacteristics@@AEAAJ.c)
 * Callees:
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x180029AE0 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     _lambda_ea783823a3a088a32542d9fbc7fb427f_::operator() @ 0x180051328 (_lambda_ea783823a3a088a32542d9fbc7fb427f_--operator().c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x18006772C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ??$FindFirstMatchingPreferredFormat@V_lambda_353b87aafb6929f0b8cf31fbc22c501a_@@@CEndpointCharacteristics@@AEAAJPEAUWAVEFORMATEXTENSIBLE@@V_lambda_353b87aafb6929f0b8cf31fbc22c501a_@@@Z @ 0x1800852FC (--$FindFirstMatchingPreferredFormat@V_lambda_353b87aafb6929f0b8cf31fbc22c501a_@@@CEndpointCharac.c)
 *     ?AllocateBytes@?$CHeapPtrBase@TKSDATAFORMAT@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x180087B04 (-AllocateBytes@-$CHeapPtrBase@TKSDATAFORMAT@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CEndpointCharacteristics::GetComputedDefaultFormat<_lambda_ea783823a3a088a32542d9fbc7fb427f_>(
        __int64 a1,
        int a2,
        _OWORD *a3,
        struct tWAVEFORMATEX **a4)
{
  GUID fmtid; // xmm0
  __int64 v8; // rdx
  void *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  const struct tWAVEFORMATEX *v13; // rbx
  ULONGLONG v14; // r14
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
  int FirstMatchingPreferred; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID v29; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h] BYREF
  ULONGLONG v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID ppv; // [rsp+68h] [rbp-98h] BYREF
  PROPVARIANT pvar; // [rsp+70h] [rbp-90h] BYREF
  __int64 v37; // [rsp+78h] [rbp-88h]
  __int64 v38; // [rsp+80h] [rbp-80h]
  PROPVARIANT v39; // [rsp+88h] [rbp-78h] BYREF
  __int64 v40; // [rsp+90h] [rbp-70h]
  __int64 v41; // [rsp+98h] [rbp-68h]
  EVENT_DATA_DESCRIPTOR v42; // [rsp+A0h] [rbp-60h]
  _BYTE v43[40]; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  GUID v45; // [rsp+E0h] [rbp-20h] BYREF
  DWORD pid; // [rsp+F0h] [rbp-10h]
  GUID v47; // [rsp+F8h] [rbp-8h] BYREF
  int v48; // [rsp+108h] [rbp+8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  __int128 v50; // [rsp+120h] [rbp+20h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+130h] [rbp+30h] BYREF
  LPVOID *p_pv; // [rsp+140h] [rbp+40h]
  __int64 v53; // [rsp+148h] [rbp+48h]
  int *p_FirstMatchingPreferred; // [rsp+150h] [rbp+50h]
  __int64 v55; // [rsp+158h] [rbp+58h]

  v44 = -2LL;
  ppv = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  v31 = 0LL;
  v33 = 0LL;
  *a4 = 0LL;
  pvar = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
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
                             &v39);
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
                             v37,
                             &v34);
  if ( FirstMatchingPreferred < 0 )
    goto LABEL_55;
  FirstMatchingPreferred = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, _QWORD, __int64 *))(*(_QWORD *)v34 + 24LL))(
                             v34,
                             &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                             23LL,
                             0LL,
                             &v33);
  if ( FirstMatchingPreferred < 0 )
    goto LABEL_55;
  FirstMatchingPreferred = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v33 + 56LL))(
                             v33,
                             (unsigned int)v40,
                             &v31);
  if ( FirstMatchingPreferred < 0 )
    goto LABEL_55;
  v29 = 0LL;
  FirstMatchingPreferred = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, LPVOID *))(*(_QWORD *)v31 + 104LL))(
                             v31,
                             1LL,
                             &GUID_e792f5ac_33a8_4f03_9840_cbee917b8f81,
                             &v29);
  if ( FirstMatchingPreferred < 0 )
    goto LABEL_11;
  pv = 0LL;
  FirstMatchingPreferred = (*(__int64 (__fastcall **)(LPVOID, LPVOID *))(*(_QWORD *)v29 + 32LL))(v29, &pv);
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
            if ( lambda_ea783823a3a088a32542d9fbc7fb427f_::operator()(
                   (__int64)a3,
                   (const struct tWAVEFORMATEX *)((char *)pv + 64)) )
            {
              FirstMatchingPreferred = CloneWaveFormat(v13, a4);
              if ( FirstMatchingPreferred < 0 )
              {
                CoTaskMemFree(pv);
                pv = 0LL;
LABEL_11:
                if ( v29 )
                  (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v29 + 16LL))(v29);
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
  if ( v29 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v29 + 16LL))(v29);
  FirstMatchingPreferred = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, ULONGLONG *))(*(_QWORD *)v31 + 104LL))(
                             v31,
                             1LL,
                             &GUID_3cb4a69d_bb6f_4d2b_95b7_452d2c155db5,
                             &v32);
  if ( FirstMatchingPreferred >= 0 && !*a4 )
  {
    v14 = v32;
    v29 = 0LL;
    ATL::CHeapPtrBase<KSDATAFORMAT,ATL::CComAllocator>::AllocateBytes(&v29);
    v15 = (char *)v29;
    if ( !v29 )
    {
      FirstMatchingPreferred = -2147024882;
      v16 = 0LL;
LABEL_34:
      CoTaskMemFree(v16);
      goto LABEL_55;
    }
    *(_DWORD *)v29 = 104;
    *((GUID *)v15 + 1) = GUID_73647561_0000_0010_8000_00aa00389b71;
    *((GUID *)v15 + 3) = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
    *((GUID *)v15 + 2) = GUID_00000001_0000_0010_8000_00aa00389b71;
    *((_WORD *)v15 + 32) = -2;
    *(GUID *)(v15 + 88) = GUID_00000000_0000_0010_8000_00aa00389b71;
    *((_DWORD *)v15 + 22) = 1;
    v42.Ptr = v14;
    *(_QWORD *)&v42.Size = v15;
    *(_QWORD *)v43 = a4;
    *(_OWORD *)&v43[8] = *a3;
    *(_OWORD *)&v43[24] = a3[1];
    pData = v42;
    v50 = *(_OWORD *)v43;
    pDesc = *(struct _EVENT_DATA_DESCRIPTOR *)&v43[16];
    p_pv = (LPVOID *)*(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v43[24], *(__m128d *)&v43[24]);
    FirstMatchingPreferred = CEndpointCharacteristics::FindFirstMatchingPreferredFormat<_lambda_353b87aafb6929f0b8cf31fbc22c501a_>(
                               a1,
                               (__int64)(v15 + 64),
                               &pData);
    v16 = v15;
    if ( FirstMatchingPreferred < 0 )
      goto LABEL_34;
    CoTaskMemFree(v15);
    if ( *a4 )
      goto LABEL_55;
    v29 = 0LL;
    FirstMatchingPreferred = (*(__int64 (__fastcall **)(ULONGLONG, LPVOID *))(*(_QWORD *)v32 + 32LL))(v32, &v29);
    if ( FirstMatchingPreferred < 0 )
    {
LABEL_38:
      v16 = v29;
      goto LABEL_34;
    }
    v17 = v29;
    if ( v29 )
    {
      v18 = *((_QWORD *)v29 + 4) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
      if ( !v18 )
        v18 = *((_QWORD *)v29 + 5) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
      if ( !v18 )
      {
        v19 = *((_QWORD *)v29 + 6) - *(_QWORD *)&GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data1;
        if ( !v19 )
          v19 = *((_QWORD *)v29 + 7) - *(_QWORD *)GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data4;
        if ( !v19 && *(_DWORD *)v29 > 0x40u )
        {
          v20 = *(unsigned int *)v29 - 64LL;
          if ( v20 <= 0x28 )
          {
            v21 = 0x10000044000LL;
            if ( _bittest64(&v21, v20) )
            {
              v22 = (const struct tWAVEFORMATEX *)((char *)v29 + 64);
              if ( lambda_ea783823a3a088a32542d9fbc7fb427f_::operator()(
                     (__int64)a3,
                     (const struct tWAVEFORMATEX *)((char *)v29 + 64)) )
              {
                FirstMatchingPreferred = CloneWaveFormat(v22, a4);
                if ( FirstMatchingPreferred < 0 )
                  goto LABEL_38;
              }
              v17 = v29;
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
  PropVariantClear(&v39);
  v24 = FirstMatchingPreferred;
  if ( FirstMatchingPreferred < 0 && (unsigned int)hProvider > 2 )
  {
    TlgCreateSz(&pDesc, "CEndpointCharacteristics::GetComputedDefaultFormat");
    LODWORD(pv) = 5053;
    p_pv = &pv;
    v53 = 4LL;
    p_FirstMatchingPreferred = &FirstMatchingPreferred;
    v55 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800A877D, v25, v26, 5u, &pData);
    v24 = FirstMatchingPreferred;
  }
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v32 )
    (*(void (__fastcall **)(ULONGLONG))(*(_QWORD *)v32 + 16LL))(v32);
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return v24;
}
