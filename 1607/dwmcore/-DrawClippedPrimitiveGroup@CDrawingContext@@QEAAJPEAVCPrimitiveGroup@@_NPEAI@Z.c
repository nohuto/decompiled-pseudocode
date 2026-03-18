/*
 * XREFs of ?DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x180004AE8
 * Callers:
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004D5F0 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     ?CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x18000EC3C (-CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2.c)
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ @ 0x1800253C8 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ.c)
 *     ?Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z @ 0x1800253EC (-Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004B848 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059930 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A260 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18006B7C0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E9A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x18007CFB0 (-DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommand.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180098510 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18009C698 (-GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800AF478 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x180106698 (Template_qq.c)
 *     Template_ffff @ 0x180125254 (Template_ffff.c)
 *     ?CreateNewD2DCommandListForHeatMap@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x180144C1C (-CreateNewD2DCommandListForHeatMap@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@.c)
 */

__int64 __fastcall CDrawingContext::DrawClippedPrimitiveGroup(
        struct ID2DContext **this,
        struct CPrimitiveGroup *a2,
        char a3,
        unsigned int *a4)
{
  struct ID2D1PrivateCompositorCommandList *v4; // r15
  int v5; // r12d
  char v9; // si
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  unsigned int v13; // r9d
  CD2DCommandList *v14; // rcx
  struct ID2DContext *v15; // r10
  struct ID2DContextOwner *v16; // rdx
  __int64 v17; // r11
  int ID2DCommandList; // eax
  int v19; // eax
  __int64 v20; // rdx
  struct ID2DContext *v21; // rcx
  char *v22; // rdx
  __int64 (__fastcall *v23)(struct ID2DContext *, char *, struct ID2D1PrivateCompositorCommandList *); // rax
  int v24; // eax
  __int64 v25; // rcx
  int NewD2DCommandList; // eax
  __int64 v28; // rdx
  const struct CMILMatrix *TopByReference; // rax
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  int v33; // r9d
  int NewD2DCommandListForHeatMap; // eax
  unsigned int v35; // [rsp+28h] [rbp-B9h]
  _QWORD v36[3]; // [rsp+50h] [rbp-91h] BYREF
  _BYTE v37[64]; // [rsp+68h] [rbp-79h] BYREF
  int v38; // [rsp+A8h] [rbp-39h]
  struct CPolygon *v39[2]; // [rsp+B8h] [rbp-29h] BYREF
  struct ID2D1PrivateCompositorCommandList *v40[2]; // [rsp+C8h] [rbp-19h] BYREF
  __int64 v41; // [rsp+D8h] [rbp-9h]
  __int64 v42; // [rsp+E0h] [rbp-1h]

  v4 = 0LL;
  v41 = (__int64)a4;
  v5 = 0;
  v9 = 1;
  if ( *((_BYTE *)this + 3048) || *((_DWORD *)this + 1621) )
  {
    (*(void (__fastcall **)(struct CPrimitiveGroup *, _QWORD, _QWORD, struct CPolygon **))(*(_QWORD *)a2 + 128LL))(
      a2,
      0LL,
      0LL,
      v39);
    v41 = 0x3F8000003F800000LL;
    v42 = 0x3F8000003F800000LL;
    v10 = CDrawingContext::DrawSolidRectangle((CDrawingContext *)this, (struct MilRectF *)v39);
    v11 = v10;
    if ( v10 >= 0 )
      goto LABEL_27;
    v35 = 2406;
    goto LABEL_61;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(this, &EVTDESC_ETWGUID_DRAWEVENT_Start, 18LL, *((unsigned int *)this + 1620));
  if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DRAWEVENT) )
  {
    (*(void (__fastcall **)(struct CPrimitiveGroup *, _QWORD, _QWORD, struct ID2D1PrivateCompositorCommandList **))(*(_QWORD *)a2 + 128LL))(
      a2,
      0LL,
      0LL,
      v40);
    *(_OWORD *)&v36[1] = *(_OWORD *)v40;
    TopByReference = CBaseMatrixStack::GetTopByReference((CBaseMatrixStack *)(this + 67));
    CMILMatrix::Transform2DBoundsHelper<0>(TopByReference, &v36[1], v39);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_ffff(v30, (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT, v31, v32, (char)v39[1], SBYTE4(v39[1]));
  }
  if ( a3 )
  {
    v5 = *((_DWORD *)a2 + 125);
    v9 = *((_BYTE *)a2 + 504);
    *(_OWORD *)v39 = *(_OWORD *)((char *)a2 + 484);
  }
  v10 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)this, 0);
  v11 = v10;
  if ( v10 < 0 )
  {
    v35 = 2439;
LABEL_61:
    v33 = v10;
    goto LABEL_62;
  }
  v12 = *((_DWORD *)this + 754);
  if ( !v12 )
  {
    v11 = -2147467259;
    v35 = 2441;
    v33 = -2147467259;
LABEL_62:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, v35);
    goto LABEL_27;
  }
  if ( v5 )
  {
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this[379] + (unsigned int)(v12 - 1)) - 1.0)) & _xmm) >= 0.0000011920929 )
      goto LABEL_35;
    if ( v9 )
      goto LABEL_11;
    v38 = 0;
    CBaseMatrixStack::Top((CBaseMatrixStack *)(this + 67), (struct CMILMatrix *)v37);
    if ( !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v37) )
    {
LABEL_35:
      v5 = 0;
      goto LABEL_11;
    }
    CMILMatrix::Transform2DBoundsHelper<1>(v37, v39, v40);
    LOBYTE(v28) = 1;
    CScopedClipStack::GetTopGpuClipInScope(this + 114, v28, v39);
    v5 = (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(v40, v39) != 0 ? v5 : 0;
  }
LABEL_11:
  v13 = *((_DWORD *)a2 + 48);
  v14 = 0LL;
  v15 = this[57];
  v16 = 0LL;
  v39[0] = this[397];
  v40[0] = 0LL;
  if ( v13 )
  {
    v17 = *((_QWORD *)a2 + 21);
    while ( v15 != *(struct ID2DContext **)(*(_QWORD *)(*(_QWORD *)(v17 + 8LL * (_QWORD)v16) + 24LL) + 24LL) )
    {
      v16 = (struct ID2DContextOwner *)(unsigned int)((_DWORD)v16 + 1);
      if ( (unsigned int)v16 >= v13 )
        goto LABEL_15;
    }
    v14 = *(CD2DCommandList **)(v17 + 8LL * (_QWORD)v16);
  }
LABEL_15:
  v36[1] = v14;
  if ( !v14 )
  {
    if ( *((_BYTE *)a2 + 505) )
    {
      NewD2DCommandListForHeatMap = CPrimitiveGroup::CreateNewD2DCommandListForHeatMap(
                                      a2,
                                      v16,
                                      v15,
                                      (struct CD2DCommandList **)&v36[1]);
      v11 = NewD2DCommandListForHeatMap;
      if ( NewD2DCommandListForHeatMap < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, NewD2DCommandListForHeatMap, 0x1E8u);
        goto LABEL_19;
      }
    }
    else
    {
      NewD2DCommandList = CPrimitiveGroup::CreateNewD2DCommandList(
                            a2,
                            (struct ID2DContextOwner *)(this + 16),
                            v15,
                            (struct CD2DCommandList **)&v36[1]);
      v11 = NewD2DCommandList;
      if ( NewD2DCommandList < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, NewD2DCommandList, 0x1ECu);
        goto LABEL_19;
      }
    }
    v14 = (CD2DCommandList *)v36[1];
  }
  ID2DCommandList = CD2DCommandList::GetID2DCommandList(v14, v39[0], v40);
  v11 = ID2DCommandList;
  if ( ID2DCommandList < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ID2DCommandList, 0x1F0u);
  v4 = v40[0];
LABEL_19:
  if ( v11 < 0 )
  {
    v35 = 2493;
    goto LABEL_59;
  }
  v19 = *((_DWORD *)this + 83);
  v20 = 0LL;
  if ( v19 )
  {
    if ( v19 == 2 )
    {
      v20 = 1LL;
    }
    else if ( v19 == 4 )
    {
      v20 = 8LL;
    }
  }
  if ( *((_BYTE *)a2 + 506) )
    v20 = (unsigned int)v20 | 2;
  D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)this + 81), v20);
  v21 = this[57];
  v22 = (char *)(this + 16);
  v23 = *(__int64 (__fastcall **)(struct ID2DContext *, char *, struct ID2D1PrivateCompositorCommandList *))(*(_QWORD *)v21 + 152LL);
  if ( (char *)v23 == (char *)CD2DContext::DrawLegacyCommandList )
    v24 = CD2DContext::DrawLegacyCommandList(v21, v22, v4);
  else
    v24 = v23(v21, v22, v4);
  v11 = v24;
  if ( v24 < 0 )
  {
    v35 = 2514;
LABEL_59:
    v33 = v11;
    goto LABEL_62;
  }
  *(_DWORD *)v41 = v5;
LABEL_27:
  if ( !*((_BYTE *)this + 3048) && !*((_DWORD *)this + 1621) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v25, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 18LL, *((unsigned int *)this + 1620));
  if ( v4 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorCommandList *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v11;
}
