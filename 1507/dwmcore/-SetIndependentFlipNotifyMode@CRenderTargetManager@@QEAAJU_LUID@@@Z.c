/*
 * XREFs of ?SetIndependentFlipNotifyMode@CRenderTargetManager@@QEAAJU_LUID@@@Z @ 0x1800E9018
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180008100 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?SetCompositionMode@CCompositionSurfaceBitmap@@UEAAXW4BufferCompositionMode@@_N@Z @ 0x1800DC5A0 (-SetCompositionMode@CCompositionSurfaceBitmap@@UEAAXW4BufferCompositionMode@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z @ 0x1800F7838 (-SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z.c)
 */

__int64 __fastcall CRenderTargetManager::SetIndependentFlipNotifyMode(CRenderTargetManager *this, struct _LUID a2)
{
  unsigned int v2; // esi
  __int64 v3; // rbp
  COverlayContext *v5; // rcx
  int v6; // eax

  v2 = 0;
  v3 = 0LL;
  if ( *((_DWORD *)this + 12) )
  {
    while ( 1 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 8 * v3) + 48LL))(
             *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v3),
             36LL) )
      {
        v5 = *(COverlayContext **)(*(_QWORD *)(*((_QWORD *)this + 3) + 8 * v3) + 552LL);
        if ( v5 )
        {
          v6 = COverlayContext::SetIndependentFlipNotifyMode(v5, a2);
          v2 = v6;
          if ( v6 < 0 )
            break;
        }
      }
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 12) )
        return v2;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x39Fu);
  }
  return v2;
}
