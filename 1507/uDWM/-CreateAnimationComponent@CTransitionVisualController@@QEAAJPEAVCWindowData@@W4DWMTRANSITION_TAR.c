/*
 * XREFs of ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000DB78
 * Callers:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18000F528 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 * Callees:
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x180001500 (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 *     ?_RecursivelyRenderOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x1800017D4 (-_RecursivelyRenderOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x180001814 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18000414C (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180009228 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z @ 0x1800095C8 (-_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z.c)
 *     ?GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSnapshot@@@Z @ 0x18000C92C (-GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSn.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x18000C950 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ?_RemoveSnapshotFromVisualTreeIfExists@CTransitionVisualController@@IEAAXPEAVCTransitionWindowSnapshot@@@Z @ 0x18000CF2C (-_RemoveSnapshotFromVisualTreeIfExists@CTransitionVisualController@@IEAAXPEAVCTransitionWindowSn.c)
 *     ?GetSurfaceFromExistingAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@PEBUtagRECT@@_NPEAPEAVCResource@@3PEA_NPEAUMilPoint3F@@@Z @ 0x18000D0C4 (-GetSurfaceFromExistingAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationCompon.c)
 *     ?GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@_NPEAPEAVCResource@@4PEAUMilPoint3F@@@Z @ 0x18000D124 (-GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x18000E7E8 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000E848 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000E93C (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18000EE7C (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18000FEB8 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x1800107A8 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z @ 0x1800108B4 (-SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ?RecordWindowRect@CAnimationComponent@@QEAAXXZ @ 0x1800108C8 (-RecordWindowRect@CAnimationComponent@@QEAAXXZ.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180010C30 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x180011124 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCResource@@0PEAM@Z @ 0x1800111F8 (-GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCResource@@0PEAM@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsGhostWindow@CWindowData@@QEBA_NPEAPEAUHWND__@@@Z @ 0x180017D9C (-IsGhostWindow@CWindowData@@QEBA_NPEAPEAUHWND__@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180017DC4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180029434 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18002988C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180034EF8 (-Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?SetClientAreaBrush@CAnimatedTransitionVisual@@QEAAJPEAVCResource@@0PEAUMilPoint3F@@@Z @ 0x18003892C (-SetClientAreaBrush@CAnimatedTransitionVisual@@QEAAJPEAVCResource@@0PEAUMilPoint3F@@@Z.c)
 *     ?StealStagedVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z @ 0x1800389C8 (-StealStagedVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18003B528 (-Create@CAnimatedTransitionVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     EtwppTemplate_qq @ 0x180074BD8 (EtwppTemplate_qq.c)
 *     ?CreateOrUpdateGDIClientAreaBrush@CWindowData@@QEAAJPEBVCResource@@PEAPEAV2@@Z @ 0x180077884 (-CreateOrUpdateGDIClientAreaBrush@CWindowData@@QEAAJPEBVCResource@@PEAPEAV2@@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008C038 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimationComponent@@PEBUtagRECT@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAPEAVCVisual@@@Z @ 0x18008CBB8 (-GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimat.c)
 *     Template_pddddddd @ 0x18008D528 (Template_pddddddd.c)
 */

__int64 __fastcall CTransitionVisualController::CreateAnimationComponent(
        CTransitionVisualController *a1,
        struct CWindowData *WindowDataByHwnd,
        unsigned int a3,
        char a4,
        int a5,
        struct CStoryboard *a6,
        struct CTransitionWindowSnapshot *a7,
        struct CTransitionWindowSnapshot *a8,
        int a9,
        char a10,
        struct CAnimationComponent **a11)
{
  struct CVisual *v14; // r15
  struct CAnimatedTransitionVisual *v15; // r14
  __int64 v16; // rax
  __int64 (__fastcall *v17)(struct CStoryboard *, _QWORD); // rbx
  int v18; // eax
  __int64 v19; // rdx
  int v20; // ebx
  int v21; // eax
  __int64 v22; // r8
  int updated; // edi
  unsigned int v24; // ebx
  unsigned int v25; // edi
  int v26; // ecx
  int v27; // eax
  bool v28; // sf
  int v29; // edi
  int v30; // ecx
  int v31; // eax
  bool v32; // sf
  int v33; // ebx
  char v34; // cl
  int v35; // eax
  int v36; // eax
  char v37; // bl
  __int64 v38; // rdx
  __int64 v39; // r8
  int v40; // eax
  __int64 v41; // rcx
  char v42; // r13
  __int64 v43; // rax
  CBaseObject *v44; // rbx
  const struct CResource *v45; // rdx
  CTransitionVisualController *v46; // rcx
  const struct tagRECT *v47; // r9
  __int64 v48; // rdx
  const struct tagRECT *v49; // r8
  char v50; // di
  CTransitionVisualController *v51; // r13
  CBaseObject *v52; // r13
  CTransitionVisualController *v53; // rcx
  int v54; // eax
  bool IsRTL; // al
  char v56; // al
  struct tagRECT v57; // xmm0
  int v58; // r8d
  int v59; // edx
  int v60; // edx
  int v61; // ecx
  char v62; // r12
  struct CStoryboard *v63; // r15
  int v64; // eax
  int v65; // eax
  CAnimationComponent **v66; // rax
  CTransitionVisualController *v67; // r12
  HWND v69; // rcx
  float v70; // xmm6_4
  HWND v71; // rdx
  CTransitionVisualController *v72; // rcx
  int v73; // r13d
  __int64 v74; // rcx
  struct tagRECT *p_rc; // r9
  char v76; // r8
  struct tagRECT *v77; // r9
  int DesktopAnimationComponent; // eax
  const struct tagRECT *v79; // r9
  CTransitionVisualController **v80; // rax
  HWND v81; // rcx
  HWND v82; // rcx
  volatile signed __int32 *v83; // rax
  int v84; // r9d
  __int64 v85; // rdx
  __int128 v86; // xmm1
  __int128 v87; // xmm6
  char v88; // [rsp+58h] [rbp-B0h]
  char v89; // [rsp+59h] [rbp-AFh]
  char v90; // [rsp+5Ah] [rbp-AEh]
  char v91; // [rsp+5Bh] [rbp-ADh]
  char v92; // [rsp+5Ch] [rbp-ACh]
  bool v93; // [rsp+5Dh] [rbp-ABh]
  char v95; // [rsp+5Fh] [rbp-A9h]
  bool v96[4]; // [rsp+60h] [rbp-A8h] BYREF
  char v97; // [rsp+64h] [rbp-A4h]
  char v98; // [rsp+65h] [rbp-A3h]
  int v99; // [rsp+68h] [rbp-A0h]
  unsigned int v100; // [rsp+6Ch] [rbp-9Ch]
  __int64 v101; // [rsp+70h] [rbp-98h]
  CBaseObject *v102; // [rsp+78h] [rbp-90h]
  struct CVisual *v103; // [rsp+80h] [rbp-88h] BYREF
  struct CResource *v104; // [rsp+88h] [rbp-80h] BYREF
  CTransitionVisualController *v105; // [rsp+90h] [rbp-78h]
  struct CResource *v106; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v107; // [rsp+A0h] [rbp-68h] BYREF
  int v108; // [rsp+A4h] [rbp-64h]
  CBaseObject *v109; // [rsp+A8h] [rbp-60h]
  int v110; // [rsp+B0h] [rbp-58h]
  float v111; // [rsp+B8h] [rbp-50h] BYREF
  float v112; // [rsp+BCh] [rbp-4Ch]
  int v113; // [rsp+C0h] [rbp-48h]
  __int64 v114; // [rsp+C8h] [rbp-40h]
  struct CTransitionWindowSnapshot *v115; // [rsp+D0h] [rbp-38h] BYREF
  struct CAnimatedTransitionVisual *v116; // [rsp+D8h] [rbp-30h] BYREF
  CBaseObject *v117; // [rsp+E0h] [rbp-28h] BYREF
  struct CTransitionWindowSnapshot *v118; // [rsp+E8h] [rbp-20h] BYREF
  struct CStoryboard *v119; // [rsp+F0h] [rbp-18h]
  struct CAnimationComponent **v120; // [rsp+F8h] [rbp-10h]
  unsigned __int64 v121; // [rsp+100h] [rbp-8h] BYREF
  struct tagRECT rc; // [rsp+108h] [rbp+0h] BYREF
  struct tagRECT v123; // [rsp+118h] [rbp+10h] BYREF

  v108 = a5;
  v115 = a8;
  v120 = a11;
  v14 = 0LL;
  v103 = 0LL;
  v15 = 0LL;
  v116 = 0LL;
  v104 = 0LL;
  v106 = 0LL;
  v105 = a1;
  LODWORD(v101) = a3 & 0xFFF;
  v16 = *(_QWORD *)a6;
  v100 = a3;
  v119 = a6;
  v17 = *(__int64 (__fastcall **)(struct CStoryboard *, _QWORD))(v16 + 96);
  v111 = 1.0;
  v112 = 1.0;
  v113 = 1065353216;
  v18 = v17(a6, a3 & 0xFFF);
  v19 = *((_QWORD *)WindowDataByHwnd + 15);
  v20 = v18;
  LOBYTE(v20) = (v18 & 0x10) != 0;
  v117 = 0LL;
  v110 = v20;
  v21 = CTransitionVisualController::_SetDesktopId(a1, v19);
  updated = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v21, 0x392u);
    return (unsigned int)updated;
  }
  if ( (_BYTE)v20 )
    a7 = 0LL;
  if ( *((_DWORD *)WindowDataByHwnd + 28) == 1
    && (unsigned int)GetDesktopID(1LL, &v121)
    && *((HWND *)WindowDataByHwnd + 5) == CWindowList::GetShellWindowForDesktop(
                                            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                                            v121) )
  {
    CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)WindowDataByHwnd + 3, &v123);
    v77 = &v123;
    if ( a7 )
      v77 = (struct tagRECT *)a7;
    v67 = v105;
    DesktopAnimationComponent = CTransitionVisualController::CreateDesktopAnimationComponent(
                                  v105,
                                  WindowDataByHwnd,
                                  v108,
                                  v77,
                                  0,
                                  (*((_DWORD *)WindowDataByHwnd + 142) & 0x4000000) != 0,
                                  a6,
                                  v120);
    updated = DesktopAnimationComponent;
    if ( DesktopAnimationComponent < 0 )
    {
      MilInstrumentationCheckHR(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        DesktopAnimationComponent,
        0x3A4u);
      return (unsigned int)updated;
    }
    v44 = 0LL;
    goto LABEL_107;
  }
  v24 = *((_DWORD *)WindowDataByHwnd + 142);
  v99 = 0;
  v118 = 0LL;
  rc = 0LL;
  v102 = 0LL;
  v96[1] = 0;
  v88 = 0;
  v96[2] = 0;
  v93 = 0;
  v107 = (v24 >> 18) & 1;
  if ( a4
    && (v24 & 0x20000000) != 0
    && (int)CTransitionVisualController::GetStoredSnapshotNoRef(v105, *((HWND *)WindowDataByHwnd + 5), &v118) >= 0 )
  {
    v90 = 1;
    goto LABEL_8;
  }
  v90 = 0;
  if ( (v24 & 0x2000000) != 0 )
  {
LABEL_8:
    v25 = v101;
    goto LABEL_9;
  }
  v25 = v101;
  if ( ((*(__int64 (__fastcall **)(struct CStoryboard *, _QWORD))(*(_QWORD *)a6 + 96LL))(a6, (unsigned int)v101) & 0x20) == 0 )
  {
    v91 = 1;
    goto LABEL_10;
  }
LABEL_9:
  v91 = 0;
LABEL_10:
  if ( (_BYTE)v110
    || (v92 = 0, ((*(__int64 (__fastcall **)(struct CStoryboard *, _QWORD))(*(_QWORD *)a6 + 96LL))(a6, v25) & 0x40) != 0) )
  {
    v92 = 1;
  }
  v26 = *((_DWORD *)WindowDataByHwnd + 145) - *((_DWORD *)WindowDataByHwnd + 143);
  if ( v26 < 0 )
    v26 = 0;
  v27 = *((_DWORD *)WindowDataByHwnd + 153) - *((_DWORD *)WindowDataByHwnd + 151);
  if ( v27 < 0 )
    v27 = 0;
  if ( v26 > v27 )
  {
    v29 = *((_DWORD *)WindowDataByHwnd + 145) - *((_DWORD *)WindowDataByHwnd + 143);
    v28 = v29 < 0;
  }
  else
  {
    v29 = *((_DWORD *)WindowDataByHwnd + 153) - *((_DWORD *)WindowDataByHwnd + 151);
    v28 = v29 < 0;
  }
  if ( v28 )
    v29 = 0;
  v30 = *((_DWORD *)WindowDataByHwnd + 146) - *((_DWORD *)WindowDataByHwnd + 144);
  if ( v30 < 0 )
    v30 = 0;
  v31 = *((_DWORD *)WindowDataByHwnd + 154) - *((_DWORD *)WindowDataByHwnd + 152);
  if ( v31 < 0 )
    v31 = 0;
  if ( v30 > v31 )
  {
    v33 = *((_DWORD *)WindowDataByHwnd + 146) - *((_DWORD *)WindowDataByHwnd + 144);
    v32 = v33 < 0;
  }
  else
  {
    v33 = *((_DWORD *)WindowDataByHwnd + 154) - *((_DWORD *)WindowDataByHwnd + 152);
    v32 = v33 < 0;
  }
  if ( v32 )
    v33 = 0;
  if ( (*((_DWORD *)WindowDataByHwnd + 142) & 0x10000000) != 0
    && (int)CTransitionVisualController::GetClonableOwnedWindowCount(WindowDataByHwnd, 0LL, v22) > 0 )
  {
    v34 = 1;
    v96[0] = 1;
  }
  else
  {
    v34 = 0;
    v96[0] = 0;
  }
  if ( !a10 )
    goto LABEL_175;
  v35 = *((_DWORD *)WindowDataByHwnd + 14) - *((_DWORD *)WindowDataByHwnd + 12);
  if ( v35 < 0 )
    v35 = 0;
  if ( v35 < v29 )
    goto LABEL_175;
  v36 = *((_DWORD *)WindowDataByHwnd + 15) - *((_DWORD *)WindowDataByHwnd + 13);
  if ( v36 < 0 )
    v36 = 0;
  if ( v36 < v33
    || (*((_DWORD *)WindowDataByHwnd + 142) & 0x1000000) != 0
    && (*((_DWORD *)WindowDataByHwnd + 143) || *((_DWORD *)WindowDataByHwnd + 144)) )
  {
LABEL_175:
    v37 = 0;
    v96[3] = 0;
  }
  else
  {
    v37 = 1;
    v96[3] = 1;
  }
  if ( (*((_DWORD *)WindowDataByHwnd + 142) & 0x80000) == 0 || !*((_QWORD *)WindowDataByHwnd + 44) || (v98 = 1, v34) )
    v98 = 0;
  LOBYTE(v39) = CWindowData::IsGhostWindow(WindowDataByHwnd, 0LL);
  v89 = v39;
  v40 = *((_DWORD *)WindowDataByHwnd + 142);
  if ( (v40 & 0x200000) == 0 )
    goto LABEL_121;
  if ( (v40 & 0x10000000) != 0 )
  {
    if ( (unsigned int)CTransitionVisualController::GetClonableOwnedWindowCount(WindowDataByHwnd, v38, v39) )
    {
LABEL_121:
      LOBYTE(v39) = v89;
      v95 = 0;
      goto LABEL_47;
    }
    LOBYTE(v39) = v89;
  }
  if ( (*((_BYTE *)WindowDataByHwnd + 552) & 4) != 0
    || (_BYTE)v39
    || (*((_DWORD *)WindowDataByHwnd + 142) & 0x1000000) != 0
    && (*((_DWORD *)WindowDataByHwnd + 143) || *((_DWORD *)WindowDataByHwnd + 144)) )
  {
    goto LABEL_121;
  }
  v95 = 1;
LABEL_47:
  v41 = *((unsigned int *)WindowDataByHwnd + 116);
  if ( (_DWORD)v41 == 1
    && (v114 = **((_QWORD **)WindowDataByHwnd + 55), (*(_DWORD *)(v114 + 36) & 0x900000) == 0x900000) )
  {
    v42 = 1;
  }
  else
  {
    v42 = 0;
    v114 = 0LL;
  }
  v97 = 0;
  if ( (_BYTE)v39 && !v42 && (*((_BYTE *)WindowDataByHwnd + 556) & 1) != 0 && v37 && (_DWORD)v41 )
  {
    v79 = (const struct tagRECT *)a7;
    if ( !a7 )
      v79 = (const struct tagRECT *)((char *)WindowDataByHwnd + 48);
    if ( (int)CTransitionVisualController::GetSurfaceFromThumbnail(
                v41,
                *(_QWORD *)(**((_QWORD **)WindowDataByHwnd + 55) + 24LL),
                *((_DWORD *)WindowDataByHwnd + 142),
                v79,
                v92,
                &v104,
                &v106,
                &v111) >= 0 )
    {
      v91 = 0;
      v97 = 1;
    }
  }
  if ( !v90 && !*((_QWORD *)WindowDataByHwnd + 3) )
  {
    WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                         *((HWND *)WindowDataByHwnd + 5));
    if ( !WindowDataByHwnd )
    {
      updated = -2147024890;
      MilInstrumentationCheckHR(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        -2147024890,
        0x3DDu);
      v44 = 0LL;
      goto LABEL_108;
    }
  }
  v43 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          144LL);
  if ( v43 )
    v44 = (CBaseObject *)CAnimationComponent::CAnimationComponent(
                           v43,
                           *((_QWORD *)WindowDataByHwnd + 5),
                           v100,
                           (unsigned int)v108,
                           v119);
  else
    v44 = 0LL;
  v109 = v44;
  if ( !v44 )
  {
    updated = -2147024882;
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x3E1u);
    goto LABEL_108;
  }
  updated = CTransitionVisualController::_EnsureTransitionVisualRoot(v105);
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, updated, 0x3E3u);
    goto LABEL_108;
  }
  updated = CTransitionVisualController::_EnsureStagingVisualRoot(v105);
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, updated, 0x3E4u);
    goto LABEL_108;
  }
  if ( v42 )
  {
    v99 = 10;
  }
  else
  {
    if ( !CWindowData::IsImmersiveWindow(WindowDataByHwnd) || (*((_BYTE *)WindowDataByHwnd + 556) & 0x40) == 0 || !v91 )
    {
      if ( !v96[3] )
        goto LABEL_68;
      if ( v97 )
        goto LABEL_203;
      v47 = (const struct tagRECT *)a7;
      if ( !a7 )
        v47 = (const struct tagRECT *)((char *)WindowDataByHwnd + 48);
      if ( v89 && *((_DWORD *)WindowDataByHwnd + 116) )
      {
        v80 = (CTransitionVisualController **)*((_QWORD *)WindowDataByHwnd + 55);
        v46 = *v80;
        v48 = *((_QWORD *)*v80 + 3);
      }
      else
      {
        v48 = (__int64)WindowDataByHwnd;
      }
      if ( (int)CTransitionVisualController::GetSurfaceFromThumbnail(
                  (__int64)v46,
                  v48,
                  *((_DWORD *)WindowDataByHwnd + 142),
                  v47,
                  v92,
                  &v104,
                  &v106,
                  &v111) >= 0 )
      {
LABEL_203:
        v81 = (HWND)*((_QWORD *)WindowDataByHwnd + 5);
        v99 = 4;
        if ( CTransitionVisualController::HasVisibleStyle(v81) )
          CTransitionVisualController::_MoveWindowOffscreen(*((struct CTopLevelWindow **)WindowDataByHwnd + 46), 1);
      }
      else
      {
LABEL_68:
        if ( a10 )
        {
          v49 = (const struct tagRECT *)a7;
          if ( !a7 )
            v49 = (const struct tagRECT *)((char *)WindowDataByHwnd + 48);
          v50 = v90;
          v51 = v105;
          if ( (int)CTransitionVisualController::GetSurfaceFromExistingAnimationComponent(
                      v105,
                      v44,
                      v49,
                      v90,
                      &v104,
                      &v106,
                      &v96[1],
                      (struct MilPoint3F *)&v111) >= 0 )
          {
            v82 = (HWND)*((_QWORD *)WindowDataByHwnd + 5);
            v99 = 3;
            if ( CTransitionVisualController::HasVisibleStyle(v82) )
              CTransitionVisualController::_MoveWindowOffscreen(*((struct CTopLevelWindow **)WindowDataByHwnd + 46), 1);
            v52 = v102;
            if ( v96[1] )
              *((_BYTE *)v44 + 67) = 1;
            goto LABEL_78;
          }
        }
        else
        {
          v50 = v90;
          v51 = v105;
        }
        if ( v98 )
        {
          v99 = 5;
          updated = CWindowData::CreateOrUpdateGDIClientAreaBrush(WindowDataByHwnd, v45, &v104);
          if ( updated < 0 )
          {
            MilInstrumentationCheckHR(
              0x14u,
              &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
              2LL,
              updated,
              0x431u);
            goto LABEL_108;
          }
          v83 = (volatile signed __int32 *)*((_QWORD *)WindowDataByHwnd + 44);
          v52 = v102;
          v106 = (struct CResource *)v83;
          if ( v83 )
          {
            _InterlockedIncrement(v83 + 2);
            v14 = v103;
          }
          goto LABEL_78;
        }
        if ( v95 )
        {
          v99 = 6;
          updated = CVisual::Create(
                      *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
                      &v103);
          if ( updated >= 0 )
          {
            v14 = v103;
            updated = CTransitionVisualController::_StageCloneRelative(
                        v51,
                        *((struct CTopLevelWindow **)WindowDataByHwnd + 46),
                        v103,
                        0,
                        0LL,
                        1,
                        0,
                        1,
                        0LL);
            if ( updated < 0 )
            {
              MilInstrumentationCheckHR(
                0x14u,
                &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                2LL,
                updated,
                0x441u);
              goto LABEL_108;
            }
            v96[2] = 1;
            goto LABEL_77;
          }
          MilInstrumentationCheckHR(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2LL,
            updated,
            0x440u);
LABEL_219:
          v14 = v103;
          goto LABEL_108;
        }
        if ( v50 )
        {
          v69 = (HWND)*((_QWORD *)WindowDataByHwnd + 5);
          v99 = 7;
          if ( CTransitionVisualController::HasVisibleStyle(v69) )
            CTransitionVisualController::_MoveOwnedWindowTreeOffscreen((struct CTopLevelWindow **)WindowDataByHwnd);
          updated = CTransitionWindowSnapshot::GetBrush(v118, &v104, &v106, (float *)&v107);
          if ( updated < 0 )
          {
            MilInstrumentationCheckHR(
              0x14u,
              &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
              2LL,
              updated,
              0x456u);
            goto LABEL_108;
          }
          v70 = 1.0 / *(float *)&v107;
          *((_BYTE *)v44 + 67) = 1;
          v88 = 1;
          v112 = v70;
          v111 = v70;
          goto LABEL_77;
        }
        if ( v96[0] )
        {
          v99 = 8;
          CTransitionVisualController::_RecursivelyRenderOwnedWindows(v46, WindowDataByHwnd);
          updated = MilChannel_CommitChannel(*((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4));
          if ( updated < 0 )
          {
            MilInstrumentationCheckHR(
              0x14u,
              &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
              2LL,
              updated,
              0x467u);
            goto LABEL_108;
          }
          updated = CVisual::Create(
                      *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
                      &v103);
          if ( updated < 0 )
          {
            MilInstrumentationCheckHR(
              0x14u,
              &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
              2LL,
              updated,
              0x469u);
            goto LABEL_219;
          }
          v14 = v103;
          v73 = v107;
          updated = CTransitionVisualController::_StageCloneWithOwnedWindows(
                      (__int64)v105,
                      *((struct CTopLevelWindow **)WindowDataByHwnd + 46),
                      v103,
                      a9,
                      (*((_DWORD *)WindowDataByHwnd + 142) & 0xFFF) != 60,
                      v107);
          if ( updated < 0 )
          {
            MilInstrumentationCheckHR(
              0x14u,
              &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
              2LL,
              updated,
              0x471u);
            goto LABEL_108;
          }
          if ( dword_1800B9564
            && (unsigned __int8)(byte_1800B9568 - 1) > 2u
            && (qword_1800B9550 & 0x8000000000000001uLL) != 0
            && (qword_1800B9558 & 0x8000000000000001uLL) == qword_1800B9558 )
          {
            EtwppTemplate_qq(v74, &EtwTraceInfo_9006, WindowDataByHwnd, *((_QWORD *)WindowDataByHwnd + 5));
          }
          *((_QWORD *)v44 + 4) = v14;
          if ( v14 )
          {
            _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
            v14 = v103;
          }
          if ( (*((_DWORD *)WindowDataByHwnd + 142) & 0x20000000) != 0 )
          {
            if ( a4 )
              *((_BYTE *)v44 + 67) = 1;
            if ( (*((_DWORD *)WindowDataByHwnd + 142) & 0x20000000) != 0 )
              CTransitionVisualController::_MoveOwnedWindowTreeOffscreen((struct CTopLevelWindow **)WindowDataByHwnd);
          }
          v52 = *(CBaseObject **)(*((_QWORD *)v14 + 6) + 8LL * (v73 != 0));
          v93 = (*((_DWORD *)WindowDataByHwnd + 142) & 0x80000) != 0 && *((_QWORD *)WindowDataByHwnd + 44);
LABEL_149:
          if ( v52 )
            goto LABEL_80;
          goto LABEL_78;
        }
      }
      goto LABEL_77;
    }
    v99 = 2;
  }
  if ( v115 && a7 )
    a7 = v115;
  if ( a7 )
    v84 = (int)a7;
  else
    v84 = (_DWORD)WindowDataByHwnd + 48;
  if ( v42 )
    v85 = *(_QWORD *)(v114 + 24);
  else
    LODWORD(v85) = (_DWORD)WindowDataByHwnd;
  if ( (int)CTransitionVisualController::GetIconicThumbnailRepresentation(
              (unsigned int)&v117,
              v85,
              (_DWORD)v44,
              v84,
              0,
              (__int64)&v117) >= 0 )
  {
    v52 = v117;
    goto LABEL_149;
  }
LABEL_77:
  v52 = v102;
LABEL_78:
  if ( !v104 )
  {
    v52 = (CBaseObject *)*((_QWORD *)WindowDataByHwnd + 46);
    v99 = 9;
    CTransitionVisualController::_MoveWindowOffscreen(v52, 1);
    *(_BYTE *)(*((_QWORD *)WindowDataByHwnd + 46) + 264LL) |= 0x80u;
  }
LABEL_80:
  CAnimationComponent::RecordWindowRect(v44);
  if ( IsRectEmpty((const RECT *)((char *)WindowDataByHwnd + 636)) )
  {
    v44 = v109;
  }
  else
  {
    v44 = v109;
    *(_OWORD *)((char *)v109 + 104) = *(_OWORD *)((char *)WindowDataByHwnd + 636);
    *((_DWORD *)v44 + 17) = 2;
  }
  CTransitionVisualController::_StopAnimations(v53, WindowDataByHwnd);
  v54 = CAnimatedTransitionVisual::Create(
          *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
          &v116);
  updated = v54;
  if ( v54 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v54, 0x4A8u);
    v15 = v116;
LABEL_108:
    if ( v104 )
      CBaseObject::Release(v104);
    goto LABEL_110;
  }
  IsRTL = CStoryboard::IsRTL();
  v15 = v116;
  *((_BYTE *)v116 + 956) = IsRTL;
  v56 = v88;
  if ( a7 )
  {
    v57 = *(struct tagRECT *)a7;
  }
  else if ( v88 )
  {
    v57 = *(struct tagRECT *)(*(_QWORD *)(*((_QWORD *)v118 + 33) + 32LL) + 48LL);
    v56 = v88;
  }
  else
  {
    v57 = *(struct tagRECT *)((char *)v44 + 88);
  }
  rc = v57;
  if ( v104 )
  {
    updated = CAnimatedTransitionVisual::SetClientAreaBrush(v15, v104, v106, (struct MilPoint3F *)&v111);
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        updated,
        0x4C1u);
      goto LABEL_108;
    }
    goto LABEL_95;
  }
  if ( !v56 )
  {
    if ( a7 )
    {
      v58 = *((_DWORD *)v52 + 27);
      v59 = *((_DWORD *)v52 + 26);
      goto LABEL_92;
    }
    if ( *((_DWORD *)v52 + 26) == -32000 && *((_DWORD *)v52 + 27) == -32000 )
    {
      v58 = -32000 - rc.top;
      v59 = -32000 - rc.left;
LABEL_92:
      OffsetRect(&rc, v59, v58);
      v56 = v88;
    }
  }
  if ( v96[2] )
  {
    updated = CAnimatedTransitionVisual::StealStagedVisual(v15, v14);
    if ( updated >= 0 )
    {
LABEL_95:
      v62 = v100;
LABEL_96:
      v63 = v119;
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        Template_pddddddd(
          v61,
          v60,
          *((_QWORD *)WindowDataByHwnd + 5),
          *((_DWORD *)v119 + 18),
          v62,
          v99,
          rc.left,
          rc.top,
          rc.right,
          rc.bottom);
      v64 = rc.right - rc.left;
      if ( rc.right - rc.left < 0 )
        v64 = 0;
      LODWORD(v114) = v64;
      v65 = rc.bottom - rc.top;
      if ( rc.bottom - rc.top < 0 )
        v65 = 0;
      HIDWORD(v114) = v65;
      *((_QWORD *)v15 + 117) = v114;
      if ( (_BYTE)v110 )
      {
        v86 = *(_OWORD *)((char *)WindowDataByHwnd + 572);
        v87 = *(_OWORD *)((char *)WindowDataByHwnd + 604);
        *(_OWORD *)((char *)v15 + 872) = v86;
        *(_OWORD *)((char *)v15 + 808) = v86;
        CVisual::SetDirtyFlags((struct CAnimatedTransitionVisual *)((char *)v15 + 8), 0x1000u);
        *(_OWORD *)((char *)v15 + 888) = v87;
        CVisual::SetDirtyFlags((struct CAnimatedTransitionVisual *)((char *)v15 + 8), 0x1000u);
        *((_BYTE *)v15 + 970) = 1;
      }
      *((_DWORD *)v15 + 180) = *((_DWORD *)v63 + 18);
      *((_DWORD *)v15 + 181) = v108;
      if ( (*(char (__fastcall **)(struct CStoryboard *, _QWORD))(*(_QWORD *)v63 + 96LL))(v63, (unsigned int)v101) < 0 )
        *((_BYTE *)v15 + 1021) = 0;
      v66 = v120;
      v44 = v109;
      *v120 = v109;
      _InterlockedIncrement((volatile signed __int32 *)v44 + 2);
      v15 = v116;
      CAnimationComponent::SetTransitionVisual(*v66, v116);
      v14 = v103;
      v67 = v105;
LABEL_107:
      if ( (*((_DWORD *)WindowDataByHwnd + 142) & 0x20000000) != 0 )
      {
        v71 = (HWND)*((_QWORD *)WindowDataByHwnd + 5);
        v115 = 0LL;
        if ( (int)CTransitionVisualController::GetStoredSnapshotNoRef(v67, v71, &v115) >= 0 )
          CTransitionVisualController::_RemoveSnapshotFromVisualTreeIfExists(v72, v115);
      }
      goto LABEL_108;
    }
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, updated, 0x4D9u);
  }
  else
  {
    v62 = v100;
    p_rc = &rc;
    if ( v56 )
      p_rc = 0LL;
    if ( (v100 & 0x4000000) == 0 || (v76 = 1, v93) )
      v76 = 0;
    if ( v14 )
      v52 = v14;
    updated = CAnimatedTransitionVisual::SetVisual((struct CResource **)v15, v52, v76, p_rc);
    if ( updated >= 0 )
      goto LABEL_96;
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, updated, 0x4DDu);
  }
LABEL_110:
  if ( v44 )
    CBaseObject::Release(v44);
  if ( v14 )
    CBaseObject::Release(v14);
  if ( v15 )
    CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v15 + 8));
  if ( v106 )
    CBaseObject::Release(v106);
  if ( v117 )
    CBaseObject::Release(v117);
  return (unsigned int)updated;
}
