/*
 * XREFs of ?GetConstantBuffer@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z @ 0x180122C80
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@@Z @ 0x1801186D0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AE.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x180122A6C (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDevic.c)
 *     ?IsReadyToDraw@CEffectBrush@@QEBA_NXZ @ 0x180123054 (-IsReadyToDraw@CEffectBrush@@QEBA_NXZ.c)
 *     ?UpdateConstantBuffers@CEffectBrush@@AEAAJXZ @ 0x180123410 (-UpdateConstantBuffers@CEffectBrush@@AEAAJXZ.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x18012DE60 (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 */

__int64 __fastcall CEffectBrush::GetConstantBuffer(
        CCompiledEffectTemplate **this,
        struct CD3DDeviceLevel1 *a2,
        struct ID3D11Buffer **a3)
{
  struct ID3D11Buffer *v6; // r14
  unsigned int v7; // ebx
  CCompiledEffectTemplate *v8; // rsi
  __int64 v9; // rdi
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectNoRef; // rax
  int updated; // eax
  const struct Windows::UI::Composition::ICompiledEffect *v12; // rdi
  unsigned int v14; // [rsp+20h] [rbp-38h]
  CMILPoolResource *v15; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0LL;
  if ( !CEffectBrush::IsReadyToDraw((CEffectBrush *)this) )
  {
    v7 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x1DAu);
    return v7;
  }
  if ( !(*(__int64 (__fastcall **)(CCompiledEffectTemplate *))(*(_QWORD *)this[11] + 56LL))(this[11]) )
  {
    v8 = this[11];
    v9 = *(_QWORD *)v8;
    CompiledEffectNoRef = CCompiledEffectTemplate::GetCompiledEffectNoRef(this[9]);
    updated = (*(__int64 (__fastcall **)(CCompiledEffectTemplate *, const struct Windows::UI::Composition::ICompiledEffect *))(v9 + 48))(
                v8,
                CompiledEffectNoRef);
    v7 = updated;
    if ( updated < 0 )
    {
      v14 = 488;
LABEL_11:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, v14);
      return v7;
    }
  }
  v12 = CCompiledEffectTemplate::GetCompiledEffectNoRef(this[9]);
  if ( (*(unsigned int (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *))(*(_QWORD *)v12 + 40LL))(v12) )
  {
    updated = CEffectBrush::UpdateConstantBuffers((CEffectBrush *)this);
    v7 = updated;
    if ( updated < 0 )
    {
      v14 = 493;
      goto LABEL_11;
    }
    v15 = 0LL;
    updated = CDeviceResourceTable<CD3DConstantBuffer,CEffectBrush,CD3DDeviceLevel1>::FindOrCreateResourceNoRef(
                (struct IDeviceResourceNotify *)(this + 12),
                a2,
                &v15);
    v7 = updated;
    if ( updated < 0 )
    {
      v14 = 496;
      goto LABEL_11;
    }
    v6 = (struct ID3D11Buffer *)*((_QWORD *)v15 + 16);
  }
  *a3 = v6;
  if ( v6 )
    ((void (__fastcall *)(struct ID3D11Buffer *))v6->lpVtbl->AddRef)(v6);
  return 0;
}
