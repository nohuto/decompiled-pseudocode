/*
 * XREFs of ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140015660
 * Callers:
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140015B0C (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140009220 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000AB80 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x140013ABC (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x140018A20 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x140019034 (memset_0.c)
 *     memcpy_0 @ 0x140019B52 (memcpy_0.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     TemplateEventDescriptor @ 0x14003321C (TemplateEventDescriptor.c)
 *     Template_zq @ 0x140033240 (Template_zq.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CEndpointInstance::CreateDeviceEndpointInstance(
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a1,
        struct CEndpointInstance **a2)
{
  struct CEndpointInstance **v2; // r15
  char *v4; // r13
  char *v5; // r14
  HRESULT v6; // edi
  unsigned __int16 *v7; // r15
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rbx
  BOOL v13; // ebx
  int v14; // r12d
  struct IUnknown **v15; // rax
  struct IUnknown **v16; // rbx
  struct IUnknown *v17; // rdx
  struct IUnknown *v18; // rsi
  __int64 (__fastcall *v19)(volatile signed __int32 *); // rsi
  __int64 (__fastcall ***v21)(void *, GUID *, __int64 *); // r12
  struct IUnknown *v22; // [rsp+30h] [rbp-D0h] BYREF
  struct IUnknown *v23; // [rsp+38h] [rbp-C8h] BYREF
  struct IUnknown *v24; // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v25)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-B8h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-B0h] BYREF
  __int64 (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+68h] [rbp-98h]
  char *v30; // [rsp+70h] [rbp-90h]
  _WORD v31[2]; // [rsp+80h] [rbp-80h] BYREF
  char v32; // [rsp+84h] [rbp-7Ch]
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
  BOOL v47; // [rsp+E8h] [rbp-18h]
  int v48; // [rsp+ECh] [rbp-14h]
  HRESULT v49; // [rsp+F0h] [rbp-10h]
  __int64 v50; // [rsp+100h] [rbp+0h]
  struct IUnknown **v51; // [rsp+108h] [rbp+8h]
  int v52; // [rsp+160h] [rbp+60h] BYREF
  struct CEndpointInstance **v53; // [rsp+168h] [rbp+68h]
  __int64 v54; // [rsp+170h] [rbp+70h] BYREF
  void *v55; // [rsp+178h] [rbp+78h] BYREF

  v53 = a2;
  v50 = -2LL;
  v2 = a2;
  ppv = 0LL;
  v24 = 0LL;
  v55 = 0LL;
  v54 = 0LL;
  v22 = 0LL;
  v25 = 0LL;
  v27 = 0LL;
  v23 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v52 = 0;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    Template_zq(a1, a2, *((_QWORD *)a1 + 7), *((unsigned int *)a1 + 24));
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  if ( *((_DWORD *)a1 + 24) != 1 )
  {
    v6 = CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &ppv);
    if ( v6 < 0 )
      goto LABEL_67;
    v6 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IUnknown **))(*(_QWORD *)ppv + 40LL))(
           ppv,
           *((_QWORD *)a1 + 7),
           &v24);
    if ( v6 < 0 )
      goto LABEL_67;
    if ( v23 != v24 )
      ATL::AtlComQIPtrAssign(&v23, v24, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211);
    if ( !v23 )
    {
      v6 = -2147467262;
      goto LABEL_67;
    }
    v7 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
    LOWORD(v28) = 65;
    v8 = ((__int64 (__fastcall *)(struct IUnknown *))v23->lpVtbl[2].QueryInterface)(v23);
    v9 = v7[8];
    if ( v8 )
    {
      v4 = (char *)CoTaskMemAlloc(v9 + 32);
      if ( v4 )
      {
        *(_DWORD *)v4 = v7[8] + 32;
        *((_DWORD *)v4 + 1) = GetSessionIdFromEndpointId(*((_QWORD *)a1 + 7));
        *((_DWORD *)v4 + 2) = *((_DWORD *)a1 + 24);
        memcpy_0(v4 + 12, v7, v7[8] + 18LL);
        v10 = v7[8] + 32;
        v30 = v4;
        goto LABEL_12;
      }
    }
    else
    {
      v5 = (char *)CoTaskMemAlloc(v9 + 64);
      if ( v5 )
      {
        *(_DWORD *)v5 = v7[8] + 64;
        *((_DWORD *)v5 + 1) = GetSessionIdFromEndpointId(*((_QWORD *)a1 + 7));
        *((_DWORD *)v5 + 2) = *((_DWORD *)a1 + 24);
        *(_OWORD *)(v5 + 12) = *(_OWORD *)((char *)a1 + 100);
        *(_OWORD *)(v5 + 28) = *((_OWORD *)a1 + 9);
        memcpy_0(v5 + 44, v7, v7[8] + 18LL);
        v10 = v7[8] + 64;
        v30 = v5;
LABEL_12:
        LODWORD(v29) = v10;
        QueryInterface = v24->lpVtbl[1].QueryInterface;
        if ( *((_DWORD *)a1 + 18) )
        {
          v6 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64, __int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))QueryInterface)(
                 v24,
                 &GUID_8026ab61_92b2_43c1_a1df_5c37ebd08d82,
                 1LL,
                 &v28,
                 &v25);
          if ( v6 < 0 )
            goto LABEL_67;
          v12 = v25;
        }
        else
        {
          v6 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64, __int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))QueryInterface)(
                 v24,
                 &GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa,
                 1LL,
                 &v28,
                 &v27);
          if ( v6 < 0 )
            goto LABEL_67;
          v12 = v27;
        }
        v6 = (**v12)(v12, &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac, &v54);
        v13 = *((_DWORD *)a1 + 20) != 0;
        v14 = *((_DWORD *)a1 + 23);
        if ( g_u32AEWMILogLevel >= 3 )
        {
          memset_0(v31, 0, 0x40uLL);
          v31[0] = 120;
          v34 = 0x20000;
          v33 = AEWMIGUID_ENDPOINT_ACTIVATION;
          v32 = 1;
          v35 = 0LL;
          v36 = 0;
          v37 = *((_DWORD *)a1 + 33);
          v38 = *((_DWORD *)a1 + 24);
          v39 = *((_DWORD *)a1 + 18);
          v40 = *((_DWORD *)a1 + 35);
          v41 = *v7;
          v42 = *((_DWORD *)v7 + 1);
          v43 = v7[7];
          v44 = v7[1];
          v45 = *((_DWORD *)a1 + 8);
          v46 = *((_DWORD *)a1 + 19);
          v47 = v13;
          v48 = v14;
          v49 = v6;
          EtwLogTraceEvent(g_hAEWMITraceHandle, v31);
        }
        if ( v6 < 0 )
          goto LABEL_67;
        v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IUnknown **))v54)(
               v54,
               &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d,
               &v22);
        if ( v6 < 0 )
          goto LABEL_67;
        v6 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, void **))v22->lpVtbl->QueryInterface)(
               v22,
               &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
               &v55);
        if ( v6 < 0 )
          goto LABEL_67;
        v2 = v53;
        goto LABEL_21;
      }
    }
LABEL_66:
    v6 = -2147024882;
    goto LABEL_67;
  }
  v21 = (__int64 (__fastcall ***)(void *, GUID *, __int64 *))*((_QWORD *)a1 + 8);
  if ( !v21 )
  {
    v6 = -2147467262;
    goto LABEL_67;
  }
  if ( v55 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v55 + 16LL))(v55);
  v55 = v21;
  v6 = (**v21)(v21, &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac, &v54);
  if ( v6 < 0 )
    goto LABEL_67;
  v6 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IUnknown **))v55)(
         v55,
         &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d,
         &v22);
  if ( v6 < 0 )
    goto LABEL_67;
LABEL_21:
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v54 + 40LL))(v54, &v52);
  if ( v6 >= 0 )
  {
    if ( !v52 || (v6 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v55 + 48LL))(v55, 0x40000LL), v6 >= 0) )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v54 + 24LL))(
             v54,
             *((_QWORD *)a1 + 4),
             *((unsigned int *)a1 + 12));
      if ( v6 >= 0 )
      {
        v15 = (struct IUnknown **)operator new(0x18uLL);
        v16 = v15;
        v51 = v15;
        if ( v15 )
        {
          v17 = v22;
          v18 = (struct IUnknown *)*((_QWORD *)a1 + 4);
          *v15 = 0LL;
          if ( v17 )
            ATL::AtlComPtrAssign(v15, v17);
          v16[2] = 0LL;
          v16[1] = v18;
          *v2 = (struct CEndpointInstance *)v16;
          goto LABEL_29;
        }
        goto LABEL_66;
      }
    }
  }
LABEL_67:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      10LL,
      &WPP_cb2dd724c9740f90d85210ba28dcd87c_Traceguids,
      (unsigned int)v6);
  }
LABEL_29:
  if ( v4 )
    CoTaskMemFree(v4);
  if ( v5 )
    CoTaskMemFree(v5);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    TemplateEventDescriptor();
  if ( v23 )
    ((void (__fastcall *)(struct IUnknown *))v23->lpVtbl->Release)(v23);
  if ( v27 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v27)[2])(v27);
  if ( v25 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v25)[2])(v25);
  if ( v22 )
    ((void (__fastcall *)(struct IUnknown *))v22->lpVtbl->Release)(v22);
  if ( v54 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  if ( v55 )
  {
    v19 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 16LL);
    if ( v19 == ATL::CComObject<CCrossProcessServerInputEndpoint>::Release )
      ATL::CComObject<CCrossProcessServerInputEndpoint>::Release((volatile signed __int32 *)v55);
    else
      v19((volatile signed __int32 *)v55);
  }
  if ( v24 )
    ((void (__fastcall *)(struct IUnknown *))v24->lpVtbl->Release)(v24);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v6;
}
