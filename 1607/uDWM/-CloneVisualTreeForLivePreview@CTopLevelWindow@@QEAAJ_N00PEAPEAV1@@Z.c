/*
 * XREFs of ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x180020E2C
 * Callers:
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x180007700 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18000E898 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x1800336E4 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x18004E8FC (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?_UpdateGlassVisual@CLivePreview@@AEAAJXZ @ 0x18006E9E8 (-_UpdateGlassVisual@CLivePreview@@AEAAJXZ.c)
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x18007E4E8 (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x1800974F0 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x180097C9C (-_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180017B68 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019EE0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001F650 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180020310 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800204C4 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@@Z @ 0x180021210 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x1800268E0 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18003D4B4 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil.c)
 *     ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18003D820 (--1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ??$?0$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18003D9F4 (--$-0$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?GetInstructionForLivePreview@CTopLevelAtlasedRectsVisual@@QEAAJ_NPEAPEAVCDrawAtlasedRectsInstruction@@@Z @ 0x18007E14C (-GetInstructionForLivePreview@CTopLevelAtlasedRectsVisual@@QEAAJ_NPEAPEAVCDrawAtlasedRectsInstru.c)
 */

__int64 __fastcall CTopLevelWindow::CloneVisualTreeForLivePreview(
        CTopLevelWindow *this,
        char a2,
        char a3,
        __int64 a4,
        struct CTopLevelWindow **a5)
{
  unsigned int *v6; // r13
  CBaseObject *v7; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // edx
  char *v15; // r12
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  struct CVisual **v19; // r15
  int InstructionForLivePreview; // eax
  int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  char v29; // al
  CVisual *v30; // r15
  int v31; // eax
  CVisual *v32; // r15
  CBaseObject *v33; // r14
  struct CVisual *v34; // rax
  CVisual *v35; // r14
  float *v36; // rax
  __int64 v37; // rcx
  float v38; // xmm0_4
  __int64 v39; // r8
  int v40; // eax
  int v41; // eax
  float *v42; // rax
  struct CVisual **v43; // r12
  struct CVisual *v44; // rcx
  float v45; // xmm0_4
  __int64 v46; // r8
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  CBaseObject *v51; // r15
  int v52; // eax
  unsigned int v53; // [rsp+28h] [rbp-E0h]
  char v54; // [rsp+48h] [rbp-C0h]
  struct CRenderDataInstruction *v56; // [rsp+50h] [rbp-B8h] BYREF
  struct CRenderDataInstruction *v57; // [rsp+58h] [rbp-B0h] BYREF
  struct CVisual **v58; // [rsp+60h] [rbp-A8h] BYREF
  struct CResource *v59; // [rsp+68h] [rbp-A0h] BYREF
  float v60; // [rsp+70h] [rbp-98h]
  int v61; // [rsp+74h] [rbp-94h]
  _BYTE v62[320]; // [rsp+78h] [rbp-90h] BYREF

  v6 = 0LL;
  v58 = a5;
  v7 = 0LL;
  v59 = 0LL;
  v57 = 0LL;
  v54 = 0;
  WindowFrameLoggingTelemetry::CloneWindow::CloneWindow((WindowFrameLoggingTelemetry::CloneWindow *)v62);
  v9 = *((_QWORD *)this + 38);
  if ( v9 )
  {
    if ( !a2 && *(_DWORD *)(v9 + 256) )
    {
      v54 = 1;
      v29 = 0;
    }
    else
    {
      v54 = 0;
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
  v15 = (char *)this + 504;
  LODWORD(v56) = 0;
  do
  {
    v16 = *(_QWORD *)v15;
    if ( *(_QWORD *)v15 )
    {
      *(_BYTE *)(v16 + 84) &= ~8u;
      *(_BYTE *)(v16 + 84) |= 8 * (a2 & 1);
      if ( !a2 )
      {
        v30 = *(CVisual **)v15;
        v21 = 0;
        if ( *(_QWORD *)(*(_QWORD *)v15 + 416LL) )
        {
          *((_BYTE *)v30 + 304) |= 0x40u;
          CVisual::SetDirtyFlags(v30, 0x10000);
          v31 = CVisual::RenderRecursive(v30);
          v14 = (int)v56;
          v21 = v31;
        }
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x137Cu);
          goto LABEL_35;
        }
      }
    }
    ++v14;
    v15 += 8;
    LODWORD(v56) = v14;
  }
  while ( v14 < 4 );
  v17 = *((_QWORD *)this + 36);
  if ( v17 )
    *(_BYTE *)(v17 + 84) &= ~8u;
  v18 = *((_QWORD *)this + 37);
  if ( v18 )
    *(_BYTE *)(v18 + 304) = 1;
  v19 = v58;
  *((_BYTE *)this + 264) |= 0x10u;
  InstructionForLivePreview = CTopLevelWindow::CloneVisualTree(this, v19);
  v21 = InstructionForLivePreview;
  if ( InstructionForLivePreview < 0 )
  {
    v53 = 5007;
LABEL_49:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, InstructionForLivePreview, v53);
    goto LABEL_35;
  }
  *((_BYTE *)this + 264) &= ~0x10u;
  v22 = *((_QWORD *)this + 37);
  if ( v22 )
  {
    *(_BYTE *)(v22 + 304) = 0;
    if ( a2 )
    {
      v32 = **(CVisual ***)(*((_QWORD *)*v19 + 35) + 48LL);
      if ( v32 )
      {
        v56 = 0LL;
        InstructionForLivePreview = CVisual::ClearInstructions(v32);
        v21 = InstructionForLivePreview;
        if ( InstructionForLivePreview < 0 )
        {
          v53 = 5020;
          goto LABEL_49;
        }
        InstructionForLivePreview = CTopLevelAtlasedRectsVisual::GetInstructionForLivePreview(
                                      *((CTopLevelAtlasedRectsVisual **)this + 37),
                                      (*((_BYTE *)this + 608) & 0x20) == 0,
                                      &v56);
        v21 = InstructionForLivePreview;
        if ( InstructionForLivePreview < 0 )
        {
          v53 = 5024;
          goto LABEL_49;
        }
        v33 = v56;
        InstructionForLivePreview = CVisual::AddInstruction(v32, v56);
        v21 = InstructionForLivePreview;
        if ( InstructionForLivePreview < 0 )
        {
          v53 = 5025;
          goto LABEL_49;
        }
        if ( v33 )
          CBaseObject::Release(v33);
      }
      v19 = v58;
    }
  }
  if ( !v54 )
    goto LABEL_21;
  if ( !a3 )
    goto LABEL_21;
  v34 = *v19;
  v58 = 0LL;
  v56 = 0LL;
  v35 = **(CVisual ***)(*((_QWORD *)v34 + 35) + 48LL);
  if ( !v35 )
    goto LABEL_21;
  CResource::Create(0x1Fu, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), &v59);
  CTopLevelWindow::UpdateColorizationColor(this);
  v36 = (float *)*((_QWORD *)this + 74);
  v6 = (unsigned int *)v59;
  v37 = *((_QWORD *)v59 + 2);
  *(float *)&v59 = v36[4] * v36[8];
  *((float *)&v59 + 1) = v36[5] * v36[8];
  v38 = v36[6] * v36[8];
  v61 = 1065353216;
  v60 = v38;
  v40 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, struct CResource **, _DWORD, _DWORD, _DWORD))(*(_QWORD *)v37 + 1136LL))(
          v37,
          v6[6],
          v39,
          &v59,
          0,
          0,
          0);
  v21 = v40;
  if ( v40 >= 0 )
  {
    v41 = CDrawGeometryInstruction::Create((struct CResource *)v6, *((struct CResource **)this + 71), &v57);
    v21 = v41;
    if ( v41 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0x13C0u);
LABEL_66:
      v7 = v57;
      goto LABEL_31;
    }
    CResource::Create(0x1Fu, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), &v58);
    v42 = (float *)*((_QWORD *)this + 75);
    v43 = v58;
    v44 = v58[2];
    *(float *)&v59 = v42[4] * v42[8];
    *((float *)&v59 + 1) = v42[5] * v42[8];
    v45 = v42[6] * v42[8];
    v61 = 1065353216;
    v60 = v45;
    v47 = (*(__int64 (__fastcall **)(struct CVisual *, _QWORD, __int64, struct CResource **, _DWORD, _DWORD, _DWORD))(*(_QWORD *)v44 + 1136LL))(
            v44,
            *((unsigned int *)v58 + 6),
            v46,
            &v59,
            0,
            0,
            0);
    v21 = v47;
    if ( v47 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v47, 0x13CAu);
      goto LABEL_66;
    }
    v48 = CDrawGeometryInstruction::Create((struct CResource *)v43, *((struct CResource **)this + 72), &v56);
    v21 = v48;
    if ( v48 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0x13D0u);
      goto LABEL_66;
    }
    v49 = CVisual::ClearInstructions(v35);
    v21 = v49;
    if ( v49 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0x13D3u);
      goto LABEL_66;
    }
    v7 = v57;
    v50 = CVisual::AddInstruction(v35, v57);
    v21 = v50;
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v50, 0x13D4u);
      goto LABEL_31;
    }
    v51 = v56;
    v52 = CVisual::AddInstruction(v35, v56);
    v21 = v52;
    if ( v52 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0x13D5u);
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
    if ( v51 )
      CBaseObject::Release(v51);
    CBaseObject::Release((CBaseObject *)v6);
    v6 = 0LL;
    CBaseObject::Release((CBaseObject *)v43);
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
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0x13BAu);
LABEL_33:
  if ( v6 )
    CBaseObject::Release((CBaseObject *)v6);
LABEL_35:
  wil::ActivityBase<WindowFrameLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v62, (unsigned int)v21);
  WindowFrameLoggingTelemetry::CloneWindow::~CloneWindow((WindowFrameLoggingTelemetry::CloneWindow *)v62);
  return (unsigned int)v21;
}
