/*
 * XREFs of ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x180025024
 * Callers:
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x1800027BC (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18000EE7C (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180030A98 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x180069564 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?_UpdateGlassVisual@CLivePreview@@AEAAJXZ @ 0x18006AAB4 (-_UpdateGlassVisual@CLivePreview@@AEAAJXZ.c)
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x1800758C0 (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x180099070 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x180099798 (-_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Stop@?$ActivityBase@$00$0A@$04@wil@@QEAAXJ@Z @ 0x1800070E4 (-Stop@-$ActivityBase@$00$0A@$04@wil@@QEAAXJ@Z.c)
 *     ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x180007380 (--1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ??$?0$$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1800074F0 (--$-0$$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180014A30 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800177C0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x18001DF40 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001E130 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@@Z @ 0x18001EC40 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x180024200 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 *     ?CancelCrossfade@CButton@@QEAAJXZ @ 0x18006BFFC (-CancelCrossfade@CButton@@QEAAJXZ.c)
 *     ?GetInstructionForLivePreview@CTopLevelAtlasedRectsVisual@@QEAAJ_NPEAPEAVCDrawAtlasedRectsInstruction@@@Z @ 0x1800754E4 (-GetInstructionForLivePreview@CTopLevelAtlasedRectsVisual@@QEAAJ_NPEAPEAVCDrawAtlasedRectsInstru.c)
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
  __int64 v38; // rdx
  __int64 v39; // r8
  float *v40; // rax
  float v41; // xmm2_4
  unsigned int v42; // xmm1_4
  unsigned int v43; // xmm0_4
  unsigned int v44; // xmm2_4
  int v45; // eax
  int v46; // eax
  float *v47; // rax
  struct CResource *v48; // r13
  float v49; // xmm2_4
  float v50; // xmm0_4
  float v51; // xmm1_4
  unsigned int v52; // xmm2_4
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  struct CVisual **v57; // r12
  int v58; // eax
  char v59; // [rsp+38h] [rbp-D0h]
  struct CRenderDataInstruction *v61; // [rsp+40h] [rbp-C8h] BYREF
  struct CVisual **v62; // [rsp+48h] [rbp-C0h] BYREF
  CBaseObject *v63; // [rsp+50h] [rbp-B8h] BYREF
  CResource *v64[2]; // [rsp+58h] [rbp-B0h]
  CResource *v65; // [rsp+68h] [rbp-A0h] BYREF
  int v66; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v67[4]; // [rsp+74h] [rbp-94h] BYREF
  double v68[3]; // [rsp+78h] [rbp-90h]
  int v69; // [rsp+94h] [rbp-74h]
  int v70; // [rsp+98h] [rbp-70h]
  _BYTE v71[320]; // [rsp+A8h] [rbp-60h] BYREF

  v6 = 0LL;
  v62 = a5;
  v7 = 0LL;
  v65 = 0LL;
  v61 = 0LL;
  v59 = 0;
  WindowFrameLoggingTelemetry::CloneWindow::CloneWindow((WindowFrameLoggingTelemetry::CloneWindow *)v71, a2);
  v9 = *((_QWORD *)this + 38);
  if ( v9 )
  {
    if ( a2 || !*(_DWORD *)(v9 + 256) )
    {
      v59 = 0;
      v29 = 1;
    }
    else
    {
      v59 = 1;
      v29 = 0;
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
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v30, 0x164Au);
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
  v19 = v62;
  *((_BYTE *)this + 264) |= 0x10u;
  v20 = CTopLevelWindow::CloneVisualTree(this, v19);
  v21 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0x165Du);
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
        v63 = 0LL;
        v32 = CVisual::ClearInstructions(v31);
        v21 = v32;
        if ( v32 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v32, 0x166Au);
          goto LABEL_35;
        }
        InstructionForLivePreview = CTopLevelAtlasedRectsVisual::GetInstructionForLivePreview(
                                      *((CTopLevelAtlasedRectsVisual **)this + 37),
                                      (*((_BYTE *)this + 608) & 0x20) == 0,
                                      &v63);
        v21 = InstructionForLivePreview;
        if ( InstructionForLivePreview < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, InstructionForLivePreview, 0x166Eu);
          goto LABEL_35;
        }
        v34 = v63;
        v35 = CVisual::AddInstruction(v31, v63);
        v21 = v35;
        if ( v35 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v35, 0x166Fu);
          goto LABEL_35;
        }
        if ( v34 )
          CBaseObject::Release(v34);
      }
      v19 = v62;
    }
  }
  if ( !v59 )
    goto LABEL_21;
  if ( !a3 )
    goto LABEL_21;
  v36 = *v19;
  v63 = 0LL;
  v62 = 0LL;
  v37 = **(CVisual ***)(*((_QWORD *)v36 + 35) + 48LL);
  if ( !v37 )
    goto LABEL_21;
  CResource::Create(0x43u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), &v65);
  CTopLevelWindow::UpdateColorizationColor(this, v38, v39);
  v66 = 248;
  memset_0(v67, 0, 0x28uLL);
  v69 = 0;
  v70 = 0;
  v40 = (float *)*((_QWORD *)this + 74);
  v6 = v65;
  v68[0] = DOUBLE_1_0;
  v41 = v40[8];
  *(float *)&v42 = v41 * v40[5];
  *(float *)&v43 = v41 * v40[4];
  *(float *)&v44 = v41 * v40[6];
  v64[0] = (CResource *)__PAIR64__(v42, v43);
  v64[1] = (CResource *)(v44 | 0x3F80000000000000LL);
  *(_OWORD *)&v68[1] = *(_OWORD *)v64;
  v45 = CResource::Send(v65, &v66, 0x2Cu);
  v21 = v45;
  if ( v45 >= 0 )
  {
    v46 = CDrawGeometryInstruction::Create(v6, *((struct CResource **)this + 71), &v61);
    v21 = v46;
    if ( v46 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v46, 0x1691u);
LABEL_62:
      v7 = v61;
      goto LABEL_31;
    }
    CResource::Create(0x43u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), &v63);
    v66 = 248;
    memset_0(v67, 0, 0x28uLL);
    v47 = (float *)*((_QWORD *)this + 75);
    v69 = 0;
    v70 = 0;
    v48 = v63;
    v68[0] = DOUBLE_1_0;
    v49 = v47[8];
    v50 = v49;
    v51 = v49 * v47[5];
    *(float *)&v52 = v49 * v47[6];
    *(float *)v64 = v50 * v47[4];
    *((float *)v64 + 1) = v51;
    v64[1] = (CResource *)(v52 | 0x3F80000000000000LL);
    *(_OWORD *)&v68[1] = *(_OWORD *)v64;
    v53 = CResource::Send(v63, &v66, 0x2Cu);
    v21 = v53;
    if ( v53 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v53, 0x169Du);
      goto LABEL_62;
    }
    v54 = CDrawGeometryInstruction::Create(
            v48,
            *((struct CResource **)this + 72),
            (struct CDrawGeometryInstruction **)&v62);
    v21 = v54;
    if ( v54 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v54, 0x16A5u);
      goto LABEL_62;
    }
    v55 = CVisual::ClearInstructions(v37);
    v21 = v55;
    if ( v55 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v55, 0x16A8u);
      goto LABEL_62;
    }
    v7 = v61;
    v56 = CVisual::AddInstruction(v37, v61);
    v21 = v56;
    if ( v56 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v56, 0x16A9u);
      goto LABEL_31;
    }
    v57 = v62;
    v58 = CVisual::AddInstruction(v37, (struct CRenderDataInstruction *)v62);
    v21 = v58;
    if ( v58 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v58, 0x16AAu);
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
    if ( v57 )
      CBaseObject::Release((CBaseObject *)v57);
    if ( v6 )
    {
      CBaseObject::Release(v6);
      v6 = 0LL;
    }
    if ( v48 )
      CBaseObject::Release(v48);
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
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v45, 0x1689u);
LABEL_33:
  if ( v6 )
    CBaseObject::Release(v6);
LABEL_35:
  wil::ActivityBase<1,0,5>::Stop((__int64)v71, v21);
  WindowFrameLoggingTelemetry::CloneWindow::~CloneWindow((WindowFrameLoggingTelemetry::CloneWindow *)v71);
  return v21;
}
