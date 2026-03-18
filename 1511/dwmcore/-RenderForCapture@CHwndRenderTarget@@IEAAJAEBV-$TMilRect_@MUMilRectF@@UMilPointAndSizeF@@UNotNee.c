/*
 * XREFs of ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007D178
 * Callers:
 *     ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x18007CED0 (-GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?Leave@CReadWriteLock@@QEAAXXZ @ 0x18001CD0C (-Leave@CReadWriteLock@@QEAAXXZ.c)
 *     ?EnterWrite@CReadWriteLock@@QEAAXXZ @ 0x18001CD44 (-EnterWrite@CReadWriteLock@@QEAAXXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ProcessRestoreContent@CCompositionSurfaceManager@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x18002B914 (-ProcessRestoreContent@CCompositionSurfaceManager@@QEAAJPEAVIRenderTargetDisplay@@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180044090 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180044630 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAVCOverlayContext@@PEAPEAVCOcclusionContext@@@Z @ 0x180044B58 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x180045060 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180076884 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x1800947D4 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x180094814 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z @ 0x1800AD350 (-GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@@Z @ 0x1800FCD48 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@CoordinateSpace@@.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x18010E108 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderForCapture(CRenderTarget *this, __int128 *a2)
{
  CComposition *v4; // rcx
  int v5; // edi
  struct IRenderTargetDisplay *v6; // rdx
  int v7; // r9d
  int v8; // eax
  bool v9; // r8
  __int64 v10; // rcx
  int DrawingContext; // eax
  int v12; // eax
  struct CVisualTree *v13; // rdx
  BOOL v14; // eax
  __int64 v15; // r14
  __int64 v16; // rax
  int v17; // eax
  unsigned int v19; // [rsp+20h] [rbp-68h]
  CDrawingContext *v20; // [rsp+90h] [rbp+8h] BYREF
  COcclusionContext *v21; // [rsp+A0h] [rbp+18h] BYREF

  v4 = (CComposition *)*((_QWORD *)this + 2);
  v20 = 0LL;
  v5 = 0;
  CComposition::ShowHideCursors(v4, 0);
  v6 = (struct IRenderTargetDisplay *)*((_QWORD *)this + 11);
  if ( !v6 )
  {
    v5 = -2003304442;
    v19 = 1244;
LABEL_3:
    v7 = v5;
LABEL_4:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v19);
    goto LABEL_31;
  }
  if ( !*((_QWORD *)this + 7) )
    goto LABEL_31;
  v8 = CCompositionSurfaceManager::ProcessRestoreContent(
         (CCompositionSurfaceManager *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 16LL),
         v6);
  v5 = v8;
  if ( v8 < 0 )
  {
    v19 = 1254;
LABEL_8:
    v7 = v8;
    goto LABEL_4;
  }
  v10 = *((_QWORD *)this + 7);
  if ( (*(_BYTE *)(*(_QWORD *)(v10 + 24) + 72LL) & 0xF) != 0 )
  {
    if ( *(_BYTE *)(v10 + 32) )
    {
      CReadWriteLock::EnterWrite((RTL_SRWLOCK *)(*(_QWORD *)(v10 + 16) + 568LL));
      v5 = CVisualTree::PreCompute(*((CVisualTree **)this + 7), 0LL);
      CReadWriteLock::Leave((CReadWriteLock *)(*(_QWORD *)(*((_QWORD *)this + 7) + 16LL) + 568LL));
      if ( v5 < 0 )
      {
        v19 = 1276;
        goto LABEL_3;
      }
    }
    else
    {
      v8 = CVisualTree::PreCompute((CVisualTree *)v10, 0LL);
      v5 = v8;
      if ( v8 < 0 )
      {
        v19 = 1280;
        goto LABEL_8;
      }
    }
  }
  *(_BYTE *)(*((_QWORD *)this + 2) + 1136LL) = 1;
  DrawingContext = CRenderTarget::GetDrawingContext(this, &v20, v9);
  v5 = DrawingContext;
  if ( DrawingContext >= 0 )
  {
    v12 = CDrawingContext::BeginFrame(
            v20,
            *((struct IRenderTarget **)this + 11),
            (_OWORD *)this + 14,
            *((_BYTE *)this + 553),
            (CRenderTarget *)((char *)this + 132),
            0LL,
            0,
            0LL);
    v5 = v12;
    if ( v12 >= 0 )
    {
      v13 = (struct CVisualTree *)*((_QWORD *)this + 7);
      v21 = 0LL;
      CDrawingContext::CalculateOcclusion((struct CComposition **)v20, v13, 1u, (__int64)a2, 0, 0LL, &v21);
      v14 = CDrawingContext::DrawVisualTree(v20, *((_QWORD *)this + 7), a2, 0LL, 0x7FFFFFFF, 1, 0, 1, 0, 1, 0);
      v5 = v14;
      if ( v14 >= 0 )
      {
        v15 = *((_QWORD *)this + 13);
        if ( v15
          && (v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v15 + 208LL))(*((_QWORD *)this + 13))) != 0
          && (v17 = CComposeTop::FullRender(v16, (_DWORD)v20, (int)this + 132, (_DWORD)a2, 0LL), v5 = v17, v17 < 0) )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x53Cu);
        }
        else if ( g_LockAndReadOffscreenTarget )
        {
          CDrawingContext::ReadTexture(v20);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x528u);
      }
      CDrawingContext::EndFrame(v20);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x511u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DrawingContext, 0x50Cu);
  }
  *(_BYTE *)(*((_QWORD *)this + 2) + 1136LL) = 0;
LABEL_31:
  CComposition::RestoreCursors(*((CComposition **)this + 2));
  return (unsigned int)v5;
}
