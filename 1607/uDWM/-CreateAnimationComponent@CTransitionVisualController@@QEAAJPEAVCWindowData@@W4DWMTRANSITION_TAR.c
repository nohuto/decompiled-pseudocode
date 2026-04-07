/*
 * XREFs of ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000D3E0
 * Callers:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18000EFB4 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 * Callees:
 *     ?_RecursivelyRenderOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x180004B10 (-_RecursivelyRenderOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x180004B54 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x18000516C (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x1800059BC (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCResource@@0PEAM@Z @ 0x18000A518 (-GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCResource@@0PEAM@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000B1C4 (-Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x18000B268 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18000B2B0 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18000BBE0 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z @ 0x18000BCEC (-SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ?RecordWindowRect@CAnimationComponent@@QEAAXXZ @ 0x18000BD00 (-RecordWindowRect@CAnimationComponent@@QEAAXXZ.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x18000BEB4 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ?_RemoveSnapshotFromVisualTreeIfExists@CTransitionVisualController@@IEAAXPEAVCTransitionWindowSnapshot@@@Z @ 0x18000C4EC (-_RemoveSnapshotFromVisualTreeIfExists@CTransitionVisualController@@IEAAXPEAVCTransitionWindowSn.c)
 *     ?GetSurfaceFromExistingAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@PEBUtagRECT@@_NPEAPEAVCResource@@3PEA_NPEAUMilPoint3F@@@Z @ 0x18000C744 (-GetSurfaceFromExistingAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationCompon.c)
 *     ?GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@_NPEAPEAVCResource@@4PEAUMilPoint3F@@@Z @ 0x18000C92C (-GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x18000E1B4 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000E224 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000E318 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18000E898 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSnapshot@@@Z @ 0x18000EBCC (-GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSn.c)
 *     ?SetClientAreaBrush@CAnimatedTransitionVisual@@QEAAJPEAVCResource@@0PEAUMilPoint3F@@@Z @ 0x1800147BC (-SetClientAreaBrush@CAnimatedTransitionVisual@@QEAAJPEAVCResource@@0PEAUMilPoint3F@@@Z.c)
 *     ?StealStagedVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z @ 0x180014858 (-StealStagedVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsGhostWindow@CWindowData@@QEBA_NPEAPEAUHWND__@@@Z @ 0x18001A0E4 (-IsGhostWindow@CWindowData@@QEBA_NPEAPEAUHWND__@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001A10C (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18002BDF8 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800303B4 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180037870 (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180041D38 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z @ 0x180041EEC (-_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180042168 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     EtwppTemplate_qq @ 0x18007D8C0 (EtwppTemplate_qq.c)
 *     ?CreateOrUpdateGDIClientAreaBrush@CWindowData@@QEAAJPEBVCResource@@PEAPEAV2@@Z @ 0x18007FF4C (-CreateOrUpdateGDIClientAreaBrush@CWindowData@@QEAAJPEBVCResource@@PEAPEAV2@@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008E680 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimationComponent@@PEBUtagRECT@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAPEAVCVisual@@@Z @ 0x18008F054 (-GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimat.c)
 *     Template_pddddddd @ 0x18008F558 (Template_pddddddd.c)
 */

__int64 __fastcall CTransitionVisualController::CreateAnimationComponent(
        CTransitionVisualController *a1,
        struct CWindowData *WindowDataByHwnd,
        int a3,
        char a4,
        int a5,
        struct CStoryboard *a6,
        struct tagRECT *a7,
        struct CTransitionWindowSnapshot *a8,
        int a9,
        char a10,
        struct CAnimationComponent **a11)
{
  CTransitionVisualController *v11; // rbx
  struct CVisual *v14; // r13
  struct CAnimatedTransitionVisual *v15; // r14
  __int64 v16; // rax
  __int64 (__fastcall *v17)(struct CStoryboard *, _QWORD); // rax
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // r8
  HWND *v22; // rdx
  int updated; // esi
  unsigned int v24; // ebx
  bool v25; // cf
  unsigned int v26; // ebx
  char v27; // r12
  int v28; // ecx
  int v29; // eax
  bool v30; // sf
  int v31; // esi
  int v32; // ecx
  int v33; // eax
  bool v34; // sf
  int v35; // ebx
  char v36; // cl
  bool v37; // zf
  int v38; // eax
  int v39; // eax
  char v40; // si
  bool IsGhostWindow; // al
  __int64 v42; // rdx
  int v43; // ecx
  __int64 v44; // r8
  __int64 v45; // rcx
  char v46; // bl
  __int64 v47; // rax
  CAnimationComponent *v48; // rax
  int Brush; // eax
  const struct CResource *v50; // rdx
  CTransitionVisualController *v51; // rcx
  const struct tagRECT *v52; // r9
  __int64 v53; // rdx
  const struct tagRECT *v54; // r8
  char v55; // si
  CAnimationComponent *v56; // r12
  CTransitionVisualController *v57; // rcx
  __int128 v58; // xmm0
  int v59; // eax
  char IsRTL; // al
  char v61; // al
  struct tagRECT v62; // xmm0
  struct CVisual *v63; // rbx
  int v64; // r8d
  int v65; // edx
  int v66; // eax
  int v67; // edx
  int v68; // ecx
  char v69; // r15
  struct CStoryboard *v70; // r15
  int v71; // eax
  int v72; // eax
  __int64 v73; // rdx
  CAnimationComponent **v74; // rax
  HWND v76; // rcx
  float v77; // xmm6_4
  int StoredSnapshotNoRef; // eax
  HWND v79; // rdx
  CTransitionVisualController *v80; // rcx
  int v81; // eax
  int v82; // ebx
  __int64 v83; // rcx
  CBaseObject *v84; // rcx
  struct tagRECT *p_rc; // r9
  char v86; // r8
  int v87; // eax
  int ClonableOwnedWindowCount; // eax
  int DesktopID; // eax
  HWND v90; // rcx
  struct tagRECT *v91; // r9
  int DesktopAnimationComponent; // eax
  const struct tagRECT *v93; // r9
  int v94; // r9d
  CTransitionVisualController **v95; // rax
  HWND v96; // rcx
  volatile signed __int32 *v97; // rax
  int v98; // r9d
  __int64 v99; // rdx
  __int128 v100; // xmm1
  __int128 v101; // xmm6
  unsigned int v102; // [rsp+28h] [rbp-E0h]
  char v103; // [rsp+28h] [rbp-E0h]
  char v104; // [rsp+58h] [rbp-B0h]
  char v105; // [rsp+59h] [rbp-AFh]
  bool v106; // [rsp+5Ah] [rbp-AEh]
  char v107; // [rsp+5Bh] [rbp-ADh]
  char v108; // [rsp+5Ch] [rbp-ACh]
  bool v109; // [rsp+5Dh] [rbp-ABh]
  char v110; // [rsp+5Eh] [rbp-AAh]
  bool v111; // [rsp+5Fh] [rbp-A9h] BYREF
  char v112; // [rsp+60h] [rbp-A8h]
  char v113; // [rsp+61h] [rbp-A7h]
  char v114; // [rsp+62h] [rbp-A6h]
  char v115; // [rsp+63h] [rbp-A5h]
  char v116; // [rsp+64h] [rbp-A4h]
  char v117; // [rsp+65h] [rbp-A3h]
  int v118; // [rsp+68h] [rbp-A0h]
  int v119; // [rsp+6Ch] [rbp-9Ch]
  __int64 v120; // [rsp+70h] [rbp-98h]
  struct CVisual *v121; // [rsp+78h] [rbp-90h] BYREF
  CAnimationComponent *v122; // [rsp+80h] [rbp-88h]
  struct CResource *v123; // [rsp+88h] [rbp-80h] BYREF
  int v124; // [rsp+90h] [rbp-78h]
  _BYTE v125[12]; // [rsp+94h] [rbp-74h] BYREF
  CTransitionVisualController *v126; // [rsp+A0h] [rbp-68h]
  struct CResource *v127; // [rsp+A8h] [rbp-60h] BYREF
  int v128; // [rsp+B0h] [rbp-58h]
  __int64 v129; // [rsp+B8h] [rbp-50h]
  float v130; // [rsp+C0h] [rbp-48h] BYREF
  float v131; // [rsp+C4h] [rbp-44h]
  int v132; // [rsp+C8h] [rbp-40h]
  struct CAnimatedTransitionVisual *v133; // [rsp+D0h] [rbp-38h] BYREF
  struct CTransitionWindowSnapshot *v134; // [rsp+D8h] [rbp-30h] BYREF
  struct CStoryboard *v135; // [rsp+E0h] [rbp-28h]
  CBaseObject *v136; // [rsp+E8h] [rbp-20h] BYREF
  struct CTransitionWindowSnapshot *v137; // [rsp+F0h] [rbp-18h] BYREF
  struct CAnimationComponent **v138; // [rsp+F8h] [rbp-10h]
  unsigned __int64 v139; // [rsp+100h] [rbp-8h] BYREF
  struct tagRECT rc; // [rsp+108h] [rbp+0h] BYREF
  struct tagRECT v141; // [rsp+118h] [rbp+10h] BYREF

  v11 = a1;
  v14 = 0LL;
  v124 = a5;
  v15 = 0LL;
  v134 = a8;
  v126 = a1;
  v138 = a11;
  v16 = *(_QWORD *)a6;
  LODWORD(v120) = a3 & 0xFFF;
  v116 = a4;
  v119 = a3;
  v17 = *(__int64 (__fastcall **)(struct CStoryboard *, _QWORD))(v16 + 96);
  v135 = a6;
  v121 = 0LL;
  v133 = 0LL;
  v122 = 0LL;
  v123 = 0LL;
  v127 = 0LL;
  v130 = 1.0;
  v131 = 1.0;
  v132 = 1065353216;
  v18 = v17(a6, a3 & 0xFFF);
  v19 = *((_QWORD *)WindowDataByHwnd + 15);
  LOBYTE(v18) = (v18 & 0x10) != 0;
  v136 = 0LL;
  v128 = v18;
  v20 = CTransitionVisualController::_SetDesktopId(v11, v19);
  v22 = 0LL;
  updated = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v20, 0x393u);
    return (unsigned int)updated;
  }
  if ( (_BYTE)v128 )
    a7 = 0LL;
  if ( *((_DWORD *)WindowDataByHwnd + 28) == 1 )
  {
    DesktopID = GetDesktopID(1LL, &v139);
    v22 = 0LL;
    if ( DesktopID )
    {
      if ( *((HWND *)WindowDataByHwnd + 5) == CWindowList::GetShellWindowForDesktop(
                                                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                                                v139) )
      {
        CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)WindowDataByHwnd + 3, &v141);
        v91 = &v141;
        if ( a7 )
          v91 = a7;
        DesktopAnimationComponent = CTransitionVisualController::CreateDesktopAnimationComponent(
                                      v11,
                                      WindowDataByHwnd,
                                      v124,
                                      v91,
                                      0,
                                      (*((_DWORD *)WindowDataByHwnd + 146) & 0x4000000) != 0,
                                      a6,
                                      v138);
        updated = DesktopAnimationComponent;
        if ( DesktopAnimationComponent < 0 )
        {
          MilInstrumentationCheckHR(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2u,
            DesktopAnimationComponent,
            0x3A5u);
          return (unsigned int)updated;
        }
        goto LABEL_110;
      }
      v22 = 0LL;
    }
  }
  v24 = *((_DWORD *)WindowDataByHwnd + 146);
  *(_QWORD *)&rc.left = 0LL;
  *(_QWORD *)&rc.right = 0LL;
  v118 = 0;
  v137 = 0LL;
  *(_DWORD *)&v125[8] = 0;
  v111 = 0;
  v104 = 0;
  v117 = 0;
  v109 = 0;
  *(_QWORD *)v125 = (v24 >> 18) & 1;
  if ( v116
    && (v24 & 0x20000000) != 0
    && (StoredSnapshotNoRef = CTransitionVisualController::GetStoredSnapshotNoRef(
                                v126,
                                *((HWND *)WindowDataByHwnd + 5),
                                &v137),
        v22 = 0LL,
        StoredSnapshotNoRef >= 0) )
  {
    v26 = v120;
    v105 = 1;
  }
  else
  {
    v25 = (v24 & 0x2000000) != 0;
    v105 = 0;
    v26 = v120;
    if ( !v25 )
    {
      if ( ((*(__int64 (__fastcall **)(struct CStoryboard *, _QWORD))(*(_QWORD *)a6 + 96LL))(a6, (unsigned int)v120) & 0x20) == 0 )
      {
        v107 = 1;
        goto LABEL_9;
      }
      v22 = 0LL;
    }
  }
  v107 = 0;
LABEL_9:
  if ( (_BYTE)v128
    || ((*(__int64 (__fastcall **)(struct CStoryboard *, _QWORD))(*(_QWORD *)a6 + 96LL))(a6, v26) & 0x40) != 0 )
  {
    v108 = 1;
    v27 = 0;
  }
  else
  {
    v27 = 0;
    v108 = 0;
  }
  v28 = *((_DWORD *)WindowDataByHwnd + 149) - *((_DWORD *)WindowDataByHwnd + 147);
  if ( v28 < 0 )
    v28 = 0;
  v29 = *((_DWORD *)WindowDataByHwnd + 157) - *((_DWORD *)WindowDataByHwnd + 155);
  if ( v29 < 0 )
    v29 = 0;
  if ( v28 > v29 )
  {
    v30 = *((_DWORD *)WindowDataByHwnd + 149) - *((_DWORD *)WindowDataByHwnd + 147) < 0;
    v31 = *((_DWORD *)WindowDataByHwnd + 149) - *((_DWORD *)WindowDataByHwnd + 147);
  }
  else
  {
    v30 = *((_DWORD *)WindowDataByHwnd + 157) - *((_DWORD *)WindowDataByHwnd + 155) < 0;
    v31 = *((_DWORD *)WindowDataByHwnd + 157) - *((_DWORD *)WindowDataByHwnd + 155);
  }
  if ( v30 )
    v31 = 0;
  v32 = *((_DWORD *)WindowDataByHwnd + 150) - *((_DWORD *)WindowDataByHwnd + 148);
  if ( v32 < 0 )
    v32 = 0;
  v33 = *((_DWORD *)WindowDataByHwnd + 158) - *((_DWORD *)WindowDataByHwnd + 156);
  if ( v33 < 0 )
    v33 = 0;
  if ( v32 > v33 )
  {
    v34 = *((_DWORD *)WindowDataByHwnd + 150) - *((_DWORD *)WindowDataByHwnd + 148) < 0;
    v35 = *((_DWORD *)WindowDataByHwnd + 150) - *((_DWORD *)WindowDataByHwnd + 148);
  }
  else
  {
    v34 = *((_DWORD *)WindowDataByHwnd + 158) - *((_DWORD *)WindowDataByHwnd + 156) < 0;
    v35 = *((_DWORD *)WindowDataByHwnd + 158) - *((_DWORD *)WindowDataByHwnd + 156);
  }
  if ( v34 )
    v35 = 0;
  if ( (*((_DWORD *)WindowDataByHwnd + 146) & 0x10000000) == 0
    || (ClonableOwnedWindowCount = CTransitionVisualController::GetClonableOwnedWindowCount(
                                     WindowDataByHwnd,
                                     (__int64)v22,
                                     v21),
        v36 = 1,
        ClonableOwnedWindowCount <= 0) )
  {
    v36 = 0;
  }
  v37 = (*((_DWORD *)WindowDataByHwnd + 25) & 0x20000000) == 0;
  v115 = v36;
  if ( v37 && !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 1392)
    || (v114 = 1, !*((_QWORD *)WindowDataByHwnd + 51)) )
  {
    v114 = 0;
  }
  if ( !a10 )
    goto LABEL_171;
  v38 = *((_DWORD *)WindowDataByHwnd + 14) - *((_DWORD *)WindowDataByHwnd + 12);
  if ( v38 < 0 )
    v38 = 0;
  if ( v38 < v31 )
    goto LABEL_171;
  v39 = *((_DWORD *)WindowDataByHwnd + 15) - *((_DWORD *)WindowDataByHwnd + 13);
  if ( v39 < 0 )
    v39 = 0;
  if ( v39 < v35
    || (*((_DWORD *)WindowDataByHwnd + 146) & 0x1000000) != 0
    && (*((_DWORD *)WindowDataByHwnd + 147) || *((_DWORD *)WindowDataByHwnd + 148)) )
  {
LABEL_171:
    v40 = 0;
    v110 = 0;
  }
  else
  {
    v40 = 1;
    v110 = 1;
  }
  if ( (*((_DWORD *)WindowDataByHwnd + 146) & 0x80000) == 0 || !*((_QWORD *)WindowDataByHwnd + 46) || (v112 = 1, v36) )
    v112 = 0;
  IsGhostWindow = CWindowData::IsGhostWindow(WindowDataByHwnd, v22);
  v43 = *((_DWORD *)WindowDataByHwnd + 146);
  LOBYTE(v44) = IsGhostWindow;
  v106 = IsGhostWindow;
  if ( (v43 & 0x200000) == 0 )
    goto LABEL_127;
  if ( (v43 & 0x10000000) != 0 )
  {
    if ( (unsigned int)CTransitionVisualController::GetClonableOwnedWindowCount(WindowDataByHwnd, v42, v44) )
    {
LABEL_127:
      LOBYTE(v44) = v106;
      v113 = 0;
      goto LABEL_50;
    }
    LOBYTE(v44) = v106;
  }
  if ( (*((_BYTE *)WindowDataByHwnd + 576) & 4) != 0
    || (_BYTE)v44
    || (*((_DWORD *)WindowDataByHwnd + 146) & 0x1000000) != 0
    && (*((_DWORD *)WindowDataByHwnd + 147) || *((_DWORD *)WindowDataByHwnd + 148)) )
  {
    goto LABEL_127;
  }
  v113 = 1;
LABEL_50:
  v45 = *((unsigned int *)WindowDataByHwnd + 122);
  if ( (_DWORD)v45 == 1
    && (v129 = **((_QWORD **)WindowDataByHwnd + 58), (*(_DWORD *)(v129 + 36) & 0x900000) == 0x900000) )
  {
    v46 = 1;
  }
  else
  {
    v46 = 0;
    v129 = 0LL;
  }
  if ( (_BYTE)v44 && !v46 && (*((_BYTE *)WindowDataByHwnd + 580) & 1) != 0 && v40 && (_DWORD)v45 )
  {
    v93 = a7;
    if ( !a7 )
      v93 = (const struct tagRECT *)((char *)WindowDataByHwnd + 48);
    if ( (int)CTransitionVisualController::GetSurfaceFromThumbnail(
                v45,
                *(_QWORD *)(**((_QWORD **)WindowDataByHwnd + 58) + 24LL),
                *((_DWORD *)WindowDataByHwnd + 146),
                v93,
                v108,
                &v123,
                &v127,
                &v130) >= 0 )
    {
      v107 = 0;
      v27 = 1;
    }
  }
  if ( !v105 && !*((_QWORD *)WindowDataByHwnd + 3) )
  {
    WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                         *((HWND *)WindowDataByHwnd + 5));
    if ( !WindowDataByHwnd )
    {
      updated = -2147024890;
      v102 = 999;
LABEL_216:
      v94 = updated;
LABEL_219:
      MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v94, v102);
LABEL_111:
      if ( v123 )
        CBaseObject::Release(v123);
      v56 = v122;
      goto LABEL_114;
    }
  }
  v47 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          144LL);
  if ( v47 )
    v48 = (CAnimationComponent *)CAnimationComponent::CAnimationComponent(
                                   v47,
                                   *((_QWORD *)WindowDataByHwnd + 5),
                                   v119,
                                   v124,
                                   (__int64)v135);
  else
    v48 = 0LL;
  v122 = v48;
  if ( !v48 )
  {
    updated = -2147024882;
    v102 = 1003;
    goto LABEL_216;
  }
  Brush = CTransitionVisualController::_EnsureTransitionVisualRoot(v126);
  updated = Brush;
  if ( Brush < 0 )
  {
    v102 = 1005;
    goto LABEL_218;
  }
  updated = CTransitionVisualController::_EnsureStagingVisualRoot(v126);
  if ( updated < 0 )
  {
    v102 = 1006;
    goto LABEL_216;
  }
  if ( v46 )
  {
    v118 = 10;
    goto LABEL_250;
  }
  if ( CWindowData::IsImmersiveWindow(WindowDataByHwnd) && (*((_BYTE *)WindowDataByHwnd + 580) & 0x10) != 0 && v107 )
  {
    v118 = 2;
LABEL_250:
    if ( v134 && a7 )
      a7 = (struct tagRECT *)v134;
    if ( a7 )
      v98 = (int)a7;
    else
      v98 = (_DWORD)WindowDataByHwnd + 48;
    if ( v46 )
      v99 = *(_QWORD *)(v129 + 24);
    else
      LODWORD(v99) = (_DWORD)WindowDataByHwnd;
    v56 = v122;
    if ( (int)CTransitionVisualController::GetIconicThumbnailRepresentation(
                (unsigned int)&v136,
                v99,
                (_DWORD)v122,
                v98,
                0,
                (__int64)&v136) >= 0 )
    {
      v84 = v136;
LABEL_187:
      *(_QWORD *)&v125[4] = v84;
      goto LABEL_153;
    }
    goto LABEL_80;
  }
  if ( v110 )
  {
    if ( v27 )
      goto LABEL_226;
    v52 = a7;
    if ( !a7 )
      v52 = (const struct tagRECT *)((char *)WindowDataByHwnd + 48);
    if ( v106 && *((_DWORD *)WindowDataByHwnd + 122) )
    {
      v95 = (CTransitionVisualController **)*((_QWORD *)WindowDataByHwnd + 58);
      v51 = *v95;
      v53 = *((_QWORD *)*v95 + 3);
    }
    else
    {
      v53 = (__int64)WindowDataByHwnd;
    }
    if ( (int)CTransitionVisualController::GetSurfaceFromThumbnail(
                (__int64)v51,
                v53,
                *((_DWORD *)WindowDataByHwnd + 146),
                v52,
                v108,
                &v123,
                &v127,
                &v130) >= 0 )
    {
LABEL_226:
      v96 = (HWND)*((_QWORD *)WindowDataByHwnd + 5);
      v118 = 4;
      if ( CTransitionVisualController::HasVisibleStyle(v96) )
        CTransitionVisualController::_MoveWindowOffscreen(*((struct CTopLevelWindow **)WindowDataByHwnd + 48), 1);
      goto LABEL_80;
    }
  }
  if ( a10 )
  {
    v54 = a7;
    if ( !a7 )
      v54 = (const struct tagRECT *)((char *)WindowDataByHwnd + 48);
    v55 = v105;
    v56 = v122;
    if ( (int)CTransitionVisualController::GetSurfaceFromExistingAnimationComponent(
                v126,
                v122,
                v54,
                v105,
                &v123,
                &v127,
                &v111,
                (struct MilPoint3F *)&v130) >= 0 )
    {
      v90 = (HWND)*((_QWORD *)WindowDataByHwnd + 5);
      v118 = 3;
      if ( CTransitionVisualController::HasVisibleStyle(v90) )
        CTransitionVisualController::_MoveWindowOffscreen(*((struct CTopLevelWindow **)WindowDataByHwnd + 48), 1);
      if ( v111 )
        *((_BYTE *)v56 + 67) = 1;
      goto LABEL_80;
    }
  }
  else
  {
    v56 = v122;
    v55 = v105;
  }
  if ( v112 )
  {
    v118 = 5;
    updated = CWindowData::CreateOrUpdateGDIClientAreaBrush(WindowDataByHwnd, v50, &v123);
    if ( updated < 0 )
    {
      v102 = 1083;
      goto LABEL_216;
    }
    v97 = (volatile signed __int32 *)*((_QWORD *)WindowDataByHwnd + 46);
    v127 = (struct CResource *)v97;
    if ( v97 )
    {
      _InterlockedIncrement(v97 + 2);
      v14 = v121;
    }
    goto LABEL_80;
  }
  if ( v113 )
  {
    v118 = 6;
    updated = CVisual::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), &v121);
    if ( updated >= 0 )
    {
      v14 = v121;
      updated = CTransitionVisualController::_StageCloneRelative(
                  v126,
                  *((struct CTopLevelWindow **)WindowDataByHwnd + 48),
                  v121,
                  0,
                  0LL,
                  1,
                  0,
                  1,
                  0LL);
      if ( updated < 0 )
      {
        v102 = 1099;
        goto LABEL_216;
      }
      v117 = 1;
      goto LABEL_80;
    }
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, updated, 0x44Au);
LABEL_235:
    v14 = v121;
    goto LABEL_111;
  }
  if ( v55 )
  {
    v76 = (HWND)*((_QWORD *)WindowDataByHwnd + 5);
    v118 = 7;
    if ( CTransitionVisualController::HasVisibleStyle(v76) )
      CTransitionVisualController::_MoveOwnedWindowTreeOffscreen(WindowDataByHwnd);
    Brush = CTransitionWindowSnapshot::GetBrush(v137, &v123, &v127, (float *)v125);
    updated = Brush;
    if ( Brush < 0 )
    {
      v102 = 1120;
      goto LABEL_218;
    }
    v77 = 1.0 / *(float *)v125;
    *((_BYTE *)v56 + 67) = 1;
    v104 = 1;
    v131 = v77;
    v130 = v77;
    goto LABEL_80;
  }
  if ( a10 && v114 && *(_QWORD *)(*((_QWORD *)WindowDataByHwnd + 51) + 24LL) )
  {
    v118 = 11;
    if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 1392) && a7 )
    {
      OffsetRect(a7, -*((_DWORD *)WindowDataByHwnd + 16), -*((_DWORD *)WindowDataByHwnd + 18));
      OffsetRect(a7, -*((_DWORD *)WindowDataByHwnd + 20), -*((_DWORD *)WindowDataByHwnd + 22));
    }
    v84 = *(CBaseObject **)(*((_QWORD *)WindowDataByHwnd + 51) + 24LL);
    goto LABEL_187;
  }
  if ( v115 )
  {
    v118 = 8;
    CTransitionVisualController::_RecursivelyRenderOwnedWindows(v51, WindowDataByHwnd);
    Brush = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
    updated = Brush;
    if ( Brush < 0 )
    {
      v102 = 1150;
      goto LABEL_218;
    }
    v81 = CVisual::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), &v121);
    updated = v81;
    if ( v81 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v81, 0x480u);
      goto LABEL_235;
    }
    v14 = v121;
    v82 = *(_DWORD *)v125;
    updated = CTransitionVisualController::_StageCloneWithOwnedWindows(
                (__int64)v126,
                *((struct CTopLevelWindow **)WindowDataByHwnd + 48),
                v121,
                a9,
                (*((_DWORD *)WindowDataByHwnd + 146) & 0xFFF) != 60,
                *(int *)v125);
    if ( updated < 0 )
    {
      v102 = 1160;
      goto LABEL_216;
    }
    if ( dword_1800B7044
      && (unsigned __int8)(byte_1800B7048 - 1) > 2u
      && (qword_1800B7030 & 0x8000000000000001uLL) != 0
      && (qword_1800B7038 & 0x8000000000000001uLL) == qword_1800B7038 )
    {
      EtwppTemplate_qq(v83, &EtwTraceInfo_9006, WindowDataByHwnd, *((_QWORD *)WindowDataByHwnd + 5));
    }
    *((_QWORD *)v56 + 4) = v14;
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
      v14 = v121;
    }
    if ( (*((_DWORD *)WindowDataByHwnd + 146) & 0x20000000) != 0 )
    {
      if ( v116 )
        *((_BYTE *)v56 + 67) = 1;
      if ( (*((_DWORD *)WindowDataByHwnd + 146) & 0x20000000) != 0 )
        CTransitionVisualController::_MoveOwnedWindowTreeOffscreen(WindowDataByHwnd);
    }
    v37 = (*((_DWORD *)WindowDataByHwnd + 146) & 0x80000) == 0;
    v84 = *(CBaseObject **)(*((_QWORD *)v14 + 6) + 8LL * (v82 != 0));
    *(_QWORD *)&v125[4] = v84;
    v109 = !v37 && *((_QWORD *)WindowDataByHwnd + 46);
LABEL_153:
    if ( v84 )
      goto LABEL_83;
  }
LABEL_80:
  if ( !v123 )
  {
    *(_QWORD *)&v125[4] = *((_QWORD *)WindowDataByHwnd + 48);
    v118 = 9;
    CTransitionVisualController::_MoveWindowOffscreen(*(struct CTopLevelWindow **)&v125[4], 1);
    *(_BYTE *)(*((_QWORD *)WindowDataByHwnd + 48) + 264LL) |= 0x80u;
  }
  v56 = v122;
LABEL_83:
  CAnimationComponent::RecordWindowRect(v56);
  if ( !IsRectEmpty((const RECT *)((char *)WindowDataByHwnd + 652)) )
  {
    v58 = *(_OWORD *)((char *)WindowDataByHwnd + 652);
    *((_DWORD *)v56 + 17) = 2;
    *(_OWORD *)((char *)v56 + 104) = v58;
  }
  CTransitionVisualController::_StopAnimations(v57, WindowDataByHwnd);
  v59 = CAnimatedTransitionVisual::Create(
          *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
          &v133);
  updated = v59;
  if ( v59 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v59, 0x4BFu);
    v15 = v133;
    goto LABEL_111;
  }
  IsRTL = CStoryboard::IsRTL();
  v15 = v133;
  *((_BYTE *)v133 + 956) = IsRTL;
  v61 = v104;
  if ( a7 )
  {
    v62 = *a7;
  }
  else if ( v104 )
  {
    v62 = *(struct tagRECT *)(*(_QWORD *)(*((_QWORD *)v137 + 33) + 32LL) + 48LL);
    v61 = v104;
  }
  else
  {
    v62 = *(struct tagRECT *)((char *)v56 + 88);
  }
  rc = v62;
  if ( v123 )
  {
    Brush = CAnimatedTransitionVisual::SetClientAreaBrush(v15, v123, v127, (struct MilPoint3F *)&v130);
    updated = Brush;
    if ( Brush >= 0 )
      goto LABEL_98;
    v102 = 1240;
LABEL_218:
    v94 = Brush;
    goto LABEL_219;
  }
  v63 = *(struct CVisual **)&v125[4];
  if ( v61 )
    goto LABEL_96;
  if ( a7 )
  {
    v64 = *(_DWORD *)(*(_QWORD *)&v125[4] + 108LL);
    v65 = *(_DWORD *)(*(_QWORD *)&v125[4] + 104LL);
    goto LABEL_95;
  }
  if ( *(_DWORD *)(*(_QWORD *)&v125[4] + 104LL) == -32000 && *(_DWORD *)(*(_QWORD *)&v125[4] + 108LL) == -32000 )
  {
    v64 = -32000 - rc.top;
    v65 = -32000 - rc.left;
LABEL_95:
    OffsetRect(&rc, v65, v64);
    v61 = v104;
  }
LABEL_96:
  if ( v117 )
  {
    v66 = CAnimatedTransitionVisual::StealStagedVisual(v15, v14);
    updated = v66;
    if ( v66 >= 0 )
    {
LABEL_98:
      v69 = v119;
LABEL_99:
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        v103 = v69;
        v70 = v135;
        Template_pddddddd(
          v68,
          v67,
          *((_QWORD *)WindowDataByHwnd + 5),
          *((_DWORD *)v135 + 18),
          v103,
          v118,
          rc.left,
          rc.top,
          rc.right,
          rc.bottom);
      }
      else
      {
        v70 = v135;
      }
      v71 = rc.right - rc.left;
      if ( rc.right - rc.left < 0 )
        v71 = 0;
      LODWORD(v129) = v71;
      v72 = rc.bottom - rc.top;
      if ( rc.bottom - rc.top < 0 )
        v72 = 0;
      HIDWORD(v129) = v72;
      *((_QWORD *)v15 + 117) = v129;
      if ( (_BYTE)v128 )
      {
        v100 = *(_OWORD *)((char *)WindowDataByHwnd + 588);
        v101 = *(_OWORD *)((char *)WindowDataByHwnd + 620);
        *(_OWORD *)((char *)v15 + 872) = v100;
        *(_OWORD *)((char *)v15 + 808) = v100;
        CVisual::SetDirtyFlags((struct CAnimatedTransitionVisual *)((char *)v15 + 8), 0x1000u);
        *(_OWORD *)((char *)v15 + 888) = v101;
        CVisual::SetDirtyFlags((struct CAnimatedTransitionVisual *)((char *)v15 + 8), 0x1000u);
        *((_BYTE *)v15 + 970) = 1;
      }
      v73 = (unsigned int)v120;
      *((_DWORD *)v15 + 180) = *((_DWORD *)v70 + 18);
      *((_DWORD *)v15 + 181) = v124;
      if ( (*(char (__fastcall **)(struct CStoryboard *, __int64))(*(_QWORD *)v70 + 96LL))(v70, v73) < 0 )
        *((_BYTE *)v15 + 1021) = 0;
      v74 = v138;
      *v138 = v56;
      _InterlockedIncrement((volatile signed __int32 *)v56 + 2);
      v15 = v133;
      CAnimationComponent::SetTransitionVisual(*v74, v133);
      v14 = v121;
      v11 = v126;
LABEL_110:
      if ( (*((_DWORD *)WindowDataByHwnd + 146) & 0x20000000) != 0 )
      {
        v79 = (HWND)*((_QWORD *)WindowDataByHwnd + 5);
        v134 = 0LL;
        if ( CTransitionVisualController::GetStoredSnapshotNoRef(v11, v79, &v134) >= 0 )
          CTransitionVisualController::_RemoveSnapshotFromVisualTreeIfExists(v80, v134);
      }
      goto LABEL_111;
    }
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v66, 0x4F0u);
  }
  else
  {
    v69 = v119;
    p_rc = &rc;
    if ( v61 )
      p_rc = 0LL;
    if ( (v119 & 0x4000000) == 0 || (v86 = 1, v109) )
      v86 = 0;
    if ( v14 )
      v63 = v14;
    v87 = CAnimatedTransitionVisual::SetVisual((struct CResource **)v15, v63, v86, p_rc);
    updated = v87;
    if ( v87 >= 0 )
      goto LABEL_99;
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v87, 0x4F4u);
  }
LABEL_114:
  if ( v56 )
    CBaseObject::Release(v56);
  if ( v14 )
    CBaseObject::Release(v14);
  if ( v15 )
    CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v15 + 8));
  if ( v127 )
    CBaseObject::Release(v127);
  if ( v136 )
    CBaseObject::Release(v136);
  return (unsigned int)updated;
}
