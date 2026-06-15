/*
 * XREFs of ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140003A90
 * Callers:
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140003824 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x140003F24 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400042F0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140018ADC (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1400190F4 (memset_0.c)
 *     memcpy_0 @ 0x140019C12 (memcpy_0.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     TemplateEventDescriptor @ 0x140032FC8 (TemplateEventDescriptor.c)
 *     Template_zq @ 0x140032FEC (Template_zq.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CEndpointInstance::CreateDeviceEndpointInstance(
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a1,
        struct IUnknown ***a2)
{
  _DWORD *v3; // r12
  _DWORD *v4; // r15
  HRESULT v5; // esi
  struct IUnknown *v6; // rbx
  unsigned __int16 *v7; // r13
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rbx
  BOOL v13; // ebx
  int v14; // edi
  struct IUnknown **v15; // rax
  struct IUnknown **v16; // rbx
  struct IUnknown *v17; // rdx
  struct IUnknown *v18; // rdi
  __int64 v20; // [rsp+30h] [rbp-D0h] BYREF
  struct IUnknown *v21; // [rsp+38h] [rbp-C8h] BYREF
  struct IUnknown *v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-B0h] BYREF
  __int64 (__fastcall ***v25)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-A8h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h] BYREF
  __int64 v28; // [rsp+70h] [rbp-90h]
  _DWORD *v29; // [rsp+78h] [rbp-88h]
  _WORD v30[2]; // [rsp+80h] [rbp-80h] BYREF
  char v31; // [rsp+84h] [rbp-7Ch]
  __int128 v32; // [rsp+98h] [rbp-68h]
  int v33; // [rsp+ACh] [rbp-54h]
  __int64 v34; // [rsp+B0h] [rbp-50h]
  int v35; // [rsp+B8h] [rbp-48h]
  int v36; // [rsp+C0h] [rbp-40h]
  int v37; // [rsp+C4h] [rbp-3Ch]
  int v38; // [rsp+C8h] [rbp-38h]
  int v39; // [rsp+CCh] [rbp-34h]
  int v40; // [rsp+D0h] [rbp-30h]
  int v41; // [rsp+D4h] [rbp-2Ch]
  int v42; // [rsp+D8h] [rbp-28h]
  int v43; // [rsp+DCh] [rbp-24h]
  int v44; // [rsp+E0h] [rbp-20h]
  int v45; // [rsp+E4h] [rbp-1Ch]
  BOOL v46; // [rsp+E8h] [rbp-18h]
  int v47; // [rsp+ECh] [rbp-14h]
  HRESULT v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+100h] [rbp+0h]
  struct IUnknown **v50; // [rsp+108h] [rbp+8h]
  int v52; // [rsp+160h] [rbp+60h] BYREF
  struct IUnknown *v53; // [rsp+168h] [rbp+68h] BYREF

  v49 = -2LL;
  ppv = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v53 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v52 = 0;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    Template_zq(a1, a2, *((_QWORD *)a1 + 7), *((unsigned int *)a1 + 22));
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v5 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &ppv);
  if ( v5 < 0 )
    goto LABEL_31;
  v5 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IUnknown **))(*(_QWORD *)ppv + 40LL))(
         ppv,
         *((_QWORD *)a1 + 7),
         &v21);
  if ( v5 < 0 )
    goto LABEL_31;
  v6 = v53;
  if ( v53 != v21 )
  {
    ATL::AtlComQIPtrAssign(&v53, v21, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211);
    v6 = v53;
  }
  if ( v6 )
  {
    v7 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
    LOWORD(v27) = 65;
    v8 = ((__int64 (__fastcall *)(struct IUnknown *))v6->lpVtbl[2].QueryInterface)(v6);
    v9 = v7[8];
    if ( v8 )
    {
      v3 = CoTaskMemAlloc(v9 + 32);
      if ( v3 )
      {
        *v3 = v7[8] + 32;
        v3[1] = GetSessionIdFromEndpointId(*((_QWORD *)a1 + 7));
        v3[2] = *((_DWORD *)a1 + 22);
        memcpy_0(v3 + 3, v7, v7[8] + 18LL);
        v10 = v7[8] + 32;
        v29 = v3;
LABEL_11:
        LODWORD(v28) = v10;
        QueryInterface = v21->lpVtbl[1].QueryInterface;
        if ( *((_DWORD *)a1 + 16) )
        {
          v5 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64, __int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))QueryInterface)(
                 v21,
                 &GUID_8026ab61_92b2_43c1_a1df_5c37ebd08d82,
                 1LL,
                 &v27,
                 &v26);
          if ( v5 >= 0 )
          {
            v12 = v26;
            goto LABEL_14;
          }
        }
        else
        {
          v5 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64, __int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))QueryInterface)(
                 v21,
                 &GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa,
                 1LL,
                 &v27,
                 &v25);
          if ( v5 >= 0 )
          {
            v12 = v25;
LABEL_14:
            v5 = (**v12)(v12, &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac, &v20);
            v13 = *((_DWORD *)a1 + 18) != 0;
            v14 = *((_DWORD *)a1 + 21);
            if ( g_u32AEWMILogLevel >= 3 )
            {
              memset_0(v30, 0, 0x40uLL);
              v30[0] = 120;
              v33 = 0x20000;
              v32 = AEWMIGUID_ENDPOINT_ACTIVATION;
              v31 = 1;
              v34 = 0LL;
              v35 = 0;
              v36 = *((_DWORD *)a1 + 31);
              v37 = *((_DWORD *)a1 + 22);
              v38 = *((_DWORD *)a1 + 16);
              v39 = *((_DWORD *)a1 + 33);
              v40 = *v7;
              v41 = *((_DWORD *)v7 + 1);
              v42 = v7[7];
              v43 = v7[1];
              v44 = *((_DWORD *)a1 + 8);
              v45 = *((_DWORD *)a1 + 17);
              v46 = v13;
              v47 = v14;
              v48 = v5;
              EtwLogTraceEvent(g_hAEWMITraceHandle, v30);
            }
            if ( v5 >= 0 )
            {
              v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IUnknown **))v20)(
                     v20,
                     &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d,
                     &v22);
              if ( v5 >= 0 )
              {
                v5 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v22->lpVtbl->QueryInterface)(
                       v22,
                       &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
                       &v23);
                if ( v5 >= 0 )
                {
                  v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 40LL))(v20, &v52);
                  if ( v5 >= 0 )
                  {
                    if ( !v52
                      || (v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 48LL))(v23, 0x40000LL),
                          v5 >= 0) )
                    {
                      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v20 + 24LL))(
                             v20,
                             *((_QWORD *)a1 + 4),
                             *((unsigned int *)a1 + 12));
                      if ( v5 >= 0 )
                      {
                        v15 = (struct IUnknown **)operator new(0x18uLL);
                        v16 = v15;
                        v50 = v15;
                        if ( v15 )
                        {
                          v17 = v22;
                          v18 = (struct IUnknown *)*((_QWORD *)a1 + 4);
                          *v15 = 0LL;
                          if ( v17 )
                            ATL::AtlComPtrAssign(v15, v17);
                          v16[2] = 0LL;
                          v16[1] = v18;
                          *a2 = v16;
                        }
                        else
                        {
                          v5 = -2147024882;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if ( v3 )
          CoTaskMemFree(v3);
        if ( v4 )
          CoTaskMemFree(v4);
        goto LABEL_31;
      }
      v5 = -2147024882;
    }
    else
    {
      v4 = CoTaskMemAlloc(v9 + 64);
      if ( v4 )
      {
        *v4 = v7[8] + 64;
        v4[1] = GetSessionIdFromEndpointId(*((_QWORD *)a1 + 7));
        v4[2] = *((_DWORD *)a1 + 22);
        *(_OWORD *)(v4 + 3) = *(_OWORD *)((char *)a1 + 92);
        *(_OWORD *)(v4 + 7) = *(_OWORD *)((char *)a1 + 136);
        memcpy_0(v4 + 11, v7, v7[8] + 18LL);
        v10 = v7[8] + 64;
        v29 = v4;
        goto LABEL_11;
      }
      v5 = -2147024882;
    }
LABEL_31:
    v6 = v53;
    goto LABEL_32;
  }
  v5 = -2147467262;
LABEL_32:
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
  {
    TemplateEventDescriptor();
    v6 = v53;
  }
  if ( v6 )
    ((void (__fastcall *)(struct IUnknown *))v6->lpVtbl->Release)(v6);
  if ( v25 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v25)[2])(v25);
  if ( v26 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v26)[2])(v26);
  if ( v22 )
    ((void (__fastcall *)(struct IUnknown *))v22->lpVtbl->Release)(v22);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v21 )
    ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v5;
}
