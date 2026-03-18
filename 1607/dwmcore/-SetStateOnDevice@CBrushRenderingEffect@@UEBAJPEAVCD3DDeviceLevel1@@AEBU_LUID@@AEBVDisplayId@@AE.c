/*
 * XREFs of ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@AEAVCVertexConstantBuffer@@AEBVCLightsMask@@@Z @ 0x180195680
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJVSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x18010F0A8 (-GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJVSamplerMode@@PEAPEAUID3D11SamplerState@@@Z.c)
 *     ?GetConstantBuffer@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z @ 0x18013BBCC (-GetConstantBuffer@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x18014E3A0 (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 *     ?GetShaders@CCompiledEffectTemplate@@QEBAJPEAVCD3DDeviceLevel1@@IW4Enum@BlendMode@@AEBVCLightsMask@@PEAPEAUID3D11VertexShader@@PEAPEAUID3D11PixelShader@@@Z @ 0x18014E3F8 (-GetShaders@CCompiledEffectTemplate@@QEBAJPEAVCD3DDeviceLevel1@@IW4Enum@BlendMode@@AEBVCLightsMa.c)
 *     ?GetEmptyLightConstantBufferNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D11Buffer@@@Z @ 0x1801740E4 (-GetEmptyLightConstantBufferNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D11Buffer@@@Z.c)
 *     ?HasImageLightingEffect@CBrushRenderingEffect@@QEBA_NXZ @ 0x18019542C (-HasImageLightingEffect@CBrushRenderingEffect@@QEBA_NXZ.c)
 *     ?HasSceneLightingEffect@CBrushRenderingEffect@@QEBA_NXZ @ 0x180195484 (-HasSceneLightingEffect@CBrushRenderingEffect@@QEBA_NXZ.c)
 */

__int64 __fastcall CBrushRenderingEffect::SetStateOnDevice(
        CBrushRenderingEffect *this,
        struct ID3D11Buffer *a2,
        const struct _LUID *a3,
        const struct DisplayId *a4,
        const enum StereoContext *a5,
        struct CVertexConstantBuffer *a6,
        const struct CLightsMask *a7)
{
  CCompiledEffectTemplate *v9; // rdi
  __int64 *v10; // rbx
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectNoRef; // rax
  __int64 v12; // rdx
  struct ID3D11BufferVtbl *lpVtbl; // r14
  __int64 v14; // r8
  unsigned int v15; // eax
  unsigned int v16; // r8d
  int v17; // r9d
  int Shaders; // eax
  struct ID3D11Buffer *v19; // rbx
  unsigned int v20; // esi
  __int64 v21; // rdi
  __int64 v22; // r12
  char *v23; // r13
  int D3DSamplerStateNoRef; // eax
  char v25; // si
  __int64 v26; // r12
  struct CVertexConstantBuffer *v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned __int64 v31; // rsi
  int v32; // eax
  int v33; // eax
  float v34; // xmm1_4
  CD3DDeviceLevel1 *v35; // r13
  int ConstantBuffer; // eax
  enum D3D11_USAGE v37; // r8d
  int EmptyLightConstantBufferNoRef; // eax
  int v40; // [rsp+48h] [rbp-41h] BYREF
  int v41; // [rsp+4Ch] [rbp-3Dh] BYREF
  __int64 v42; // [rsp+50h] [rbp-39h] BYREF
  __int64 v43; // [rsp+58h] [rbp-31h] BYREF
  unsigned __int64 v44; // [rsp+60h] [rbp-29h]
  const struct Windows::UI::Composition::ICompiledEffect *v45; // [rsp+68h] [rbp-21h]
  _OWORD v46[5]; // [rsp+70h] [rbp-19h] BYREF
  struct ID3D11Buffer *v47; // [rsp+D8h] [rbp+4Fh] BYREF
  struct ID3D11Buffer *v48; // [rsp+E0h] [rbp+57h] BYREF
  const struct _LUID *v49; // [rsp+E8h] [rbp+5Fh]
  const struct DisplayId *v50; // [rsp+F0h] [rbp+67h]

  v50 = a4;
  v49 = a3;
  v48 = a2;
  v9 = *(CCompiledEffectTemplate **)(*((_QWORD *)this + 1) + 136LL);
  v10 = (__int64 *)*((_QWORD *)v9 + 16);
  CompiledEffectNoRef = CCompiledEffectTemplate::GetCompiledEffectNoRef(v9);
  v12 = *((unsigned __int8 *)this + 44);
  lpVtbl = a2[72].lpVtbl;
  v47 = 0LL;
  v42 = 0LL;
  v46[0] = 0LL;
  v14 = *v10;
  v45 = CompiledEffectNoRef;
  v15 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v14 + 64))(v10, v12);
  v16 = *((unsigned __int8 *)this + 44);
  v17 = *((_DWORD *)this + 10);
  v44 = v15;
  Shaders = CCompiledEffectTemplate::GetShaders(
              (__int64)v9,
              (struct CD3DDeviceLevel1 *)a2,
              v16,
              v17,
              (int *)a7,
              (struct CD3DPixelShader *)&v47,
              &v42);
  v19 = v47;
  v20 = Shaders;
  v21 = v42;
  if ( Shaders < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Shaders, 0x59u);
    goto LABEL_39;
  }
  (*((void (__fastcall **)(struct ID3D11BufferVtbl *, struct ID3D11Buffer *, _QWORD, _QWORD))lpVtbl->QueryInterface + 11))(
    lpVtbl,
    v47,
    0LL,
    0LL);
  (*((void (__fastcall **)(struct ID3D11BufferVtbl *, __int64, _QWORD, _QWORD))lpVtbl->QueryInterface + 9))(
    lpVtbl,
    v21,
    0LL,
    0LL);
  v22 = 0LL;
  v23 = (char *)this + 32;
  do
  {
    LOWORD(v47) = *(_WORD *)v23;
    BYTE2(v47) = v23[2];
    D3DSamplerStateNoRef = CD3DDeviceLevel1::GetD3DSamplerStateNoRef(
                             (__int64)v48,
                             (unsigned __int8 *)&v47,
                             (_QWORD *)v46 + v22);
    v20 = D3DSamplerStateNoRef;
    if ( D3DSamplerStateNoRef < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DSamplerStateNoRef, 0x62u);
      goto LABEL_39;
    }
    v22 = (unsigned int)(v22 + 1);
    v23 += 3;
  }
  while ( (unsigned int)v22 < 2 );
  (*((void (__fastcall **)(struct ID3D11BufferVtbl *, _QWORD, __int64, _OWORD *))lpVtbl->QueryInterface + 10))(
    lpVtbl,
    0LL,
    2LL,
    v46);
  v25 = 0;
  v26 = 0LL;
  LOBYTE(v47) = 0;
  if ( !v44 )
    goto LABEL_23;
  v27 = a6;
  do
  {
    v28 = *((unsigned __int8 *)this + 44);
    v40 = -1;
    v41 = -1;
    (*(void (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, __int64, _QWORD, int *, int *))(*(_QWORD *)v45 + 48LL))(
      v45,
      v28,
      (unsigned int)v26,
      &v40,
      &v41);
    v29 = (unsigned int)v40;
    if ( v40 < 0 || v41 < 0 )
      goto LABEL_20;
    v43 = 0LL;
    v30 = (int)v26;
    v31 = *((_QWORD *)this + (int)v26 + 2) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v31 )
    {
      v42 = 0LL;
      Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease(&v42);
      v32 = (*(__int64 (__fastcall **)(unsigned __int64, __int64 *))(*(_QWORD *)v31 + 72LL))(v31, &v42);
      v20 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x7Du);
      }
      else
      {
        v33 = (*(__int64 (__fastcall **)(__int64, const struct _LUID, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v42 + 120LL))(
                v42,
                *v49,
                *(unsigned int *)v50,
                *(unsigned int *)a5,
                &v43);
        v20 = v33;
        if ( v33 >= 0 )
        {
          Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease(&v42);
          v29 = (unsigned int)v40;
          v30 = (int)v26;
          goto LABEL_13;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0x83u);
      }
      Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease(&v42);
      goto LABEL_39;
    }
LABEL_13:
    if ( (*((_BYTE *)this + 8 * v30 + 16) & 1) != 0 )
      v34 = 0.0;
    else
      v34 = FLOAT_1_0;
    if ( *((float *)v27 + v26 + 4) == v34 )
    {
      v25 = (char)v47;
    }
    else
    {
      v25 = 1;
      *((float *)v27 + v26 + 4) = v34;
      LOBYTE(v47) = 1;
    }
    (*((void (__fastcall **)(struct ID3D11BufferVtbl *, __int64, __int64, __int64 *))lpVtbl->QueryInterface + 8))(
      lpVtbl,
      v29,
      1LL,
      &v43);
LABEL_20:
    v26 = (unsigned int)(v26 + 1);
  }
  while ( (unsigned int)v26 < v44 );
  if ( v25 )
    (*((void (__fastcall **)(struct ID3D11BufferVtbl *, _QWORD, _QWORD, _QWORD, struct CVertexConstantBuffer *, _DWORD, _DWORD))lpVtbl->QueryInterface
     + 48))(
      lpVtbl,
      *((_QWORD *)v27 + 4),
      0LL,
      0LL,
      v27,
      0,
      0);
LABEL_23:
  v47 = 0LL;
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v47);
  v35 = (CD3DDeviceLevel1 *)v48;
  ConstantBuffer = CEffectBrush::GetConstantBuffer(
                     *((CCompiledEffectTemplate ***)this + 1),
                     (struct CD3DDeviceLevel1 *)v48,
                     &v47);
  v20 = ConstantBuffer;
  if ( ConstantBuffer < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ConstantBuffer, 0x9Cu);
    Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v47);
  }
  else
  {
    if ( v47 )
      (*((void (__fastcall **)(struct ID3D11BufferVtbl *, _QWORD, __int64, struct ID3D11Buffer **))lpVtbl->QueryInterface
       + 16))(
        lpVtbl,
        0LL,
        1LL,
        &v47);
    Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v47);
    if ( CBrushRenderingEffect::HasSceneLightingEffect(this)
      && (*(_DWORD *)a7 == -1 || CBrushRenderingEffect::HasImageLightingEffect(this)) )
    {
      EmptyLightConstantBufferNoRef = CD3DDeviceLevel1::GetEmptyLightConstantBufferNoRef(v35, &v48, v37);
      v20 = EmptyLightConstantBufferNoRef;
      if ( EmptyLightConstantBufferNoRef < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, EmptyLightConstantBufferNoRef, 0xA8u);
      }
      else if ( v48 )
      {
        (*((void (__fastcall **)(struct ID3D11BufferVtbl *, __int64, __int64, struct ID3D11Buffer **))lpVtbl->QueryInterface
         + 16))(
          lpVtbl,
          1LL,
          1LL,
          &v48);
      }
    }
  }
LABEL_39:
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v19 )
    ((void (__fastcall *)(struct ID3D11Buffer *))v19->lpVtbl->Release)(v19);
  return v20;
}
