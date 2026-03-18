/*
 * XREFs of ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x18014E3A0
 * Callers:
 *     ?CreateResource@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x18013B738 (-CreateResource@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z.c)
 *     ?DoesBackdropInputContributeToSubgraph@CEffectBrush@@AEBA_NIPEA_N@Z @ 0x18013B7EC (-DoesBackdropInputContributeToSubgraph@CEffectBrush@@AEBA_NIPEA_N@Z.c)
 *     ?GetConstantBuffer@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z @ 0x18013BBCC (-GetConstantBuffer@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z.c)
 *     ?IsReadyToDraw@CEffectBrush@@QEBA_N_N@Z @ 0x18013C254 (-IsReadyToDraw@CEffectBrush@@QEBA_N_N@Z.c)
 *     ?RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCacheParameters@@_NPEAVCDrawListCache@@@Z @ 0x18013D4E8 (-RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCache.c)
 *     ?UpdateConstantBuffers@CEffectBrush@@AEAAJXZ @ 0x18013E040 (-UpdateConstantBuffers@CEffectBrush@@AEAAJXZ.c)
 *     ?UpdateDrawListCache@CEffectBrush@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18013E1AC (-UpdateDrawListCache@CEffectBrush@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@P.c)
 *     ?CreateResource@CCompiledEffectTemplate@@QEBAJPEAVCD3DDeviceLevel1@@IW4Enum@BlendMode@@AEBVCLightsMask@@PEAPEAVCD3DPixelShader@@@Z @ 0x18014E054 (-CreateResource@CCompiledEffectTemplate@@QEBAJPEAVCD3DDeviceLevel1@@IW4Enum@BlendMode@@AEBVCLigh.c)
 *     ?GetShaders@CCompiledEffectTemplate@@QEBAJPEAVCD3DDeviceLevel1@@IW4Enum@BlendMode@@AEBVCLightsMask@@PEAPEAUID3D11VertexShader@@PEAPEAUID3D11PixelShader@@@Z @ 0x18014E3F8 (-GetShaders@CCompiledEffectTemplate@@QEBAJPEAVCD3DDeviceLevel1@@IW4Enum@BlendMode@@AEBVCLightsMa.c)
 *     ?HasImageLightingEffect@CBrushRenderingEffect@@QEBA_NXZ @ 0x18019542C (-HasImageLightingEffect@CBrushRenderingEffect@@QEBA_NXZ.c)
 *     ?HasSceneLightingEffect@CBrushRenderingEffect@@QEBA_NXZ @ 0x180195484 (-HasSceneLightingEffect@CBrushRenderingEffect@@QEBA_NXZ.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@AEAVCVertexConstantBuffer@@AEBVCLightsMask@@@Z @ 0x180195680 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AE.c)
 * Callees:
 *     <none>
 */

const struct Windows::UI::Composition::ICompiledEffect *__fastcall CCompiledEffectTemplate::GetCompiledEffectNoRef(
        CCompiledEffectTemplate *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  struct _TP_WORK *v3; // rcx

  v1 = *((_QWORD *)this + 17);
  v2 = 0LL;
  if ( v1 && *(_DWORD *)(v1 + 48) == 2 )
  {
    v3 = *(struct _TP_WORK **)(v1 + 40);
    if ( v3 )
    {
      WaitForThreadpoolWorkCallbacks(v3, 0);
      CloseThreadpoolWork(*(PTP_WORK *)(v1 + 40));
      *(_QWORD *)(v1 + 40) = 0LL;
    }
    return *(const struct Windows::UI::Composition::ICompiledEffect **)(v1 + 56);
  }
  return (const struct Windows::UI::Composition::ICompiledEffect *)v2;
}
