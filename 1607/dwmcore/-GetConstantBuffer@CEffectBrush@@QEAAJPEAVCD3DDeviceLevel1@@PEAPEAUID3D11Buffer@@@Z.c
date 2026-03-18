/*
 * XREFs of ?GetConstantBuffer@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z @ 0x18013BBCC
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@AEAVCVertexConstantBuffer@@AEBVCLightsMask@@@Z @ 0x180195680 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x18013B9DC (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDevic.c)
 *     ?HasValidTemplate@CEffectBrush@@QEBA_NXZ @ 0x18013C134 (-HasValidTemplate@CEffectBrush@@QEBA_NXZ.c)
 *     ?UpdateConstantBuffers@CEffectBrush@@AEAAJXZ @ 0x18013E040 (-UpdateConstantBuffers@CEffectBrush@@AEAAJXZ.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x18014E3A0 (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 */

__int64 __fastcall CEffectBrush::GetConstantBuffer(
        CCompiledEffectTemplate **this,
        struct CD3DDeviceLevel1 *a2,
        struct ID3D11Buffer **a3)
{
  struct ID3D11Buffer *v6; // rsi
  __int64 v7; // rcx
  CCompiledEffectTemplate *v8; // rdi
  __int64 v9; // rbx
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectNoRef; // rax
  int updated; // eax
  unsigned int v12; // ebx
  int v13; // r9d
  const struct Windows::UI::Composition::ICompiledEffect *v14; // rax
  unsigned int v16; // [rsp+20h] [rbp-28h]
  CMILPoolResource *v17; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0LL;
  if ( !CEffectBrush::HasValidTemplate((CEffectBrush *)this)
    || !CCompiledEffectTemplate::GetCompiledEffectNoRef(*(CCompiledEffectTemplate **)(v7 + 136)) )
  {
    v12 = -2147467259;
    v16 = 458;
    v13 = -2147467259;
    goto LABEL_17;
  }
  if ( !(*(__int64 (__fastcall **)(CCompiledEffectTemplate *))(*(_QWORD *)this[19] + 72LL))(this[19]) )
  {
    v8 = this[19];
    v9 = *(_QWORD *)v8;
    CompiledEffectNoRef = CCompiledEffectTemplate::GetCompiledEffectNoRef(this[17]);
    updated = (*(__int64 (__fastcall **)(CCompiledEffectTemplate *, const struct Windows::UI::Composition::ICompiledEffect *))(v9 + 64))(
                v8,
                CompiledEffectNoRef);
    v12 = updated;
    if ( updated < 0 )
    {
      v16 = 471;
LABEL_6:
      v13 = updated;
LABEL_17:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v16);
      return v12;
    }
  }
  v14 = CCompiledEffectTemplate::GetCompiledEffectNoRef(this[17]);
  if ( (*(unsigned int (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *))(*(_QWORD *)v14 + 64LL))(v14) )
  {
    updated = CEffectBrush::UpdateConstantBuffers((CEffectBrush *)this);
    v12 = updated;
    if ( updated < 0 )
    {
      v16 = 476;
      goto LABEL_6;
    }
    v17 = 0LL;
    updated = CDeviceResourceTable<CD3DConstantBuffer,CEffectBrush,CD3DDeviceLevel1>::FindOrCreateResourceNoRef(
                (struct IDeviceResourceNotify *)(this + 20),
                a2,
                &v17);
    v12 = updated;
    if ( updated < 0 )
    {
      v16 = 479;
      goto LABEL_6;
    }
    v6 = (struct ID3D11Buffer *)*((_QWORD *)v17 + 16);
  }
  *a3 = v6;
  if ( v6 )
    ((void (__fastcall *)(struct ID3D11Buffer *))v6->lpVtbl->AddRef)(v6);
  return 0;
}
