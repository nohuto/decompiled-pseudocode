/*
 * XREFs of ?LinkPixelShader@CD3DDeviceLevel1@@QEAAJW4Enum@CommonRenderingPixelShaders@@AEBVCLightsMask@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801747A8
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@AEAVCVertexConstantBuffer@@AEBVCLightsMask@@@Z @ 0x180056190 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@A.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@IEBAXXZ @ 0x180132B34 (-InternalAddRef@-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 *     ??1D3DShaderLinker@@QEAA@XZ @ 0x1801732D0 (--1D3DShaderLinker@@QEAA@XZ.c)
 *     ?Add@?$CMap@IV?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@@@@@QEAAHAEBIAEBV?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@@Z @ 0x180173394 (-Add@-$CMap@IV-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@UID3D11.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x18017A1B4 (-Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z.c)
 *     ?AppendLights@D3DShaderLinker@@QEAAJAEBVCLightsMask@@@Z @ 0x180188EC0 (-AppendLights@D3DShaderLinker@@QEAAJAEBVCLightsMask@@@Z.c)
 *     ?AppendMinBlend@D3DShaderLinker@@QEAAJXZ @ 0x180189364 (-AppendMinBlend@D3DShaderLinker@@QEAAJXZ.c)
 *     ?Initialize@D3DShaderLinker@@QEAAJPEBX_K_N@Z @ 0x1801893B4 (-Initialize@D3DShaderLinker@@QEAAJPEBX_K_N@Z.c)
 *     ?InsertFragment@D3DShaderLinker@@QEAAJPEBDPEBW4LinkingArgument@@I@Z @ 0x1801894FC (-InsertFragment@D3DShaderLinker@@QEAAJPEBDPEBW4LinkingArgument@@I@Z.c)
 *     ?Link@D3DShaderLinker@@QEAAJPEAPEAUID3D10Blob@@@Z @ 0x1801895F4 (-Link@D3DShaderLinker@@QEAAJPEAPEAUID3D10Blob@@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::LinkPixelShader(int *a1, int a2, const struct CLightsMask *a3, __int64 a4)
{
  int v5; // r8d
  __int64 v6; // r13
  struct ID3D10Blob *v7; // r14
  struct CD3DPixelShader *v8; // rsi
  int inserted; // edi
  int v10; // r8d
  int v12; // eax
  _DWORD *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rbx
  int v16; // esi
  const char *v17; // rdx
  int appended; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  unsigned __int64 v27; // rdi
  const void *v28; // rax
  int v29; // eax
  __int64 v30; // r15
  __int64 v32; // [rsp+30h] [rbp-99h] BYREF
  _OWORD v33[3]; // [rsp+38h] [rbp-91h] BYREF
  __int64 v34; // [rsp+68h] [rbp-61h]
  int v35; // [rsp+70h] [rbp-59h] BYREF
  struct CD3DPixelShader *v36; // [rsp+78h] [rbp-51h] BYREF
  struct ID3D10Blob *v37; // [rsp+80h] [rbp-49h] BYREF
  struct CD3DDeviceLevel1 *v38; // [rsp+88h] [rbp-41h] BYREF
  __int64 *v39; // [rsp+90h] [rbp-39h]
  __int128 v40; // [rsp+98h] [rbp-31h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-21h]
  int v42; // [rsp+B0h] [rbp-19h]
  __m128i si128; // [rsp+B8h] [rbp-11h] BYREF
  int v44; // [rsp+C8h] [rbp-1h]
  int v45; // [rsp+CCh] [rbp+3h]

  v39 = (__int64 *)a4;
  v5 = *(unsigned __int16 *)a3;
  v6 = (__int64)(a1 + 306);
  v7 = 0LL;
  v38 = (struct CD3DDeviceLevel1 *)a1;
  v8 = 0LL;
  v37 = 0LL;
  v36 = 0LL;
  inserted = 0;
  v10 = (a2 << 16) + v5;
  v12 = 0;
  v35 = v10;
  if ( a1[310] <= 0 )
  {
LABEL_5:
    v12 = -1;
  }
  else
  {
    v13 = *(_DWORD **)v6;
    v14 = 0LL;
    a4 = *(int *)(v6 + 16);
    while ( *v13 != v10 )
    {
      ++v12;
      ++v14;
      ++v13;
      if ( v14 >= a4 )
        goto LABEL_5;
    }
  }
  if ( v12 == -1 )
  {
    v15 = 0LL;
    v32 = 0LL;
  }
  else
  {
    v32 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 8LL * v12);
    v15 = v32;
    Microsoft::WRL::ComPtr<ID3D11PixelShader>::InternalAddRef(&v32);
    if ( v15 )
      goto LABEL_70;
  }
  v16 = a2 - 6;
  if ( a2 < 6 )
    v16 = a2;
  v34 = 0LL;
  memset(v33, 0, sizeof(v33));
  inserted = D3DShaderLinker::Initialize(
               (D3DShaderLinker *)v33,
               *(&CommonRenderingPixelShaderLibraries::g_rgShaders + 2 * v16),
               dword_1801EA8C8[4 * v16],
               a4);
  if ( inserted < 0 )
  {
    if ( IsOOM(inserted) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x1163u);
    goto LABEL_19;
  }
  v41 = 0LL;
  v40 = 0LL;
  v42 = 0;
  v17 = (const char *)(&CommonRenderingPixelShaderLibraries::g_rgEntryPoints)[v16];
  v44 = 4;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v45 = 5;
  inserted = D3DShaderLinker::InsertFragment((D3DShaderLinker *)v33, v17, (const enum LinkingArgument *)&si128, 6u);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)&v40);
  if ( inserted < 0 )
  {
    if ( IsOOM(inserted) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x1166u);
    goto LABEL_19;
  }
  if ( *(_DWORD *)a3 != -1 )
  {
    appended = D3DShaderLinker::AppendLights((D3DShaderLinker *)v33, a3);
    inserted = appended;
    if ( appended < 0 )
    {
      if ( IsOOM(appended) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x116Au);
LABEL_19:
      D3DShaderLinker::~D3DShaderLinker((D3DShaderLinker *)v33);
      goto LABEL_75;
    }
  }
  if ( a2 >= 6 )
  {
    v19 = D3DShaderLinker::AppendMinBlend((D3DShaderLinker *)v33);
    inserted = v19;
    if ( v19 < 0 )
    {
      if ( IsOOM(v19) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x1170u);
      goto LABEL_19;
    }
  }
  if ( v16 > 0 )
  {
    if ( v16 <= 2 )
    {
      v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)&v33[0] + 1) + 40LL))(
              *((_QWORD *)&v33[0] + 1),
              0LL,
              0LL,
              1LL);
      inserted = v24;
      if ( v24 < 0 )
      {
        if ( IsOOM(v24) && IsCompBuild() )
          NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x117Eu);
        goto LABEL_19;
      }
      v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)&v33[0] + 1) + 56LL))(
              *((_QWORD *)&v33[0] + 1),
              0LL,
              0LL,
              1LL);
      inserted = v25;
      if ( v25 < 0 )
      {
        if ( IsOOM(v25) && IsCompBuild() )
          NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x117Fu);
        goto LABEL_19;
      }
    }
    else if ( v16 <= 4 )
    {
      v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)&v33[0] + 1) + 40LL))(
              *((_QWORD *)&v33[0] + 1),
              0LL,
              0LL,
              2LL);
      inserted = v22;
      if ( v22 < 0 )
      {
        if ( IsOOM(v22) && IsCompBuild() )
          NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x1189u);
        goto LABEL_19;
      }
      v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)&v33[0] + 1) + 56LL))(
              *((_QWORD *)&v33[0] + 1),
              0LL,
              0LL,
              2LL);
      inserted = v23;
      if ( v23 < 0 )
      {
        if ( IsOOM(v23) && IsCompBuild() )
          NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x118Au);
        goto LABEL_19;
      }
    }
    else if ( v16 == 5 )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)&v33[0] + 1) + 40LL))(
              *((_QWORD *)&v33[0] + 1),
              0LL,
              1LL);
      inserted = v20;
      if ( v20 < 0 )
      {
        if ( IsOOM(v20) && IsCompBuild() )
          NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x1183u);
        goto LABEL_19;
      }
      v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)&v33[0] + 1) + 56LL))(
              *((_QWORD *)&v33[0] + 1),
              0LL,
              1LL);
      inserted = v21;
      if ( v21 < 0 )
      {
        if ( IsOOM(v21) && IsCompBuild() )
          NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x1184u);
        goto LABEL_19;
      }
    }
  }
  v26 = D3DShaderLinker::Link((D3DShaderLinker *)v33, &v37);
  inserted = v26;
  if ( v26 < 0 )
  {
    if ( IsOOM(v26) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x1195u);
    D3DShaderLinker::~D3DShaderLinker((D3DShaderLinker *)v33);
    v7 = v37;
    goto LABEL_73;
  }
  v7 = v37;
  v27 = ((__int64 (__fastcall *)(struct ID3D10Blob *))v37->lpVtbl->GetBufferSize)(v37);
  v28 = (const void *)((__int64 (__fastcall *)(struct ID3D10Blob *))v7->lpVtbl->GetBufferPointer)(v7);
  v29 = CD3DPixelShader::Create(v38, v28, v27, &v36);
  inserted = v29;
  if ( v29 < 0 )
  {
    if ( IsOOM(v29) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x119Bu);
    D3DShaderLinker::~D3DShaderLinker((D3DShaderLinker *)v33);
    v8 = v36;
    goto LABEL_71;
  }
  v8 = v36;
  v30 = *((_QWORD *)v36 + 16);
  if ( v30 )
  {
    v38 = (struct CD3DDeviceLevel1 *)*((_QWORD *)v36 + 16);
    Microsoft::WRL::ComPtr<ID3D11PixelShader>::InternalAddRef((__int64 *)&v38);
    v15 = v30;
    v32 = v30;
  }
  if ( !(unsigned int)CMap<unsigned int,Microsoft::WRL::ComPtr<ID3D11PixelShader>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<ID3D11PixelShader>>>::Add(
                        v6,
                        &v35,
                        &v32) )
  {
    inserted = -2147024882;
    if ( IsOOM(-2147024882) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x11A1u);
    D3DShaderLinker::~D3DShaderLinker((D3DShaderLinker *)v33);
    goto LABEL_71;
  }
  D3DShaderLinker::~D3DShaderLinker((D3DShaderLinker *)v33);
LABEL_70:
  *v39 = v15;
LABEL_71:
  if ( v8 )
    (*(void (__fastcall **)(struct CD3DPixelShader *))(*(_QWORD *)v8 + 8LL))(v8);
LABEL_73:
  if ( v7 )
    ((void (__fastcall *)(struct ID3D10Blob *))v7->lpVtbl->Release)(v7);
LABEL_75:
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return (unsigned int)inserted;
}
