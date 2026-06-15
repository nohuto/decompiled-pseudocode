/*
 * XREFs of ?GetComputedDefaultFormat@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800A6000
 * Callers:
 *     ??$ForEachCandidateFormatForMode@V_lambda_418c5ae5971ebab8b75617066dde6fa1_@@@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@U_GUID@@V_lambda_418c5ae5971ebab8b75617066dde6fa1_@@@Z @ 0x1800A4570 (--$ForEachCandidateFormatForMode@V_lambda_418c5ae5971ebab8b75617066dde6fa1_@@@CEndpointCharacter.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180071BD4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x18007F8A0 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
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
  unsigned __int64 v11; // rcx
  void *v12; // rcx
  unsigned __int64 v13; // rax
  int v14; // eax
  struct IUnknown *v16; // [rsp+38h] [rbp-49h] BYREF
  __int64 v17; // [rsp+40h] [rbp-41h] BYREF
  __int64 v18; // [rsp+48h] [rbp-39h] BYREF
  __int64 v19; // [rsp+50h] [rbp-31h] BYREF
  __int64 v20; // [rsp+58h] [rbp-29h] BYREF
  __int64 v21; // [rsp+60h] [rbp-21h] BYREF
  __int64 v22; // [rsp+68h] [rbp-19h] BYREF
  GUID *v23; // [rsp+70h] [rbp-11h]
  __int64 v24; // [rsp+78h] [rbp-9h] BYREF
  __int64 v25; // [rsp+80h] [rbp-1h]
  __int64 v26; // [rsp+88h] [rbp+7h]
  __int64 v27; // [rsp+90h] [rbp+Fh]
  __int64 v28; // [rsp+98h] [rbp+17h]
  struct IUnknown *v29; // [rsp+E8h] [rbp+67h] BYREF
  LPVOID pv; // [rsp+F8h] [rbp+77h] BYREF
  LPVOID v31; // [rsp+100h] [rbp+7Fh] BYREF

  v28 = -2LL;
  v18 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v29 = 0LL;
  v27 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v6 = 0LL;
  v23 = 0LL;
  v31 = 0LL;
  *a3 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v7 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64, _QWORD, __int64 *))a1->lpVtbl->Activate)(
         a1,
         &GUID_00bf79d8_20f2_4b3d_a648_d633308ccfe9,
         23LL,
         0LL,
         &v18);
  if ( v7 < 0 )
    goto LABEL_45;
  v8 = (GUID *)CoTaskMemAlloc(0x68uLL);
  v6 = v8;
  v23 = v8;
  if ( !v8 )
  {
    v7 = -2147024882;
    goto LABEL_45;
  }
  v8->Data1 = 64;
  v8[1] = GUID_73647561_0000_0010_8000_00aa00389b71;
  v8[3] = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
  v8[2] = GUID_00000001_0000_0010_8000_00aa00389b71;
  v7 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v18 + 24LL))(
         v18,
         v8,
         v8->Data1,
         0LL,
         &v17);
  if ( v7 < 0 )
    goto LABEL_45;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IUnknown **))(*(_QWORD *)v17 + 32LL))(v17, 0LL, &v16);
  if ( v7 < 0 )
    goto LABEL_45;
  if ( a2 == eKeywordDetectorConnector )
  {
    v7 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(a1, 0LL, &v19);
    if ( v7 < 0 )
      goto LABEL_45;
    v7 = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, __int64 *))(*(_QWORD *)v19 + 40LL))(
           v19,
           &PKEY_Endpoint_KeywordDetector_ConnectorId,
           &v24);
    if ( v7 < 0 )
      goto LABEL_45;
    if ( (_WORD)v24 != 19 )
    {
LABEL_10:
      v7 = -2147023728;
      goto LABEL_45;
    }
    v7 = ((__int64 (__fastcall *)(struct IUnknown *, __int64 *))v16->lpVtbl[4].QueryInterface)(v16, &v21);
    if ( v7 < 0 )
      goto LABEL_45;
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IUnknown **))(*(_QWORD *)v21 + 56LL))(
           v21,
           (unsigned int)v25,
           &v29);
    if ( v7 < 0 )
      goto LABEL_45;
    v9 = v29;
    if ( !v29 )
      goto LABEL_10;
  }
  else
  {
    v9 = v29;
    if ( v29 != v16 )
    {
      ATL::AtlComPtrAssign(&v29, v16);
      v9 = v29;
    }
  }
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, GUID *, __int64 *))v9->lpVtbl[4].AddRef)(
         v9,
         1LL,
         &GUID_3cb4a69d_bb6f_4d2b_95b7_452d2c155db5,
         &v22);
  if ( v7 >= 0 )
  {
    v6->Data1 = 104;
    LOWORD(v6[4].Data1) = -2;
    *(GUID *)((char *)v6 + 88) = GUID_00000000_0000_0010_8000_00aa00389b71;
    *(_DWORD *)v6[5].Data4 = 1;
    v7 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, GUID *, __int64 *))v29->lpVtbl[4].AddRef)(
           v29,
           1LL,
           &GUID_e792f5ac_33a8_4f03_9840_cbee917b8f81,
           &v20);
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v20 + 32LL))(v20, &v31);
      v10 = 0x10000044000LL;
      if ( v7 < 0
        || !v31
        || *((_QWORD *)v31 + 4) != *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
        || *((_QWORD *)v31 + 5) != *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4
        || *((_QWORD *)v31 + 6) != *(_QWORD *)&GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data1
        || *((_QWORD *)v31 + 7) != *(_QWORD *)GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data4
        || *(_DWORD *)v31 <= 0x40u
        || (v11 = *(unsigned int *)v31 - 64LL, v11 > 0x28)
        || !_bittest64(&v10, v11)
        || (v7 = CloneWaveFormat((const struct tWAVEFORMATEX *)((char *)v31 + 64), a3), v7 >= 0) )
      {
        if ( !*a3 )
        {
          pv = 0LL;
          v7 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v22 + 32LL))(v22, &pv);
          if ( v7 < 0 )
          {
LABEL_31:
            CoTaskMemFree(pv);
            goto LABEL_45;
          }
          v12 = pv;
          if ( pv )
          {
            if ( *((_QWORD *)pv + 4) == *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
              && *((_QWORD *)pv + 5) == *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4
              && *((_QWORD *)pv + 6) == *(_QWORD *)&GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data1
              && *((_QWORD *)pv + 7) == *(_QWORD *)GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data4
              && *(_DWORD *)pv > 0x40u )
            {
              v13 = *(unsigned int *)pv - 64LL;
              if ( v13 <= 0x28 )
              {
                if ( _bittest64(&v10, v13) )
                {
                  v7 = CloneWaveFormat((const struct tWAVEFORMATEX *)((char *)pv + 64), a3);
                  if ( v7 < 0 )
                    goto LABEL_31;
                  v12 = pv;
                }
              }
            }
          }
          CoTaskMemFree(v12);
          v14 = v7;
          if ( !*a3 )
            v14 = -2147023728;
          v7 = v14;
        }
      }
    }
  }
LABEL_45:
  CoTaskMemFree(v31);
  v31 = 0LL;
  CoTaskMemFree(v6);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v29 )
    ((void (__fastcall *)(struct IUnknown *))v29->lpVtbl->Release)(v29);
  if ( v16 )
    ((void (__fastcall *)(struct IUnknown *))v16->lpVtbl->Release)(v16);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return (unsigned int)v7;
}
