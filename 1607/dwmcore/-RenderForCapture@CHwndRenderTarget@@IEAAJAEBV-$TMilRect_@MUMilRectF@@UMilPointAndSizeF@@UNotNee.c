/*
 * XREFs of ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800095B8
 * Callers:
 *     ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x180009330 (-GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?ProcessRestoreContent@CCompositionSurfaceManager@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x180005CD0 (-ProcessRestoreContent@CCompositionSurfaceManager@@QEAAJPEAVIRenderTargetDisplay@@@Z.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z @ 0x1800091AC (-GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C8B8 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18000CD9C (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x18000CDD0 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?Leave@CReadWriteLock@@QEAAXXZ @ 0x18001FF38 (-Leave@CReadWriteLock@@QEAAXXZ.c)
 *     ?EnterWrite@CReadWriteLock@@QEAAXXZ @ 0x18001FF70 (-EnterWrite@CReadWriteLock@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DF@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006C640 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006CC40 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAPEAVCOcclusionContext@@@Z @ 0x18006D184 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18006D600 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x1801076EC (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180111CC4 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@CoordinateSpace@@.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderForCapture(CRenderTarget *this, __int64 a2)
{
  CComposition *v4; // rcx
  int v5; // ebx
  struct IRenderTargetDisplay *v6; // rdx
  int v7; // eax
  __int64 v8; // rcx
  int DrawingContext; // eax
  CDrawingContext *v10; // rsi
  int v11; // eax
  struct CVisualTree *v12; // rdx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  int v17; // r9d
  int v18; // eax
  unsigned int v19; // [rsp+20h] [rbp-58h]
  CDrawingContext *v20; // [rsp+80h] [rbp+8h] BYREF

  v4 = (CComposition *)*((_QWORD *)this + 2);
  v20 = 0LL;
  v5 = 0;
  CComposition::ShowHideCursors(v4, 0);
  v6 = (struct IRenderTargetDisplay *)*((_QWORD *)this + 20);
  if ( !v6 )
  {
    v5 = -2003304442;
    v19 = 1303;
LABEL_16:
    v17 = v5;
LABEL_29:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, v19);
    goto LABEL_14;
  }
  if ( !*((_QWORD *)this + 16) )
    goto LABEL_14;
  v7 = (unsigned int)CCompositionSurfaceManager::ProcessRestoreContent(
                       (CCompositionSurfaceManager *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 16LL),
                       v6);
  v5 = v7;
  if ( v7 < 0 )
  {
    v19 = 1313;
    goto LABEL_28;
  }
  v8 = *((_QWORD *)this + 16);
  if ( (*(_BYTE *)(*(_QWORD *)(v8 + 24) + 152LL) & 0xF) != 0 )
  {
    if ( *(_BYTE *)(v8 + 32) )
    {
      CReadWriteLock::EnterWrite((CReadWriteLock *)(*(_QWORD *)(v8 + 16) + 576LL));
      v5 = CVisualTree::PreCompute(*((CVisualTree **)this + 16));
      CReadWriteLock::Leave((CReadWriteLock *)(*(_QWORD *)(*((_QWORD *)this + 16) + 16LL) + 576LL));
      if ( v5 >= 0 )
        goto LABEL_5;
      v19 = 1335;
      goto LABEL_16;
    }
    v7 = CVisualTree::PreCompute((CVisualTree *)v8);
    v5 = v7;
    if ( v7 >= 0 )
      goto LABEL_5;
    v19 = 1339;
LABEL_28:
    v17 = v7;
    goto LABEL_29;
  }
LABEL_5:
  *(_BYTE *)(*((_QWORD *)this + 2) + 1240LL) = 1;
  DrawingContext = CRenderTarget::GetDrawingContext(this, &v20);
  v5 = DrawingContext;
  if ( DrawingContext < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DrawingContext, 0x547u);
  }
  else
  {
    v10 = v20;
    v11 = CDrawingContext::BeginFrame(
            v20,
            *((struct IRenderTarget **)this + 20),
            (int)this + 368,
            (__int64)this + 204,
            0LL,
            0,
            0LL);
    v5 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x54Cu);
    }
    else
    {
      v12 = (struct CVisualTree *)*((_QWORD *)this + 16);
      v20 = 0LL;
      CDrawingContext::CalculateOcclusion(v10, v12, 0, (__int64)&v20);
      v13 = CDrawingContext::DrawVisualTree(v10, 0x7FFFFFFF, 1, 0, 1, 0, 1, 0);
      v5 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x562u);
      }
      else
      {
        v14 = *((_QWORD *)this + 22);
        if ( v14
          && (v15 = *(_QWORD *)(v14 + 416)) != 0
          && (v18 = CComposeTop::FullRender(v15, v10, (char *)this + 204, a2), v5 = v18, v18 < 0) )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x575u);
        }
        else if ( g_LockAndReadOffscreenTarget )
        {
          CDrawingContext::ReadTexture(v10);
        }
      }
      CDrawingContext::EndFrame(v10);
    }
  }
  *(_BYTE *)(*((_QWORD *)this + 2) + 1240LL) = 0;
LABEL_14:
  CComposition::RestoreCursors(*((CComposition **)this + 2));
  return (unsigned int)v5;
}
