/*
 * XREFs of ?GetComputedDefaultFormat@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800A85E8
 * Callers:
 *     ??$ForEachCandidateFormatForMode@V_lambda_ee82c780731b3ceedd1db5bd5f3d58d6_@@@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@U_GUID@@V_lambda_ee82c780731b3ceedd1db5bd5f3d58d6_@@@Z @ 0x1800A708C (--$ForEachCandidateFormatForMode@V_lambda_ee82c780731b3ceedd1db5bd5f3d58d6_@@@CEndpointCharacter.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800342D0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180034BE8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall GetComputedDefaultFormat(
        struct IMMDevice *a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct tWAVEFORMATEX **a3)
{
  GUID *v6; // rdi
  int v7; // esi
  GUID *v8; // rax
  struct IUnknown *v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  void *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  int v18; // eax
  struct IUnknown *v20; // [rsp+38h] [rbp-49h] BYREF
  __int64 v21; // [rsp+40h] [rbp-41h] BYREF
  __int64 v22; // [rsp+48h] [rbp-39h] BYREF
  __int64 v23; // [rsp+50h] [rbp-31h] BYREF
  __int64 v24; // [rsp+58h] [rbp-29h] BYREF
  __int64 v25; // [rsp+60h] [rbp-21h] BYREF
  __int64 v26; // [rsp+68h] [rbp-19h] BYREF
  GUID *v27; // [rsp+70h] [rbp-11h]
  __int64 v28; // [rsp+78h] [rbp-9h] BYREF
  __int64 v29; // [rsp+80h] [rbp-1h]
  __int64 v30; // [rsp+88h] [rbp+7h]
  __int64 v31; // [rsp+90h] [rbp+Fh]
  __int64 v32; // [rsp+98h] [rbp+17h]
  struct IUnknown *v33; // [rsp+E8h] [rbp+67h] BYREF
  LPVOID v34; // [rsp+F8h] [rbp+77h] BYREF
  LPVOID pv; // [rsp+100h] [rbp+7Fh] BYREF

  v32 = -2LL;
  v22 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v33 = 0LL;
  v31 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v6 = 0LL;
  v27 = 0LL;
  v34 = 0LL;
  *a3 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v7 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64, _QWORD, __int64 *))a1->lpVtbl->Activate)(
         a1,
         &GUID_00bf79d8_20f2_4b3d_a648_d633308ccfe9,
         23LL,
         0LL,
         &v22);
  if ( v7 < 0 )
    goto LABEL_49;
  v8 = (GUID *)CoTaskMemAlloc(0x68uLL);
  v6 = v8;
  v27 = v8;
  if ( !v8 )
  {
    v7 = -2147024882;
    goto LABEL_49;
  }
  v8->Data1 = 64;
  v8[1] = GUID_73647561_0000_0010_8000_00aa00389b71;
  v8[3] = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
  v8[2] = GUID_00000001_0000_0010_8000_00aa00389b71;
  v7 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v22 + 24LL))(
         v22,
         v8,
         v8->Data1,
         0LL,
         &v21);
  if ( v7 < 0 )
    goto LABEL_49;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IUnknown **))(*(_QWORD *)v21 + 32LL))(v21, 0LL, &v20);
  if ( v7 < 0 )
    goto LABEL_49;
  if ( a2 == eKeywordDetectorConnector )
  {
    v7 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(a1, 0LL, &v23);
    if ( v7 < 0 )
      goto LABEL_49;
    v7 = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, __int64 *))(*(_QWORD *)v23 + 40LL))(
           v23,
           &PKEY_Endpoint_KeywordDetector_ConnectorId,
           &v28);
    if ( v7 < 0 )
      goto LABEL_49;
    if ( (_WORD)v28 != 19 )
    {
LABEL_10:
      v7 = -2147023728;
      goto LABEL_49;
    }
    v7 = ((__int64 (__fastcall *)(struct IUnknown *, __int64 *))v20->lpVtbl[4].QueryInterface)(v20, &v25);
    if ( v7 < 0 )
      goto LABEL_49;
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IUnknown **))(*(_QWORD *)v25 + 56LL))(
           v25,
           (unsigned int)v29,
           &v33);
    if ( v7 < 0 )
      goto LABEL_49;
    v9 = v33;
    if ( !v33 )
      goto LABEL_10;
  }
  else
  {
    v9 = v33;
    if ( v33 != v20 )
    {
      ATL::AtlComPtrAssign(&v33, v20);
      v9 = v33;
    }
  }
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, GUID *, __int64 *))v9->lpVtbl[4].AddRef)(
         v9,
         1LL,
         &GUID_3cb4a69d_bb6f_4d2b_95b7_452d2c155db5,
         &v26);
  if ( v7 >= 0 )
  {
    v6->Data1 = 104;
    LOWORD(v6[4].Data1) = -2;
    *(GUID *)((char *)v6 + 88) = GUID_00000000_0000_0010_8000_00aa00389b71;
    *(_DWORD *)v6[5].Data4 = 1;
    v7 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, GUID *, __int64 *))v33->lpVtbl[4].AddRef)(
           v33,
           1LL,
           &GUID_e792f5ac_33a8_4f03_9840_cbee917b8f81,
           &v24);
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v24 + 32LL))(v24, &v34);
      v10 = 0x10000044000LL;
      if ( v7 < 0 || !v34 )
        goto LABEL_68;
      v11 = *((_QWORD *)v34 + 4) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
      if ( !v11 )
        v11 = *((_QWORD *)v34 + 5) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
      if ( v11 )
        goto LABEL_68;
      v12 = *((_QWORD *)v34 + 6) - *(_QWORD *)&GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data1;
      if ( !v12 )
        v12 = *((_QWORD *)v34 + 7) - *(_QWORD *)GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data4;
      if ( v12
        || *(_DWORD *)v34 <= 0x40u
        || (v13 = *(unsigned int *)v34 - 64LL, v13 > 0x28)
        || !_bittest64(&v10, v13)
        || (v7 = CloneWaveFormat((const struct tWAVEFORMATEX *)((char *)v34 + 64), a3), v7 >= 0) )
      {
LABEL_68:
        if ( !*a3 )
        {
          pv = 0LL;
          v7 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v26 + 32LL))(v26, &pv);
          if ( v7 < 0 )
          {
LABEL_33:
            CoTaskMemFree(pv);
            goto LABEL_49;
          }
          v14 = pv;
          if ( pv )
          {
            v15 = *((_QWORD *)pv + 4) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
            if ( !v15 )
              v15 = *((_QWORD *)pv + 5) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
            if ( !v15 )
            {
              v16 = *((_QWORD *)pv + 6) - *(_QWORD *)&GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data1;
              if ( !v16 )
                v16 = *((_QWORD *)pv + 7) - *(_QWORD *)GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data4;
              if ( !v16 && *(_DWORD *)pv > 0x40u )
              {
                v17 = *(unsigned int *)pv - 64LL;
                if ( v17 <= 0x28 )
                {
                  if ( _bittest64(&v10, v17) )
                  {
                    v7 = CloneWaveFormat((const struct tWAVEFORMATEX *)((char *)pv + 64), a3);
                    if ( v7 < 0 )
                      goto LABEL_33;
                    v14 = pv;
                  }
                }
              }
            }
          }
          CoTaskMemFree(v14);
          v18 = v7;
          if ( !*a3 )
            v18 = -2147023728;
          v7 = v18;
        }
      }
    }
  }
LABEL_49:
  CoTaskMemFree(v34);
  v34 = 0LL;
  CoTaskMemFree(v6);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v33 )
    ((void (__fastcall *)(struct IUnknown *))v33->lpVtbl->Release)(v33);
  if ( v20 )
    ((void (__fastcall *)(struct IUnknown *))v20->lpVtbl->Release)(v20);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  return (unsigned int)v7;
}
