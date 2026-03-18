/*
 * XREFs of ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180027F90
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064E80 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000FAE0 (-GetBounds@CCompositionSurfaceBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@.c)
 *     ?Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z @ 0x1800253EC (-Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z.c)
 *     ?GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ @ 0x1800266EC (-GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ.c)
 *     ?UpdateSpriteClipShape@CWindowNode@@AEAAJXZ @ 0x1800267DC (-UpdateSpriteClipShape@CWindowNode@@AEAAJXZ.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180026AF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?NeedsConfirmUpdateId@CGdiSpriteBitmap@@UEAA_NXZ @ 0x18002AE30 (-NeedsConfirmUpdateId@CGdiSpriteBitmap@@UEAA_NXZ.c)
 *     ?IsEmpty@CShape@@QEBA_NXZ @ 0x18002C950 (-IsEmpty@CShape@@QEBA_NXZ.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18002C9C0 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x180036584 (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004FA24 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x180054998 (-ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingC.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?VisualWasRendered@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x180067B3C (-VisualWasRendered@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@UEBA?AW4SizePreference@@XZ @ 0x180093C80 (-GetSizePreference@CCompositionSurfaceBitmap@@UEBA-AW4SizePreference@@XZ.c)
 *     ?GetBorderColor@CCompositionSurfaceBitmap@@UEBA?AU_D3DCOLORVALUE@@XZ @ 0x180093CA0 (-GetBorderColor@CCompositionSurfaceBitmap@@UEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?DisplayBufferReady@CFlipChain@@QEAA_NXZ @ 0x1800AA424 (-DisplayBufferReady@CFlipChain@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?AddTokenForRenderContent@FRAME_TIME_INFO@@QEAAJPEBUConfirmPresentHistoryToken@@@Z @ 0x18011A6F8 (-AddTokenForRenderContent@FRAME_TIME_INFO@@QEAAJPEBUConfirmPresentHistoryToken@@@Z.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x180124B50 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?GetClipRegion@CWindowNode@@AEAAJPEAPEAUHRGN__@@@Z @ 0x180140024 (-GetClipRegion@CWindowNode@@AEAAJPEAPEAUHRGN__@@@Z.c)
 *     ?GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z @ 0x180140150 (-GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z.c)
 *     ?RenderBlackImage@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x180140714 (-RenderBlackImage@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?FindRemoteApplicationNoRef@CRemoteApplicationWindowSet@@QEAAPEAVCRemoteApplicationWindow@@_K@Z @ 0x180161F08 (-FindRemoteApplicationNoRef@CRemoteApplicationWindowSet@@QEAAPEAVCRemoteApplicationWindow@@_K@Z.c)
 */

__int64 __fastcall CWindowNode::RenderContent(CWindowNode *this, struct CDrawingContext *a2, bool *a3)
{
  _UNKNOWN **v5; // r11
  bool v6; // zf
  HRGN v7; // r14
  char v8; // r12
  float *v9; // r15
  struct _LIST_ENTRY *v10; // rbx
  CCompositionSurfaceBitmap *v11; // rcx
  unsigned int v12; // ebx
  CFlipChain *v13; // rcx
  __int64 v14; // rax
  int v15; // edi
  __int64 v16; // rcx
  CRegionShape *v18; // rdx
  __int64 v19; // rbx
  unsigned int v20; // r8d
  int Bounds; // eax
  CGdiSpriteBitmap *v22; // rcx
  __int64 (*v23)(void); // rax
  char v24; // al
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v26; // r10
  struct _LIST_ENTRY *Flink; // rcx
  int v28; // edx
  int *v29; // rcx
  HRGN v30; // rax
  __int64 v31; // rax
  CShape *DxClipShapeNoRef; // rax
  bool IsEmpty; // al
  int v34; // eax
  int updated; // eax
  int ShapeDataWorker; // eax
  const struct ConfirmPresentHistoryToken *v37; // rax
  __int64 v38; // rdi
  _D3DCOLORVALUE v39; // xmm0
  CRegionShape *v40; // rax
  int LastKnownGoodDxClipShape; // eax
  unsigned int v42; // ecx
  __int64 v43; // rax
  CCachedVisualImage *v44; // r9
  int v45; // eax
  __int64 v46; // rax
  struct CResource *v47; // rdx
  __int64 v48; // rax
  CRegionShape *v49; // rax
  unsigned int v50; // r8d
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rdx
  int v55; // eax
  __int64 i; // rbx
  int v57; // eax
  float v58; // xmm0_4
  float v59; // xmm1_4
  float v60; // xmm2_4
  float v61; // xmm3_4
  int v62; // eax
  struct CRemoteApplicationWindow *RemoteApplicationNoRef; // rbx
  int ClipRegion; // eax
  void *v65; // rcx
  unsigned int v66; // [rsp+28h] [rbp-E0h]
  char v67; // [rsp+88h] [rbp-80h] BYREF
  char v68; // [rsp+89h] [rbp-7Fh]
  int v69; // [rsp+8Ch] [rbp-7Ch]
  bool *v70; // [rsp+90h] [rbp-78h]
  _BYTE v71[64]; // [rsp+98h] [rbp-70h] BYREF
  int v72; // [rsp+D8h] [rbp-30h]
  HRGN v73[2]; // [rsp+E8h] [rbp-20h] BYREF
  float v74; // [rsp+F8h] [rbp-10h] BYREF
  float v75; // [rsp+FCh] [rbp-Ch]
  float v76; // [rsp+100h] [rbp-8h]
  float v77; // [rsp+104h] [rbp-4h]
  _D3DCOLORVALUE v78; // [rsp+108h] [rbp+0h] BYREF
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+58h] BYREF

  v5 = &retaddr;
  LOBYTE(v5) = 0;
  v70 = a3;
  v6 = *((_QWORD *)this + 117) == 0LL;
  v69 = (int)v5;
  if ( (!v6 || *((_QWORD *)this + 120)) && *((_BYTE *)this + 1016) )
  {
    DxClipShapeNoRef = CWindowNode::GetDxClipShapeNoRef(this);
    if ( DxClipShapeNoRef )
    {
      IsEmpty = CShape::IsEmpty(DxClipShapeNoRef);
      LODWORD(v5) = (unsigned __int8)v69;
      if ( !IsEmpty )
        LODWORD(v5) = 1;
      v69 = (int)v5;
    }
    else
    {
      LOBYTE(v5) = v69;
    }
  }
  v7 = 0LL;
  v8 = 0;
  v73[0] = 0LL;
  if ( *((_BYTE *)this + 1007) )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 2) + 1240LL) )
    {
      v34 = CWindowNode::RenderBlackImage(this, a2);
      v15 = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0xC9Eu);
      }
      else
      {
        *((_BYTE *)a2 + 6535) = 1;
        v8 = 1;
      }
      goto LABEL_23;
    }
    *((_BYTE *)a2 + 6534) = 1;
  }
  v9 = 0LL;
  if ( *(_BYTE *)(*((_QWORD *)a2 + 781) + 32LL) )
  {
    v10 = (struct _LIST_ENTRY *)((char *)this + 320);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(this);
    if ( !TreeDataListHead )
      goto LABEL_10;
    Flink = TreeDataListHead->Flink;
    if ( TreeDataListHead->Flink == TreeDataListHead )
      goto LABEL_10;
    while ( 1 )
    {
      v10 = Flink - 14;
      if ( Flink[2].Flink == v26 )
        break;
      Flink = Flink->Flink;
      if ( Flink == TreeDataListHead )
        goto LABEL_10;
    }
  }
  if ( v10 )
  {
    if ( !v10[2].Flink )
    {
      v31 = ((__int64 (__fastcall *)(struct _LIST_ENTRY *))v10[1].Blink->Flink[16].Blink)(v10[1].Blink);
      LOBYTE(v5) = v69;
      v10[2].Flink = (struct _LIST_ENTRY *)v31;
    }
    v9 = (float *)v10[2].Flink;
  }
LABEL_10:
  if ( !*((_QWORD *)this + 100) || *((_BYTE *)this + 1004) )
    goto LABEL_11;
  v15 = 0;
  v18 = 0LL;
  if ( *((_BYTE *)this + 1032) )
  {
    updated = CWindowNode::UpdateSpriteClipShape((struct D2D_SIZE_F *)this);
    v15 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x141Cu);
      v18 = (CRegionShape *)v70;
      goto LABEL_77;
    }
    LOBYTE(v5) = v69;
    v18 = 0LL;
    *((_BYTE *)this + 1032) = 0;
  }
  if ( *((_QWORD *)this + 128) )
  {
    v18 = (CRegionShape *)*((_QWORD *)this + 128);
    goto LABEL_34;
  }
  v19 = *((_QWORD *)this + 105);
  if ( v19 )
  {
    if ( (*(_BYTE *)(v19 + 32) & 1) == 0
      && (!*(_BYTE *)(v19 + 168)
       || *(float *)(v19 + 144) == *((float *)this + 48) && *(float *)(v19 + 148) == *((float *)this + 49)) )
    {
LABEL_33:
      v18 = *(CRegionShape **)(v19 + 152);
      goto LABEL_34;
    }
    ShapeDataWorker = CGeometry::GetShapeDataWorker(
                        *((CGeometry **)this + 105),
                        (const struct D2D_SIZE_F *)this + 24,
                        (struct CShapePtr *)(v19 + 152));
    if ( ShapeDataWorker >= 0 )
    {
      if ( this != (CWindowNode *)-192LL )
        *(_QWORD *)(v19 + 144) = *((_QWORD *)this + 24);
      *(_DWORD *)(v19 + 32) &= ~1u;
      LOBYTE(v5) = v69;
      goto LABEL_33;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataWorker, 0x71u);
    v18 = 0LL;
LABEL_77:
    LOBYTE(v5) = v69;
  }
LABEL_34:
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xCBDu);
    goto LABEL_23;
  }
  if ( v9 )
    v20 = *((_DWORD *)v9 + 6);
  else
    v20 = 0;
  Bounds = CWindowNode::RenderImage(
             this,
             (__int64)a2,
             (__int64)v9,
             *((CCachedVisualImage **)this + 100),
             v18,
             *((_DWORD *)this + 226),
             (__int64)this + 852,
             (int *)this + 222,
             v20,
             (unsigned __int8)v5,
             0,
             0,
             0LL);
  v15 = Bounds;
  if ( Bounds < 0 )
  {
    v66 = 3272;
    goto LABEL_118;
  }
  v22 = (CGdiSpriteBitmap *)*((_QWORD *)this + 100);
  v23 = *(__int64 (**)(void))(*(_QWORD *)v22 + 216LL);
  if ( (char *)v23 == (char *)CGdiSpriteBitmap::NeedsConfirmUpdateId )
    v24 = CGdiSpriteBitmap::NeedsConfirmUpdateId(v22);
  else
    v24 = v23();
  if ( v24 )
  {
    v37 = (const struct ConfirmPresentHistoryToken *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 100)
                                                                                       + 224LL))(*((_QWORD *)this + 100));
    Bounds = FRAME_TIME_INFO::AddTokenForRenderContent(*(FRAME_TIME_INFO **)(*((_QWORD *)this + 2) + 344LL), v37);
    v15 = Bounds;
    if ( Bounds < 0 )
    {
      v66 = 3276;
LABEL_118:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, v66);
      goto LABEL_23;
    }
  }
LABEL_11:
  v11 = (CCompositionSurfaceBitmap *)*((_QWORD *)this + 120);
  v12 = *((_DWORD *)this + 226) & 0xFFFFFFFD;
  if ( v11 )
  {
    Bounds = CCompositionSurfaceBitmap::GetBounds(v11, 0LL, 0LL, (__int64)&v78);
    v15 = Bounds;
    if ( Bounds < 0 )
    {
      v66 = 3289;
      goto LABEL_118;
    }
    v38 = *((_QWORD *)this + 120);
    if ( (unsigned int)CCompositionSurfaceBitmap::GetSizePreference(v38 + 112) == 1 )
    {
      v68 = 1;
      v67 = 0;
      *(_D3DCOLORVALUE *)&v39.r = *(_D3DCOLORVALUE *)&CCompositionSurfaceBitmap::GetBorderColor(
                                                        (CCompositionSurfaceBitmap *)(v38 + 112),
                                                        &v78)->r;
      v73[0] = (HRGN)&v78;
      *(_D3DCOLORVALUE *)&v78.r = *(_D3DCOLORVALUE *)&v39.r;
    }
    else
    {
      v68 = 0;
      v73[0] = 0LL;
      v67 = 1;
    }
    if ( v9 )
      v74 = v9[9];
    else
      v74 = 0.0;
    if ( v38 )
      v38 += 120LL;
    v40 = CWindowNode::GetDxClipShapeNoRef(this);
    Bounds = CWindowNode::RenderImage(
               this,
               (__int64)a2,
               (__int64)v9,
               (CCachedVisualImage *)v38,
               v40,
               v12,
               0LL,
               0LL,
               LODWORD(v74),
               v69,
               v67,
               v68,
               (struct _D3DCOLORVALUE *)v73[0]);
    v15 = Bounds;
    if ( Bounds < 0 )
    {
      v66 = 3310;
      goto LABEL_118;
    }
    goto LABEL_13;
  }
  v13 = (CFlipChain *)*((_QWORD *)this + 117);
  if ( !v13 )
  {
LABEL_13:
    if ( *(_QWORD *)(*((_QWORD *)this + 2) + 352LL) != *((_QWORD *)this + 35) )
    {
      v14 = *((_QWORD *)this + 34);
      if ( (*(_DWORD *)(v14 + 4) & 0x20000) != 0 )
      {
        v28 = *(_DWORD *)(v14 + 12);
        v29 = (int *)(v14 + 12);
        if ( (v28 & 0x7F000000) != 0xF000000 )
        {
          do
          {
            v29 = (int *)((char *)v29 + (v28 & 0xFFFFFF) + 4);
            v28 = *v29;
          }
          while ( (*v29 & 0x7F000000) != 0xF000000 );
        }
        v73[0] = *(HRGN *)(v29 + 1);
        v30 = v73[0];
        if ( v73[0] )
        {
          *((_DWORD *)v73[0] + 16) = 0;
          *(_QWORD *)(v30 + 17) = 1LL;
        }
      }
      *((_BYTE *)this + 153) &= ~0x80u;
    }
    v15 = 0;
    if ( *((_BYTE *)a2 + 6532) )
    {
      if ( qword_1801EFD28 )
      {
        v50 = *((_DWORD *)qword_1801EFD28 + 18);
        v51 = 0LL;
        if ( v50 )
        {
          while ( 1 )
          {
            v52 = *(_QWORD *)(*((_QWORD *)qword_1801EFD28 + 6) + 8 * v51);
            if ( *(_BYTE *)(v52 + 304) || *(_BYTE *)(v52 + 303) || *(_BYTE *)(v52 + 220) || *(_DWORD *)(v52 + 216) )
              break;
            v51 = (unsigned int)(v51 + 1);
            if ( (unsigned int)v51 >= v50 )
              goto LABEL_17;
          }
          if ( !(*(unsigned __int8 (__fastcall **)(CWindowNode *, __int64))(*(_QWORD *)this + 48LL))(this, 34LL) )
          {
            v53 = *(_QWORD *)this;
            v54 = *((_QWORD *)a2 + 476);
            v72 = 0;
            v55 = (*(__int64 (__fastcall **)(CWindowNode *, __int64, _D3DCOLORVALUE *))(v53 + 160))(this, v54, &v78);
            v15 = v55;
            if ( v55 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v55, 0x1E18u);
            }
            else
            {
              CBaseMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 536), (struct CMILMatrix *)v71);
              CMILMatrix::Transform2DBoundsHelper<0>(v71, &v78, v73);
              for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 1604); i = (unsigned int)(i + 1) )
                CVisual::ExcludeFromVisibleRegion(*(_QWORD *)(*((_QWORD *)a2 + 799) + 8 * i), v73, a2);
            }
          }
        }
      }
    }
LABEL_17:
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xCD9u);
    }
    else
    {
      v16 = *((_QWORD *)this + 38);
      if ( v16 )
      {
        v67 = 0;
        *(_OWORD *)v73 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        (*(void (__fastcall **)(__int64, struct CDrawingContext *, char *, char *, HRGN *))(*(_QWORD *)v16 + 120LL))(
          v16,
          a2,
          (char *)this + 192,
          &v67,
          v73);
        if ( v67 )
        {
          if ( qword_1801EFD28 && CDisplaySet::NeedsDesktopMoves(qword_1801EFD28) )
          {
            v57 = (*(__int64 (__fastcall **)(CWindowNode *, _QWORD, float *))(*(_QWORD *)this + 160LL))(
                    this,
                    *((_QWORD *)a2 + 476),
                    &v74);
            v15 = v57;
            if ( v57 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v57, 0xCF0u);
            }
            else
            {
              v58 = *(float *)v73;
              if ( v74 > *(float *)v73 )
              {
                v58 = v74;
                *(float *)v73 = v74;
              }
              v59 = *((float *)v73 + 1);
              if ( v75 > *((float *)v73 + 1) )
              {
                v59 = v75;
                *((float *)v73 + 1) = v75;
              }
              v60 = *(float *)&v73[1];
              if ( *(float *)&v73[1] > v76 )
              {
                v60 = v76;
                *(float *)&v73[1] = v76;
              }
              v61 = *((float *)&v73[1] + 1);
              if ( *((float *)&v73[1] + 1) > v77 )
              {
                v61 = v77;
                *((float *)&v73[1] + 1) = v77;
              }
              if ( v60 <= v58 || v61 <= v59 )
              {
                v73[1] = 0LL;
                v73[0] = 0LL;
              }
              if ( (*(unsigned __int8 (__fastcall **)(CWindowNode *))(*(_QWORD *)this + 224LL))(this) )
                CDrawingContext::RecordVisualMove(a2, this);
              v62 = CDrawingContext::VisualWasRendered(a2, v73, this);
              v15 = v62;
              if ( v62 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v62, 0xD00u);
            }
          }
        }
      }
    }
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xD30u);
    }
    else if ( *(int *)(*((_QWORD *)this + 2) + 1104LL) >= 2 )
    {
      RemoteApplicationNoRef = CRemoteApplicationWindowSet::FindRemoteApplicationNoRef(
                                 qword_1801EFD20,
                                 *((_QWORD *)this + 79));
      if ( RemoteApplicationNoRef )
      {
        v73[0] = 0LL;
        ClipRegion = CWindowNode::GetClipRegion(this, v73);
        v15 = ClipRegion;
        if ( ClipRegion < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, ClipRegion, 0xD38u);
        }
        else
        {
          v65 = (void *)*((_QWORD *)RemoteApplicationNoRef + 5);
          if ( v65 )
            DeleteObject(v65);
          *((HRGN *)RemoteApplicationNoRef + 5) = v73[0];
        }
      }
    }
    goto LABEL_21;
  }
  if ( CFlipChain::DisplayBufferReady(v13) || !*((_QWORD *)this + 118) )
  {
    v46 = *((_QWORD *)this + 118);
    if ( v46 )
      v47 = (struct CResource *)(v46 + 16);
    else
      v47 = 0LL;
    CResource::UnRegisterNotifierInternal(this, v47);
    *((_QWORD *)this + 118) = 0LL;
    if ( v9 )
      v74 = v9[7];
    else
      v74 = 0.0;
    v48 = *((_QWORD *)this + 117);
    if ( v48 )
      v73[0] = (HRGN)(v48 + 8);
    else
      v73[0] = 0LL;
    v49 = CWindowNode::GetDxClipShapeNoRef(this);
    Bounds = CWindowNode::RenderImage(
               this,
               (__int64)a2,
               (__int64)v9,
               (CCachedVisualImage *)v73[0],
               v49,
               v12,
               0LL,
               (int *)this + 222,
               LODWORD(v74),
               v69,
               0,
               0,
               0LL);
    v15 = Bounds;
    if ( Bounds < 0 )
    {
      v66 = 3345;
      goto LABEL_118;
    }
    goto LABEL_13;
  }
  LastKnownGoodDxClipShape = CWindowNode::GetLastKnownGoodDxClipShape(this, (struct CShape **)v73);
  v15 = LastKnownGoodDxClipShape;
  if ( LastKnownGoodDxClipShape < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, LastKnownGoodDxClipShape, 0xD21u);
    v7 = v73[0];
  }
  else
  {
    if ( v9 )
      v42 = *((_DWORD *)v9 + 7);
    else
      v42 = 0;
    v43 = *((_QWORD *)this + 118);
    if ( v43 )
      v44 = (CCachedVisualImage *)(v43 + 8);
    else
      v44 = 0LL;
    v7 = v73[0];
    v45 = CWindowNode::RenderImage(
            this,
            (__int64)a2,
            (__int64)v9,
            v44,
            (CRegionShape *)v73[0],
            v12,
            0LL,
            (int *)this + 222,
            v42,
            v69,
            0,
            0,
            0LL);
    v15 = v45;
    if ( v45 >= 0 )
      goto LABEL_13;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v45, 0xD2Cu);
  }
LABEL_21:
  if ( v7 )
    (**(void (__fastcall ***)(HRGN, __int64))v7)(v7, 1LL);
LABEL_23:
  if ( v70 && v8 )
    *v70 = 1;
  return (unsigned int)v15;
}
