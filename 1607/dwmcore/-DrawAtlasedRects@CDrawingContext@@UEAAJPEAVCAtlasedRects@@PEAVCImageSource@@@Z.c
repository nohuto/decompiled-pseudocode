/*
 * XREFs of ?DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z @ 0x1800691B0
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004DC00 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180064710 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18006B7C0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E9A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x18006F230 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x18007CFB0 (-DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommand.c)
 *     ?GetD2D1CommandListForContext@CAtlasedRects@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bitmap@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18009C564 (-GetD2D1CommandListForContext@CAtlasedRects@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2.c)
 *     ?GetRectangleCount@CAtlasedRectsGroup@@UEAAIXZ @ 0x18009D5E0 (-GetRectangleCount@CAtlasedRectsGroup@@UEAAIXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x180106698 (Template_qq.c)
 */

__int64 __fastcall CDrawingContext::DrawAtlasedRects(
        struct ID2DContext **this,
        struct CAtlasedRects *a2,
        struct CImageSource *a3)
{
  unsigned int v6; // edi
  struct ID2D1PrivateCompositorCommandList *v7; // rsi
  unsigned int (__fastcall *v8)(CAtlasedRectsGroup *__hidden); // rax
  int v10; // eax
  int v11; // eax
  struct ID2DContextOwner *v12; // rdx
  int D2D1CommandListForContext; // eax
  struct ID2DContext *v14; // rcx
  void (__fastcall *v15)(struct ID2DContext *, char *, struct ID2D1PrivateCompositorCommandList *); // rax
  char *v16; // rdx
  int v18; // eax
  struct ID2D1Bitmap *v19; // [rsp+50h] [rbp-30h] BYREF
  struct ID2D1PrivateCompositorCommandList *v20[2]; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v21[16]; // [rsp+68h] [rbp-18h] BYREF

  v6 = 0;
  v19 = 0LL;
  v7 = 0LL;
  v20[0] = 0LL;
  if ( !*((_BYTE *)this + 3048) && !*((_DWORD *)this + 1621) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(this, &EVTDESC_ETWGUID_DRAWEVENT_Start, 7LL, *((unsigned int *)this + 1620));
  if ( a2 && a3 )
  {
    v8 = *(unsigned int (__fastcall **)(CAtlasedRectsGroup *__hidden))(*(_QWORD *)a2 + 112LL);
    if ( v8 == CAtlasedRectsGroup::GetRectangleCount
       ? CAtlasedRectsGroup::GetRectangleCount(a2)
       : ((__int64 (__fastcall *)(struct CAtlasedRects *))v8)(a2) )
    {
      v10 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)this, 0);
      v6 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1257u);
      }
      else if ( *((_BYTE *)this + 3048) || *((_DWORD *)this + 1621) )
      {
        v20[0] = (struct ID2D1PrivateCompositorCommandList *)0x3F0000003F000000LL;
        v20[1] = (struct ID2D1PrivateCompositorCommandList *)0x3F0000003F000000LL;
        (*(void (__fastcall **)(struct CAtlasedRects *, _BYTE *))(*(_QWORD *)a2 + 120LL))(a2, v21);
        v18 = CDrawingContext::DrawSolidRectangle((CDrawingContext *)this, (struct MilRectF *)v21);
        v6 = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x1287u);
      }
      else
      {
        v11 = CDrawingContext::BitmapResourceToD2DBitmap(
                (CDrawingContext *)this,
                (struct CImageSource *)((char *)a3 + 8),
                0LL,
                0,
                0LL,
                &v19);
        v6 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x125Fu);
        }
        else
        {
          D2D1CommandListForContext = CAtlasedRects::GetD2D1CommandListForContext(a2, v12, this[57], v19, v20);
          v6 = D2D1CommandListForContext;
          if ( D2D1CommandListForContext < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, D2D1CommandListForContext, 0x1264u);
            v7 = v20[0];
          }
          else
          {
            if ( g_LockAndReadD2DTarget )
              (*(void (__fastcall **)(struct ID2DContext *, struct ID2DContext *, char *))(*(_QWORD *)this[54] + 176LL))(
                this[54],
                this[57],
                (char *)this + 128);
            CDrawingContext::IsIn3DMode((CDrawingContext *)(this + 16));
            v7 = v20[0];
            v14 = this[57];
            v15 = *(void (__fastcall **)(struct ID2DContext *, char *, struct ID2D1PrivateCompositorCommandList *))(*(_QWORD *)v14 + 152LL);
            v16 = (char *)(this + 16);
            if ( (char *)v15 == (char *)CD2DContext::DrawLegacyCommandList )
              CD2DContext::DrawLegacyCommandList(v14, v16, v20[0]);
            else
              v15(v14, v16, v20[0]);
            if ( g_LockAndReadD2DTarget )
              (*(void (__fastcall **)(struct ID2DContext *, struct ID2DContext *, char *))(*(_QWORD *)this[54] + 176LL))(
                this[54],
                this[57],
                (char *)this + 128);
          }
        }
      }
    }
  }
  if ( !*((_BYTE *)this + 3048) && !*((_DWORD *)this + 1621) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(this, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 7LL, *((unsigned int *)this + 1620));
  if ( v19 )
    (*(void (__fastcall **)(struct ID2D1Bitmap *))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v7 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorCommandList *))(*(_QWORD *)v7 + 16LL))(v7);
  return v6;
}
