/*
 * XREFs of ?GetComputedDefaultFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180082770
 * Callers:
 *     ?GetDefaultFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@PEAPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180083034 (-GetDefaultFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HW4__MIDL___MIDL_itf_audioengi.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180064528 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x18007F8A0 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x18007F914 (-ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@.c)
 *     ?GetPreferredFormatsArray@@YAJPEAUIMMDevice@@PEAPEAU_AudioFormat@@PEA_K@Z @ 0x180083390 (-GetPreferredFormatsArray@@YAJPEAUIMMDevice@@PEAPEAU_AudioFormat@@PEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CPolicyConfig::GetComputedDefaultFormat(
        struct IMMDevice **a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct tWAVEFORMATEX **a3)
{
  unsigned int *v3; // r15
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v4; // r13d
  GUID fmtid; // xmm0
  struct IMMDevice *v6; // rdi
  int CanRenderFormat; // esi
  unsigned int *v8; // rax
  const struct tWAVEFORMATEX *v9; // r12
  __int64 v10; // rdx
  struct _GUID v11; // xmm6
  void *v12; // rcx
  unsigned __int64 v13; // rax
  const struct tWAVEFORMATEX *v14; // rbx
  char v15; // bl
  char *v16; // r9
  WORD v17; // dx
  DWORD v18; // r8d
  unsigned __int16 v19; // cx
  void *v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  const struct tWAVEFORMATEX *v23; // rbx
  char v24; // bl
  char v26; // [rsp+30h] [rbp-D0h]
  struct _GUID v27; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID v28; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-98h] BYREF
  __int64 v30; // [rsp+70h] [rbp-90h] BYREF
  __int64 v31; // [rsp+78h] [rbp-88h] BYREF
  CEndpointCharacteristics *v32; // [rsp+80h] [rbp-80h]
  __int64 v33; // [rsp+88h] [rbp-78h] BYREF
  struct _AudioFormat *v34; // [rsp+90h] [rbp-70h] BYREF
  LPVOID ppv; // [rsp+98h] [rbp-68h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-60h] BYREF
  struct _GUID v37; // [rsp+A8h] [rbp-58h] BYREF
  struct tWAVEFORMATEX **v38; // [rsp+B8h] [rbp-48h]
  struct _GUID v39; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v40; // [rsp+D0h] [rbp-30h]
  PROPVARIANT v41; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  PROPVARIANT pvar; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v45; // [rsp+F8h] [rbp-8h]
  __int64 v46; // [rsp+100h] [rbp+0h]
  __int64 v47; // [rsp+108h] [rbp+8h]
  struct IMMDevice *v48; // [rsp+110h] [rbp+10h]
  GUID v49; // [rsp+118h] [rbp+18h] BYREF
  DWORD pid; // [rsp+128h] [rbp+28h]
  struct _GUID v51; // [rsp+130h] [rbp+30h] BYREF
  int v52; // [rsp+140h] [rbp+40h]

  v47 = -2LL;
  v38 = a3;
  v32 = (CEndpointCharacteristics *)a1;
  v26 = 0;
  v31 = 0LL;
  *(_QWORD *)&v37.Data1 = 0LL;
  ppv = 0LL;
  *(_QWORD *)v37.Data4 = 0LL;
  v33 = 0LL;
  v30 = 0LL;
  v36 = 0LL;
  v3 = 0LL;
  *a3 = 0LL;
  pvar = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v4 = eKeywordDetectorConnector;
  v27.Data1 = 590439624;
  *(_DWORD *)&v27.Data2 = 1283267372;
  *(_DWORD *)v27.Data4 = 1907779772;
  *(_DWORD *)&v27.Data4[4] = 1730509416;
  v52 = 1;
  v51 = v27;
  if ( a2 == eKeywordDetectorConnector )
  {
    fmtid = PKEY_Endpoint_KeywordDetector_ConnectorId.fmtid;
    pid = PKEY_Endpoint_KeywordDetector_ConnectorId.pid;
  }
  else
  {
    v4 = eHostProcessConnector;
    v27.Data1 = -1702713381;
    *(_DWORD *)&v27.Data2 = 1102331579;
    *(_DWORD *)v27.Data4 = -1223116157;
    *(_DWORD *)&v27.Data4[4] = -65530063;
    fmtid = v27;
    pid = 1;
  }
  v49 = fmtid;
  v6 = a1[2];
  v48 = v6;
  ((void (__fastcall *)(struct IMMDevice *))v6->lpVtbl->AddRef)(v6);
  CanRenderFormat = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))v6->lpVtbl->OpenPropertyStore)(
                      v6,
                      0LL,
                      &v31);
  if ( CanRenderFormat < 0 )
    goto LABEL_59;
  CanRenderFormat = (*(__int64 (__fastcall **)(__int64, struct _GUID *, PROPVARIANT *))(*(_QWORD *)v31 + 40LL))(
                      v31,
                      &v51,
                      &pvar);
  if ( CanRenderFormat < 0 )
    goto LABEL_59;
  CanRenderFormat = (*(__int64 (__fastcall **)(__int64, GUID *, PROPVARIANT *))(*(_QWORD *)v31 + 40LL))(v31, &v49, &v41);
  if ( CanRenderFormat < 0 )
    goto LABEL_59;
  CanRenderFormat = CoCreateInstance(
                      &CLSID_MMDeviceEnumerator,
                      0LL,
                      0x17u,
                      &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                      &ppv);
  if ( CanRenderFormat < 0 )
    goto LABEL_59;
  CanRenderFormat = (*(__int64 (__fastcall **)(LPVOID, __int64, unsigned __int8 *))(*(_QWORD *)ppv + 40LL))(
                      ppv,
                      v45,
                      v37.Data4);
  if ( CanRenderFormat < 0 )
    goto LABEL_59;
  CanRenderFormat = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(**(_QWORD **)v37.Data4 + 24LL))(
                      *(_QWORD *)v37.Data4,
                      &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                      23LL);
  if ( CanRenderFormat < 0 )
    goto LABEL_59;
  CanRenderFormat = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)&v37.Data1 + 56LL))(
                      *(_QWORD *)&v37.Data1,
                      (unsigned int)v42,
                      &v33);
  if ( CanRenderFormat < 0 )
    goto LABEL_59;
  CanRenderFormat = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v33 + 104LL))(
                      v33,
                      1LL,
                      &GUID_3cb4a69d_bb6f_4d2b_95b7_452d2c155db5,
                      &v30);
  if ( CanRenderFormat < 0 )
    goto LABEL_59;
  v8 = (unsigned int *)operator new(0x68uLL);
  v3 = v8;
  if ( !v8 )
  {
    CanRenderFormat = -2147024882;
    goto LABEL_59;
  }
  *v8 = 104;
  *((GUID *)v8 + 1) = GUID_73647561_0000_0010_8000_00aa00389b71;
  *((GUID *)v8 + 3) = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
  *((GUID *)v8 + 2) = GUID_00000001_0000_0010_8000_00aa00389b71;
  v9 = (const struct tWAVEFORMATEX *)(v8 + 16);
  *((_WORD *)v8 + 32) = -2;
  *(GUID *)(v8 + 22) = GUID_00000000_0000_0010_8000_00aa00389b71;
  v8[22] = 1;
  CanRenderFormat = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v33 + 104LL))(
                      v33,
                      1LL,
                      &GUID_e792f5ac_33a8_4f03_9840_cbee917b8f81,
                      &v36);
  if ( CanRenderFormat < 0 )
    goto LABEL_59;
  pv = 0LL;
  CanRenderFormat = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v36 + 32LL))(v36, &pv);
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(v32, v4, &v39, 0LL, 0LL);
  v10 = 0x10000044000LL;
  v11 = v39;
  if ( CanRenderFormat < 0 )
    goto LABEL_27;
  v12 = pv;
  if ( !pv )
    goto LABEL_32;
  if ( *((_QWORD *)pv + 4) != *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 )
    goto LABEL_28;
  if ( *((_QWORD *)pv + 5) != *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 )
    goto LABEL_28;
  if ( *((_QWORD *)pv + 6) != *(_QWORD *)&GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data1 )
    goto LABEL_28;
  if ( *((_QWORD *)pv + 7) != *(_QWORD *)GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data4 )
    goto LABEL_28;
  if ( *(_DWORD *)pv <= 0x40u )
    goto LABEL_28;
  v13 = *(unsigned int *)pv - 64LL;
  if ( v13 > 0x28 || !_bittest64(&v10, v13) )
    goto LABEL_28;
  v14 = (const struct tWAVEFORMATEX *)((char *)pv + 64);
  CanRenderFormat = CPolicyConfig::ConfirmDeviceCanRenderFormat(
                      (struct IMMDevice **)v32,
                      (const struct tWAVEFORMATEX *)((char *)pv + 64),
                      &v39,
                      v4,
                      0);
  if ( CanRenderFormat < 0 )
  {
LABEL_27:
    v12 = pv;
LABEL_28:
    v15 = 0;
    goto LABEL_29;
  }
  CanRenderFormat = CloneWaveFormat(v14, v38);
  if ( CanRenderFormat < 0 )
    goto LABEL_59;
  v15 = 1;
  v26 = 1;
  v12 = pv;
LABEL_29:
  if ( v12 )
  {
    CoTaskMemFree(v12);
    pv = 0LL;
  }
  if ( v15 )
    goto LABEL_59;
LABEL_32:
  CanRenderFormat = GetPreferredFormatsArray(v6, &v34, (unsigned __int64 *)&v39.Data1);
  if ( CanRenderFormat < 0 )
    goto LABEL_59;
  v40 = 0LL;
  if ( !*(_QWORD *)&v39.Data1 )
  {
LABEL_41:
    v28 = 0LL;
    CanRenderFormat = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v30 + 32LL))(v30, &v28);
    if ( CanRenderFormat < 0 )
      goto LABEL_59;
    v20 = v28;
    if ( !v28 )
      goto LABEL_58;
    if ( *((_QWORD *)v28 + 4) == *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
      && *((_QWORD *)v28 + 5) == *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4
      && *((_QWORD *)v28 + 6) == *(_QWORD *)&GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data1
      && *((_QWORD *)v28 + 7) == *(_QWORD *)GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data4
      && *(_DWORD *)v28 > 0x40u )
    {
      v21 = *(unsigned int *)v28 - 64LL;
      if ( v21 <= 0x28 )
      {
        v22 = 0x10000044000LL;
        if ( _bittest64(&v22, v21) )
        {
          v23 = (const struct tWAVEFORMATEX *)((char *)v28 + 64);
          v27 = v11;
          CanRenderFormat = CPolicyConfig::ConfirmDeviceCanRenderFormat(
                              (struct IMMDevice **)v32,
                              (const struct tWAVEFORMATEX *)((char *)v28 + 64),
                              &v27,
                              v4,
                              0);
          if ( CanRenderFormat >= 0 )
          {
            CanRenderFormat = CloneWaveFormat(v23, v38);
            if ( CanRenderFormat < 0 )
              goto LABEL_59;
            v24 = 1;
            v20 = v28;
LABEL_55:
            if ( v20 )
              CoTaskMemFree(v20);
            if ( v24 )
              goto LABEL_59;
LABEL_58:
            CanRenderFormat = -2004287480;
            goto LABEL_59;
          }
          v20 = v28;
        }
      }
    }
    v24 = v26;
    goto LABEL_55;
  }
  v16 = (char *)v34 + 4;
  v34 = (struct _AudioFormat *)((char *)v34 + 4);
  while ( 1 )
  {
    v17 = *((_WORD *)v16 + 2);
    v9->nChannels = v17;
    v18 = *((_DWORD *)v16 - 1);
    v9->nSamplesPerSec = v18;
    v19 = *(_WORD *)v16;
    v9->wBitsPerSample = *(_WORD *)v16;
    v9[1].wFormatTag = *((_WORD *)v16 + 1);
    *(_DWORD *)&v9[1].nChannels = *((_DWORD *)v16 + 2);
    v9->nBlockAlign = v17 * (v19 >> 3);
    v9->nAvgBytesPerSec = v18 * (unsigned __int16)(v17 * (v19 >> 3));
    v9->cbSize = 22;
    CanRenderFormat = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD, LPVOID *))(*(_QWORD *)v30 + 24LL))(
                        v30,
                        v3,
                        *v3,
                        &v28);
    if ( CanRenderFormat < 0 )
      break;
    if ( (_DWORD)v28 )
    {
      v27 = v11;
      if ( (int)CPolicyConfig::ConfirmDeviceCanRenderFormat((struct IMMDevice **)v32, v9, &v27, v4, 0) >= 0 )
      {
        CanRenderFormat = CloneWaveFormat(v9, v38);
        break;
      }
    }
    ++v40;
    v16 = (char *)v34 + 16;
    v34 = (struct _AudioFormat *)((char *)v34 + 16);
    if ( v40 >= *(_QWORD *)&v39.Data1 )
      goto LABEL_41;
  }
LABEL_59:
  PropVariantClear(&pvar);
  PropVariantClear(&v41);
  operator delete(v3);
  if ( CanRenderFormat < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Eu,
      (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
      CanRenderFormat);
  }
  ((void (__fastcall *)(struct IMMDevice *))v6->lpVtbl->Release)(v6);
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  if ( *(_QWORD *)v37.Data4 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v37.Data4 + 16LL))(*(_QWORD *)v37.Data4);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  if ( *(_QWORD *)&v37.Data1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v37.Data1 + 16LL))(*(_QWORD *)&v37.Data1);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  return (unsigned int)CanRenderFormat;
}
