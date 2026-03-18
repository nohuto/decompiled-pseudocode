/*
 * XREFs of ?GetConstantBuffer@CCompiledEffect@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z @ 0x180112884
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@@Z @ 0x1800FF6A0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCCompiledEffect@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x180112670 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCCompiledEffect@@VCD3DDe.c)
 *     ?IsReadyToDraw@CCompiledEffect@@QEBA_NXZ @ 0x1801133B0 (-IsReadyToDraw@CCompiledEffect@@QEBA_NXZ.c)
 *     ?UpdateConstantBuffers@CCompiledEffect@@AEAAJXZ @ 0x180113A44 (-UpdateConstantBuffers@CCompiledEffect@@AEAAJXZ.c)
 */

__int64 __fastcall CCompiledEffect::GetConstantBuffer(
        CCompiledEffect *this,
        struct CD3DDeviceLevel1 *a2,
        struct ID3D11Buffer **a3)
{
  struct ID3D11Buffer *v6; // rsi
  unsigned int v7; // ebx
  int updated; // eax
  unsigned int v10; // [rsp+20h] [rbp-28h]
  CMILPoolResource *v11; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0LL;
  if ( !CCompiledEffect::IsReadyToDraw(this) )
  {
    v7 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x13Fu);
    return v7;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 7) + 48LL) + 72LL))(*(_QWORD *)(*((_QWORD *)this + 7) + 48LL)) )
  {
    updated = CCompiledEffect::UpdateConstantBuffers(this);
    v7 = updated;
    if ( updated < 0 )
    {
      v10 = 324;
LABEL_8:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, v10);
      return v7;
    }
    v11 = 0LL;
    updated = CDeviceResourceTable<CD3DConstantBuffer,CCompiledEffect,CD3DDeviceLevel1>::FindOrCreateResourceNoRef(
                (CCompiledEffect *)((char *)this + 80),
                a2,
                &v11);
    v7 = updated;
    if ( updated < 0 )
    {
      v10 = 327;
      goto LABEL_8;
    }
    v6 = (struct ID3D11Buffer *)*((_QWORD *)v11 + 16);
  }
  *a3 = v6;
  if ( v6 )
    ((void (__fastcall *)(struct ID3D11Buffer *))v6->lpVtbl->AddRef)(v6);
  return 0;
}
