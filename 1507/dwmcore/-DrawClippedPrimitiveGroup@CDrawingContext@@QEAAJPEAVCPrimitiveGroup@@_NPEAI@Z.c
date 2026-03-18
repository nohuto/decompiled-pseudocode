/*
 * XREFs of ?DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x180010AA8
 * Callers:
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006E1D0 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     ?CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x18000C9BC (-CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2.c)
 *     ?GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x180015758 (-GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList.c)
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ @ 0x180019C00 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x180019E68 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x1800222FC (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180022680 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x1800229A0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18002DBD0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180030950 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004E010 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x180071AB0 (-DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommand.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180073820 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_qq @ 0x1800E1F4C (Template_qq.c)
 *     Template_ffff @ 0x1800F4F28 (Template_ffff.c)
 *     ?UpdateD2D1PrimitiveProperty@CPrimitiveColor@@QEAAJPEAVID2DContext@@@Z @ 0x180107FDC (-UpdateD2D1PrimitiveProperty@CPrimitiveColor@@QEAAJPEAVID2DContext@@@Z.c)
 *     ?CreateNewD2DCommandListForHeatMap@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x18010C004 (-CreateNewD2DCommandListForHeatMap@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@.c)
 */

__int64 __fastcall CDrawingContext::DrawClippedPrimitiveGroup(
        struct ID2DContext **this,
        struct CPrimitiveGroup *a2,
        char a3,
        unsigned int *a4)
{
  unsigned int v4; // ebx
  struct ID2D1PrivateCompositorCommandList *v5; // r13
  char v9; // r15
  int v10; // eax
  int v11; // edi
  int v12; // eax
  struct CPolygon *v13; // rbx
  CD2DCommandList *v14; // rdx
  struct ID2DContext *v15; // r10
  __int64 v16; // rcx
  __int64 v17; // r9
  int ID2DCommandList; // eax
  struct ID2DContext *v19; // r15
  __int64 v20; // rbx
  struct ID2DContext *v21; // r15
  __int64 (__fastcall *v22)(struct ID2DContext *, struct ID2DContext **, struct ID2D1PrivateCompositorCommandList *); // r12
  int v23; // eax
  __int64 v24; // rcx
  int NewD2DCommandList; // eax
  CBaseMatrix *TopByReference; // rax
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  int v31; // r9d
  struct ID2D1PrivateCompositorCommandList **v32; // rax
  unsigned int v33; // r8d
  char v34; // dl
  unsigned int i; // ecx
  float *v36; // rax
  __int64 v37; // rcx
  float v38; // xmm2_4
  float v39; // xmm4_4
  float v40; // xmm5_4
  float v41; // xmm3_4
  float v42; // xmm0_4
  int NewD2DCommandListForHeatMap; // eax
  int updated; // eax
  unsigned int v45; // [rsp+28h] [rbp-B9h]
  unsigned int v46; // [rsp+48h] [rbp-99h]
  struct ID2D1PrivateCompositorCommandList *v48[2]; // [rsp+58h] [rbp-89h] BYREF
  float v49; // [rsp+68h] [rbp-79h]
  float v50; // [rsp+6Ch] [rbp-75h]
  CD2DCommandList *v51[2]; // [rsp+70h] [rbp-71h] BYREF
  _BYTE v52[48]; // [rsp+88h] [rbp-59h] BYREF
  float v53; // [rsp+B8h] [rbp-29h]
  float v54; // [rsp+BCh] [rbp-25h]
  _OWORD v55[2]; // [rsp+C8h] [rbp-19h] BYREF

  v4 = 0;
  v5 = 0LL;
  v46 = 0;
  v9 = 1;
  if ( *((_BYTE *)this + 2616) || *((_DWORD *)this + 1439) )
  {
    (*(void (__fastcall **)(struct CPrimitiveGroup *, _QWORD, _QWORD, _OWORD *))(*(_QWORD *)a2 + 112LL))(
      a2,
      0LL,
      0LL,
      v55);
    v10 = CDrawingContext::DrawSolidRectangle((CDrawingContext *)this);
    v11 = v10;
    if ( v10 >= 0 )
      goto LABEL_26;
    v45 = 2286;
    goto LABEL_78;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(this, &EVTDESC_ETWGUID_DRAWEVENT_Start, 18LL, *((unsigned int *)this + 1438));
  if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DRAWEVENT) )
  {
    (*(void (__fastcall **)(struct CPrimitiveGroup *, _QWORD, _QWORD, CD2DCommandList **))(*(_QWORD *)a2 + 112LL))(
      a2,
      0LL,
      0LL,
      v51);
    v55[0] = *(_OWORD *)v51;
    TopByReference = CBaseMatrixStack::GetTopByReference((CBaseMatrixStack *)(this + 57));
    CBaseMatrix::Transform2DBounds(TopByReference, (const struct MilRectF *)v55, (struct MilRectF *)&v48[1]);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_ffff(v28, (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT, v29, v30, SLOBYTE(v49), SLOBYTE(v50));
    v4 = 0;
  }
  if ( a3 )
  {
    v4 = *((_DWORD *)a2 + 105);
    v9 = *((_BYTE *)a2 + 424);
    *(_OWORD *)v51 = *(_OWORD *)((char *)a2 + 404);
    v46 = v4;
  }
  v10 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)this, 0);
  v11 = v10;
  if ( v10 < 0 )
  {
    v45 = 2319;
LABEL_78:
    v31 = v10;
    goto LABEL_79;
  }
  v12 = *((_DWORD *)this + 646);
  if ( !v12 )
  {
    v11 = -2147467259;
    v45 = 2321;
LABEL_44:
    v31 = v11;
LABEL_79:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, v45);
    goto LABEL_26;
  }
  if ( v4 )
  {
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this[325] + (unsigned int)(v12 - 1)) - 1.0)) & _xmm) >= 0.0000011920929 )
      goto LABEL_50;
    if ( v9 )
      goto LABEL_11;
    CBaseMatrixStack::Top((CBaseMatrixStack *)(this + 57), (struct CBaseMatrix *)v52);
    if ( (unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving((CBaseMatrix *)v52) )
    {
      if ( CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)v52) )
      {
        v32 = &v48[1];
        v33 = 4;
        v34 = 1;
        *(float *)&v48[1] = v53 + *(float *)v51;
        *((float *)&v48[1] + 1) = *((float *)v51 + 1) + v54;
        v49 = *(float *)&v51[1] + v53;
        v50 = *((float *)&v51[1] + 1) + v54;
      }
      else
      {
        CBaseMatrix::Transform2DRectToPerspective(
          (CBaseMatrix *)v52,
          (const struct MilRectF *)v51,
          (struct MilPoint2F *const)v55);
        v34 = 0;
        v32 = (struct ID2D1PrivateCompositorCommandList **)v55;
        v33 = 8;
      }
      for ( i = 0; i < v33; ++i )
        v32 = (struct ID2D1PrivateCompositorCommandList **)((char *)v32 + 4);
      if ( !v34 )
      {
        v36 = (float *)v55 + 3;
        v51[0] = *(CD2DCommandList **)&v55[0];
        v37 = 3LL;
        v38 = *((float *)v55 + 1);
        v39 = *(float *)v55;
        v40 = *((float *)v55 + 1);
        v41 = *(float *)v55;
        do
        {
          v42 = *(v36 - 1);
          if ( v41 > v42 )
            v41 = *(v36 - 1);
          if ( v40 > *v36 )
            v40 = *v36;
          if ( v42 > v39 )
            v39 = *(v36 - 1);
          if ( *v36 > v38 )
            v38 = *v36;
          v36 += 2;
          --v37;
        }
        while ( v37 );
        v48[1] = (struct ID2D1PrivateCompositorCommandList *)__PAIR64__(LODWORD(v40), LODWORD(v41));
        v49 = v39;
        v50 = v38;
      }
      CScopedClipStack::GetTopClipBoundsInScope(this + 85, v55);
      v46 = (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(&v48[1], v55) != 0 ? v4 : 0;
    }
    else
    {
LABEL_50:
      v46 = 0;
    }
  }
LABEL_11:
  v13 = this[338];
  v14 = 0LL;
  v15 = this[47];
  v16 = 0LL;
  v48[1] = 0LL;
  if ( *((_DWORD *)a2 + 28) )
  {
    v17 = *((_QWORD *)a2 + 11);
    while ( v15 != *(struct ID2DContext **)(*(_QWORD *)(*(_QWORD *)(v17 + 8 * v16) + 24LL) + 16LL) )
    {
      v16 = (unsigned int)(v16 + 1);
      if ( (unsigned int)v16 >= *((_DWORD *)a2 + 28) )
        goto LABEL_15;
    }
    v14 = *(CD2DCommandList **)(v17 + 8 * v16);
  }
LABEL_15:
  v51[0] = v14;
  if ( !v14 )
  {
    if ( *((_BYTE *)a2 + 425) )
    {
      NewD2DCommandListForHeatMap = CPrimitiveGroup::CreateNewD2DCommandListForHeatMap(a2, 0LL, v15, v51);
      v11 = NewD2DCommandListForHeatMap;
      if ( NewD2DCommandListForHeatMap < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, NewD2DCommandListForHeatMap, 0x1C8u);
        goto LABEL_19;
      }
    }
    else
    {
      NewD2DCommandList = CPrimitiveGroup::CreateNewD2DCommandList(a2, (struct ID2DContextOwner *)(this + 7), v15, v51);
      v11 = NewD2DCommandList;
      if ( NewD2DCommandList < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, NewD2DCommandList, 0x1CCu);
        goto LABEL_19;
      }
    }
  }
  ID2DCommandList = CD2DCommandList::GetID2DCommandList(v51[0], v13, &v48[1]);
  v11 = ID2DCommandList;
  if ( ID2DCommandList < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ID2DCommandList, 0x1D0u);
  v5 = v48[1];
LABEL_19:
  if ( v11 < 0 )
  {
    v45 = 2373;
    goto LABEL_44;
  }
  v19 = this[47];
  v11 = 0;
  v20 = 0LL;
  if ( *((_DWORD *)a2 + 58) )
  {
    while ( 1 )
    {
      updated = CPrimitiveColor::UpdateD2D1PrimitiveProperty(*(CPrimitiveColor **)(*((_QWORD *)a2 + 26) + 8 * v20), v19);
      v11 = updated;
      if ( updated < 0 )
        break;
      v20 = (unsigned int)(v20 + 1);
      if ( (unsigned int)v20 >= *((_DWORD *)a2 + 58) )
        goto LABEL_21;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x3FCu);
  }
LABEL_21:
  if ( v11 < 0 )
  {
    v45 = 2375;
    goto LABEL_44;
  }
  v21 = this[47];
  v22 = *(__int64 (__fastcall **)(struct ID2DContext *, struct ID2DContext **, struct ID2D1PrivateCompositorCommandList *))(*(_QWORD *)v21 + 160LL);
  if ( (char *)v22 == (char *)CD2DContext::DrawLegacyCommandList )
    v23 = CD2DContext::DrawLegacyCommandList(v21, this + 7, v5);
  else
    v23 = v22(v21, this + 7, v5);
  v11 = v23;
  if ( v23 < 0 )
  {
    v45 = 2396;
    goto LABEL_44;
  }
  *a4 = v46;
LABEL_26:
  if ( !*((_BYTE *)this + 2616) && !*((_DWORD *)this + 1439) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v24, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 18LL, *((unsigned int *)this + 1438));
  if ( v5 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorCommandList *))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v11;
}
