/*
 * XREFs of ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140012F70
 * Callers:
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140014E64 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012AA0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x140013390 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     TemplateEventDescriptor @ 0x1400133EC (TemplateEventDescriptor.c)
 *     Template_zq @ 0x140013410 (Template_zq.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x140017F4C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x140018550 (memset_0.c)
 *     memcpy_0 @ 0x140019602 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CEndpointInstance::CreateDeviceEndpointInstance(
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a1,
        struct CEndpointInstance **a2)
{
  struct CEndpointInstance **v2; // r15
  int v4; // r12d
  __int64 (__fastcall ***v5)(_QWORD, GUID *, struct IUnknown **); // rcx
  char *v6; // r13
  char *v7; // r14
  HRESULT v8; // ebx
  struct IUnknown *v9; // rcx
  unsigned __int16 *v10; // rsi
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rax
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // rcx
  int v16; // r15d
  struct IUnknown **v17; // rax
  struct IUnknown **v18; // rsi
  struct IUnknown *v19; // rdx
  struct IUnknown *v20; // rdi
  __int64 (__fastcall ***v22)(_QWORD, GUID *, struct IUnknown **); // rbx
  struct IUnknown *v23; // [rsp+30h] [rbp-D0h] BYREF
  struct IUnknown *v24; // [rsp+38h] [rbp-C8h] BYREF
  struct IUnknown *v25; // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-B8h] BYREF
  __int64 (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-B0h] BYREF
  LPVOID ppv; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h]
  char *v31; // [rsp+70h] [rbp-90h]
  _WORD v32[12]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v33; // [rsp+98h] [rbp-68h]
  int v34; // [rsp+ACh] [rbp-54h]
  __int64 v35; // [rsp+B0h] [rbp-50h]
  int v36; // [rsp+B8h] [rbp-48h]
  int v37; // [rsp+C0h] [rbp-40h]
  int v38; // [rsp+C4h] [rbp-3Ch]
  int v39; // [rsp+C8h] [rbp-38h]
  int v40; // [rsp+CCh] [rbp-34h]
  int v41; // [rsp+D0h] [rbp-30h]
  int v42; // [rsp+D4h] [rbp-2Ch]
  int v43; // [rsp+D8h] [rbp-28h]
  int v44; // [rsp+DCh] [rbp-24h]
  int v45; // [rsp+E0h] [rbp-20h]
  int v46; // [rsp+E4h] [rbp-1Ch]
  int v47; // [rsp+E8h] [rbp-18h]
  int v48; // [rsp+ECh] [rbp-14h]
  HRESULT v49; // [rsp+F0h] [rbp-10h]
  __int64 v50; // [rsp+100h] [rbp+0h]
  struct IUnknown **v51; // [rsp+108h] [rbp+8h]
  int v52; // [rsp+160h] [rbp+60h] BYREF
  struct CEndpointInstance **v53; // [rsp+168h] [rbp+68h]
  __int64 v54; // [rsp+170h] [rbp+70h] BYREF
  __int64 (__fastcall ***v55)(_QWORD, GUID *, struct IUnknown **); // [rsp+178h] [rbp+78h] BYREF

  v53 = a2;
  v50 = -2LL;
  v2 = a2;
  v4 = 0;
  ppv = 0LL;
  v24 = 0LL;
  v5 = 0LL;
  v55 = 0LL;
  v54 = 0LL;
  v23 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v52 = 0;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
  {
    Template_zq(0LL, a2, *((_QWORD *)a1 + 7), *((unsigned int *)a1 + 25));
    v5 = v55;
  }
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  if ( *((_DWORD *)a1 + 25) == 1 )
  {
    v22 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **))*((_QWORD *)a1 + 8);
    if ( !v22 )
    {
      v8 = -2147467262;
      goto LABEL_67;
    }
    if ( v5 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **)))(*v5)[2])(v5);
    v55 = v22;
    v8 = (**v22)(v22, &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac, (struct IUnknown **)&v54);
    if ( v8 < 0 )
      goto LABEL_67;
    v8 = (**v55)(v55, &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d, &v23);
    if ( v8 < 0 )
      goto LABEL_67;
LABEL_23:
    v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v54 + 40LL))(v54, &v52);
    if ( v8 < 0 )
      goto LABEL_67;
    if ( v52 )
    {
      v8 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **), __int64))(*v55)[6])(
             v55,
             0x40000LL);
      if ( v8 < 0 )
        goto LABEL_67;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v54 + 24LL))(
           v54,
           *((_QWORD *)a1 + 4),
           *((unsigned int *)a1 + 12));
    if ( v8 < 0 )
      goto LABEL_67;
    v17 = (struct IUnknown **)operator new(0x18uLL);
    v18 = v17;
    v51 = v17;
    if ( v17 )
    {
      v19 = v23;
      v20 = (struct IUnknown *)*((_QWORD *)a1 + 4);
      *v17 = 0LL;
      if ( v19 )
        ATL::AtlComPtrAssign(v17, v19);
      v18[2] = 0LL;
      v18[1] = v20;
      *v2 = (struct CEndpointInstance *)v18;
      goto LABEL_31;
    }
    goto LABEL_66;
  }
  v8 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &ppv);
  if ( v8 < 0 )
    goto LABEL_67;
  v8 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IUnknown **))(*(_QWORD *)ppv + 40LL))(
         ppv,
         *((_QWORD *)a1 + 7),
         &v24);
  if ( v8 < 0 )
    goto LABEL_67;
  v9 = v25;
  if ( v25 != v24 )
  {
    ATL::AtlComQIPtrAssign(&v25, v24, &GUID_eecca8a7_a629_4dba_9f23_20f6db42d990);
    v9 = v25;
  }
  if ( !v9 )
  {
    v8 = -2147467262;
    goto LABEL_67;
  }
  v10 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  LOWORD(v29) = 65;
  v11 = ((__int64 (__fastcall *)(struct IUnknown *))v9->lpVtbl[2].QueryInterface)(v9);
  v12 = v10[8];
  if ( v11 )
  {
    v6 = (char *)CoTaskMemAlloc(v12 + 32);
    if ( v6 )
    {
      *(_DWORD *)v6 = v10[8] + 32;
      *((_DWORD *)v6 + 1) = GetSessionIdFromEndpointId(*((_QWORD *)a1 + 7));
      *((_DWORD *)v6 + 2) = *((_DWORD *)a1 + 25);
      memcpy_0(v6 + 12, v10, v10[8] + 18LL);
      v13 = v10[8] + 32;
      v31 = v6;
      goto LABEL_12;
    }
  }
  else
  {
    v7 = (char *)CoTaskMemAlloc(v12 + 64);
    if ( v7 )
    {
      *(_DWORD *)v7 = v10[8] + 64;
      *((_DWORD *)v7 + 1) = GetSessionIdFromEndpointId(*((_QWORD *)a1 + 7));
      *((_DWORD *)v7 + 2) = *((_DWORD *)a1 + 25);
      *(_OWORD *)(v7 + 12) = *(_OWORD *)((char *)a1 + 104);
      *(_OWORD *)(v7 + 28) = *(_OWORD *)((char *)a1 + 148);
      memcpy_0(v7 + 44, v10, v10[8] + 18LL);
      v13 = v10[8] + 64;
      v31 = v7;
LABEL_12:
      LODWORD(v30) = v13;
      QueryInterface = v24->lpVtbl[1].QueryInterface;
      if ( *((_DWORD *)a1 + 18) )
      {
        v8 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64, __int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))QueryInterface)(
               v24,
               &GUID_8026ab61_92b2_43c1_a1df_5c37ebd08d82,
               1LL,
               &v29,
               &v27);
        if ( v8 < 0 )
          goto LABEL_67;
        v15 = v27;
      }
      else
      {
        v8 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64, __int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))QueryInterface)(
               v24,
               &GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa,
               1LL,
               &v29,
               &v26);
        if ( v8 < 0 )
          goto LABEL_67;
        v15 = v26;
      }
      v8 = (**v15)(v15, &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac, &v54);
      if ( *((_DWORD *)a1 + 20) )
        v4 = 1;
      v16 = *((_DWORD *)a1 + 24);
      if ( g_u32AEWMILogLevel >= 4 )
      {
        memset_0(v32, 0, 0x40uLL);
        v32[0] = 120;
        v34 = 0x20000;
        v33 = AEWMIGUID_ENDPOINT_ACTIVATION;
        v32[2] = 1025;
        v35 = 0LL;
        v36 = 0;
        v37 = *((_DWORD *)a1 + 34);
        v38 = *((_DWORD *)a1 + 25);
        v39 = *((_DWORD *)a1 + 18);
        v40 = *((_DWORD *)a1 + 36);
        v41 = *v10;
        v42 = *((_DWORD *)v10 + 1);
        v43 = v10[7];
        v44 = v10[1];
        v45 = *((_DWORD *)a1 + 8);
        v46 = *((_DWORD *)a1 + 19);
        v47 = v4;
        v48 = v16;
        v49 = v8;
        EtwLogTraceEvent(g_hAEWMITraceHandle, v32);
      }
      if ( v8 < 0 )
        goto LABEL_67;
      v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IUnknown **))v54)(
             v54,
             &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d,
             &v23);
      if ( v8 < 0 )
        goto LABEL_67;
      v8 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, _QWORD))v23->lpVtbl->QueryInterface)(
             v23,
             &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
             &v55);
      if ( v8 < 0 )
        goto LABEL_67;
      v2 = v53;
      goto LABEL_23;
    }
  }
LABEL_66:
  v8 = -2147024882;
LABEL_67:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      10LL,
      &WPP_42246890b90d314c93745c7295ac7753_Traceguids,
      (unsigned int)v8);
  }
  AudDGTraceLoggingErrorHelper("CEndpointInstance::CreateDeviceEndpointInstance", 0xDAu, v8);
LABEL_31:
  if ( v6 )
    CoTaskMemFree(v6);
  if ( v7 )
    CoTaskMemFree(v7);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    TemplateEventDescriptor();
  if ( v25 )
    ((void (__fastcall *)(struct IUnknown *))v25->lpVtbl->Release)(v25);
  if ( v26 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v26)[2])(v26);
  if ( v27 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v27)[2])(v27);
  if ( v23 )
    ((void (__fastcall *)(struct IUnknown *))v23->lpVtbl->Release)(v23);
  if ( v54 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  if ( v55 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **)))(*v55)[2])(v55);
  if ( v24 )
    ((void (__fastcall *)(struct IUnknown *))v24->lpVtbl->Release)(v24);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v8;
}
