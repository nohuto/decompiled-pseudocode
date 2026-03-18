/*
 * XREFs of ?DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@@PEBVCMILMatrix@@@Z @ 0x180010DD8
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180008100 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180011F00 (-Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?GetD2DCommandList@CCommandListBitmapRepresentation@@QEAAJPEAVCPolygon@@PEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x180011858 (-GetD2DCommandList@CCommandListBitmapRepresentation@@QEAAJPEAVCPolygon@@PEAVID2DContextOwner@@PE.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x180019E68 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18002DBD0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?GetCurrentLayoutSize@CDrawingContext@@AEBAPEBUD2D_SIZE_F@@XZ @ 0x18002E190 (-GetCurrentLayoutSize@CDrawingContext@@AEBAPEBUD2D_SIZE_F@@XZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180030500 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180030950 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004DEE0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E0A0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x180071AB0 (-DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommand.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180073820 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDrawingContext::DrawCommandListBitmapRepresentation(
        struct ID2DContext **this,
        struct CCommandListBitmapRepresentation *a2,
        const struct CMILMatrix *a3)
{
  __int64 v3; // rbx
  struct ID2D1PrivateCompositorCommandList *v4; // r15
  const struct D2D_SIZE_F *CurrentLayoutSize; // rax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  int D2DCommandList; // eax
  int v13; // eax
  struct ID2DContext *v14; // r9
  bool v15; // cf
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v22; // r9d
  float v23; // xmm3_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm2_4
  unsigned int v27; // [rsp+20h] [rbp-89h]
  char v28; // [rsp+40h] [rbp-69h]
  struct ID2D1PrivateCompositorCommandList *v29; // [rsp+48h] [rbp-61h] BYREF
  __int64 v30; // [rsp+50h] [rbp-59h] BYREF
  __int64 v31; // [rsp+58h] [rbp-51h]
  __int128 v32; // [rsp+60h] [rbp-49h] BYREF
  __int128 v33; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v34[64]; // [rsp+80h] [rbp-29h] BYREF

  v3 = *(_QWORD *)a2;
  v4 = 0LL;
  v29 = 0LL;
  v28 = 0;
  CurrentLayoutSize = CDrawingContext::GetCurrentLayoutSize((CDrawingContext *)this);
  v9 = (*(__int64 (__fastcall **)(struct CCommandListBitmapRepresentation *, _QWORD, const struct D2D_SIZE_F *, __int128 *))(v3 + 80))(
         a2,
         0LL,
         CurrentLayoutSize,
         &v33);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x87Cu);
    return v10;
  }
  if ( a3 )
  {
    v11 = CDrawingContext::PushTransformInternal((CDrawingContext *)this, 0LL, a3, 1, 1);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x880u);
      return v10;
    }
    v28 = 1;
  }
  if ( *((_BYTE *)this + 2616) || *((_DWORD *)this + 1439) )
  {
    v30 = 0x3F8000003F800000LL;
    v31 = 0x3F8000003F800000LL;
    v13 = CDrawingContext::DrawSolidRectangle((CDrawingContext *)this);
    v10 = v13;
    if ( v13 < 0 )
    {
      v27 = 2249;
      goto LABEL_55;
    }
  }
  else
  {
    D2DCommandList = CCommandListBitmapRepresentation::GetD2DCommandList(
                       a2,
                       this[338],
                       (struct ID2DContextOwner *)(this + 7),
                       this[47],
                       &v29);
    v10 = D2DCommandList;
    if ( D2DCommandList < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DCommandList, 0x88Au);
      v4 = v29;
    }
    else
    {
      v4 = v29;
      if ( v29 )
      {
        v13 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)this, 0);
        v10 = v13;
        if ( v13 >= 0 )
        {
          if ( *((_DWORD *)this + 646) )
          {
            v14 = this[47];
            v15 = *((_DWORD *)this + 62) != 0;
            *(_QWORD *)&v32 = v14;
            v16 = *(_QWORD *)v14;
            LODWORD(v29) = v15;
            v30 = *(_QWORD *)(v16 + 160);
            if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v30 == CD2DContext::DrawLegacyCommandList )
              v17 = CD2DContext::DrawLegacyCommandList(v14, this + 7, v4);
            else
              v17 = ((__int64 (__fastcall *)(_QWORD, struct ID2DContext **, struct ID2D1PrivateCompositorCommandList *))v30)(
                      v32,
                      this + 7,
                      v4);
            v10 = v17;
            if ( v17 >= 0 )
            {
              if ( (*(unsigned __int8 (__fastcall **)(struct CCommandListBitmapRepresentation *))(*(_QWORD *)a2 + 48LL))(a2) )
                *((_BYTE *)this + 5938) = 1;
              if ( (*(unsigned __int8 (__fastcall **)(struct CCommandListBitmapRepresentation *))(*(_QWORD *)a2 + 40LL))(a2) )
                *((_BYTE *)this + 5940) = 1;
              if ( (*(unsigned __int8 (__fastcall **)(struct CCommandListBitmapRepresentation *))(*(_QWORD *)a2 + 32LL))(a2)
                && *((_BYTE *)this + 5937)
                && *((_DWORD *)this + 1440) == 1 )
              {
                CBaseMatrixStack::Top((CBaseMatrixStack *)(this + 57), (struct CBaseMatrix *)v34);
                v32 = v33;
                CBaseMatrix::Transform2DBounds(
                  (CBaseMatrix *)v34,
                  (const struct MilRectF *)&v32,
                  (struct MilRectF *)&v30);
                CScopedClipStack::GetTopClipBoundsInScope(this + 85, &v32);
                v23 = *(float *)&v30;
                if ( *(float *)&v32 > *(float *)&v30 )
                {
                  v23 = *(float *)&v32;
                  LODWORD(v30) = v32;
                }
                v24 = *((float *)&v30 + 1);
                if ( *((float *)&v32 + 1) > *((float *)&v30 + 1) )
                {
                  v24 = *((float *)&v32 + 1);
                  HIDWORD(v30) = DWORD1(v32);
                }
                v25 = *(float *)&v31;
                if ( *(float *)&v31 > *((float *)&v32 + 2) )
                {
                  v25 = *((float *)&v32 + 2);
                  LODWORD(v31) = DWORD2(v32);
                }
                v26 = *((float *)&v31 + 1);
                if ( *((float *)&v31 + 1) > *((float *)&v32 + 3) )
                {
                  v26 = *((float *)&v32 + 3);
                  HIDWORD(v31) = HIDWORD(v32);
                }
                if ( v25 <= v23 || v26 <= v24 )
                {
                  v31 = 0LL;
                  v30 = 0LL;
                }
                if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v30) )
                  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((char *)this + 5764, &v30);
              }
              goto LABEL_19;
            }
            v27 = 2231;
          }
          else
          {
            v10 = -2147467259;
            v27 = 2202;
          }
          v22 = v10;
          goto LABEL_56;
        }
        v27 = 2197;
LABEL_55:
        v22 = v13;
LABEL_56:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, v27);
      }
    }
  }
LABEL_19:
  if ( v28 )
  {
    v18 = *((_DWORD *)this + 106);
    if ( v18 )
      *((_DWORD *)this + 106) = v18 - 1;
    v19 = *((_DWORD *)this + 114);
    if ( v19 )
      *((_DWORD *)this + 114) = v19 - 1;
    v20 = *((_DWORD *)this + 122);
    if ( v20 )
      *((_DWORD *)this + 122) = v20 - 1;
    *((_BYTE *)this + 5928) = 1;
  }
  if ( v4 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorCommandList *))(*(_QWORD *)v4 + 16LL))(v4);
  return v10;
}
