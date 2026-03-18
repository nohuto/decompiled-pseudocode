/*
 * XREFs of ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@@Z @ 0x1800FF6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetShaderResourceViewNoRef@CCompositionSurfaceBitmap@@QEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800DC61C (-GetShaderResourceViewNoRef@CCompositionSurfaceBitmap@@QEAAJU_LUID@@VDisplayId@@W4StereoContext@.c)
 *     ?GetConstantBuffer@CCompiledEffect@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z @ 0x180112884 (-GetConstantBuffer@CCompiledEffect@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z.c)
 *     ?GetInputSurfaceNoRef@CCompiledEffect@@QEAAJIPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801129BC (-GetInputSurfaceNoRef@CCompiledEffect@@QEAAJIPEAPEAVCCompositionSurfaceBitmap@@@Z.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x180115220 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCCompiledEffectTemplate@@VC.c)
 *     ?GetCompiledEffectIfAvailable@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x180115464 (-GetCompiledEffectIfAvailable@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Wi.c)
 */

__int64 __fastcall CBrushRenderingEffect::SetStateOnDevice(
        CBrushRenderingEffect *this,
        struct CD3DDeviceLevel1 *a2,
        struct _LUID *a3,
        const struct DisplayId *a4,
        const enum StereoContext *a5)
{
  CCompiledEffectTemplate *v6; // rsi
  __int64 *v7; // rdi
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectIfAvailable; // rax
  __int64 v9; // r8
  __int64 *v10; // r12
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // r14
  int v15; // eax
  int v16; // edi
  int ConstantBuffer; // eax
  unsigned int v18; // esi
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // r13
  int InputSurfaceNoRef; // eax
  int ShaderResourceViewNoRef; // eax
  struct CCompositionSurfaceBitmap *v26; // [rsp+30h] [rbp-38h] BYREF
  const struct Windows::UI::Composition::ICompiledEffect *v27; // [rsp+38h] [rbp-30h]
  __int64 v28; // [rsp+40h] [rbp-28h] BYREF
  __int64 v29; // [rsp+48h] [rbp-20h] BYREF
  unsigned __int64 v30; // [rsp+50h] [rbp-18h]
  struct ID3D11Buffer *v32; // [rsp+B8h] [rbp+50h] BYREF
  __int64 *v33; // [rsp+C0h] [rbp+58h]
  unsigned int *v34; // [rsp+C8h] [rbp+60h]

  v34 = (unsigned int *)a4;
  v33 = (__int64 *)a3;
  v6 = *(CCompiledEffectTemplate **)(*((_QWORD *)this + 1) + 56LL);
  v7 = (__int64 *)*((_QWORD *)v6 + 6);
  CompiledEffectIfAvailable = CCompiledEffectTemplate::GetCompiledEffectIfAvailable(v6);
  v32 = 0LL;
  v9 = *v7;
  v10 = (__int64 *)*((_QWORD *)a2 + 69);
  v27 = CompiledEffectIfAvailable;
  v11 = (*(__int64 (__fastcall **)(__int64 *))(v9 + 16))(v7);
  v12 = *v10;
  v13 = v11;
  v30 = v11;
  (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(v12 + 88))(v10, *((_QWORD *)a2 + 136), 0LL, 0LL);
  v14 = 0LL;
  v26 = 0LL;
  v15 = CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate,CD3DDeviceLevel1>::FindOrCreateResourceNoRef(
          (char *)v6 + 64,
          a2,
          &v26);
  v16 = v15;
  if ( v15 >= 0 )
  {
    v14 = *((_QWORD *)v26 + 16);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x90u);
  }
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x3Bu);
    goto LABEL_21;
  }
  (*(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(*v10 + 72))(v10, v14, 0LL, 0LL);
  ConstantBuffer = CCompiledEffect::GetConstantBuffer(*((CCompiledEffect **)this + 1), a2, &v32);
  v16 = ConstantBuffer;
  if ( ConstantBuffer < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ConstantBuffer, 0x3Fu);
    goto LABEL_21;
  }
  if ( v32 )
    (*(void (__fastcall **)(__int64 *, _QWORD, __int64, struct ID3D11Buffer **))(*v10 + 128))(v10, 0LL, 1LL, &v32);
  v18 = 0;
  v29 = *((_QWORD *)a2 + 183);
  if ( v13 )
  {
    v19 = 0LL;
    do
    {
      v20 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *))(*(_QWORD *)v27 + 32LL))(v27);
      v21 = 9 * v19;
      v22 = v20;
      if ( *(int *)(v20 + 4 * v21) >= 0 && *(int *)(v20 + 4 * v21 + 4) >= 0 )
      {
        InputSurfaceNoRef = CCompiledEffect::GetInputSurfaceNoRef(*((CCompiledEffect **)this + 1), v18, &v26);
        v16 = InputSurfaceNoRef;
        if ( InputSurfaceNoRef < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, InputSurfaceNoRef, 0x4Fu);
          break;
        }
        ShaderResourceViewNoRef = CCompositionSurfaceBitmap::GetShaderResourceViewNoRef(
                                    v26,
                                    *v33,
                                    *v34,
                                    *(_DWORD *)a5,
                                    &v28);
        v16 = ShaderResourceViewNoRef;
        if ( ShaderResourceViewNoRef < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, ShaderResourceViewNoRef, 0x52u);
          break;
        }
        (*(void (__fastcall **)(__int64 *, _QWORD, __int64, __int64 *))(*v10 + 64))(
          v10,
          *(unsigned int *)(v22 + 4 * v21),
          1LL,
          &v28);
        (*(void (__fastcall **)(__int64 *, _QWORD, __int64, __int64 *))(*v10 + 80))(
          v10,
          *(unsigned int *)(v22 + 4 * v21 + 4),
          1LL,
          &v29);
      }
      v19 = ++v18;
    }
    while ( v18 < v30 );
  }
LABEL_21:
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v32 )
    ((void (__fastcall *)(struct ID3D11Buffer *))v32->lpVtbl->Release)(v32);
  return (unsigned int)v16;
}
