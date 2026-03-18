/*
 * XREFs of ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@@Z @ 0x1801186D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetShaderResourceViewNoRef@CCompositionSurfaceBitmap@@QEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800F4DA4 (-GetShaderResourceViewNoRef@CCompositionSurfaceBitmap@@QEAAJU_LUID@@VDisplayId@@W4StereoContext@.c)
 *     ?GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJVSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x1800FA1D0 (-GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJVSamplerMode@@PEAPEAUID3D11SamplerState@@@Z.c)
 *     ?GetConstantBuffer@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z @ 0x180122C80 (-GetConstantBuffer@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x18012DC1C (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCCompiledEffectTemplate@@VC.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x18012DE60 (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 */

__int64 __fastcall CBrushRenderingEffect::SetStateOnDevice(
        CBrushRenderingEffect *this,
        struct CD3DDeviceLevel1 *a2,
        struct _LUID *a3,
        const struct DisplayId *a4,
        const enum StereoContext *a5)
{
  CCompiledEffectTemplate *v7; // rsi
  __int64 *v8; // rdi
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectNoRef; // rax
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r14
  int v13; // eax
  int v14; // edi
  int ConstantBuffer; // eax
  __int64 v16; // rbx
  char *v17; // rsi
  int D3DSamplerStateNoRef; // eax
  __int64 v19; // rsi
  unsigned int *v20; // r12
  int ShaderResourceViewNoRef; // eax
  struct ID3D11Buffer *v23; // [rsp+30h] [rbp-38h] BYREF
  const struct Windows::UI::Composition::ICompiledEffect *v24; // [rsp+38h] [rbp-30h]
  unsigned __int64 v25; // [rsp+40h] [rbp-28h]
  __int64 v26; // [rsp+48h] [rbp-20h] BYREF
  __int128 v27; // [rsp+50h] [rbp-18h] BYREF
  __int64 v28; // [rsp+B0h] [rbp+48h] BYREF
  int v29; // [rsp+B8h] [rbp+50h] BYREF
  __int64 *v30; // [rsp+C0h] [rbp+58h]
  unsigned int *v31; // [rsp+C8h] [rbp+60h]

  v31 = (unsigned int *)a4;
  v30 = (__int64 *)a3;
  v7 = *(CCompiledEffectTemplate **)(*((_QWORD *)this + 1) + 72LL);
  v8 = (__int64 *)*((_QWORD *)v7 + 6);
  CompiledEffectNoRef = CCompiledEffectTemplate::GetCompiledEffectNoRef(v7);
  v23 = 0LL;
  v10 = *((_QWORD *)a2 + 70);
  v27 = 0LL;
  v11 = *v8;
  v24 = CompiledEffectNoRef;
  v25 = (*(unsigned int (__fastcall **)(__int64 *))(v11 + 16))(v8);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v10 + 88LL))(
    v10,
    *((_QWORD *)a2 + 132),
    0LL,
    0LL);
  v12 = 0LL;
  v28 = 0LL;
  v13 = CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate,CD3DDeviceLevel1>::FindOrCreateResourceNoRef(
          (char *)v7 + 64,
          a2,
          &v28);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v12 = *(_QWORD *)(v28 + 128);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x92u);
  }
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x53u);
    goto LABEL_23;
  }
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 72LL))(v10, v12, 0LL, 0LL);
  ConstantBuffer = CEffectBrush::GetConstantBuffer(*((CEffectBrush **)this + 1), a2, &v23);
  v14 = ConstantBuffer;
  if ( ConstantBuffer < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ConstantBuffer, 0x57u);
    goto LABEL_23;
  }
  if ( v23 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64, struct ID3D11Buffer **))(*(_QWORD *)v10 + 128LL))(
      v10,
      0LL,
      1LL,
      &v23);
  v16 = 0LL;
  v17 = (char *)this + 16;
  while ( 1 )
  {
    LOWORD(v28) = *(_WORD *)v17;
    BYTE2(v28) = v17[2];
    D3DSamplerStateNoRef = CD3DDeviceLevel1::GetD3DSamplerStateNoRef(
                             (__int64)a2,
                             (unsigned __int8 *)&v28,
                             (_QWORD *)&v27 + v16);
    v14 = D3DSamplerStateNoRef;
    if ( D3DSamplerStateNoRef < 0 )
      break;
    v16 = (unsigned int)(v16 + 1);
    v17 += 3;
    if ( (unsigned int)v16 >= 2 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(*(_QWORD *)v10 + 80LL))(v10, 0LL, 2LL, &v27);
      v19 = 0LL;
      if ( !v25 )
        goto LABEL_23;
      v20 = (unsigned int *)a5;
      while ( 1 )
      {
        LODWORD(v28) = -1;
        v29 = -1;
        (*(void (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD, __int64 *, int *))(*(_QWORD *)v24 + 32LL))(
          v24,
          (unsigned int)v19,
          &v28,
          &v29);
        if ( (int)v28 >= 0 && v29 >= 0 )
        {
          ShaderResourceViewNoRef = CCompositionSurfaceBitmap::GetShaderResourceViewNoRef(
                                      *(CCompositionSurfaceBitmap **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1)
                                                                                            + 184LL)
                                                                                + 8 * v19)
                                                                    + 64LL),
                                      *v30,
                                      *v31,
                                      *v20,
                                      &v26);
          v14 = ShaderResourceViewNoRef;
          if ( ShaderResourceViewNoRef < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, ShaderResourceViewNoRef, 0x76u);
            goto LABEL_23;
          }
          (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v10 + 64LL))(
            v10,
            (unsigned int)v28,
            1LL,
            &v26);
        }
        v19 = (unsigned int)(v19 + 1);
        if ( (unsigned int)v19 >= v25 )
          goto LABEL_23;
      }
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DSamplerStateNoRef, 0x65u);
LABEL_23:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v23 )
    ((void (__fastcall *)(struct ID3D11Buffer *))v23->lpVtbl->Release)(v23);
  return (unsigned int)v14;
}
