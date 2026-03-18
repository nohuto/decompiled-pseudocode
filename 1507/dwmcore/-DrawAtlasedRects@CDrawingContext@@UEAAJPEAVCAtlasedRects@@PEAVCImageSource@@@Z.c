/*
 * XREFs of ?DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z @ 0x180029C90
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004E7A0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x180015758 (-GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList.c)
 *     ?GetRectangleCount@CAtlasedRectsGroup@@UEAAIXZ @ 0x1800172A0 (-GetRectangleCount@CAtlasedRectsGroup@@UEAAIXZ.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180023530 (-BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18002DBD0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180030950 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateNewD2DCommandList@CAtlasedRects@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bitmap@@PEAPEAVCAtlasedRectsCommandList@@@Z @ 0x180070418 (-CreateNewD2DCommandList@CAtlasedRects@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bit.c)
 *     ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x180071AB0 (-DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommand.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ReleaseD2DCommandList@CAtlasedRects@@AEAAXXZ @ 0x1800DC6E4 (-ReleaseD2DCommandList@CAtlasedRects@@AEAAXXZ.c)
 *     Template_qq @ 0x1800E1F4C (Template_qq.c)
 */

__int64 __fastcall CDrawingContext::DrawAtlasedRects(
        CDrawingContext *this,
        struct CAtlasedRects *a2,
        struct CImageSource *a3)
{
  int v6; // r15d
  struct ID2D1PrivateCompositorCommandList *v7; // r12
  __int64 (__fastcall *v8)(CAtlasedRectsGroup *); // rbx
  int v10; // eax
  CD2DCommandList **v11; // r9
  struct ID2D1Bitmap *v12; // rbx
  struct ID2DContextOwner *v13; // rdx
  struct ID2DContext *v14; // rsi
  __int64 v15; // r10
  __int64 v16; // r8
  int ID2DCommandList; // eax
  __int64 v18; // r13
  int NewD2DCommandList; // eax
  unsigned int v21; // [rsp+20h] [rbp-60h]
  struct ID2D1PrivateCompositorCommandList *v22[2]; // [rsp+48h] [rbp-38h] BYREF
  struct ID2D1Bitmap *v23; // [rsp+58h] [rbp-28h] BYREF
  struct CAtlasedRectsCommandList *v24[2]; // [rsp+60h] [rbp-20h] BYREF

  v6 = 0;
  v23 = 0LL;
  v7 = 0LL;
  if ( !*((_BYTE *)this + 2616) && !*((_DWORD *)this + 1439) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(this, &EVTDESC_ETWGUID_DRAWEVENT_Start, 7LL, *((unsigned int *)this + 1438));
  if ( a2 && a3 )
  {
    v8 = *(__int64 (__fastcall **)(CAtlasedRectsGroup *))(*(_QWORD *)a2 + 96LL);
    if ( v8 == CAtlasedRectsGroup::GetRectangleCount ? CAtlasedRectsGroup::GetRectangleCount(a2) : (unsigned int)v8(a2) )
    {
      v10 = CDrawingContext::ApplyRenderStateInternal(this, 0);
      v6 = v10;
      if ( v10 < 0 )
      {
        v21 = 4744;
      }
      else if ( *((_BYTE *)this + 2616) || *((_DWORD *)this + 1439) )
      {
        v22[0] = (struct ID2D1PrivateCompositorCommandList *)0x3F0000003F000000LL;
        v22[1] = (struct ID2D1PrivateCompositorCommandList *)0x3F0000003F000000LL;
        (*(void (__fastcall **)(struct CAtlasedRects *, struct CAtlasedRectsCommandList **))(*(_QWORD *)a2 + 104LL))(
          a2,
          v24);
        v10 = CDrawingContext::DrawSolidRectangle(this);
        v6 = v10;
        if ( v10 >= 0 )
          goto LABEL_30;
        v21 = 4793;
      }
      else
      {
        v10 = CDrawingContext::BitmapResourceToD2DBitmap(
                (__int64)this,
                (struct CImageSource *)((char *)a3 + 8),
                0LL,
                0,
                0LL,
                &v23);
        v6 = v10;
        if ( v10 >= 0 )
        {
          v11 = 0LL;
          v12 = v23;
          v13 = 0LL;
          v14 = (struct ID2DContext *)*((_QWORD *)this + 47);
          v22[0] = 0LL;
          if ( *((_DWORD *)a2 + 24) )
          {
            v15 = *((_QWORD *)a2 + 9);
            while ( 1 )
            {
              v16 = *(_QWORD *)(v15 + 8LL * (unsigned int)v13);
              if ( v14 == *(struct ID2DContext **)(*(_QWORD *)(*(_QWORD *)(v16 + 24) + 24LL) + 16LL) )
                break;
              v13 = (struct ID2DContextOwner *)(unsigned int)((_DWORD)v13 + 1);
              if ( (unsigned int)v13 >= *((_DWORD *)a2 + 24) )
                goto LABEL_19;
            }
            if ( *(struct ID2D1Bitmap **)(v16 + 16) != v23 )
            {
              CAtlasedRects::ReleaseD2DCommandList(a2);
              v24[0] = 0LL;
LABEL_41:
              NewD2DCommandList = CAtlasedRects::CreateNewD2DCommandList(a2, v13, v14, v12, v24);
              v6 = NewD2DCommandList;
              if ( NewD2DCommandList < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, NewD2DCommandList, 0x158u);
LABEL_23:
                if ( v6 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1296u);
                }
                else
                {
                  if ( g_LockAndReadD2DTarget )
                    (*(void (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 44) + 168LL))(
                      *((_QWORD *)this + 44),
                      *((_QWORD *)this + 47),
                      (char *)this + 56);
                  v18 = *((_QWORD *)this + 47);
                  v22[0] = *(struct ID2D1PrivateCompositorCommandList **)(*(_QWORD *)v18 + 160LL);
                  if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v22[0] == CD2DContext::DrawLegacyCommandList )
                    CD2DContext::DrawLegacyCommandList(v18, (char *)this + 56, v7);
                  else
                    ((void (__fastcall *)(__int64, char *, struct ID2D1PrivateCompositorCommandList *))v22[0])(
                      v18,
                      (char *)this + 56,
                      v7);
                  if ( g_LockAndReadD2DTarget )
                    (*(void (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 44) + 168LL))(
                      *((_QWORD *)this + 44),
                      *((_QWORD *)this + 47),
                      (char *)this + 56);
                }
                goto LABEL_30;
              }
              v11 = (CD2DCommandList **)v24[0];
LABEL_20:
              ID2DCommandList = CD2DCommandList::GetID2DCommandList(v11[3], 0LL, v22, (__int64)v11);
              v6 = ID2DCommandList;
              if ( ID2DCommandList < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, ID2DCommandList, 0x15Bu);
              v7 = v22[0];
              goto LABEL_23;
            }
            v11 = *(CD2DCommandList ***)(v15 + 8LL * (unsigned int)v13);
          }
LABEL_19:
          v24[0] = (struct CAtlasedRectsCommandList *)v11;
          if ( v11 )
            goto LABEL_20;
          goto LABEL_41;
        }
        v21 = 4753;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v21);
    }
  }
LABEL_30:
  if ( !*((_BYTE *)this + 2616) && !*((_DWORD *)this + 1439) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(this, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 7LL, *((unsigned int *)this + 1438));
  if ( v23 )
    (*(void (__fastcall **)(struct ID2D1Bitmap *))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v7 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorCommandList *))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v6;
}
