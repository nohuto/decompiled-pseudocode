/*
 * XREFs of ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x140010B68
 * Callers:
 *     ?Initialize@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140001C10 (-Initialize@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCal.c)
 *     ?Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14002B520 (-Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphC.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x140003F24 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x140018138 (-ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     memset_0 @ 0x1400190F4 (memset_0.c)
 *     memcpy_0 @ 0x140019C12 (memcpy_0.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_Ds @ 0x1400297DC (WPP_SF_Ds.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CSystemAudioDeviceBase::ActivateEndpoint(
        CSystemAudioDeviceBase *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2)
{
  HRESULT v4; // esi
  struct IUnknown *v5; // rbx
  int v6; // eax
  unsigned __int16 *v7; // r15
  __int64 v8; // rcx
  char *v9; // rbx
  int v10; // eax
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  __int64 (__fastcall ***v12)(_QWORD, GUID *, char *); // rbx
  BOOL v13; // ebx
  int v14; // edi
  LPVOID ppv; // [rsp+38h] [rbp-99h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, char *); // [rsp+40h] [rbp-91h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, char *); // [rsp+48h] [rbp-89h] BYREF
  PROPVARIANT pvar; // [rsp+50h] [rbp-81h] BYREF
  __int64 v20; // [rsp+58h] [rbp-79h]
  char *v21; // [rsp+60h] [rbp-71h]
  _WORD v22[2]; // [rsp+68h] [rbp-69h] BYREF
  char v23; // [rsp+6Ch] [rbp-65h]
  __int128 v24; // [rsp+80h] [rbp-51h]
  int v25; // [rsp+94h] [rbp-3Dh]
  CSystemAudioDeviceBase *v26; // [rsp+98h] [rbp-39h]
  int v27; // [rsp+A0h] [rbp-31h]
  int v28; // [rsp+A8h] [rbp-29h]
  int v29; // [rsp+ACh] [rbp-25h]
  int v30; // [rsp+B0h] [rbp-21h]
  int v31; // [rsp+B4h] [rbp-1Dh]
  int v32; // [rsp+B8h] [rbp-19h]
  int v33; // [rsp+BCh] [rbp-15h]
  int v34; // [rsp+C0h] [rbp-11h]
  int v35; // [rsp+C4h] [rbp-Dh]
  int v36; // [rsp+C8h] [rbp-9h]
  int v37; // [rsp+CCh] [rbp-5h]
  BOOL v38; // [rsp+D0h] [rbp-1h]
  int v39; // [rsp+D4h] [rbp+3h]
  HRESULT v40; // [rsp+D8h] [rbp+7h]
  __int64 v41; // [rsp+E8h] [rbp+17h]
  __int64 v42; // [rsp+F0h] [rbp+1Fh]
  struct IUnknown *v43; // [rsp+148h] [rbp+77h] BYREF
  struct IUnknown *v44; // [rsp+150h] [rbp+7Fh] BYREF

  v41 = -2LL;
  ppv = 0LL;
  v43 = 0LL;
  v42 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v44 = 0LL;
  pvar = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v4 = ValidateDevicePipeDescriptor(a2);
  if ( v4 < 0 )
    goto LABEL_17;
  v4 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &ppv);
  if ( v4 < 0 )
    goto LABEL_17;
  v4 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IUnknown **))(*(_QWORD *)ppv + 40LL))(
         ppv,
         *((_QWORD *)a2 + 7),
         &v43);
  if ( v4 < 0 )
    goto LABEL_17;
  v5 = v44;
  if ( v44 != v43 )
  {
    ATL::AtlComQIPtrAssign(&v44, v43, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211);
    v5 = v44;
  }
  if ( !v5 )
  {
    v4 = -2147467262;
    goto LABEL_17;
  }
  LOWORD(pvar) = 65;
  v6 = ((__int64 (__fastcall *)(struct IUnknown *))v5->lpVtbl[2].QueryInterface)(v5);
  v7 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
  v8 = v7[8];
  if ( v6 )
  {
    v9 = (char *)CoTaskMemAlloc(v8 + 32);
    if ( v9 )
    {
      *(_DWORD *)v9 = v7[8] + 32;
      *((_DWORD *)v9 + 1) = GetSessionIdFromEndpointId(*((_QWORD *)a2 + 7));
      *((_DWORD *)v9 + 2) = *((_DWORD *)a2 + 22);
      memcpy_0(v9 + 12, v7, v7[8] + 18LL);
      v10 = v7[8] + 32;
      goto LABEL_10;
    }
LABEL_30:
    v4 = -2147024882;
    goto LABEL_17;
  }
  v9 = (char *)CoTaskMemAlloc(v8 + 64);
  if ( !v9 )
    goto LABEL_30;
  *(_DWORD *)v9 = v7[8] + 64;
  *((_DWORD *)v9 + 1) = GetSessionIdFromEndpointId(*((_QWORD *)a2 + 7));
  *((_DWORD *)v9 + 2) = *((_DWORD *)a2 + 22);
  *(_OWORD *)(v9 + 12) = *(_OWORD *)((char *)a2 + 92);
  *(_OWORD *)(v9 + 28) = *(_OWORD *)((char *)a2 + 136);
  memcpy_0(v9 + 44, v7, v7[8] + 18LL);
  v10 = v7[8] + 64;
LABEL_10:
  v21 = v9;
  LODWORD(v20) = v10;
  QueryInterface = v43->lpVtbl[1].QueryInterface;
  if ( *((_DWORD *)a2 + 16) )
  {
    v4 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64, PROPVARIANT *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))QueryInterface)(
           v43,
           &GUID_8026ab61_92b2_43c1_a1df_5c37ebd08d82,
           1LL,
           &pvar,
           &v17);
    if ( v4 < 0 )
      goto LABEL_17;
    v12 = v17;
  }
  else
  {
    v4 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64, PROPVARIANT *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))QueryInterface)(
           v43,
           &GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa,
           1LL,
           &pvar,
           &v18);
    if ( v4 < 0 )
      goto LABEL_17;
    v12 = v18;
  }
  v4 = (**v12)(v12, &GUID_30a99515_1527_4451_af9f_00c5f0234daf, (char *)this + 224);
  v13 = *((_DWORD *)a2 + 18) != 0;
  v14 = *((_DWORD *)a2 + 21);
  if ( g_u32AEWMILogLevel >= 3 )
  {
    memset_0(v22, 0, 0x40uLL);
    v22[0] = 120;
    v25 = 0x20000;
    v24 = AEWMIGUID_ENDPOINT_ACTIVATION;
    v23 = 1;
    v26 = this;
    v27 = 0;
    v28 = *((_DWORD *)a2 + 31);
    v29 = *((_DWORD *)a2 + 22);
    v30 = *((_DWORD *)a2 + 16);
    v31 = *((_DWORD *)a2 + 33);
    v32 = *v7;
    v33 = *((_DWORD *)v7 + 1);
    v34 = v7[7];
    v35 = v7[1];
    v36 = *((_DWORD *)a2 + 8);
    v37 = *((_DWORD *)a2 + 17);
    v38 = v13;
    v39 = v14;
    v40 = v4;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v22);
  }
  if ( v4 >= 0 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 28) + 48LL))(
      *((_QWORD *)this + 28),
      *((unsigned int *)this + 54));
LABEL_17:
  PropVariantClear(&pvar);
  if ( v4 < 0
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_Ds(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      14,
      (unsigned int)&WPP_ca42ec4cb178d74a7f1996bdcf4a7a5d_Traceguids,
      v4,
      (__int64)"CSystemAudioDeviceBase::ActivateEndpoint");
  }
  if ( v44 )
    ((void (__fastcall *)(struct IUnknown *))v44->lpVtbl->Release)(v44);
  if ( v18 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v18)[2])(v18);
  if ( v17 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v17)[2])(v17);
  if ( v43 )
    ((void (__fastcall *)(struct IUnknown *))v43->lpVtbl->Release)(v43);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v4;
}
