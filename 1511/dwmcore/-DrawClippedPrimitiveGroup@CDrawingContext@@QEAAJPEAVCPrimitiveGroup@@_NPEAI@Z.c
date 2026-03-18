/*
 * XREFs of ?DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x18000E39C
 * Callers:
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180091920 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     ?CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x18000A18C (-CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x180020EC0 (-DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommand.c)
 *     ?GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x180025E58 (-GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180036D60 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180042FC0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180046830 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x180047260 (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180047890 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x180047BB0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180047C60 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ @ 0x18004E794 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x18004E9F8 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180058FD8 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800AC040 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     Template_qq @ 0x180100238 (Template_qq.c)
 *     Template_ffff @ 0x18010EC0C (Template_ffff.c)
 *     ?CreateNewD2DCommandListForHeatMap@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x1801275D0 (-CreateNewD2DCommandListForHeatMap@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@.c)
 */

__int64 __fastcall CDrawingContext::DrawClippedPrimitiveGroup(
        struct ID2DContext **this,
        struct CPrimitiveGroup *a2,
        char a3,
        unsigned int *a4)
{
  unsigned int v4; // ebx
  struct ID2D1PrivateCompositorCommandList *v5; // r15
  char v9; // r12
  int v10; // eax
  int v11; // edi
  int v12; // eax
  struct CPolygon *v13; // rbx
  CD2DCommandList *v14; // rdx
  struct ID2DContext *v15; // r10
  unsigned int v16; // ecx
  __int64 v17; // r9
  int ID2DCommandList; // eax
  struct ID2DContext *v19; // r12
  __int64 (__fastcall *v20)(struct ID2DContext *, struct ID2DContext **, struct ID2D1PrivateCompositorCommandList *); // r13
  int v21; // eax
  __int64 v22; // rcx
  struct ID2D1PrivateCompositorCommandList **v24; // rax
  unsigned int v25; // r8d
  char v26; // dl
  unsigned int i; // ecx
  int NewD2DCommandList; // eax
  float *v29; // rax
  __int64 v30; // rcx
  float v31; // xmm2_4
  float v32; // xmm4_4
  float v33; // xmm5_4
  float v34; // xmm3_4
  float v35; // xmm0_4
  CBaseMatrix *TopByReference; // rax
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  int v40; // r9d
  int NewD2DCommandListForHeatMap; // eax
  unsigned int v42; // [rsp+28h] [rbp-B9h]
  unsigned int v43; // [rsp+48h] [rbp-99h]
  struct ID2D1PrivateCompositorCommandList *v45[2]; // [rsp+58h] [rbp-89h] BYREF
  float v46; // [rsp+68h] [rbp-79h]
  float v47; // [rsp+6Ch] [rbp-75h]
  CD2DCommandList *v48[2]; // [rsp+70h] [rbp-71h] BYREF
  _BYTE v49[48]; // [rsp+88h] [rbp-59h] BYREF
  float v50; // [rsp+B8h] [rbp-29h]
  float v51; // [rsp+BCh] [rbp-25h]
  _OWORD v52[2]; // [rsp+C8h] [rbp-19h] BYREF

  v4 = 0;
  v5 = 0LL;
  v43 = 0;
  v9 = 1;
  if ( *((_BYTE *)this + 2616) || *((_DWORD *)this + 1447) )
  {
    (*(void (__fastcall **)(struct CPrimitiveGroup *, _QWORD, _QWORD, _OWORD *))(*(_QWORD *)a2 + 120LL))(
      a2,
      0LL,
      0LL,
      v52);
    v10 = CDrawingContext::DrawSolidRectangle((CDrawingContext *)this);
    v11 = v10;
    if ( v10 >= 0 )
      goto LABEL_24;
    v42 = 2302;
    goto LABEL_71;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(this, &EVTDESC_ETWGUID_DRAWEVENT_Start, 18LL, *((unsigned int *)this + 1446));
  if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DRAWEVENT) )
  {
    (*(void (__fastcall **)(struct CPrimitiveGroup *, _QWORD, _QWORD, CD2DCommandList **))(*(_QWORD *)a2 + 120LL))(
      a2,
      0LL,
      0LL,
      v48);
    v52[0] = *(_OWORD *)v48;
    TopByReference = CBaseMatrixStack::GetTopByReference((CBaseMatrixStack *)(this + 57));
    CBaseMatrix::Transform2DBounds(TopByReference, (const struct MilRectF *)v52, (struct MilRectF *)&v45[1]);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_ffff(v37, (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT, v38, v39, SLOBYTE(v46), SLOBYTE(v47));
    v4 = 0;
  }
  if ( a3 )
  {
    v4 = *((_DWORD *)a2 + 105);
    v9 = *((_BYTE *)a2 + 424);
    *(_OWORD *)v48 = *(_OWORD *)((char *)a2 + 404);
    v43 = v4;
  }
  v10 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)this, 0);
  v11 = v10;
  if ( v10 < 0 )
  {
    v42 = 2335;
LABEL_71:
    v40 = v10;
    goto LABEL_72;
  }
  v12 = *((_DWORD *)this + 646);
  if ( !v12 )
  {
    v11 = -2147467259;
    v42 = 2337;
LABEL_64:
    v40 = v11;
LABEL_72:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, v42);
    goto LABEL_24;
  }
  if ( v4 )
  {
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this[325] + (unsigned int)(v12 - 1)) - 1.0)) & _xmm) >= 0.0000011920929 )
      goto LABEL_43;
    if ( v9 )
      goto LABEL_11;
    CBaseMatrixStack::Top((CBaseMatrixStack *)(this + 57), (struct CBaseMatrix *)v49);
    if ( (unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving((CBaseMatrix *)v49) )
    {
      if ( CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)v49) )
      {
        v24 = &v45[1];
        v25 = 4;
        v26 = 1;
        *(float *)&v45[1] = v50 + *(float *)v48;
        *((float *)&v45[1] + 1) = *((float *)v48 + 1) + v51;
        v46 = *(float *)&v48[1] + v50;
        v47 = *((float *)&v48[1] + 1) + v51;
      }
      else
      {
        CBaseMatrix::Transform2DRectToPerspective(
          (CBaseMatrix *)v49,
          (const struct MilRectF *)v48,
          (struct MilPoint2F *const)v52);
        v26 = 0;
        v24 = (struct ID2D1PrivateCompositorCommandList **)v52;
        v25 = 8;
      }
      for ( i = 0; i < v25; ++i )
        v24 = (struct ID2D1PrivateCompositorCommandList **)((char *)v24 + 4);
      if ( !v26 )
      {
        v29 = (float *)v52 + 3;
        v48[0] = *(CD2DCommandList **)&v52[0];
        v30 = 3LL;
        v31 = *((float *)v52 + 1);
        v32 = *(float *)v52;
        v33 = *((float *)v52 + 1);
        v34 = *(float *)v52;
        do
        {
          v35 = *(v29 - 1);
          if ( v34 > v35 )
            v34 = *(v29 - 1);
          if ( v33 > *v29 )
            v33 = *v29;
          if ( v35 > v32 )
            v32 = *(v29 - 1);
          if ( *v29 > v31 )
            v31 = *v29;
          v29 += 2;
          --v30;
        }
        while ( v30 );
        v45[1] = (struct ID2D1PrivateCompositorCommandList *)__PAIR64__(LODWORD(v33), LODWORD(v34));
        v46 = v32;
        v47 = v31;
      }
      CScopedClipStack::GetTopClipBoundsInScope(this + 85, v52);
      v43 = (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(&v45[1], v52) != 0 ? v4 : 0;
    }
    else
    {
LABEL_43:
      v43 = 0;
    }
  }
LABEL_11:
  v13 = this[342];
  v14 = 0LL;
  v15 = this[47];
  v16 = 0;
  v45[1] = 0LL;
  if ( *((_DWORD *)a2 + 28) )
  {
    v17 = *((_QWORD *)a2 + 11);
    while ( v15 != *(struct ID2DContext **)(*(_QWORD *)(*(_QWORD *)(v17 + 8LL * v16) + 24LL) + 16LL) )
    {
      if ( ++v16 >= *((_DWORD *)a2 + 28) )
        goto LABEL_15;
    }
    v14 = *(CD2DCommandList **)(v17 + 8LL * v16);
  }
LABEL_15:
  v48[0] = v14;
  if ( !v14 )
  {
    if ( *((_BYTE *)a2 + 425) )
    {
      NewD2DCommandListForHeatMap = CPrimitiveGroup::CreateNewD2DCommandListForHeatMap(a2, 0LL, v15, v48);
      v11 = NewD2DCommandListForHeatMap;
      if ( NewD2DCommandListForHeatMap < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, NewD2DCommandListForHeatMap, 0x1CCu);
        goto LABEL_19;
      }
    }
    else
    {
      NewD2DCommandList = CPrimitiveGroup::CreateNewD2DCommandList(a2, (struct ID2DContextOwner *)(this + 7), v15, v48);
      v11 = NewD2DCommandList;
      if ( NewD2DCommandList < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, NewD2DCommandList, 0x1D0u);
        goto LABEL_19;
      }
    }
  }
  ID2DCommandList = CD2DCommandList::GetID2DCommandList(v48[0], v13, &v45[1]);
  v11 = ID2DCommandList;
  if ( ID2DCommandList < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ID2DCommandList, 0x1D4u);
  v5 = v45[1];
LABEL_19:
  if ( v11 < 0 )
  {
    v42 = 2389;
    goto LABEL_64;
  }
  D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)this + 61));
  v19 = this[47];
  v20 = *(__int64 (__fastcall **)(struct ID2DContext *, struct ID2DContext **, struct ID2D1PrivateCompositorCommandList *))(*(_QWORD *)v19 + 160LL);
  if ( (char *)v20 == (char *)CD2DContext::DrawLegacyCommandList )
    v21 = CD2DContext::DrawLegacyCommandList(v19, this + 7, v5);
  else
    v21 = v20(v19, this + 7, v5);
  v11 = v21;
  if ( v21 < 0 )
  {
    v42 = 2410;
    goto LABEL_64;
  }
  *a4 = v43;
LABEL_24:
  if ( !*((_BYTE *)this + 2616) && !*((_DWORD *)this + 1447) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v22, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 18LL, *((unsigned int *)this + 1446));
  if ( v5 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorCommandList *))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v11;
}
