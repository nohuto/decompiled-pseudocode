/*
 * XREFs of ?IsReadyToDraw@CEffectBrush@@QEBA_NXZ @ 0x180123054
 * Callers:
 *     ?Draw@CEffectBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180122930 (-Draw@CEffectBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@U.c)
 *     ?GetConstantBuffer@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z @ 0x180122C80 (-GetConstantBuffer@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z.c)
 *     ?HitTest@CEffectBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180122FA0 (-HitTest@CEffectBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsReadyToDraw@CSurfaceBrush@@QEBA_NXZ @ 0x180122304 (-IsReadyToDraw@CSurfaceBrush@@QEBA_NXZ.c)
 *     ?HasValidTemplate@CEffectBrush@@QEBA_NXZ @ 0x180122F78 (-HasValidTemplate@CEffectBrush@@QEBA_NXZ.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x18012DE60 (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 */

char __fastcall CEffectBrush::IsReadyToDraw(CEffectBrush *this)
{
  __int64 v2; // rcx
  int v3; // edi
  unsigned int v4; // ebp
  __int64 i; // rbx
  __int64 v6; // rcx

  if ( CEffectBrush::HasValidTemplate(this)
    && CCompiledEffectTemplate::GetCompiledEffectNoRef(*(CCompiledEffectTemplate **)(v2 + 72)) )
  {
    v3 = 0;
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 9) + 48LL) + 16LL))(*(_QWORD *)(*((_QWORD *)this + 9) + 48LL));
    if ( !v4 )
      return 1;
    for ( i = 0LL; ; i += 8LL )
    {
      v6 = *((_QWORD *)this + 23);
      if ( !*(_QWORD *)(i + v6) || !CSurfaceBrush::IsReadyToDraw(*(CSurfaceBrush **)(i + v6)) )
        break;
      if ( ++v3 >= v4 )
        return 1;
    }
  }
  return 0;
}
