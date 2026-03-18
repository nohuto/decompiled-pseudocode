/*
 * XREFs of ?DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z @ 0x18003E8D0
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18009ECF0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x180020EC0 (-DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommand.c)
 *     ?GetD2D1CommandListForContext@CAtlasedRects@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bitmap@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18002540C (-GetD2D1CommandListForContext@CAtlasedRects@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2.c)
 *     ?GetRectangleCount@CAtlasedRectsGroup@@UEAAIXZ @ 0x1800266B0 (-GetRectangleCount@CAtlasedRectsGroup@@UEAAIXZ.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x180037090 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800378DC (-BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180042FC0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180046830 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     Template_qq @ 0x180100238 (Template_qq.c)
 */

__int64 __fastcall CDrawingContext::DrawAtlasedRects(
        struct ID2DContext **this,
        struct CAtlasedRects *a2,
        struct CImageSource *a3)
{
  unsigned int v6; // r15d
  struct ID2D1PrivateCompositorCommandList *v7; // rsi
  __int64 (__fastcall *v8)(CAtlasedRectsGroup *); // rbx
  int v10; // eax
  int v11; // eax
  struct ID2DContextOwner *v12; // rdx
  int D2D1CommandListForContext; // eax
  char IsIn3DMode; // al
  __int64 v15; // r9
  int v16; // ecx
  int v17; // ebx
  __int64 v18; // r13
  unsigned int v19; // edi
  int v21; // eax
  struct ID2D1Bitmap *v22; // [rsp+40h] [rbp-30h] BYREF
  __int64 v23; // [rsp+48h] [rbp-28h]
  __int64 v24; // [rsp+50h] [rbp-20h]
  struct ID2D1PrivateCompositorCommandList *v25[2]; // [rsp+58h] [rbp-18h] BYREF

  v6 = 0;
  v22 = 0LL;
  v7 = 0LL;
  v25[0] = 0LL;
  if ( !*((_BYTE *)this + 2616) && !*((_DWORD *)this + 1447) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(this, &EVTDESC_ETWGUID_DRAWEVENT_Start, 7LL, *((unsigned int *)this + 1446));
  if ( a2 && a3 )
  {
    v8 = *(__int64 (__fastcall **)(CAtlasedRectsGroup *))(*(_QWORD *)a2 + 104LL);
    if ( v8 == CAtlasedRectsGroup::GetRectangleCount ? CAtlasedRectsGroup::GetRectangleCount(a2) : (unsigned int)v8(a2) )
    {
      v10 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)this, 0);
      v6 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x129Fu);
      }
      else if ( *((_BYTE *)this + 2616) || *((_DWORD *)this + 1447) )
      {
        v23 = 0x3F0000003F000000LL;
        v24 = 0x3F0000003F000000LL;
        (*(void (__fastcall **)(struct CAtlasedRects *, struct ID2D1PrivateCompositorCommandList **))(*(_QWORD *)a2 + 112LL))(
          a2,
          v25);
        v21 = CDrawingContext::DrawSolidRectangle((CDrawingContext *)this);
        v6 = v21;
        if ( v21 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x12D0u);
      }
      else
      {
        v11 = CDrawingContext::BitmapResourceToD2DBitmap(
                (CDrawingContext *)this,
                (struct CImageSource *)((char *)a3 + 8),
                0LL,
                0,
                0LL,
                &v22);
        v6 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x12A8u);
        }
        else
        {
          D2D1CommandListForContext = CAtlasedRects::GetD2D1CommandListForContext(a2, v12, this[47], v22, v25);
          v6 = D2D1CommandListForContext;
          if ( D2D1CommandListForContext < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, D2D1CommandListForContext, 0x12ADu);
            v7 = v25[0];
          }
          else
          {
            if ( g_LockAndReadD2DTarget )
              (*(void (__fastcall **)(struct ID2DContext *, struct ID2DContext *, char *))(*(_QWORD *)this[44] + 168LL))(
                this[44],
                this[47],
                (char *)this + 56);
            IsIn3DMode = CDrawingContext::IsIn3DMode((CDrawingContext *)(this + 7));
            v16 = *((_DWORD *)this + 63);
            v17 = 0;
            if ( v16 )
            {
              if ( v16 == 2 )
              {
                v17 = 1;
              }
              else if ( v16 == 4 )
              {
                v17 = 8;
              }
            }
            v18 = (__int64)this[47];
            v19 = *((_DWORD *)this + 62) != 0;
            v23 = *(_QWORD *)(*(_QWORD *)v18 + 160LL);
            v7 = v25[0];
            if ( (__int64 (__fastcall *)(__int64, CDrawingContext *, __int64, __int64, unsigned int, int, int, char))v23 == CD2DContext::DrawLegacyCommandList )
              CD2DContext::DrawLegacyCommandList(
                v18,
                (CDrawingContext *)(this + 7),
                (__int64)v25[0],
                v15,
                v19,
                v17,
                0,
                IsIn3DMode);
            else
              ((void (__fastcall *)(__int64, struct ID2DContext **, struct ID2D1PrivateCompositorCommandList *))v23)(
                v18,
                this + 7,
                v25[0]);
            if ( g_LockAndReadD2DTarget )
              (*(void (__fastcall **)(struct ID2DContext *, struct ID2DContext *, char *))(*(_QWORD *)this[44] + 168LL))(
                this[44],
                this[47],
                (char *)this + 56);
          }
        }
      }
    }
  }
  if ( !*((_BYTE *)this + 2616) && !*((_DWORD *)this + 1447) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(this, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 7LL, *((unsigned int *)this + 1446));
  if ( v22 )
    (*(void (__fastcall **)(struct ID2D1Bitmap *))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v7 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorCommandList *))(*(_QWORD *)v7 + 16LL))(v7);
  return v6;
}
