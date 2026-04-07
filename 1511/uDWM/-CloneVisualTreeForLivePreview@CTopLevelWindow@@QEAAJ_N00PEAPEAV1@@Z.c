/*
 * XREFs of ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18000F4D8
 * Callers:
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18000AB78 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18000EB48 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180039D68 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x18004E044 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?_UpdateGlassVisual@CLivePreview@@AEAAJXZ @ 0x18006EA08 (-_UpdateGlassVisual@CLivePreview@@AEAAJXZ.c)
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x18007D8FC (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x18009A760 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18009AE88 (-_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?Stop@?$ActivityBase@$00$0A@$04@wil@@QEAAXJ@Z @ 0x18000FEC0 (-Stop@-$ActivityBase@$00$0A@$04@wil@@QEAAXJ@Z.c)
 *     ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x180010080 (--1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ??$?0$$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1800101F0 (--$-0$$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18001A610 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001D0D0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180023350 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180023540 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@@Z @ 0x1800241E0 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x180029970 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 *     ?CancelCrossfade@CButton@@QEAAJXZ @ 0x18007402C (-CancelCrossfade@CButton@@QEAAJXZ.c)
 *     ?GetInstructionForLivePreview@CTopLevelAtlasedRectsVisual@@QEAAJ_NPEAPEAVCDrawAtlasedRectsInstruction@@@Z @ 0x18007D574 (-GetInstructionForLivePreview@CTopLevelAtlasedRectsVisual@@QEAAJ_NPEAPEAVCDrawAtlasedRectsInstru.c)
 */

__int64 __fastcall CTopLevelWindow::CloneVisualTreeForLivePreview(
        CTopLevelWindow *this,
        char a2,
        char a3,
        __int64 a4,
        struct CTopLevelWindow **a5)
{
  struct CResource *v6; // r15
  CBaseObject *v7; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // r13d
  CButton **v15; // r12
  CButton *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  struct CVisual **v19; // r12
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  char v29; // al
  int v30; // eax
  CVisual *v31; // r12
  int v32; // eax
  int InstructionForLivePreview; // eax
  CBaseObject *v34; // r14
  int v35; // eax
  struct CVisual *v36; // rax
  CVisual *v37; // r14
  float *v38; // rax
  float v39; // xmm2_4
  unsigned int v40; // xmm1_4
  unsigned int v41; // xmm0_4
  unsigned int v42; // xmm2_4
  int v43; // eax
  int v44; // eax
  float *v45; // rax
  struct CResource *v46; // r13
  float v47; // xmm2_4
  float v48; // xmm0_4
  float v49; // xmm1_4
  unsigned int v50; // xmm2_4
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  struct CVisual **v55; // r12
  int v56; // eax
  char v57; // [rsp+38h] [rbp-D0h]
  struct CRenderDataInstruction *v59; // [rsp+40h] [rbp-C8h] BYREF
  struct CVisual **v60; // [rsp+48h] [rbp-C0h] BYREF
  struct CDrawAtlasedRectsInstruction *v61; // [rsp+50h] [rbp-B8h] BYREF
  CResource *v62[2]; // [rsp+58h] [rbp-B0h]
  CResource *v63; // [rsp+68h] [rbp-A0h]
  int v64; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v65[4]; // [rsp+74h] [rbp-94h] BYREF
  double v66[3]; // [rsp+78h] [rbp-90h]
  int v67; // [rsp+94h] [rbp-74h]
  int v68; // [rsp+98h] [rbp-70h]
  _BYTE v69[320]; // [rsp+A8h] [rbp-60h] BYREF

  v6 = 0LL;
  v60 = a5;
  v7 = 0LL;
  v63 = 0LL;
  v59 = 0LL;
  v57 = 0;
  WindowFrameLoggingTelemetry::CloneWindow::CloneWindow((WindowFrameLoggingTelemetry::CloneWindow *)v69);
  v9 = *((_QWORD *)this + 38);
  if ( v9 )
  {
    if ( !a2 && *(_DWORD *)(v9 + 256) )
    {
      v57 = 1;
      v29 = 0;
    }
    else
    {
      v57 = 0;
      v29 = 1;
    }
    *(_BYTE *)(v9 + 84) &= ~8u;
    *(_BYTE *)(v9 + 84) |= 8 * (v29 & 1);
  }
  v10 = *((_QWORD *)this + 39);
  if ( v10 )
  {
    *(_BYTE *)(v10 + 84) &= ~8u;
    *(_BYTE *)(v10 + 84) |= 8 * (a2 & 1);
  }
  v11 = *((_QWORD *)this + 68);
  if ( v11 )
  {
    *(_BYTE *)(v11 + 84) &= ~8u;
    *(_BYTE *)(v11 + 84) |= 8 * (a2 & 1);
  }
  v12 = *((_QWORD *)this + 70);
  if ( v12 )
  {
    *(_BYTE *)(v12 + 84) &= ~8u;
    *(_BYTE *)(v12 + 84) |= 8 * (a2 & 1);
  }
  v13 = *((_QWORD *)this + 67);
  if ( v13 )
  {
    *(_BYTE *)(v13 + 84) &= ~8u;
    *(_BYTE *)(v13 + 84) |= 8 * (a2 & 1);
  }
  v14 = 0;
  v15 = (CButton **)((char *)this + 504);
  do
  {
    v16 = *v15;
    if ( *v15 )
    {
      *((_BYTE *)v16 + 84) &= ~8u;
      *((_BYTE *)v16 + 84) |= 8 * (a2 & 1);
      if ( !a2 )
      {
        v30 = CButton::CancelCrossfade(*v15);
        v21 = v30;
        if ( v30 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x16B0u);
          goto LABEL_35;
        }
      }
    }
    ++v14;
    ++v15;
  }
  while ( v14 < 4 );
  v17 = *((_QWORD *)this + 36);
  if ( v17 )
    *(_BYTE *)(v17 + 84) &= ~8u;
  v18 = *((_QWORD *)this + 37);
  if ( v18 )
    *(_BYTE *)(v18 + 304) = 1;
  v19 = v60;
  *((_BYTE *)this + 264) |= 0x10u;
  v20 = CTopLevelWindow::CloneVisualTree(this, v19);
  v21 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x16C3u);
    goto LABEL_35;
  }
  *((_BYTE *)this + 264) &= ~0x10u;
  v22 = *((_QWORD *)this + 37);
  if ( v22 )
  {
    *(_BYTE *)(v22 + 304) = 0;
    if ( a2 )
    {
      v31 = **(CVisual ***)(*((_QWORD *)*v19 + 35) + 48LL);
      if ( v31 )
      {
        v61 = 0LL;
        v32 = CVisual::ClearInstructions(v31);
        v21 = v32;
        if ( v32 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x16D0u);
          goto LABEL_35;
        }
        InstructionForLivePreview = CTopLevelAtlasedRectsVisual::GetInstructionForLivePreview(
                                      *((CTopLevelAtlasedRectsVisual **)this + 37),
                                      (*((_BYTE *)this + 608) & 0x20) == 0,
                                      &v61);
        v21 = InstructionForLivePreview;
        if ( InstructionForLivePreview < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, InstructionForLivePreview, 0x16D4u);
          goto LABEL_35;
        }
        v34 = v61;
        v35 = CVisual::AddInstruction(v31, v61);
        v21 = v35;
        if ( v35 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0x16D5u);
          goto LABEL_35;
        }
        if ( v34 )
          CBaseObject::Release(v34);
      }
      v19 = v60;
    }
  }
  if ( !v57 )
    goto LABEL_21;
  if ( !a3 )
    goto LABEL_21;
  v36 = *v19;
  v61 = 0LL;
  v60 = 0LL;
  v37 = **(CVisual ***)(*((_QWORD *)v36 + 35) + 48LL);
  if ( !v37 )
    goto LABEL_21;
  CResource::Create(71LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL));
  CTopLevelWindow::UpdateColorizationColor(this);
  v64 = 255;
  memset_0(v65, 0, 0x28uLL);
  v67 = 0;
  v68 = 0;
  v38 = (float *)*((_QWORD *)this + 74);
  v6 = v63;
  v66[0] = DOUBLE_1_0;
  v39 = v38[8];
  *(float *)&v40 = v39 * v38[5];
  *(float *)&v41 = v39 * v38[4];
  *(float *)&v42 = v39 * v38[6];
  v62[0] = (CResource *)__PAIR64__(v40, v41);
  v62[1] = (CResource *)(v42 | 0x3F80000000000000LL);
  *(_OWORD *)&v66[1] = *(_OWORD *)v62;
  v43 = CResource::Send(v63, &v64, 0x2Cu);
  v21 = v43;
  if ( v43 >= 0 )
  {
    v44 = CDrawGeometryInstruction::Create(v6, *((struct CResource **)this + 71), &v59);
    v21 = v44;
    if ( v44 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v44, 0x16F7u);
LABEL_63:
      v7 = v59;
      goto LABEL_31;
    }
    CResource::Create(71LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL));
    v64 = 255;
    memset_0(v65, 0, 0x28uLL);
    v45 = (float *)*((_QWORD *)this + 75);
    v67 = 0;
    v68 = 0;
    v46 = v61;
    v66[0] = DOUBLE_1_0;
    v47 = v45[8];
    v48 = v47;
    v49 = v47 * v45[5];
    *(float *)&v50 = v47 * v45[6];
    *(float *)v62 = v48 * v45[4];
    *((float *)v62 + 1) = v49;
    v62[1] = (CResource *)(v50 | 0x3F80000000000000LL);
    *(_OWORD *)&v66[1] = *(_OWORD *)v62;
    v51 = CResource::Send(v61, &v64, 0x2Cu);
    v21 = v51;
    if ( v51 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v51, 0x1703u);
      goto LABEL_63;
    }
    v52 = CDrawGeometryInstruction::Create(
            v46,
            *((struct CResource **)this + 72),
            (struct CDrawGeometryInstruction **)&v60);
    v21 = v52;
    if ( v52 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0x170Bu);
      goto LABEL_63;
    }
    v53 = CVisual::ClearInstructions(v37);
    v21 = v53;
    if ( v53 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v53, 0x170Eu);
      goto LABEL_63;
    }
    v7 = v59;
    v54 = CVisual::AddInstruction(v37, v59);
    v21 = v54;
    if ( v54 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v54, 0x170Fu);
      goto LABEL_31;
    }
    v55 = v60;
    v56 = CVisual::AddInstruction(v37, (struct CRenderDataInstruction *)v60);
    v21 = v56;
    if ( v56 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v56, 0x1710u);
LABEL_31:
      if ( v7 )
        CBaseObject::Release(v7);
      goto LABEL_33;
    }
    if ( v7 )
    {
      CBaseObject::Release(v7);
      v7 = 0LL;
    }
    if ( v55 )
      CBaseObject::Release((CBaseObject *)v55);
    if ( v6 )
    {
      CBaseObject::Release(v6);
      v6 = 0LL;
    }
    if ( v46 )
      CBaseObject::Release(v46);
LABEL_21:
    v23 = *((_QWORD *)this + 38);
    if ( v23 )
      *(_BYTE *)(v23 + 84) &= ~8u;
    v24 = *((_QWORD *)this + 39);
    if ( v24 )
      *(_BYTE *)(v24 + 84) &= ~8u;
    v25 = *((_QWORD *)this + 68);
    if ( v25 )
      *(_BYTE *)(v25 + 84) &= ~8u;
    v26 = *((_QWORD *)this + 70);
    if ( v26 )
      *(_BYTE *)(v26 + 84) &= ~8u;
    v27 = *((_QWORD *)this + 67);
    if ( v27 )
      *(_BYTE *)(v27 + 84) &= ~8u;
    goto LABEL_31;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0x16EFu);
LABEL_33:
  if ( v6 )
    CBaseObject::Release(v6);
LABEL_35:
  wil::ActivityBase<1,0,5>::Stop(v69, v21);
  WindowFrameLoggingTelemetry::CloneWindow::~CloneWindow((WindowFrameLoggingTelemetry::CloneWindow *)v69);
  return v21;
}
