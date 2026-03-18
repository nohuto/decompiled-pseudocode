/*
 * XREFs of xxxMenuWindowProc @ 0x1C0135770
 * Callers:
 *     ?xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0133400 (-xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     xxxSendUAHMenuMessage @ 0x1C000FF8C (xxxSendUAHMenuMessage.c)
 *     xxxMenuDraw @ 0x1C0014214 (xxxMenuDraw.c)
 *     xxxMNCompute @ 0x1C0015858 (xxxMNCompute.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     GreGetLayout @ 0x1C006B8B4 (GreGetLayout.c)
 *     MNGetpItemIndex @ 0x1C006EE50 (MNGetpItemIndex.c)
 *     xxxDefWindowProc @ 0x1C006F890 (xxxDefWindowProc.c)
 *     MNIsUAHMenu @ 0x1C00707A8 (MNIsUAHMenu.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     GetAppCompatFlags2 @ 0x1C00722A8 (GetAppCompatFlags2.c)
 *     xxxSetWindowPosAndBand @ 0x1C0074F6C (xxxSetWindowPosAndBand.c)
 *     _MonitorFromWindow @ 0x1C0077FC0 (_MonitorFromWindow.c)
 *     _PostMessage @ 0x1C0078490 (_PostMessage.c)
 *     xxxShowWindowEx @ 0x1C00794D0 (xxxShowWindowEx.c)
 *     NextTopWindow @ 0x1C008B4E8 (NextTopWindow.c)
 *     FBadWindow @ 0x1C008CA1C (FBadWindow.c)
 *     xxxSetForegroundWindow @ 0x1C008CF98 (xxxSetForegroundWindow.c)
 *     xxxActivateThisWindow @ 0x1C008E8B8 (xxxActivateThisWindow.c)
 *     xxxDWP_DoNCActivate @ 0x1C00CADC0 (xxxDWP_DoNCActivate.c)
 *     PlayEventSound @ 0x1C00F0C20 (PlayEventSound.c)
 *     FindTimer @ 0x1C00F646C (FindTimer.c)
 *     xxxValidateRect @ 0x1C0104000 (xxxValidateRect.c)
 *     MNAllocPopup @ 0x1C0133454 (MNAllocPopup.c)
 *     ?MNCheckScroll@@YAHPEAUtagPOPUPMENU@@PEAUtagMENU@@PEAUtagMONITOR@@@Z @ 0x1C0133494 (-MNCheckScroll@@YAHPEAUtagPOPUPMENU@@PEAUtagMENU@@PEAUtagMONITOR@@@Z.c)
 *     ?MNGetPopupBoundsRect@@YAXPEAUtagPOPUPMENU@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0133580 (-MNGetPopupBoundsRect@@YAXPEAUtagPOPUPMENU@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     xxxMNButtonDown @ 0x1C0133690 (xxxMNButtonDown.c)
 *     ?xxxMNDoScroll@@YAHPEAUtagPOPUPMENU@@IH@Z @ 0x1C0133720 (-xxxMNDoScroll@@YAHPEAUtagPOPUPMENU@@IH@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C0133768 (xxxMNOpenHierarchy.c)
 *     xxxMNSetCapture @ 0x1C0134B04 (xxxMNSetCapture.c)
 *     FindBestPos @ 0x1C0134B7C (FindBestPos.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C013776C (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C013777C (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01377A4 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxMNEndMenuState @ 0x1C01377F0 (xxxMNEndMenuState.c)
 *     IsMFMWFPWindow @ 0x1C0138064 (IsMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0138088 (xxxMNFindWindowFromPoint.c)
 *     xxxMNMouseMove @ 0x1C0138358 (xxxMNMouseMove.c)
 *     xxxMNButtonUp @ 0x1C013849C (xxxMNButtonUp.c)
 *     xxxMNCancel @ 0x1C01385D8 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0138900 (xxxMNCloseHierarchy.c)
 *     LockPopupMenu @ 0x1C0138B8C (LockPopupMenu.c)
 *     xxxMNSelectItem @ 0x1C0138CE0 (xxxMNSelectItem.c)
 *     MNAnimate @ 0x1C01393FC (MNAnimate.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0139460 (safe_cast_fnid_to_PMENUWND.c)
 *     zzzStartFade @ 0x1C01397A8 (zzzStartFade.c)
 *     zzzShowFade @ 0x1C0139870 (zzzShowFade.c)
 *     CreateFade @ 0x1C0139CBC (CreateFade.c)
 *     xxxEndMenuLoop @ 0x1C013A060 (xxxEndMenuLoop.c)
 *     GreSetWindowOrg @ 0x1C013F02C (GreSetWindowOrg.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _SetTimer @ 0x1C01EA450 (_SetTimer.c)
 *     MNCreateAnimationBitmap @ 0x1C01FD3AC (MNCreateAnimationBitmap.c)
 *     xxxUserModeCallback @ 0x1C02154C0 (xxxUserModeCallback.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C0215774 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIPEAUtagPOPUPMENU@@@Z @ 0x1C02157C8 (-MNSetTimerToOpenHierarchy@@YAIPEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z @ 0x1C0215850 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C02158F8 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0215A84 (-xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z.c)
 *     MNCheckButtonDownState @ 0x1C02164AC (MNCheckButtonDownState.c)
 *     MNGetpItem @ 0x1C02164F0 (MNGetpItem.c)
 *     xxxCallHandleMenuMessages @ 0x1C0216594 (xxxCallHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C0216698 (xxxMNChar.c)
 *     xxxMNDoubleClick @ 0x1C0216AA0 (xxxMNDoubleClick.c)
 *     xxxMNKeyDown @ 0x1C0216CA8 (xxxMNKeyDown.c)
 *     MNFindNextValidItem @ 0x1C023D958 (MNFindNextValidItem.c)
 *     MNDrawEdge @ 0x1C023F94C (MNDrawEdge.c)
 *     MNEraseBackground @ 0x1C023FB70 (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C02418A0 (xxxMNDrawFullNC.c)
 */

__int64 __fastcall xxxMenuWindowProc(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  __int16 v4; // ax
  __int64 v5; // rsi
  struct tagWND *v7; // r14
  __int64 v9; // rdi
  __int64 v10; // r15
  struct tagMENUSTATE *i; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // r9
  unsigned int v15; // r10d
  unsigned int v16; // r11d
  __int64 v17; // r13
  __int64 v18; // rbx
  struct tagTHREADINFO **v19; // r11
  __int64 v20; // r8
  int v21; // eax
  unsigned int v22; // r10d
  unsigned int v23; // r10d
  unsigned int v24; // r10d
  unsigned int v25; // r10d
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // r8d
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // rdx
  struct tagWND *v37; // r15
  unsigned int v38; // edi
  struct tagWND *TopWindow; // rax
  unsigned int v40; // eax
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // r9
  __int64 *v44; // r11
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  unsigned __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  int v52; // ecx
  __int64 v53; // rcx
  __int64 v54; // rcx
  int v55; // ecx
  _DWORD *v56; // rdi
  unsigned __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  int v60; // ecx
  __int64 v61; // rcx
  __int64 v62; // rcx
  int v63; // ecx
  _DWORD *v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  unsigned int v67; // r10d
  unsigned int v68; // r10d
  unsigned int v69; // r10d
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rcx
  unsigned __int64 Fade; // rax
  int v74; // ecx
  unsigned int v75; // eax
  unsigned int v76; // eax
  int v77; // eax
  struct tagTHREADINFO *v78; // rcx
  char v79; // al
  bool v80; // zf
  _DWORD *v81; // rax
  __int64 v82; // rax
  struct tagWND *v83; // rcx
  unsigned __int64 v84; // rdx
  __int64 v85; // r8
  __int64 DCEx; // rbx
  __int64 v87; // rdi
  int v88; // ebx
  __int64 v89; // rdi
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rbx
  __int64 v93; // r8
  __int64 DPIMetrics; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  unsigned int ValidItem; // eax
  __int64 v98; // rdi
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rbx
  __int64 v102; // rdx
  __int64 v103; // rcx
  struct tagTHREADINFO *v104; // rcx
  __int64 v105; // rdx
  __int64 v106; // rdx
  __int64 v107; // rcx
  struct tagMONITOR *v108; // rdi
  __int64 v109; // rdx
  __int64 v110; // rcx
  unsigned __int16 v111; // r13
  int v112; // ecx
  int BestPos; // eax
  unsigned __int64 v114; // rcx
  __int64 v115; // rcx
  __int64 v116; // rcx
  int v117; // ecx
  __int64 v118; // rcx
  __int64 v119; // rcx
  int v120; // ecx
  _DWORD *v121; // rdi
  unsigned __int64 v122; // rcx
  __int64 v123; // rcx
  __int64 v124; // rcx
  int v125; // ecx
  __int64 v126; // rcx
  __int64 v127; // rcx
  int v128; // ecx
  _DWORD *v129; // rcx
  unsigned __int16 v130; // bx
  __int64 v131; // rcx
  __int64 v132; // rax
  __int16 v133; // r8
  __int64 *v134; // r11
  __int64 v135; // rax
  __int64 *v136; // r9
  __int64 v137; // rcx
  __int64 v138; // rdx
  __int64 v139; // r9
  unsigned __int64 v140; // r8
  struct tagWND *v141; // rcx
  __int64 v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // rdx
  __int64 v146; // rcx
  unsigned int v147; // r10d
  int v148; // edi
  unsigned int v149; // r13d
  unsigned __int64 v150; // rcx
  __int64 v151; // rcx
  __int64 v152; // rcx
  __int64 v153; // rcx
  __int64 v154; // rcx
  unsigned __int64 v156; // rcx
  __int64 v157; // rcx
  __int64 v158; // rcx
  __int64 v159; // rcx
  __int64 v160; // rcx
  unsigned __int64 v162; // rcx
  __int64 v163; // rcx
  __int64 v164; // rcx
  __int64 v165; // rcx
  __int64 v166; // rcx
  unsigned __int64 v168; // rcx
  __int64 v169; // rcx
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // rcx
  __int64 v174; // rcx
  __int64 v175; // rcx
  unsigned int v176; // [rsp+58h] [rbp-B0h]
  __int64 v177; // [rsp+60h] [rbp-A8h]
  struct tagITEM *v178; // [rsp+60h] [rbp-A8h]
  int v179; // [rsp+60h] [rbp-A8h]
  int v181; // [rsp+68h] [rbp-A0h]
  __int64 v182; // [rsp+70h] [rbp-98h]
  int v183; // [rsp+70h] [rbp-98h]
  struct tagWND *v184; // [rsp+78h] [rbp-90h]
  int v185; // [rsp+78h] [rbp-90h]
  unsigned __int64 v186; // [rsp+80h] [rbp-88h] BYREF
  int v187; // [rsp+88h] [rbp-80h] BYREF
  int v188; // [rsp+8Ch] [rbp-7Ch] BYREF
  char v189[4]; // [rsp+90h] [rbp-78h]
  __int64 v190; // [rsp+98h] [rbp-70h] BYREF
  __int64 v191; // [rsp+A0h] [rbp-68h]
  char v192[8]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v193; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v194[3]; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v195[3]; // [rsp+D8h] [rbp-30h] BYREF
  struct tagRECT v196; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD v197[3]; // [rsp+100h] [rbp-8h] BYREF

  v4 = *((_WORD *)a1 + 33);
  v5 = 0LL;
  v177 = a4;
  v176 = 0;
  v7 = a1;
  if ( v4 != 668 )
  {
    if ( v4 || *((_DWORD *)a1 + 58) + 376 < (unsigned int)*(unsigned __int16 *)(gpsi + 332LL) )
      return 0LL;
    if ( a2 != 129 )
      return xxxDefWindowProc(a1, a2, a3, a4);
    if ( *((_QWORD *)a1 + 47) )
      return 0LL;
    *((_WORD *)a1 + 33) = 668;
  }
  v9 = *((_QWORD *)a1 + 2);
  if ( v9 != gptiCurrent )
  {
    _InterlockedAdd(&glSendMessage, 1u);
    return xxxSendTransformableMessageTimeout(a1, a2, a3, a4, 0, 0, 0LL, 1, 1);
  }
  v10 = *((_QWORD *)a1 + 47);
  if ( v10 )
  {
    for ( i = *(struct tagMENUSTATE **)(v9 + 528); i; i = (struct tagMENUSTATE *)*((_QWORD *)i + 6) )
    {
      if ( *(_QWORD *)i == *(_QWORD *)(v10 + 64) )
        break;
    }
  }
  else
  {
    i = 0LL;
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)v192, i);
  if ( v10 )
    v17 = *(_QWORD *)(v10 + 40);
  else
    v17 = 0LL;
  v18 = 1LL;
  if ( i && v17 )
  {
    v19 = (struct tagTHREADINFO **)gptiCurrent;
    v20 = 1LL;
    v176 = 1;
    v194[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v194;
    v194[1] = v17;
    ++*(_DWORD *)(v17 + 8);
    v12 = *(_QWORD *)(v10 + 64);
    if ( !v12 || (v21 = 1, **(_QWORD **)(*((_QWORD *)v7 + 2) + 528LL) == v12) )
      v21 = 0;
    v13 = *((unsigned int *)i + 2);
    if ( (v13 & 0x100) == 0 || (v13 & 0x200) != 0 )
      goto LABEL_35;
    if ( v21 )
    {
      if ( v15 - 512 <= 0xE || v15 - 256 <= 9 || v15 - 160 <= 0xD )
        goto LABEL_71;
LABEL_35:
      if ( v15 <= 0x1E1 )
      {
        if ( v15 != 481 )
        {
          if ( v15 <= 0x81 )
          {
            if ( v15 != 129 )
            {
              if ( v15 <= 0x18 )
              {
                if ( v15 != 24 )
                {
                  v22 = v15 - 3;
                  if ( v22 )
                  {
                    v23 = v22 - 2;
                    if ( v23 )
                    {
                      v24 = v23 - 1;
                      if ( v24 )
                      {
                        v25 = v24 - 9;
                        if ( v25 )
                        {
                          if ( v25 == 5 && *(_QWORD *)(v17 + 112) )
                          {
                            MNEraseBackground((HDC)a3, v17, 0);
                            goto LABEL_461;
                          }
LABEL_70:
                          if ( !v176 )
                          {
LABEL_72:
                            v15 = a2;
                            goto LABEL_73;
                          }
LABEL_71:
                          ThreadUnlock1(v13, v12);
                          v14 = v177;
                          goto LABEL_72;
                        }
                        xxxHandleMenuPainting(v7, (struct tagMENU *)v17);
LABEL_454:
                        if ( v176 )
                          ThreadUnlock1(v13, v12);
                        goto LABEL_74;
                      }
                      v28 = *((_DWORD *)i + 2);
                      if ( (v28 & 0x100) != 0 )
                      {
                        if ( (_WORD)a3 )
                          goto LABEL_70;
                        if ( (v28 & 0x200) != 0 )
                          goto LABEL_70;
                        if ( (**(_DWORD **)i & 0x80000) != 0 )
                          goto LABEL_70;
                        v177 = HMValidateHandleNoSecure(v14, 1);
                        v29 = safe_cast_fnid_to_PMENUWND(v177);
                        if ( !v14 )
                          goto LABEL_70;
                        if ( v29 )
                        {
                          v30 = *(_QWORD *)(v29 + 376);
                          if ( v30 )
                          {
                            if ( *(_QWORD *)i == *(_QWORD *)(v30 + 64) )
                              goto LABEL_70;
                          }
                        }
                        v31 = *((_DWORD *)i + 2);
                        if ( (v31 & 0x10000) != 0 && gpqForeground == *(_QWORD *)(gptiCurrent + 384LL) )
                        {
                          *((_DWORD *)i + 2) = v31 & 0xFFFEFFFF;
                          PostMessage((__int64)v7, 498LL, 0LL, 0LL);
                          goto LABEL_69;
                        }
                        goto LABEL_75;
                      }
                      if ( !(_WORD)a3 )
                        goto LABEL_454;
                      if ( *((_WORD *)*v19 + 276) >= 0x500u )
                      {
LABEL_75:
                        v32 = (__int64)v7;
LABEL_76:
                        PostMessage(v32, 499LL, 0LL, 0LL);
                        goto LABEL_454;
                      }
                      if ( gpqForegroundPrev )
                      {
                        if ( !(unsigned int)FBadWindow(*(struct tagWND **)(gpqForegroundPrev + 88LL)) )
                        {
                          v13 = gpqForegroundPrev;
                          v12 = *(_QWORD *)(gpqForegroundPrev + 88LL);
                          if ( (*(_WORD *)(v12 + 66) & 0x3FFF) != 0x29C )
                          {
                            v7 = *(struct tagWND **)(gpqForegroundPrev + 88LL);
LABEL_83:
                            if ( !v7 )
                              goto LABEL_454;
                            v35 = gptiCurrent;
                            v195[0] = *(_QWORD *)(gptiCurrent + 368LL);
                            *(_QWORD *)(gptiCurrent + 368LL) = v195;
                            v195[1] = v7;
                            ++*((_DWORD *)v7 + 2);
                            v36 = *(_QWORD *)(gptiCurrent + 384LL);
                            if ( *(_QWORD *)(*((_QWORD *)v7 + 2) + 384LL) == v36 )
                            {
                              xxxActivateThisWindow(v7, 0, 2, 0);
                            }
                            else if ( gpqForeground == v36 )
                            {
                              xxxSetForegroundWindow(v7, 0LL, v33, v34);
                            }
                            goto LABEL_191;
                          }
                        }
                        v19 = (struct tagTHREADINFO **)gptiCurrent;
                      }
                      v37 = v7;
                      v38 = 0;
                      while ( 1 )
                      {
                        TopWindow = NextTopWindow(*v19, (__int64)v7, 0LL, 0);
                        v7 = TopWindow;
                        if ( !TopWindow )
                          break;
                        if ( !(unsigned int)FBadWindow(*((struct tagWND **)TopWindow + 30)) )
                        {
                          v13 = *(_WORD *)(*((_QWORD *)v7 + 30) + 66LL) & 0x3FFF;
                          if ( (_DWORD)v13 != 668 )
                          {
                            v7 = (struct tagWND *)*((_QWORD *)v7 + 30);
                            goto LABEL_83;
                          }
                        }
                        v40 = v38++;
                        if ( v40 >= 0xFF )
                          break;
                        v19 = (struct tagTHREADINFO **)gptiCurrent;
                      }
                      if ( v38 )
                      {
                        v32 = (__int64)v37;
                        goto LABEL_76;
                      }
                      goto LABEL_83;
                    }
                  }
                  if ( !*(_QWORD *)(v10 + 24) )
                    goto LABEL_454;
                  v178 = (struct tagITEM *)MNGetpItem(v10, *(unsigned int *)(v10 + 84));
                  v42 = safe_cast_fnid_to_PMENUWND(v41);
                  v184 = (struct tagWND *)v42;
                  if ( !v43 )
                    goto LABEL_454;
                  if ( !v42 )
                    goto LABEL_454;
                  v13 = *(_QWORD *)(v42 + 376);
                  if ( !v13 )
                    goto LABEL_454;
                  v45 = *(_QWORD *)(v13 + 40);
                  v46 = *v44;
                  v187 = 0;
                  v188 = 0;
                  v182 = v45;
                  v190 = *(_QWORD *)(v46 + 368);
                  *(_QWORD *)(v46 + 368) = &v190;
                  v191 = v42;
                  ++*(_DWORD *)(v42 + 8);
                  v47 = *v44;
                  v197[0] = *(_QWORD *)(*v44 + 368);
                  *(_QWORD *)(v47 + 368) = v197;
                  v197[1] = v45;
                  ++*(_DWORD *)(v45 + 8);
                  if ( !*(_DWORD *)(v45 + 56) )
                  {
                    _InterlockedAdd(&glSendMessage, 1u);
                    xxxSendTransformableMessageTimeout((struct tagWND *)v42, 482LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
                    v43 = (__int64)v178;
                  }
                  v48 = *(_QWORD *)(v10 + 40);
                  if ( !v48 || (unsigned int)MNGetpItemIndex(v48, v43) == -1 )
                    goto LABEL_145;
                  if ( (unsigned int)IsDPIAbsoluteSysMet(8uLL) )
                  {
                    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 776) & 0x2000) != 0
                      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v50) + 776) & 0x4000) != 0 )
                    {
                      goto LABEL_109;
                    }
                  }
                  else if ( !IsDPIDWMSysMet(v49)
                         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v53) + 776) & 0x2000) != 0
                         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x4000) != 0
                         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                           ? (v55 = 0)
                           : (v55 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                      + 408)
                                                          + 8LL)
                                              + 244LL) & 1),
                             !v55) )
                  {
LABEL_109:
                    if ( IsDPIDWMSysMet(8uLL)
                      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v51) + 776) & 0x2000) != 0
                      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                        ? (v52 = 0)
                        : (v52 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                   + 408)
                                                       + 8LL)
                                           + 244LL) & 1),
                          v52) )
                    {
                      v56 = (_DWORD *)(gpsi + 2688LL);
                    }
                    else
                    {
                      v56 = (_DWORD *)(gpsi + 1912LL);
                    }
LABEL_125:
                    if ( (unsigned int)IsDPIAbsoluteSysMet(7uLL) )
                    {
                      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v57) + 776) & 0x2000) != 0
                        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v58) + 776) & 0x4000) != 0 )
                      {
                        goto LABEL_128;
                      }
                    }
                    else if ( !IsDPIDWMSysMet(v57)
                           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v61) + 776) & 0x2000) != 0
                           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v62) + 776) & 0x4000) != 0
                           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                             ? (v63 = 0)
                             : (v63 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                        + 408)
                                                            + 8LL)
                                                + 244LL) & 1),
                               !v63) )
                    {
LABEL_128:
                      if ( IsDPIDWMSysMet(7uLL)
                        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v59) + 776) & 0x2000) != 0
                        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                          ? (v60 = 0)
                          : (v60 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                     + 408)
                                                         + 8LL)
                                             + 244LL) & 1),
                            v60) )
                      {
                        v64 = (_DWORD *)(gpsi + 2684LL);
                      }
                      else
                      {
                        v64 = (_DWORD *)(gpsi + 1908LL);
                      }
                      goto LABEL_144;
                    }
                    v64 = (_DWORD *)(gpsi + 2296LL);
LABEL_144:
                    xxxMNPositionHierarchy(
                      (struct tagPOPUPMENU *)v10,
                      v178,
                      *(_DWORD *)(v182 + 56) + 2 * *v64,
                      *(_DWORD *)(v182 + 60) + 2 * *v56,
                      &v187,
                      &v188,
                      0LL);
LABEL_145:
                    xxxSetWindowPosAndBand(v184, 0, v187, v188, 0, 0, 1029, 0);
                    ThreadUnlock1(v66, v65);
LABEL_191:
                    ThreadUnlock1(v35, v36);
                    goto LABEL_454;
                  }
                  v56 = (_DWORD *)(gpsi + 2300LL);
                  goto LABEL_125;
                }
                if ( a3 )
                  goto LABEL_70;
                xxxMNCancel(i, 0LL, 0LL, 0LL);
LABEL_69:
                v14 = v177;
                goto LABEL_70;
              }
              v67 = v15 - 28;
              if ( !v67 )
              {
                if ( (*((_DWORD *)i + 2) & 0x100) == 0 || v7 != *(struct tagWND **)(*(_QWORD *)i + 56LL) )
                  goto LABEL_454;
                if ( a3 )
                {
                  PostMessage((__int64)v7, 498LL, 0LL, 0LL);
                  v19 = (struct tagTHREADINFO **)gptiCurrent;
                  v13 = *(_QWORD *)(gptiCurrent + 384LL);
                  *((_DWORD *)i + 2) ^= (*((_DWORD *)i + 2) ^ ((gpqForeground != v13) << 16)) & 0x10000;
                }
                v12 = *(_QWORD *)(v10 + 8);
                if ( !v12 )
                  goto LABEL_454;
                v78 = *v19;
                v190 = *((_QWORD *)*v19 + 46);
                *((_QWORD *)v78 + 46) = &v190;
                v191 = v12;
                ++*(_DWORD *)(v12 + 8);
                if ( !a3 || (v79 = 1, (*((_BYTE *)i + 10) & 1) != 0) )
                  v79 = 2;
                xxxDWP_DoNCActivate(*(struct tagWND **)(v10 + 8), v79, 1LL);
                goto LABEL_191;
              }
              v68 = v67 - 42;
              if ( v68 )
              {
                v69 = v68 - 1;
                if ( !v69 )
                {
                  if ( (*(_DWORD *)(v14 + 32) & 0x40) == 0 || (*(_DWORD *)v10 & 0x8000000) == 0 )
                    goto LABEL_70;
                  v72 = gfade[12];
                  if ( (v72 & 0x10) != 0 )
                  {
                    zzzStartFade(v72, v12, v20);
                  }
                  else
                  {
                    *((_DWORD *)i + 26) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
                    SetTimer((_DWORD)v7, 65531, 10, 0, 0);
                  }
                  *(_DWORD *)v10 &= ~0x8000000u;
                  goto LABEL_69;
                }
                if ( v69 != 41 )
                  goto LABEL_70;
                if ( i && (*((_DWORD *)i + 2) & 0x400) != 0 )
                {
                  v193 = *(_QWORD *)v7;
                  xxxUserModeCallback(100, (unsigned int)&v193, 8, v14);
                }
                xxxMNDestroyHandler(v7);
LABEL_156:
                if ( v176 )
                  ThreadUnlock1(v71, v70);
                goto LABEL_464;
              }
              if ( (*(_DWORD *)(v14 + 32) & 0x40) == 0 )
                goto LABEL_70;
              v13 = (unsigned int)gpdwCPUserPreferencesMask & 0x80000002;
              if ( (_DWORD)v13 != -2147483646
                || (*(_DWORD *)v10 & 0x8000000) == 0
                || (v13 = glinp[8], (v13 & 0x11) != 0) )
              {
LABEL_173:
                *(_DWORD *)v10 &= ~0x8000000u;
                goto LABEL_70;
              }
              if ( (GetAppCompatFlags2(0x400u) & 1) == 0 )
              {
                *((_DWORD *)i + 29) = *((_DWORD *)v7 + 30) - *((_DWORD *)v7 + 28);
                *((_DWORD *)i + 30) = *((_DWORD *)v7 + 31) - *((_DWORD *)v7 + 29);
                if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000200) != 0x80000200 )
                {
                  if ( !(unsigned int)MNCreateAnimationBitmap(i, *((unsigned int *)i + 29)) )
                    goto LABEL_172;
                  *((_QWORD *)i + 12) = _GetDCEx(v7, 1LL, 65665LL);
                  v74 = 0;
                  v75 = *((_DWORD *)i + 2) ^ (*((_DWORD *)i + 2) ^ (*(_DWORD *)v10 >> 4)) & 0xF80000;
                  *((_DWORD *)i + 2) = v75;
                  v76 = v75 >> 19;
                  if ( (v76 & 3) == 0 )
                    v74 = *((_DWORD *)i + 29);
                  v80 = (v76 & 0xC) == 0;
                  *((_DWORD *)i + 27) = v74;
                  v77 = 0;
                  if ( v80 )
                    v77 = *((_DWORD *)i + 30);
                  *((_DWORD *)i + 28) = v77;
                  Fade = *((_QWORD *)i + 17);
                }
                else
                {
                  Fade = CreateFade(v7, 0LL, *((_DWORD *)v7 + 86));
                  if ( !Fade )
                    goto LABEL_172;
                }
                *(_DWORD *)(v17 + 40) |= 8u;
                _InterlockedAdd(&glSendMessage, 1u);
                xxxSendTransformableMessageTimeout(v7, 791LL, Fade, 14LL, 0, 0, 0LL, 1, 1);
                *(_DWORD *)(v17 + 40) &= ~8u;
                v13 = gfade[12];
                if ( (v13 & 0x10) != 0 )
                  zzzShowFade();
                goto LABEL_69;
              }
LABEL_172:
              v14 = v177;
              goto LABEL_173;
            }
            v16 = v176;
            goto LABEL_193;
          }
          v16 = v176;
LABEL_202:
          v12 = 131LL;
          switch ( v15 )
          {
            case 0x83u:
              xxxDefWindowProc(v7, 0x83u, a3, v14);
              if ( (*(_DWORD *)(v17 + 128) & 3) != 0 )
              {
                DPIMetrics = GetDPIMetrics(v13, v12, v93);
                v13 = (unsigned int)-*(_DWORD *)(DPIMetrics + 68);
                *(_DWORD *)(v177 + 4) += *(_DWORD *)(DPIMetrics + 68);
                *(_DWORD *)(v177 + 12) += v13;
              }
              goto LABEL_454;
            case 0x84u:
              if ( (*((_DWORD *)i + 2) & 0x100) != 0 )
              {
                LODWORD(v186) = (__int16)v14;
                HIDWORD(v186) = SWORD1(v14);
                if ( v16 )
                  ThreadUnlock1(v13, 131LL);
                if ( !PtInRect((_DWORD *)v7 + 28, v186) )
                  goto LABEL_74;
                goto LABEL_465;
              }
              goto LABEL_70;
            case 0x85u:
              if ( (*(_DWORD *)v10 & 0x8000000) != 0 )
              {
                xxxValidateRect(v7, 0LL);
                goto LABEL_454;
              }
              if ( (*(_DWORD *)(v17 + 128) & 3) != 0 )
              {
                if ( (unsigned int)MNIsUAHMenu(v17) )
                {
                  v83 = *(struct tagWND **)(v10 + 16);
                  v84 = 0LL;
                  v85 = 65537LL;
                }
                else
                {
                  v85 = 328833LL;
                  v84 = a3;
                  v83 = v7;
                }
                DCEx = _GetDCEx(v83, v84, v85);
                xxxMNDrawFullNC(v7);
              }
              else
              {
                if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) != 0x80020000 )
                {
                  v89 = xxxDefWindowProc(v7, 0x85u, a3, v14);
                  if ( (unsigned int)MNIsUAHMenu(v17) )
                  {
                    v91 = *(_QWORD *)(v10 + 16);
                    if ( v91 )
                    {
                      v92 = _GetDCEx(v91, 0LL, 65537LL);
                      xxxSendUAHMenuMessage(*(_QWORD *)(v10 + 16), 149LL, v17, v92);
                      _ReleaseDC(v92);
                    }
                  }
                  if ( v176 )
                    ThreadUnlock1(v91, v90);
                  v5 = v89;
                  goto LABEL_464;
                }
                if ( (unsigned int)MNIsUAHMenu(v17) )
                {
                  v87 = _GetDCEx(*(_QWORD *)(v10 + 16), 0LL, 65537LL);
                  v88 = xxxSendUAHMenuMessage(*(_QWORD *)(v10 + 16), 149LL, v17, v87);
                  _ReleaseDC(v87);
                  if ( v88 )
                    goto LABEL_454;
                }
                DCEx = _GetDCEx(v7, a3, 328833LL);
                MNDrawEdge(v17, DCEx, (char *)v7 + 112, 0LL);
              }
              _ReleaseDC(DCEx);
              goto LABEL_454;
          }
          if ( v15 != 256 )
          {
            v13 = 2LL;
            if ( v15 == 258 )
              goto LABEL_230;
            if ( v15 != 260 )
            {
              if ( v15 != 262 )
              {
                if ( v15 != 275 )
                {
                  if ( v15 != 480 )
                    goto LABEL_70;
                  if ( a3 )
                  {
                    v82 = ValidateHmenu(a3);
                    if ( v82 )
                      LockPopupMenu(v10, v10 + 40, v82);
                  }
                  goto LABEL_454;
                }
                v12 = 65529LL;
                if ( a3 != 65529 )
                {
                  if ( a3 == 65531 )
                  {
                    if ( *((_QWORD *)i + 12) )
                      MNAnimate(i, 1LL);
                    goto LABEL_454;
                  }
                  if ( a3 == 65534 )
                  {
                    *(_DWORD *)v10 &= ~0x80u;
                    xxxMNOpenHierarchy((struct tagPOPUPMENU *)v10, (__int64)i);
                    goto LABEL_454;
                  }
                  if ( a3 != 0xFFFF )
                  {
                    if ( a3 - 4294967292u <= 1 )
                    {
                      if ( (*((_DWORD *)i + 2) & 8) != 0 )
                        xxxMNDoScroll((struct tagPOPUPMENU *)v10, a3, 0);
                      else
                        FindTimer((__int64)v7, (unsigned int)a3, 0, 1, 0LL);
                    }
                    goto LABEL_454;
                  }
                  *(_DWORD *)v10 &= ~0x80u;
LABEL_223:
                  xxxMNCloseHierarchy(v10);
                  goto LABEL_454;
                }
                FindTimer((__int64)v7, 65529LL, 0, 1, 0LL);
                if ( (*((_DWORD *)i + 2) & 0x1000) == 0 )
                  goto LABEL_454;
LABEL_228:
                xxxEndMenuLoop(i, *(_QWORD *)i);
                if ( (*((_DWORD *)i + 2) & 0x100) != 0 )
                  xxxMNEndMenuState(i);
                goto LABEL_156;
              }
LABEL_230:
              xxxMNChar(v10, i, (unsigned int)a3);
              goto LABEL_454;
            }
          }
          xxxMNKeyDown(v10, i, (unsigned int)a3);
          goto LABEL_454;
        }
        if ( (_DWORD)v20 )
          v17 = ThreadUnlock1(v13, v12);
        if ( !v17 )
          goto LABEL_464;
        v18 = *(_QWORD *)v17;
LABEL_465:
        v5 = v18;
        goto LABEL_74;
      }
      if ( v15 <= 0x2A3 )
      {
        if ( v15 == 675 )
        {
          *((_DWORD *)i + 2) ^= (*((_DWORD *)i + 2) ^ ((((*((_DWORD *)i + 2) >> 15) & 1) == 0) << 14)) & 0x4000;
          *(_DWORD *)v10 &= ~0x100000u;
          MNSetTimerToAutoDismiss(i, v7);
          v13 = *(_QWORD *)(*(_QWORD *)i + 56LL);
          if ( *(_QWORD *)(v10 + 16) == v13 )
            xxxMNSelectItem((struct tagPOPUPMENU *)v10);
          goto LABEL_454;
        }
        if ( v15 > 0x1ED )
        {
          switch ( v15 )
          {
            case 0x1EEu:
              xxxMNMouseMove((struct tagPOPUPMENU *)v10, i);
              goto LABEL_454;
            case 0x1EFu:
              if ( a3 < *(unsigned int *)(v17 + 52) || a3 >= 0xFFFFFFFC )
                xxxMNButtonUp((struct tagPOPUPMENU *)v10, i);
              goto LABEL_454;
            case 0x1F0u:
              if ( (_DWORD)v20 )
                ThreadUnlock1(v13, v12);
              v18 = (unsigned __int16)MNSetTimerToOpenHierarchy((struct tagPOPUPMENU *)v10);
              goto LABEL_465;
            case 0x1F1u:
              xxxMNDoubleClick((__int64)i, (struct tagPOPUPMENU *)v10);
              goto LABEL_454;
            case 0x1F2u:
              xxxActivateThisWindow(v7, 0, 0, 0);
              goto LABEL_454;
            case 0x1F3u:
              goto LABEL_228;
          }
          if ( v15 != 500 )
            goto LABEL_70;
          if ( (_DWORD)v20 )
          {
            ThreadUnlock1(v13, v12);
            v176 = 0;
          }
          if ( (*((_DWORD *)i + 2) & 0x80u) == 0 )
            goto LABEL_464;
          if ( !*(_QWORD *)(v10 + 8) )
            goto LABEL_464;
          if ( !(unsigned int)IsMFMWFPWindow(*((_QWORD *)i + 8)) )
            goto LABEL_464;
          v132 = safe_cast_fnid_to_PMENUWND(v131);
          if ( !v132 )
            goto LABEL_464;
          v135 = *(_QWORD *)(v132 + 376);
          if ( !v135 )
            goto LABEL_464;
          v136 = *(__int64 **)(v135 + 40);
          if ( (v133 & 0x100) == 0 )
          {
            *(_DWORD *)(*(_QWORD *)(*v134 + 384) + 332LL) &= ~0x100000u;
            v134 = (__int64 *)gptiCurrent;
          }
          ++*((_DWORD *)i + 10);
          v137 = *v134;
          v138 = *(_QWORD *)(v10 + 8);
          v190 = *(_QWORD *)(*v134 + 368);
          *(_QWORD *)(v137 + 368) = &v190;
          v191 = v138;
          ++*(_DWORD *)(v138 + 8);
          *((_DWORD *)i + 2) |= 0x8000u;
          if ( v136 )
            v139 = *v136;
          else
            v139 = 0LL;
          v140 = *((unsigned int *)i + 18);
          v141 = *(struct tagWND **)(v10 + 8);
          _InterlockedAdd(&glSendMessage, 1u);
          v142 = xxxSendTransformableMessageTimeout(v141, 291LL, v140, v139, 0, 0, 0LL, 1, 1);
          v144 = *((unsigned int *)i + 2);
          LODWORD(v144) = v144 & 0xFFFF7FFF;
          *((_DWORD *)i + 2) = v144;
          if ( v142 != 1 )
          {
            *((_DWORD *)i + 2) = v144 | 0x2000;
            MNCheckButtonDownState(i);
            if ( (*((_DWORD *)i + 2) & 0x100) == 0 )
              xxxMNSetCapture(v10, (__int64)i);
            ThreadUnlock1(v146, v145);
            xxxUnlockMenuStateInternal(i, 1);
            goto LABEL_464;
          }
          ThreadUnlock1(v144, v143);
          if ( !(unsigned int)xxxUnlockMenuStateInternal(i, 1) )
            goto LABEL_228;
          goto LABEL_464;
        }
        if ( v15 == 493 )
        {
          if ( a3 < *(unsigned int *)(v17 + 52) || a3 >= 0xFFFFFFFC )
            xxxMNButtonDown((struct tagPOPUPMENU *)v10, (__int64)i, a3, 1);
          goto LABEL_454;
        }
        if ( v15 != 482 )
        {
          switch ( v15 )
          {
            case 0x1E3u:
              v18 = xxxMNOpenHierarchy((struct tagPOPUPMENU *)v10, (__int64)i);
              if ( v176 )
                ThreadUnlock1(v103, v102);
              if ( v18 == -1 )
                goto LABEL_464;
              break;
            case 0x1E4u:
              goto LABEL_223;
            case 0x1E5u:
              if ( a3 < *(unsigned int *)(v17 + 52) || a3 >= 0xFFFFFFFC )
              {
                v101 = xxxMNSelectItem((struct tagPOPUPMENU *)v10);
                if ( v101 )
                {
                  if ( v176 )
                    ThreadUnlock1(v13, v12);
                  v18 = (*(_QWORD *)(v101 + 16) != 0LL ? 0x10 : 0) | (unsigned __int64)*(unsigned __int16 *)(v101 + 4);
                  goto LABEL_465;
                }
              }
              goto LABEL_454;
            case 0x1E6u:
              xxxMNCancel(i, (unsigned int)a3, (unsigned __int16)v14, 0LL);
              goto LABEL_454;
            case 0x1E7u:
              ValidItem = MNFindNextValidItem(v17, 0xFFFFFFFFLL, 1LL, 1LL);
              v98 = (int)ValidItem;
              _InterlockedAdd(&glSendMessage, 1u);
              xxxSendTransformableMessageTimeout(v7, 485LL, ValidItem, 0LL, 0, 0, 0LL, 1, 1);
              if ( v176 )
                ThreadUnlock1(v100, v99);
              v18 = v98;
              goto LABEL_465;
            case 0x1EBu:
              v18 = xxxMNFindWindowFromPoint(v10, a3, (unsigned int)v14);
              if ( v176 )
                ThreadUnlock1(v96, v95);
              if ( !(unsigned int)IsMFMWFPWindow(v18) )
                goto LABEL_465;
              break;
            case 0x1ECu:
              PlayEventSound(5u);
              xxxShowWindowEx(
                v7,
                (unsigned __int16)(*((_WORD *)i + 4) & 0x100 | 0x400) >> 8,
                ((*((_DWORD *)i + 2) & 0x100 | 0x400u) >> 8) & 0x10000);
              goto LABEL_454;
            default:
              goto LABEL_70;
          }
          if ( v18 )
          {
            v18 = *(_QWORD *)v18;
            goto LABEL_465;
          }
LABEL_464:
          v18 = v5;
          goto LABEL_465;
        }
        v104 = *v19;
        v105 = *(_QWORD *)(v10 + 8);
        v190 = *((_QWORD *)*v19 + 46);
        *((_QWORD *)v104 + 46) = &v190;
        v191 = v105;
        if ( v105 )
          ++*(_DWORD *)(v105 + 8);
        xxxMNCompute((struct tagMENU *)v17, *(_QWORD *)(v10 + 8), (__int64)v7, 0, 0, 0, 0LL);
        ThreadUnlock1(v107, v106);
        v108 = (struct tagMONITOR *)MonitorFromWindow((__int64)v7, 1u);
        v181 = *(_DWORD *)(v17 + 56);
        v179 = MNCheckScroll((struct tagPOPUPMENU *)v10, (struct tagMENU *)v17, v108);
        v111 = v179;
        if ( !a3 )
        {
          v130 = v181;
          goto LABEL_341;
        }
        v112 = 532;
        v183 = 0;
        v185 = 0;
        if ( (a3 & 4) != 0 )
          v112 = 564;
        v80 = (*((_BYTE *)v7 + 55) & 0x10) == 0;
        *(_DWORD *)v189 = v112;
        if ( v80 )
        {
          *(_DWORD *)v189 = v112 | 2;
        }
        else
        {
          MNGetPopupBoundsRect((struct tagPOPUPMENU *)v10, (const struct tagRECT *)v108, &v196, 1);
          BestPos = FindBestPos(
                      *((_DWORD *)v7 + 28),
                      HIDWORD(*((_QWORD *)v7 + 14)),
                      v181,
                      v179,
                      &v196,
                      0,
                      (unsigned int *)v10,
                      (struct tagRECT *)v108,
                      *((_QWORD *)v7 + 14));
          v183 = (__int16)BestPos;
          v185 = SHIWORD(BestPos);
        }
        if ( (unsigned int)IsDPIAbsoluteSysMet(8uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v114) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v115) + 776) & 0x4000) != 0 )
          {
            goto LABEL_304;
          }
        }
        else if ( !IsDPIDWMSysMet(v114)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v118) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v119) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                 ? (v120 = 0)
                 : (v120 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                   !v120) )
        {
LABEL_304:
          if ( IsDPIDWMSysMet(8uLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v116) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v117 = 0)
              : (v117 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                v117) )
          {
            v121 = (_DWORD *)(gpsi + 2688LL);
          }
          else
          {
            v121 = (_DWORD *)(gpsi + 1912LL);
          }
LABEL_320:
          if ( (unsigned int)IsDPIAbsoluteSysMet(7uLL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v122) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v123) + 776) & 0x4000) != 0 )
            {
              goto LABEL_323;
            }
          }
          else if ( !IsDPIDWMSysMet(v122)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v126) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v127) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                   ? (v128 = 0)
                   : (v128 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                               + 408)
                                                   + 8LL)
                                       + 244LL) & 1),
                     !v128) )
          {
LABEL_323:
            if ( IsDPIDWMSysMet(7uLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v124) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v125 = 0)
                : (v125 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  v125) )
            {
              v129 = (_DWORD *)(gpsi + 2684LL);
            }
            else
            {
              v129 = (_DWORD *)(gpsi + 1908LL);
            }
            goto LABEL_339;
          }
          v129 = (_DWORD *)(gpsi + 2296LL);
LABEL_339:
          v130 = v181;
          v111 = v179;
          xxxSetWindowPosAndBand(v7, 0, v183, v185, v181 + 2 * *v129, v179 + 2 * *v121, *(int *)v189, 0);
LABEL_341:
          if ( v176 )
            ThreadUnlock1(v110, v109);
          v18 = v130 | (v111 << 16);
          goto LABEL_465;
        }
        v121 = (_DWORD *)(gpsi + 2300LL);
        goto LABEL_320;
      }
      v13 = 791LL;
      v147 = v15 - 791;
      if ( v147 )
      {
        if ( v147 != 1 )
          goto LABEL_70;
        xxxMenuDraw((HDC)a3, v17, (__int64)v7);
        goto LABEL_454;
      }
      if ( (v14 & 2) == 0 || (*(_DWORD *)(v17 + 128) & 3) == 0 )
      {
        v18 = xxxDefWindowProc(v7, 0x317u, a3, v14);
        if ( !(unsigned int)MNIsUAHMenu(v17)
          || (v175 = *(_QWORD *)(v10 + 16)) == 0
          || !(unsigned int)xxxSendUAHMenuMessage(v175, 149LL, v17, a3) )
        {
          v27 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
          if ( (_DWORD)v27 == -2147352576 )
            MNDrawEdge(v17, a3, (char *)v7 + 112, 0LL);
        }
        goto LABEL_461;
      }
      if ( a3 && (*((_BYTE *)v7 + 50) & 0x40) != 0 && (GreGetLayout((HDC)a3) & 1) == 0 )
      {
        v148 = 1;
        v149 = GreSetLayout(a3, (unsigned int)(*((_DWORD *)v7 + 30) - *((_DWORD *)v7 + 28)), 1LL);
      }
      else
      {
        v148 = 0;
        v149 = 0;
      }
      xxxMNDrawFullNC(v7);
      if ( v148 )
        GreSetLayout(a3, (unsigned int)(*((_DWORD *)v7 + 30) - *((_DWORD *)v7 + 28)), v149);
      GreGetDCPoint(a3, 8LL, &v186);
      if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v150) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v151) + 776) & 0x4000) == 0 )
        {
          goto LABEL_409;
        }
      }
      else if ( IsDPIDWMSysMet(v150)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v153) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v154) + 776) & 0x4000) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_409;
      }
      if ( IsDPIDWMSysMet(6uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v152) + 776) & 0x2000) != 0
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) )
      {
        W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      }
LABEL_409:
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x2EuLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v156) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v157) + 776) & 0x4000) == 0 )
        {
          goto LABEL_423;
        }
      }
      else if ( IsDPIDWMSysMet(v156)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v159) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v160) + 776) & 0x4000) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_423;
      }
      if ( IsDPIDWMSysMet(0x2EuLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v158) + 776) & 0x2000) != 0
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) )
      {
        W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      }
LABEL_423:
      if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v162) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v163) + 776) & 0x4000) == 0 )
        {
          goto LABEL_437;
        }
      }
      else if ( IsDPIDWMSysMet(v162)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v165) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v166) + 776) & 0x4000) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_437;
      }
      if ( IsDPIDWMSysMet(5uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v164) + 776) & 0x2000) != 0
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) )
      {
        W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      }
LABEL_437:
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v168) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v169) + 776) & 0x4000) != 0 )
        {
          goto LABEL_440;
        }
      }
      else if ( !IsDPIDWMSysMet(v168)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v173) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v174) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v171 = 0LL)
               : (v171 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !(_DWORD)v171) )
      {
LABEL_440:
        if ( IsDPIDWMSysMet(0x2DuLL) && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v171) + 776) & 0x2000) != 0 )
        {
          if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) )
            v171 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1;
          else
            v171 = 0LL;
        }
      }
      GetDPIMetrics(v171, v170, v172);
      GreSetWindowOrg((HDC)a3);
      xxxDefWindowProc(v7, 0x317u, a3, v177 & 0xFFFFFFFFFFFFFFFDuLL);
      GreSetWindowOrg((HDC)a3);
      goto LABEL_454;
    }
    if ( (unsigned int)xxxCallHandleMenuMessages((_DWORD)i, (_DWORD)v7, v15, a3, v14) )
      goto LABEL_198;
    v15 = a2;
    v14 = v177;
LABEL_34:
    v19 = (struct tagTHREADINFO **)gptiCurrent;
    v20 = v176;
    goto LABEL_35;
  }
  switch ( v15 )
  {
    case 0x1E0u:
      if ( !v10 || *((char *)v7 + 43) < 0 )
        goto LABEL_199;
      goto LABEL_202;
    case 0x81u:
      if ( *((char *)v7 + 43) < 0 )
        goto LABEL_199;
LABEL_193:
      if ( *((_QWORD *)v7 + 47) )
      {
        v80 = v16 == 0;
      }
      else
      {
        v81 = MNAllocPopup(1);
        if ( v81 )
        {
          *((_QWORD *)v7 + 47) = v81;
          *v81 |= 0x40000000u;
          v81[20] = -1;
          HMAssignmentLock(v81 + 4, v7);
LABEL_461:
          if ( v176 )
            ThreadUnlock1(v27, v26);
          goto LABEL_463;
        }
        v80 = v176 == 0;
      }
      if ( v80 )
      {
LABEL_199:
        v18 = 0LL;
LABEL_463:
        v5 = v18;
        goto LABEL_464;
      }
LABEL_198:
      ThreadUnlock1(v13, v12);
      goto LABEL_199;
    case 0x70u:
      goto LABEL_34;
  }
LABEL_73:
  v5 = xxxDefWindowProc(v7, v15, a3, v14);
LABEL_74:
  MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)v192);
  return v5;
}
