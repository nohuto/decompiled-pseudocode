/*
 * XREFs of ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004BAA8
 * Callers:
 *     ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x18004B800 (-GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?Leave@CReadWriteLock@@QEAAXXZ @ 0x18000F834 (-Leave@CReadWriteLock@@QEAAXXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEAU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DA@@@2PEAVCHwndRenderTarget@@@Z @ 0x18002EA00 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEAU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18002EDE0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAVCOverlayContext@@PEAPEAVCOcclusionContext@@@Z @ 0x18002F32C (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18002F750 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800404F0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z @ 0x180058584 (-GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z.c)
 *     ?Push@?$CWatermarkStack@PEAUMilVisualRenderParameter@@$07$01$03@@QEAAJAEBQEAUMilVisualRenderParameter@@@Z @ 0x18005FD10 (-Push@-$CWatermarkStack@PEAUMilVisualRenderParameter@@$07$01$03@@QEAAJAEBQEAUMilVisualRenderPara.c)
 *     ?PopRenderParameter@CComposition@@QEAAJW4Enum@MilVisualRenderParameterType@@@Z @ 0x180067ED4 (-PopRenderParameter@CComposition@@QEAAJW4Enum@MilVisualRenderParameterType@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessRestoreContent@CCompositionSurfaceManager@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x18008976C (-ProcessRestoreContent@CCompositionSurfaceManager@@QEAAJPEAVIRenderTargetDisplay@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?EnterWrite@CReadWriteLock@@QEAAXXZ @ 0x1800E2940 (-EnterWrite@CReadWriteLock@@QEAAXXZ.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x1800F4424 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180119DC4 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@CoordinateSpace@@.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderForCapture(CRenderTarget *this, const struct MilRectF *a2)
{
  struct IRenderTargetDisplay *v3; // rdx
  unsigned int v5; // edi
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  bool v9; // r8
  int DrawingContext; // eax
  int v11; // eax
  struct CVisualTree *v12; // rdx
  int v13; // eax
  __int64 v14; // r14
  __int64 v15; // rax
  int v17; // r9d
  int v18; // eax
  unsigned int v19; // [rsp+20h] [rbp-98h]
  CDrawingContext *v20; // [rsp+60h] [rbp-58h] BYREF
  __int64 v21; // [rsp+68h] [rbp-50h] BYREF
  _DWORD v22[6]; // [rsp+70h] [rbp-48h] BYREF

  v3 = (struct IRenderTargetDisplay *)*((_QWORD *)this + 11);
  v20 = 0LL;
  v5 = 0;
  if ( !v3 )
  {
    v5 = -2003304442;
    v19 = 1312;
LABEL_17:
    v17 = v5;
LABEL_20:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, v19);
    return v5;
  }
  if ( !*((_QWORD *)this + 7) )
    return v5;
  v6 = CCompositionSurfaceManager::ProcessRestoreContent(
         (CCompositionSurfaceManager *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 16LL),
         v3);
  v5 = v6;
  if ( v6 < 0 )
  {
    v19 = 1324;
    goto LABEL_19;
  }
  v7 = *((_QWORD *)this + 7);
  if ( (*(_BYTE *)(*(_QWORD *)(v7 + 24) + 88LL) & 0xF) == 0 )
    goto LABEL_5;
  if ( !*(_BYTE *)(v7 + 32) )
  {
    v6 = CVisualTree::PreCompute((struct CVisualTree *)v7, 0LL);
    v5 = v6;
    if ( v6 >= 0 )
      goto LABEL_5;
    v19 = 1350;
LABEL_19:
    v17 = v6;
    goto LABEL_20;
  }
  CReadWriteLock::EnterWrite((CReadWriteLock *)(*(_QWORD *)(v7 + 16) + 568LL));
  v5 = CVisualTree::PreCompute(*((struct CVisualTree **)this + 7), 0LL);
  CReadWriteLock::Leave((CReadWriteLock *)(*(_QWORD *)(*((_QWORD *)this + 7) + 16LL) + 568LL));
  if ( (v5 & 0x80000000) != 0 )
  {
    v19 = 1346;
    goto LABEL_17;
  }
LABEL_5:
  v8 = *((_QWORD *)this + 2);
  v22[0] = 0;
  v22[1] = 1;
  v21 = (__int64)v22;
  v6 = CWatermarkStack<MilVisualRenderParameter *,8,2,4>::Push(v8 + 864, &v21);
  v5 = v6;
  if ( v6 < 0 )
  {
    v19 = 1362;
    goto LABEL_19;
  }
  DrawingContext = CRenderTarget::GetDrawingContext(this, &v20, v9);
  v5 = DrawingContext;
  if ( DrawingContext < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DrawingContext, 0x555u);
  }
  else
  {
    v11 = CDrawingContext::BeginFrame(
            v20,
            *((struct IRenderTarget **)this + 11),
            (_OWORD *)this + 14,
            *((_BYTE *)this + 560),
            (CRenderTarget *)((char *)this + 132),
            0LL,
            0,
            0LL);
    v5 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x55Au);
    }
    else
    {
      v12 = (struct CVisualTree *)*((_QWORD *)this + 7);
      v21 = 0LL;
      CDrawingContext::CalculateOcclusion((struct CComposition **)v20, v12, 1u, a2, 0, 0LL, &v21);
      v13 = CDrawingContext::DrawVisualTree(v20, *((_QWORD *)this + 7), (float *)a2, 0LL, 0x7FFFFFFF, 1, 0, 1, 0, 1, 0);
      v5 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x571u);
      }
      else
      {
        v14 = *((_QWORD *)this + 13);
        if ( v14
          && (v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 216LL))(*((_QWORD *)this + 13))) != 0
          && (v18 = CComposeTop::FullRender(v15, v20, (char *)this + 132, a2), v5 = v18, v18 < 0) )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x584u);
        }
        else if ( g_LockAndReadOffscreenTarget )
        {
          CDrawingContext::ReadTexture(v20);
        }
      }
      CDrawingContext::EndFrame(v20);
    }
  }
  CComposition::PopRenderParameter(*((_QWORD *)this + 2), 0LL);
  return v5;
}
