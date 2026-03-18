/*
 * XREFs of ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180061320
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037D60 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000BE00 (-GetBounds@CCompositionSurfaceBitmap@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetBorderColor@CCompositionSurfaceBitmap@@UEBA?AU_D3DCOLORVALUE@@XZ @ 0x18002E5E0 (-GetBorderColor@CCompositionSurfaceBitmap@@UEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@UEBA?AW4SizePreference@@XZ @ 0x18002E610 (-GetSizePreference@CCompositionSurfaceBitmap@@UEBA-AW4SizePreference@@XZ.c)
 *     ?VisualWasRendered@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x18003C6AC (-VisualWasRendered@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180047C60 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x18004D87C (-ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingC.c)
 *     ?IsEmpty@CShape@@QEBA_NXZ @ 0x18004DE74 (-IsEmpty@CShape@@QEBA_NXZ.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x18004E9F8 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ @ 0x18005EE4C (-GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ.c)
 *     ?UpdateSpriteClipShape@CWindowNode@@AEAAJXZ @ 0x18005EF3C (-UpdateSpriteClipShape@CWindowNode@@AEAAJXZ.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18005F160 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x1800644A8 (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800707C0 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ??$UnRegisterNotifier@VCFlipChain@@@CResource@@QEAAXAEAPEAVCFlipChain@@@Z @ 0x180085C1C (--$UnRegisterNotifier@VCFlipChain@@@CResource@@QEAAXAEAPEAVCFlipChain@@@Z.c)
 *     ?NeedsConfirmUpdateId@CGdiSpriteBitmap@@UEAA_NXZ @ 0x180087570 (-NeedsConfirmUpdateId@CGdiSpriteBitmap@@UEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DisplayBufferReady@CFlipChain@@QEAA_NXZ @ 0x1800AE0F4 (-DisplayBufferReady@CFlipChain@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?AddTokenForRenderContent@FRAME_TIME_INFO@@QEAAJPEBUConfirmPresentHistoryToken@@@Z @ 0x180104318 (-AddTokenForRenderContent@FRAME_TIME_INFO@@QEAAJPEBUConfirmPresentHistoryToken@@@Z.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x18010E44C (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?GetClipRegion@CWindowNode@@AEAAJPEAPEAUHRGN__@@@Z @ 0x1801236BC (-GetClipRegion@CWindowNode@@AEAAJPEAPEAUHRGN__@@@Z.c)
 *     ?GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z @ 0x18012380C (-GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z.c)
 *     ?RenderBlackImage@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x180123E1C (-RenderBlackImage@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?FindRemoteApplicationNoRef@CRemoteApplicationWindowSet@@QEAAPEAVCRemoteApplicationWindow@@_K@Z @ 0x180138D30 (-FindRemoteApplicationNoRef@CRemoteApplicationWindowSet@@QEAAPEAVCRemoteApplicationWindow@@_K@Z.c)
 */

__int64 __fastcall CWindowNode::RenderContent(CWindowNode *this, struct CDrawingContext *a2, bool *a3)
{
  __int64 v3; // rdi
  bool v5; // zf
  CShape *v7; // r12
  char v8; // r15
  __int64 v9; // rax
  _DWORD *v10; // r15
  char *v11; // r14
  CCompositionSurfaceBitmap *v12; // rcx
  unsigned int v13; // ebx
  CFlipChain *v14; // rcx
  int v15; // r14d
  __int64 v16; // r15
  CShape *v18; // rbx
  CGeometry *v19; // rcx
  unsigned int v20; // edx
  int v21; // eax
  bool (__fastcall *v22)(CGdiSpriteBitmap *__hidden); // rdi
  bool v23; // al
  _QWORD *v24; // rcx
  CShape *DxClipShapeNoRef; // rax
  int v26; // eax
  int updated; // eax
  const struct ConfirmPresentHistoryToken *v28; // rax
  int v29; // eax
  int Bounds; // eax
  __int64 v31; // rdi
  __int128 v32; // xmm0
  unsigned int v33; // r14d
  CShape *v34; // rax
  int v35; // eax
  int LastKnownGoodDxClipShape; // eax
  unsigned int v37; // ecx
  __int64 v38; // rax
  CBitmapResource *v39; // r9
  int ClipRegion; // eax
  __int64 v41; // rax
  CBitmapResource *v42; // r14
  CShape *v43; // rax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // r9
  int v47; // edx
  unsigned int v48; // r8d
  int v49; // eax
  __int64 i; // rbx
  __int64 v51; // rdx
  __int64 v52; // r9
  int v53; // edx
  unsigned int v54; // r8d
  int v55; // eax
  float v56; // xmm0_4
  float v57; // xmm1_4
  float v58; // xmm2_4
  float v59; // xmm3_4
  struct CRemoteApplicationWindow *RemoteApplicationNoRef; // rbx
  void *v61; // rcx
  unsigned int v62; // [rsp+28h] [rbp-E0h]
  unsigned int v63; // [rsp+28h] [rbp-E0h]
  char v64; // [rsp+88h] [rbp-80h] BYREF
  char v65; // [rsp+89h] [rbp-7Fh]
  int v66; // [rsp+8Ch] [rbp-7Ch]
  bool *v67; // [rsp+90h] [rbp-78h]
  HRGN v68[2]; // [rsp+98h] [rbp-70h] BYREF
  CShape *v69[2]; // [rsp+A8h] [rbp-60h] BYREF
  struct _D3DCOLORVALUE v70; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v71[64]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v72; // [rsp+130h] [rbp+28h]

  v72 = v3;
  LOBYTE(v3) = 0;
  v5 = *((_QWORD *)this + 141) == 0LL;
  v67 = a3;
  v66 = v3;
  if ( !v5 || *((_QWORD *)this + 144) )
  {
    if ( *((_BYTE *)this + 1208) )
    {
      DxClipShapeNoRef = CWindowNode::GetDxClipShapeNoRef(this);
      if ( DxClipShapeNoRef )
      {
        LODWORD(v3) = (unsigned __int8)CShape::IsEmpty(DxClipShapeNoRef) == 0;
        v66 = v3;
      }
    }
  }
  v7 = 0LL;
  v8 = 0;
  v69[0] = 0LL;
  if ( !*((_BYTE *)this + 1199) )
  {
LABEL_4:
    v9 = *((_QWORD *)a2 + 695);
    v10 = 0LL;
    if ( *(_BYTE *)(v9 + 32) )
    {
      v11 = (char *)this + 432;
    }
    else
    {
      v24 = (_QWORD *)*((_QWORD *)this + 52);
      if ( v24 == (_QWORD *)((char *)this + 416) )
        goto LABEL_10;
      while ( 1 )
      {
        v11 = (char *)(v24 - 33);
        if ( v24[4] == v9 )
          break;
        v24 = (_QWORD *)*v24;
        if ( v24 == (_QWORD *)((char *)this + 416) )
          goto LABEL_10;
      }
    }
    if ( v11 )
    {
      if ( !*((_QWORD *)v11 + 4) )
      {
        LOBYTE(v3) = v66;
        *((_QWORD *)v11 + 4) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v11 + 3) + 248LL))(*((_QWORD *)v11 + 3));
      }
      v10 = (_DWORD *)*((_QWORD *)v11 + 4);
    }
LABEL_10:
    if ( !*((_QWORD *)this + 124) || *((_BYTE *)this + 1196) )
      goto LABEL_11;
    v18 = 0LL;
    v15 = 0;
    v68[0] = 0LL;
    if ( *((_BYTE *)this + 1224) )
    {
      updated = CWindowNode::UpdateSpriteClipShape(this);
      v15 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x1425u);
        v18 = (CShape *)v67;
        goto LABEL_32;
      }
      *((_BYTE *)this + 1224) = 0;
    }
    if ( *((_QWORD *)this + 152) )
    {
      v18 = (CShape *)*((_QWORD *)this + 152);
    }
    else
    {
      v19 = (CGeometry *)*((_QWORD *)this + 129);
      if ( v19 )
      {
        CGeometry::GetShapeDataNoRef(v19, (const struct D2D_SIZE_F *)((char *)this + 132), (struct CShape **)v68);
        v18 = (CShape *)v68[0];
      }
    }
LABEL_32:
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xCC1u);
    }
    else
    {
      if ( v10 )
        v20 = v10[6];
      else
        v20 = 0;
      v21 = CWindowNode::RenderImage(
              this,
              a2,
              (__int64)v10,
              *((CBitmapResource **)this + 124),
              v18,
              *((_DWORD *)this + 274),
              (__int64)this + 1044,
              (__int64)this + 1080,
              v20,
              v3,
              0,
              0,
              0LL);
      v15 = v21;
      if ( v21 >= 0 )
      {
        v22 = *(bool (__fastcall **)(CGdiSpriteBitmap *__hidden))(**((_QWORD **)this + 124) + 208LL);
        if ( v22 == CGdiSpriteBitmap::NeedsConfirmUpdateId )
          v23 = CGdiSpriteBitmap::NeedsConfirmUpdateId(*((CGdiSpriteBitmap **)this + 124));
        else
          v23 = v22(*((CGdiSpriteBitmap **)this + 124));
        if ( v23 )
        {
          v28 = (const struct ConfirmPresentHistoryToken *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 124)
                                                                                             + 216LL))(*((_QWORD *)this + 124));
          v29 = FRAME_TIME_INFO::AddTokenForRenderContent(*(FRAME_TIME_INFO **)(*((_QWORD *)this + 2) + 344LL), v28);
          v15 = v29;
          if ( v29 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0xCD0u);
            goto LABEL_22;
          }
        }
LABEL_11:
        v12 = (CCompositionSurfaceBitmap *)*((_QWORD *)this + 144);
        v13 = *((_DWORD *)this + 274) & 0xFFFFFFFD;
        if ( v12 )
        {
          Bounds = CCompositionSurfaceBitmap::GetBounds(v12, 0LL, 0LL, (__int64)&v70);
          v15 = Bounds;
          if ( Bounds < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0xCDDu);
            goto LABEL_22;
          }
          v31 = *((_QWORD *)this + 144);
          if ( (unsigned int)CCompositionSurfaceBitmap::GetSizePreference(v31 + 40) == 1 )
          {
            v65 = 1;
            v64 = 0;
            v32 = *(_OWORD *)&CCompositionSurfaceBitmap::GetBorderColor((CCompositionSurfaceBitmap *)(v31 + 40), &v70)->r;
            v68[0] = (HRGN)v69;
            *(_OWORD *)v69 = v32;
          }
          else
          {
            v65 = 0;
            v68[0] = 0LL;
            v64 = 1;
          }
          if ( v10 )
            v33 = v10[9];
          else
            v33 = 0;
          if ( v31 )
            v31 += 48LL;
          v34 = CWindowNode::GetDxClipShapeNoRef(this);
          v35 = CWindowNode::RenderImage(
                  this,
                  a2,
                  (__int64)v10,
                  (CBitmapResource *)v31,
                  v34,
                  v13,
                  0LL,
                  0LL,
                  v33,
                  v66,
                  v64,
                  v65,
                  (struct _D3DCOLORVALUE *)v68[0]);
          v15 = v35;
          if ( v35 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0xCF2u);
            goto LABEL_22;
          }
        }
        else
        {
          v14 = (CFlipChain *)*((_QWORD *)this + 141);
          if ( v14 )
          {
            if ( CFlipChain::DisplayBufferReady(v14) || !*((_QWORD *)this + 142) )
            {
              CResource::UnRegisterNotifier<CFlipChain>(this, (char *)this + 1136);
              if ( v10 )
                LODWORD(v69[0]) = v10[7];
              else
                LODWORD(v69[0]) = 0;
              v41 = *((_QWORD *)this + 141);
              if ( v41 )
                v42 = (CBitmapResource *)(v41 + 8);
              else
                v42 = 0LL;
              v43 = CWindowNode::GetDxClipShapeNoRef(this);
              v44 = CWindowNode::RenderImage(
                      this,
                      a2,
                      (__int64)v10,
                      v42,
                      v43,
                      v13,
                      0LL,
                      (__int64)this + 1080,
                      (unsigned int)v69[0],
                      v66,
                      0,
                      0,
                      0LL);
              v15 = v44;
              if ( v44 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v44, 0xD15u);
                goto LABEL_22;
              }
            }
            else
            {
              LastKnownGoodDxClipShape = CWindowNode::GetLastKnownGoodDxClipShape(this, v69);
              v15 = LastKnownGoodDxClipShape;
              if ( LastKnownGoodDxClipShape < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, LastKnownGoodDxClipShape, 0xD25u);
                v7 = v69[0];
                goto LABEL_20;
              }
              if ( v10 )
                v37 = v10[7];
              else
                v37 = 0;
              v38 = *((_QWORD *)this + 142);
              if ( v38 )
                v39 = (CBitmapResource *)(v38 + 8);
              else
                v39 = 0LL;
              v7 = v69[0];
              ClipRegion = CWindowNode::RenderImage(
                             this,
                             a2,
                             (__int64)v10,
                             v39,
                             v69[0],
                             v13,
                             0LL,
                             (__int64)this + 1080,
                             v37,
                             v66,
                             0,
                             0,
                             0LL);
              v15 = ClipRegion;
              if ( ClipRegion < 0 )
              {
                v62 = 3376;
                goto LABEL_137;
              }
            }
          }
        }
        if ( *(_QWORD *)(*((_QWORD *)this + 2) + 352LL) != *((_QWORD *)this + 27) )
        {
          *((_DWORD *)this + 72) = 0;
          *(_QWORD *)((char *)this + 292) = 1LL;
          *((_BYTE *)this + 73) &= ~0x80u;
        }
        v15 = 0;
        if ( *((_BYTE *)a2 + 5968) )
        {
          if ( qword_1801A39E8 )
          {
            v45 = 0LL;
            if ( *((_DWORD *)qword_1801A39E8 + 18) )
            {
              v46 = *((_QWORD *)qword_1801A39E8 + 6);
              while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v46 + 8 * v45)) )
              {
                v45 = (unsigned int)(v47 + 1);
                if ( (unsigned int)v45 >= v48 )
                  goto LABEL_16;
              }
              if ( !(*(unsigned __int8 (__fastcall **)(CWindowNode *, __int64))(*(_QWORD *)this + 48LL))(this, 33LL) )
              {
                v49 = (*(__int64 (__fastcall **)(CWindowNode *, _QWORD, struct _D3DCOLORVALUE *))(*(_QWORD *)this + 152LL))(
                        this,
                        *((_QWORD *)a2 + 418),
                        &v70);
                v15 = v49;
                if ( v49 >= 0 )
                {
                  CBaseMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 456), (struct CBaseMatrix *)v71);
                  CBaseMatrix::Transform2DBounds(
                    (CBaseMatrix *)v71,
                    (const struct MilRectF *)&v70,
                    (struct MilRectF *)v68);
                  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 1432); i = (unsigned int)(i + 1) )
                    CVisual::ExcludeFromVisibleRegion(*(CVisual **)(*((_QWORD *)a2 + 713) + 8 * i), (__int64)v68, a2);
                }
                else
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0x1DC1u);
                }
              }
            }
          }
        }
LABEL_16:
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xB8Fu);
        }
        else
        {
          v16 = *((_QWORD *)this + 45);
          if ( v16 )
          {
            v64 = 0;
            *(_OWORD *)v68 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
            (*(void (__fastcall **)(__int64, struct CDrawingContext *, char *, char *, HRGN *))(*(_QWORD *)v16 + 112LL))(
              v16,
              a2,
              (char *)this + 132,
              &v64,
              v68);
            if ( v64 )
            {
              if ( qword_1801A39E8 )
              {
                v51 = 0LL;
                if ( *((_DWORD *)qword_1801A39E8 + 18) )
                {
                  v52 = *((_QWORD *)qword_1801A39E8 + 6);
                  while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v52 + 8 * v51)) )
                  {
                    v51 = (unsigned int)(v53 + 1);
                    if ( (unsigned int)v51 >= v54 )
                      goto LABEL_18;
                  }
                  v55 = (*(__int64 (__fastcall **)(CWindowNode *, _QWORD, CShape **))(*(_QWORD *)this + 152LL))(
                          this,
                          *((_QWORD *)a2 + 418),
                          v69);
                  v15 = v55;
                  if ( v55 >= 0 )
                  {
                    v56 = *(float *)v68;
                    if ( *(float *)v69 > *(float *)v68 )
                    {
                      v56 = *(float *)v69;
                      LODWORD(v68[0]) = v69[0];
                    }
                    v57 = *((float *)v68 + 1);
                    if ( *((float *)v69 + 1) > *((float *)v68 + 1) )
                    {
                      v57 = *((float *)v69 + 1);
                      HIDWORD(v68[0]) = HIDWORD(v69[0]);
                    }
                    v58 = *(float *)&v68[1];
                    if ( *(float *)&v68[1] > *(float *)&v69[1] )
                    {
                      v58 = *(float *)&v69[1];
                      LODWORD(v68[1]) = v69[1];
                    }
                    v59 = *((float *)&v68[1] + 1);
                    if ( *((float *)&v68[1] + 1) > *((float *)&v69[1] + 1) )
                    {
                      v59 = *((float *)&v69[1] + 1);
                      HIDWORD(v68[1]) = HIDWORD(v69[1]);
                    }
                    if ( v58 <= v56 || v59 <= v57 )
                    {
                      v68[1] = 0LL;
                      v68[0] = 0LL;
                    }
                    if ( (*(unsigned __int8 (__fastcall **)(CWindowNode *))(*(_QWORD *)this + 216LL))(this) )
                      CDrawingContext::RecordVisualMove(a2, this);
                    v55 = CDrawingContext::VisualWasRendered((__int64)a2, (__int128 *)v68, (__int64)this);
                    v15 = v55;
                    if ( v55 >= 0 )
                      goto LABEL_18;
                    v63 = 2998;
                  }
                  else
                  {
                    v63 = 2982;
                  }
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v55, v63);
                }
              }
            }
          }
        }
LABEL_18:
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xD34u);
          goto LABEL_20;
        }
        if ( *(int *)(*((_QWORD *)this + 2) + 1000LL) < 2
          || (RemoteApplicationNoRef = CRemoteApplicationWindowSet::FindRemoteApplicationNoRef(
                                         qword_1801A39E0,
                                         *((_QWORD *)this + 103))) == 0LL )
        {
LABEL_20:
          if ( v7 )
            (**(void (__fastcall ***)(CShape *, __int64))v7)(v7, 1LL);
          goto LABEL_22;
        }
        v68[0] = 0LL;
        ClipRegion = CWindowNode::GetClipRegion(this, v68);
        v15 = ClipRegion;
        if ( ClipRegion >= 0 )
        {
          v61 = (void *)*((_QWORD *)RemoteApplicationNoRef + 5);
          if ( v61 )
            DeleteObject(v61);
          *((HRGN *)RemoteApplicationNoRef + 5) = v68[0];
          goto LABEL_20;
        }
        v62 = 3388;
LABEL_137:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ClipRegion, v62);
        goto LABEL_20;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xCCCu);
    }
LABEL_22:
    v8 = 0;
    goto LABEL_23;
  }
  if ( !*(_BYTE *)(*((_QWORD *)this + 2) + 1136LL) )
  {
    *((_BYTE *)a2 + 5970) = 1;
    goto LABEL_4;
  }
  v26 = CWindowNode::RenderBlackImage(this, a2);
  v15 = v26;
  if ( v26 >= 0 )
  {
    *((_BYTE *)a2 + 5971) = 1;
    v8 = 1;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xCA2u);
  }
LABEL_23:
  if ( v67 && v8 )
    *v67 = 1;
  return (unsigned int)v15;
}
