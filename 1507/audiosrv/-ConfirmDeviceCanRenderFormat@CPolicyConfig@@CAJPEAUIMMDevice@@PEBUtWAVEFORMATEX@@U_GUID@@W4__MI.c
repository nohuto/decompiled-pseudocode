/*
 * XREFs of ?ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180032BB8
 * Callers:
 *     ?ConfirmDeviceFormat@CPolicyConfig@@CAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180032F04 (-ConfirmDeviceFormat@CPolicyConfig@@CAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL.c)
 *     ?GetComputedDefaultFormat@CPolicyConfig@@CAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180086960 (-GetComputedDefaultFormat@CPolicyConfig@@CAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002B950 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?CheckAndSynchronizeWaveRTPeriodicity@CPolicyConfig@@SAJPEAUIAudioDeviceEndpoint@@PEAUIMMDevice@@PEBUtWAVEFORMATEX@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x180034CE0 (-CheckAndSynchronizeWaveRTPeriodicity@CPolicyConfig@@SAJPEAUIAudioDeviceEndpoint@@PEAUIMMDevice@.c)
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CPolicyConfig::ConfirmDeviceCanRenderFormat(
        struct IUnknown *a1,
        __int64 a2,
        __int64 a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        int a5)
{
  _DWORD *v6; // r15
  _DWORD *v7; // r12
  int v8; // r13d
  int v9; // esi
  int v10; // eax
  unsigned __int16 *v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  HRESULT (__stdcall *QueryInterface)(IMMDevice *, const IID *const, DWORD, PROPVARIANT *, void **); // rbx
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v15; // r9d
  __int64 (__fastcall ***v16)(_QWORD, GUID *, struct IAudioDeviceEndpoint **); // rbx
  int v18; // eax
  LPVOID pv; // [rsp+38h] [rbp-41h] BYREF
  struct IUnknown *v20; // [rsp+40h] [rbp-39h] BYREF
  struct IUnknown *v21; // [rsp+48h] [rbp-31h] BYREF
  struct IAudioDeviceEndpoint *v22; // [rsp+50h] [rbp-29h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, GUID *, struct IAudioDeviceEndpoint **); // [rsp+58h] [rbp-21h] BYREF
  __int64 (__fastcall ***v24)(_QWORD, GUID *, struct IAudioDeviceEndpoint **); // [rsp+60h] [rbp-19h] BYREF
  __int64 v25; // [rsp+68h] [rbp-11h] BYREF
  __int64 v26; // [rsp+70h] [rbp-9h]
  _DWORD *v27; // [rsp+78h] [rbp-1h]
  __int64 v28; // [rsp+80h] [rbp+7h]
  int v29; // [rsp+D8h] [rbp+5Fh] BYREF
  void *Src; // [rsp+E0h] [rbp+67h]
  struct _GUID *v31; // [rsp+E8h] [rbp+6Fh]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v32; // [rsp+F0h] [rbp+77h]

  v32 = a4;
  v31 = (struct _GUID *)a3;
  Src = (void *)a2;
  v28 = -2LL;
  v6 = 0LL;
  v7 = 0LL;
  pv = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v22 = 0LL;
  v8 = -2147467262;
  if ( !a1 )
    goto LABEL_55;
  ATL::AtlComQIPtrAssign(&v21, a1, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211);
  if ( !v21 )
    goto LABEL_55;
  v9 = ((__int64 (__fastcall *)(struct IUnknown *, LPVOID *))a1->lpVtbl[1].Release)(a1, &pv);
  if ( v9 < 0 )
    goto LABEL_23;
  if ( v20 != a1 )
    ATL::AtlComQIPtrAssign(&v20, a1, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
  if ( !v20 )
  {
LABEL_55:
    v9 = -2147467262;
    goto LABEL_23;
  }
  v9 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v20->lpVtbl[1].QueryInterface)(v20, &v29);
  if ( v9 >= 0 )
  {
    v25 = 65LL;
    v26 = 0LL;
    v27 = 0LL;
    v10 = ((__int64 (__fastcall *)(struct IUnknown *))v21->lpVtbl[2].QueryInterface)(v21);
    v11 = (unsigned __int16 *)Src;
    v12 = *((unsigned __int16 *)Src + 8);
    if ( v10 )
    {
      v6 = CoTaskMemAlloc(v12 + 32);
      if ( v6 )
      {
        *v6 = v11[8] + 32;
        v6[1] = GetSessionIdFromEndpointId(pv);
        v6[2] = v32;
        memcpy_0(v6 + 3, v11, v11[8] + 18LL);
        v13 = v11[8] + 32;
        v27 = v6;
LABEL_11:
        LODWORD(v26) = v13;
        QueryInterface = (HRESULT (__stdcall *)(IMMDevice *, const IID *const, DWORD, PROPVARIANT *, void **))a1->lpVtbl[1].QueryInterface;
        if ( v29 )
        {
          v9 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64, __int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IAudioDeviceEndpoint **)))QueryInterface)(
                 a1,
                 &GUID_8026ab61_92b2_43c1_a1df_5c37ebd08d82,
                 1LL,
                 &v25,
                 &v23);
          if ( v9 < 0 )
          {
LABEL_15:
            a3 = 2289827907LL;
            if ( !a5 || v9 != -2005139389 && v8 >= 0 )
            {
              a2 = 0x80000000LL;
              if ( (int)(v9 + 0x80000000) < 0 || v9 == -2005139389 )
                v9 = 0;
              if ( a5 )
              {
                v18 = CPolicyConfig::CheckAndSynchronizeWaveRTPeriodicity(
                        v22,
                        (struct IMMDevice *)a1,
                        (const struct tWAVEFORMATEX *)Src,
                        v15);
                v9 = v18;
                if ( v18 < 0
                  && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
                  && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) != 0
                  && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
                {
                  WPP_SF_D(
                    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                    0x1Eu,
                    (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
                    v18);
                }
              }
            }
            if ( v6 )
              CoTaskMemFree(v6);
            if ( v7 )
              CoTaskMemFree(v7);
            goto LABEL_23;
          }
          v16 = v23;
        }
        else
        {
          v9 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64, __int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IAudioDeviceEndpoint **)))QueryInterface)(
                 a1,
                 &GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa,
                 1LL,
                 &v25,
                 &v24);
          if ( v9 < 0 )
            goto LABEL_15;
          v16 = v24;
        }
        v8 = (**v16)(v16, &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac, &v22);
        goto LABEL_15;
      }
    }
    else
    {
      v7 = CoTaskMemAlloc(v12 + 64);
      if ( v7 )
      {
        *v7 = v11[8] + 64;
        v7[1] = GetSessionIdFromEndpointId(pv);
        v7[2] = v32;
        *(struct _GUID *)(v7 + 3) = *v31;
        memcpy_0(v7 + 11, v11, v11[8] + 18LL);
        v13 = v11[8] + 64;
        v27 = v7;
        goto LABEL_11;
      }
    }
    v9 = -2147024882;
  }
LABEL_23:
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  if ( v9 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x1Fu,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      v9);
  }
  if ( v22 )
    ((void (__fastcall *)(struct IAudioDeviceEndpoint *, __int64, __int64))v22->lpVtbl->Release)(v22, a2, a3);
  if ( v24 )
    (*v24)[2](v24, (GUID *)a2, (struct IAudioDeviceEndpoint **)a3);
  if ( v23 )
    (*v23)[2](v23, (GUID *)a2, (struct IAudioDeviceEndpoint **)a3);
  if ( v21 )
    ((void (__fastcall *)(struct IUnknown *, __int64, __int64))v21->lpVtbl->Release)(v21, a2, a3);
  if ( v20 )
    ((void (__fastcall *)(struct IUnknown *, __int64, __int64))v20->lpVtbl->Release)(v20, a2, a3);
  return (unsigned int)v9;
}
