/*
 * XREFs of ?GetComputedDefaultFormat@CPolicyConfig@@CAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180086960
 * Callers:
 *     ?GetDefaultFormat@CPolicyConfig@@CAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@PEAPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800871D4 (-GetDefaultFormat@CPolicyConfig@@CAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180032BB8 (-ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MI.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180034BE8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetPreferredFormatsArray@@YAJPEAUIMMDevice@@PEAPEAU_AudioFormat@@PEA_K@Z @ 0x180087418 (-GetPreferredFormatsArray@@YAJPEAUIMMDevice@@PEAPEAU_AudioFormat@@PEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CPolicyConfig::GetComputedDefaultFormat(
        struct IUnknown *a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct tWAVEFORMATEX **a3)
{
  unsigned int *v4; // r15
  GUID fmtid; // xmm0
  int CanRenderFormat; // esi
  unsigned int *v7; // rax
  __int64 v8; // r12
  __int64 v9; // rdx
  void *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  const struct tWAVEFORMATEX *v14; // rbx
  char v15; // bl
  char *v16; // r9
  __int16 v17; // dx
  int v18; // r8d
  unsigned __int16 v19; // cx
  void *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  const struct tWAVEFORMATEX *v25; // rbx
  char v26; // bl
  char v28; // [rsp+30h] [rbp-D0h]
  struct _GUID v29; // [rsp+40h] [rbp-C0h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v30; // [rsp+60h] [rbp-A0h]
  LPVOID v31; // [rsp+68h] [rbp-98h] BYREF
  LPVOID pv; // [rsp+70h] [rbp-90h] BYREF
  __int64 v33; // [rsp+78h] [rbp-88h] BYREF
  __int64 v34; // [rsp+80h] [rbp-80h] BYREF
  __int64 v35; // [rsp+88h] [rbp-78h] BYREF
  struct _AudioFormat *v36; // [rsp+90h] [rbp-70h] BYREF
  LPVOID ppv; // [rsp+98h] [rbp-68h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-58h] BYREF
  struct tWAVEFORMATEX **v40; // [rsp+B0h] [rbp-50h]
  int v41[2]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v42; // [rsp+C0h] [rbp-40h]
  struct _GUID v43; // [rsp+D0h] [rbp-30h] BYREF
  PROPVARIANT v44; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v45; // [rsp+E8h] [rbp-18h]
  __int64 v46; // [rsp+F0h] [rbp-10h]
  PROPVARIANT pvar; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  __int64 v50; // [rsp+110h] [rbp+10h]
  struct _GUID v51; // [rsp+118h] [rbp+18h] BYREF
  int v52; // [rsp+128h] [rbp+28h]
  GUID v53; // [rsp+130h] [rbp+30h] BYREF
  DWORD pid; // [rsp+140h] [rbp+40h]

  v50 = -2LL;
  v40 = a3;
  v30 = a2;
  v28 = 0;
  v35 = 0LL;
  *(_QWORD *)v41 = 0LL;
  ppv = 0LL;
  v39 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  v38 = 0LL;
  v4 = 0LL;
  *a3 = 0LL;
  pvar = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v29.Data1 = 590439624;
  *(_DWORD *)&v29.Data2 = 1283267372;
  *(_DWORD *)v29.Data4 = 1907779772;
  *(_DWORD *)&v29.Data4[4] = 1730509416;
  v52 = 1;
  v51 = v29;
  if ( a2 == eKeywordDetectorConnector )
  {
    fmtid = PKEY_Endpoint_KeywordDetector_ConnectorId.fmtid;
    pid = PKEY_Endpoint_KeywordDetector_ConnectorId.pid;
  }
  else
  {
    v29.Data1 = -1702713381;
    *(_DWORD *)&v29.Data2 = 1102331579;
    *(_DWORD *)v29.Data4 = -1223116157;
    *(_DWORD *)&v29.Data4[4] = -65530063;
    fmtid = v29;
    pid = 1;
  }
  v53 = fmtid;
  CanRenderFormat = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, __int64 *))a1->lpVtbl[1].AddRef)(a1, 0LL, &v35);
  if ( CanRenderFormat < 0 )
    goto LABEL_63;
  CanRenderFormat = (*(__int64 (__fastcall **)(__int64, struct _GUID *, PROPVARIANT *))(*(_QWORD *)v35 + 40LL))(
                      v35,
                      &v51,
                      &pvar);
  if ( CanRenderFormat < 0 )
    goto LABEL_63;
  CanRenderFormat = (*(__int64 (__fastcall **)(__int64, GUID *, PROPVARIANT *))(*(_QWORD *)v35 + 40LL))(v35, &v53, &v44);
  if ( CanRenderFormat < 0 )
    goto LABEL_63;
  CanRenderFormat = CoCreateInstance(
                      &CLSID_MMDeviceEnumerator,
                      0LL,
                      0x17u,
                      &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                      &ppv);
  if ( CanRenderFormat < 0 )
    goto LABEL_63;
  CanRenderFormat = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, v48, &v39);
  if ( CanRenderFormat < 0 )
    goto LABEL_63;
  CanRenderFormat = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, _QWORD, int *))(*(_QWORD *)v39 + 24LL))(
                      v39,
                      &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                      23LL,
                      0LL,
                      v41);
  if ( CanRenderFormat < 0 )
    goto LABEL_63;
  CanRenderFormat = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)v41 + 56LL))(
                      *(_QWORD *)v41,
                      (unsigned int)v45,
                      &v34);
  if ( CanRenderFormat < 0 )
    goto LABEL_63;
  CanRenderFormat = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v34 + 104LL))(
                      v34,
                      1LL,
                      &GUID_3cb4a69d_bb6f_4d2b_95b7_452d2c155db5,
                      &v33);
  if ( CanRenderFormat < 0 )
    goto LABEL_63;
  v7 = (unsigned int *)operator new(0x68uLL);
  v4 = v7;
  if ( !v7 )
  {
    CanRenderFormat = -2147024882;
    goto LABEL_63;
  }
  *v7 = 104;
  *((GUID *)v7 + 1) = GUID_73647561_0000_0010_8000_00aa00389b71;
  *((GUID *)v7 + 3) = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
  *((GUID *)v7 + 2) = GUID_00000001_0000_0010_8000_00aa00389b71;
  v8 = (__int64)(v7 + 16);
  *((_WORD *)v7 + 32) = -2;
  *(GUID *)(v7 + 22) = GUID_00000000_0000_0010_8000_00aa00389b71;
  v7[22] = 1;
  CanRenderFormat = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v34 + 104LL))(
                      v34,
                      1LL,
                      &GUID_e792f5ac_33a8_4f03_9840_cbee917b8f81,
                      &v38);
  if ( CanRenderFormat < 0 )
    goto LABEL_63;
  pv = 0LL;
  CanRenderFormat = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v38 + 32LL))(v38, &pv);
  v9 = 0x10000044000LL;
  if ( CanRenderFormat < 0 )
    goto LABEL_29;
  v10 = pv;
  if ( !pv )
    goto LABEL_34;
  v11 = *((_QWORD *)pv + 4) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
  if ( !v11 )
    v11 = *((_QWORD *)pv + 5) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
  if ( v11 )
    goto LABEL_30;
  v12 = *((_QWORD *)pv + 6) - *(_QWORD *)&GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data1;
  if ( !v12 )
    v12 = *((_QWORD *)pv + 7) - *(_QWORD *)GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data4;
  if ( v12 )
    goto LABEL_30;
  if ( *(_DWORD *)pv <= 0x40u )
    goto LABEL_30;
  v13 = *(unsigned int *)pv - 64LL;
  if ( v13 > 0x28 || !_bittest64(&v9, v13) )
    goto LABEL_30;
  v14 = (const struct tWAVEFORMATEX *)((char *)pv + 64);
  v43 = GUID_00000000_0000_0000_0000_000000000000;
  CanRenderFormat = CPolicyConfig::ConfirmDeviceCanRenderFormat(a1, (__int64)pv + 64, (__int64)&v43, v30, 0);
  if ( CanRenderFormat < 0 )
  {
LABEL_29:
    v10 = pv;
LABEL_30:
    v15 = 0;
    goto LABEL_31;
  }
  CanRenderFormat = CloneWaveFormat(v14, v40);
  if ( CanRenderFormat < 0 )
    goto LABEL_63;
  v15 = 1;
  v28 = 1;
  v10 = pv;
LABEL_31:
  if ( v10 )
  {
    CoTaskMemFree(v10);
    pv = 0LL;
  }
  if ( v15 )
    goto LABEL_63;
LABEL_34:
  CanRenderFormat = GetPreferredFormatsArray((struct IMMDevice *)a1, &v36, (unsigned __int64 *)&v43.Data1);
  if ( CanRenderFormat < 0 )
    goto LABEL_63;
  v42 = 0LL;
  if ( !*(_QWORD *)&v43.Data1 )
  {
LABEL_43:
    v31 = 0LL;
    CanRenderFormat = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v33 + 32LL))(v33, &v31);
    if ( CanRenderFormat < 0 )
      goto LABEL_63;
    v20 = v31;
    if ( !v31 )
      goto LABEL_62;
    v21 = *((_QWORD *)v31 + 4) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
    if ( !v21 )
      v21 = *((_QWORD *)v31 + 5) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    if ( !v21 )
    {
      v22 = *((_QWORD *)v31 + 6) - *(_QWORD *)&GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data1;
      if ( !v22 )
        v22 = *((_QWORD *)v31 + 7) - *(_QWORD *)GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data4;
      if ( !v22 && *(_DWORD *)v31 > 0x40u )
      {
        v23 = *(unsigned int *)v31 - 64LL;
        if ( v23 <= 0x28 )
        {
          v24 = 0x10000044000LL;
          if ( _bittest64(&v24, v23) )
          {
            v25 = (const struct tWAVEFORMATEX *)((char *)v31 + 64);
            v29 = GUID_00000000_0000_0000_0000_000000000000;
            CanRenderFormat = CPolicyConfig::ConfirmDeviceCanRenderFormat(a1, (__int64)v31 + 64, (__int64)&v29, v30, 0);
            if ( CanRenderFormat >= 0 )
            {
              CanRenderFormat = CloneWaveFormat(v25, v40);
              if ( CanRenderFormat < 0 )
                goto LABEL_63;
              v26 = 1;
              v20 = v31;
LABEL_59:
              if ( v20 )
                CoTaskMemFree(v20);
              if ( v26 )
                goto LABEL_63;
LABEL_62:
              CanRenderFormat = -2004287480;
              goto LABEL_63;
            }
            v20 = v31;
          }
        }
      }
    }
    v26 = v28;
    goto LABEL_59;
  }
  v16 = (char *)v36 + 4;
  v36 = (struct _AudioFormat *)((char *)v36 + 4);
  while ( 1 )
  {
    v17 = *((_WORD *)v16 + 2);
    *(_WORD *)(v8 + 2) = v17;
    v18 = *((_DWORD *)v16 - 1);
    *(_DWORD *)(v8 + 4) = v18;
    v19 = *(_WORD *)v16;
    *(_WORD *)(v8 + 14) = *(_WORD *)v16;
    *(_WORD *)(v8 + 18) = *((_WORD *)v16 + 1);
    *(_DWORD *)(v8 + 20) = *((_DWORD *)v16 + 2);
    *(_WORD *)(v8 + 12) = v17 * (v19 >> 3);
    *(_DWORD *)(v8 + 8) = v18 * (unsigned __int16)(v17 * (v19 >> 3));
    *(_WORD *)(v8 + 16) = 22;
    CanRenderFormat = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD, LPVOID *))(*(_QWORD *)v33 + 24LL))(
                        v33,
                        v4,
                        *v4,
                        &v31);
    if ( CanRenderFormat < 0 )
      break;
    if ( (_DWORD)v31 )
    {
      v29 = GUID_00000000_0000_0000_0000_000000000000;
      if ( (int)CPolicyConfig::ConfirmDeviceCanRenderFormat(a1, v8, (__int64)&v29, v30, 0) >= 0 )
      {
        CanRenderFormat = CloneWaveFormat((const struct tWAVEFORMATEX *)v8, v40);
        break;
      }
    }
    ++v42;
    v16 = (char *)v36 + 16;
    v36 = (struct _AudioFormat *)((char *)v36 + 16);
    if ( v42 >= *(_QWORD *)&v43.Data1 )
      goto LABEL_43;
  }
LABEL_63:
  PropVariantClear(&pvar);
  PropVariantClear(&v44);
  operator delete(v4);
  if ( CanRenderFormat < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x1Cu,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      CanRenderFormat);
  }
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  if ( *(_QWORD *)v41 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v41 + 16LL))(*(_QWORD *)v41);
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  return (unsigned int)CanRenderFormat;
}
