/*
 * XREFs of xxxMenuWindowProc @ 0x1C0109290
 * Callers:
 *     ?xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0106350 (-xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     NextTopWindow @ 0x1C0042A00 (NextTopWindow.c)
 *     FBadWindow @ 0x1C004490C (FBadWindow.c)
 *     xxxSetForegroundWindow @ 0x1C00450B0 (xxxSetForegroundWindow.c)
 *     IsPointerParentNotify @ 0x1C004A334 (IsPointerParentNotify.c)
 *     xxxDWP_DoNCActivate @ 0x1C004EB68 (xxxDWP_DoNCActivate.c)
 *     xxxMenuDraw @ 0x1C0050108 (xxxMenuDraw.c)
 *     xxxMNCompute @ 0x1C0052F0C (xxxMNCompute.c)
 *     MNGetpItemIndex @ 0x1C00557A0 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C005E724 (MNIsUAHMenu.c)
 *     xxxDefWindowProc @ 0x1C0063B30 (xxxDefWindowProc.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     FindTimer @ 0x1C0079B7C (FindTimer.c)
 *     _PostMessage @ 0x1C007B0C0 (_PostMessage.c)
 *     xxxActivateThisWindow @ 0x1C007F264 (xxxActivateThisWindow.c)
 *     xxxShowWindow @ 0x1C0081A78 (xxxShowWindow.c)
 *     _MonitorFromWindow @ 0x1C0082D50 (_MonitorFromWindow.c)
 *     xxxSetWindowPosAndBand @ 0x1C00850A0 (xxxSetWindowPosAndBand.c)
 *     IsPointerInputMessageWithState @ 0x1C008C6AC (IsPointerInputMessageWithState.c)
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 *     GreGetLayout @ 0x1C008E4AC (GreGetLayout.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     GetAppCompatFlags2 @ 0x1C00956B8 (GetAppCompatFlags2.c)
 *     PlayEventSound @ 0x1C00EBE10 (PlayEventSound.c)
 *     xxxSendUAHMenuMessage @ 0x1C00F626C (xxxSendUAHMenuMessage.c)
 *     xxxValidateRect @ 0x1C00FAD30 (xxxValidateRect.c)
 *     MNAllocPopup @ 0x1C01063A4 (MNAllocPopup.c)
 *     ?MNCheckScroll@@YAHPEAUtagPOPUPMENU@@PEAUtagMENU@@PEAUtagMONITOR@@@Z @ 0x1C01063E4 (-MNCheckScroll@@YAHPEAUtagPOPUPMENU@@PEAUtagMENU@@PEAUtagMONITOR@@@Z.c)
 *     ?MNGetPopupBoundsRect@@YAXPEAUtagPOPUPMENU@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C01064D0 (-MNGetPopupBoundsRect@@YAXPEAUtagPOPUPMENU@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     xxxMNButtonDown @ 0x1C01065E0 (xxxMNButtonDown.c)
 *     ?xxxMNDoScroll@@YAHPEAUtagPOPUPMENU@@IH@Z @ 0x1C0106670 (-xxxMNDoScroll@@YAHPEAUtagPOPUPMENU@@IH@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C01066B8 (xxxMNOpenHierarchy.c)
 *     xxxMNSetCapture @ 0x1C0107ABC (xxxMNSetCapture.c)
 *     FindBestPos @ 0x1C010869C (FindBestPos.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C010B274 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C010B284 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C010B2AC (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxMNEndMenuState @ 0x1C010B2F0 (xxxMNEndMenuState.c)
 *     xxxMNMouseMove @ 0x1C010BB60 (xxxMNMouseMove.c)
 *     IsMFMWFPWindow @ 0x1C010BDAC (IsMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x1C010BDD0 (xxxMNFindWindowFromPoint.c)
 *     xxxMNButtonUp @ 0x1C010C7B0 (xxxMNButtonUp.c)
 *     xxxMNCancel @ 0x1C010C8EC (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C010CC10 (xxxMNCloseHierarchy.c)
 *     LockPopupMenu @ 0x1C010CEB4 (LockPopupMenu.c)
 *     xxxMNSelectItem @ 0x1C010D008 (xxxMNSelectItem.c)
 *     MNAnimate @ 0x1C010D98C (MNAnimate.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C010D9F0 (safe_cast_fnid_to_PMENUWND.c)
 *     zzzStartFade @ 0x1C010DD38 (zzzStartFade.c)
 *     zzzShowFade @ 0x1C010DE00 (zzzShowFade.c)
 *     CreateFade @ 0x1C010E24C (CreateFade.c)
 *     xxxEndMenuLoop @ 0x1C010E5F0 (xxxEndMenuLoop.c)
 *     GreSetWindowOrg @ 0x1C011442C (GreSetWindowOrg.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _SetTimer @ 0x1C01E9C40 (_SetTimer.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F8958 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     MNCreateAnimationBitmap @ 0x1C01FCF0C (MNCreateAnimationBitmap.c)
 *     xxxUserModeCallback @ 0x1C0215618 (xxxUserModeCallback.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C02158C4 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIPEAUtagPOPUPMENU@@@Z @ 0x1C0215918 (-MNSetTimerToOpenHierarchy@@YAIPEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z @ 0x1C02159A0 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0215A48 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0215C20 (-xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z.c)
 *     MNCheckButtonDownState @ 0x1C0216648 (MNCheckButtonDownState.c)
 *     MNGetpItem @ 0x1C021668C (MNGetpItem.c)
 *     xxxCallHandleMenuMessages @ 0x1C0216730 (xxxCallHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C0216834 (xxxMNChar.c)
 *     xxxMNDoubleClick @ 0x1C0216C3C (xxxMNDoubleClick.c)
 *     xxxMNKeyDown @ 0x1C0216E44 (xxxMNKeyDown.c)
 *     MNFindNextValidItem @ 0x1C023D788 (MNFindNextValidItem.c)
 *     MNDrawEdge @ 0x1C023F7B0 (MNDrawEdge.c)
 *     MNEraseBackground @ 0x1C023F9D4 (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C0241710 (xxxMNDrawFullNC.c)
 */

__int64 __fastcall xxxMenuWindowProc(struct tagWND *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int16 v4; // ax
  __int64 v5; // rsi
  unsigned int v7; // r10d
  struct tagWND *v8; // r14
  __int64 v10; // rbx
  int v11; // r8d
  int v12; // r10d
  __int64 v13; // r9
  unsigned int v14; // edx
  unsigned __int64 v15; // r11
  unsigned __int64 ThreadPointerData; // rax
  __int64 v17; // r15
  struct tagMENUSTATE *i; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // r9
  unsigned int v22; // r10d
  struct tagTHREADINFO **v23; // r11
  __int64 v24; // r13
  __int64 v25; // rdi
  struct tagTHREADINFO *v26; // rcx
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // rax
  _DWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // r10d
  unsigned int v34; // r10d
  unsigned int v35; // r10d
  unsigned int v36; // r10d
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // r8d
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // r8
  __int64 v44; // r9
  struct tagWND *v45; // r12
  unsigned int v46; // ebx
  struct tagWND *TopWindow; // rax
  __int64 v48; // r15
  unsigned int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // r9
  __int64 *v56; // r11
  __int64 v57; // rdx
  int v58; // ebx
  __int64 v59; // rcx
  int v60; // r14d
  __int64 v61; // rcx
  __int64 v62; // rcx
  unsigned __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rcx
  int v66; // ecx
  __int64 v67; // rcx
  __int64 v68; // rcx
  int v69; // ecx
  _DWORD *v70; // rbx
  unsigned __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  int v74; // ecx
  __int64 v75; // rcx
  __int64 v76; // rcx
  int v77; // ecx
  _DWORD *v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rcx
  unsigned int v81; // r10d
  unsigned int v82; // r10d
  unsigned int v83; // r10d
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rcx
  unsigned __int64 Fade; // rax
  int v88; // ecx
  unsigned int v89; // eax
  unsigned int v90; // eax
  bool v91; // zf
  int v92; // eax
  struct tagTHREADINFO *v93; // rcx
  char v94; // al
  struct tagWND *v95; // rcx
  unsigned __int64 v96; // rdx
  __int64 v97; // r8
  __int64 DCEx; // rbx
  __int64 v99; // rdi
  int v100; // ebx
  __int64 v101; // rbx
  __int64 v102; // r8
  __int64 DPIMetrics; // rax
  unsigned int v104; // r10d
  unsigned int v105; // r10d
  unsigned int v106; // r10d
  unsigned int v107; // r10d
  unsigned int v108; // r10d
  unsigned int v109; // r10d
  unsigned int v110; // r10d
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  unsigned int ValidItem; // eax
  __int64 v116; // rbx
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // rbx
  __int64 v120; // rdx
  __int64 v121; // rcx
  struct tagTHREADINFO *v122; // rcx
  __int64 v123; // rdx
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  struct tagMONITOR *v127; // rbx
  __int64 v128; // rdx
  __int64 v129; // rcx
  unsigned __int16 v130; // r13
  int v131; // ecx
  int BestPos; // eax
  unsigned __int64 v133; // rcx
  __int64 v134; // rcx
  __int64 v135; // rcx
  int v136; // ecx
  __int64 v137; // rcx
  __int64 v138; // rcx
  int v139; // ecx
  int *v140; // rbx
  unsigned __int64 v141; // rcx
  __int64 v142; // rcx
  __int64 v143; // rcx
  int v144; // ecx
  __int64 v145; // rcx
  __int64 v146; // rcx
  int v147; // ecx
  _DWORD *v148; // rcx
  int v149; // eax
  unsigned __int16 v150; // bx
  unsigned int v151; // r10d
  unsigned int v152; // r10d
  unsigned int v153; // r10d
  unsigned int v154; // r10d
  unsigned int v155; // r10d
  unsigned int v156; // r10d
  __int64 v157; // r8
  __int64 v158; // rcx
  __int64 v159; // rax
  __int16 v160; // r8
  __int64 *v161; // r11
  __int64 v162; // rax
  __int64 *v163; // r9
  __int64 v164; // rcx
  __int64 v165; // rdx
  __int64 v166; // r9
  __int64 v167; // rax
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // rdx
  __int64 v171; // rcx
  unsigned int v172; // r10d
  int v173; // ebx
  unsigned int v174; // r13d
  unsigned __int64 v175; // rcx
  __int64 v176; // rcx
  __int64 v177; // rcx
  __int64 v178; // rcx
  __int64 v179; // rcx
  unsigned __int64 v181; // rcx
  __int64 v182; // rcx
  __int64 v183; // rcx
  __int64 v184; // rcx
  __int64 v185; // rcx
  unsigned __int64 v187; // rcx
  __int64 v188; // rcx
  __int64 v189; // rcx
  __int64 v190; // rcx
  __int64 v191; // rcx
  unsigned __int64 v193; // rcx
  __int64 v194; // rcx
  __int64 v195; // rdx
  __int64 v196; // rcx
  __int64 v197; // r8
  __int64 v198; // rcx
  __int64 v199; // rcx
  __int64 v200; // rbx
  __int64 v201; // rdx
  struct tagWND *v202; // rcx
  __int64 v203; // rcx
  int v204; // [rsp+58h] [rbp-B0h]
  __int64 v205; // [rsp+60h] [rbp-A8h]
  struct tagITEM *v206; // [rsp+60h] [rbp-A8h]
  int v207; // [rsp+60h] [rbp-A8h]
  unsigned int v208; // [rsp+68h] [rbp-A0h]
  int v209; // [rsp+68h] [rbp-A0h]
  __int64 v210; // [rsp+70h] [rbp-98h]
  __int64 v211; // [rsp+70h] [rbp-98h]
  int v212; // [rsp+70h] [rbp-98h]
  struct tagWND *v213; // [rsp+78h] [rbp-90h]
  int v214; // [rsp+78h] [rbp-90h]
  unsigned __int64 v215; // [rsp+80h] [rbp-88h] BYREF
  int v216; // [rsp+88h] [rbp-80h] BYREF
  int v217; // [rsp+8Ch] [rbp-7Ch] BYREF
  char v218[4]; // [rsp+90h] [rbp-78h]
  __int64 v219; // [rsp+98h] [rbp-70h] BYREF
  __int64 v220; // [rsp+A0h] [rbp-68h]
  char v221[8]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v222; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v223[3]; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v224[3]; // [rsp+D8h] [rbp-30h] BYREF
  struct tagRECT v225; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD v226[3]; // [rsp+100h] [rbp-8h] BYREF

  v4 = *((_WORD *)a1 + 33);
  v5 = 0LL;
  v205 = a4;
  v208 = a2;
  v204 = 0;
  v7 = a2;
  v8 = a1;
  if ( v4 != 668 )
  {
    if ( v4 )
      return 0LL;
    if ( (_DWORD)a2 != 129 )
      return xxxDefWindowProc(a1, a2, a3, a4);
    a2 = (unsigned int)(*((_DWORD *)a1 + 58) + 376);
    if ( (unsigned int)a2 < *(unsigned __int16 *)(gpsi + 332LL) || *((_QWORD *)a1 + 47) || *((_QWORD *)a1 + 48) )
      return 0LL;
    *((_WORD *)a1 + 33) = 668;
  }
  v10 = *((_QWORD *)a1 + 2);
  v210 = gptiCurrent;
  if ( v10 != gptiCurrent )
  {
    v11 = IsPointerInputMessageWithState(v7, a2, 668LL, a4);
    if ( !v11 && !IsPointerParentNotify(v12, a3) )
    {
      v14 = v12;
      return xxxSendMessage(v8, v14, a3, v13);
    }
    if ( v11 )
    {
      LOWORD(v15) = a3;
    }
    else
    {
      if ( !IsPointerParentNotify(v12, a3) )
      {
LABEL_19:
        ThreadPointerData = GetThreadPointerData(
                              (struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 968LL),
                              v15,
                              0LL,
                              0LL,
                              0LL);
        if ( ThreadPointerData )
        {
          v14 = v208;
          v13 = ThreadPointerData;
          return xxxSendMessage(v8, v14, a3, v13);
        }
        return 0LL;
      }
      v15 = a3 >> 16;
    }
    if ( (_WORD)v15 == 1 )
      return 0LL;
    goto LABEL_19;
  }
  v17 = *((_QWORD *)a1 + 47);
  if ( v17 )
  {
    for ( i = *(struct tagMENUSTATE **)(v10 + 536); i; i = (struct tagMENUSTATE *)*((_QWORD *)i + 6) )
    {
      if ( *(_QWORD *)i == *(_QWORD *)(v17 + 64) )
        break;
    }
  }
  else
  {
    i = 0LL;
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)v221, i);
  if ( v17 )
    v24 = *(_QWORD *)(v17 + 40);
  else
    v24 = 0LL;
  v25 = 1LL;
  if ( i && v24 )
  {
    v26 = *v23;
    v27 = 1LL;
    v204 = 1;
    v223[0] = *((_QWORD *)*v23 + 47);
    *((_QWORD *)v26 + 47) = v223;
    v223[1] = v24;
    ++*(_DWORD *)(v24 + 8);
    v19 = *(_QWORD *)(v17 + 64);
    if ( !v19 || (v28 = 1, **(_QWORD **)(*((_QWORD *)v8 + 2) + 536LL) == v19) )
      v28 = 0;
    v20 = *((unsigned int *)i + 2);
    if ( (v20 & 0x100) != 0 && (v20 & 0x200) == 0 )
    {
      if ( v28 )
      {
        if ( v22 - 512 <= 0xE || v22 - 256 <= 9 || v22 - 160 <= 0xD )
          goto LABEL_95;
      }
      else
      {
        if ( (unsigned int)xxxCallHandleMenuMessages((_DWORD)i, (_DWORD)v8, v22, a3, v21) )
        {
LABEL_218:
          ThreadUnlock1(v20, v19);
          goto LABEL_219;
        }
        v23 = (struct tagTHREADINFO **)gptiCurrent;
        v27 = 1LL;
        v22 = v208;
        v21 = v205;
        v210 = gptiCurrent;
      }
    }
LABEL_68:
    if ( v22 <= 0x1E1 )
    {
      if ( v22 != 481 )
      {
        if ( v22 <= 0x81 )
        {
          if ( v22 != 129 )
          {
            if ( v22 <= 0x18 )
            {
              if ( v22 != 24 )
              {
                v33 = v22 - 3;
                if ( v33 )
                {
                  v34 = v33 - 2;
                  if ( v34 )
                  {
                    v35 = v34 - 1;
                    if ( v35 )
                    {
                      v36 = v35 - 9;
                      if ( v36 )
                      {
                        if ( v36 == 5 && *(_QWORD *)(v24 + 112) )
                        {
                          MNEraseBackground((HDC)a3, v24, 0);
LABEL_253:
                          if ( v204 )
                            ThreadUnlock1(v32, v31);
                          goto LABEL_255;
                        }
LABEL_94:
                        if ( !v204 )
                        {
LABEL_96:
                          v22 = v208;
                          goto LABEL_97;
                        }
LABEL_95:
                        ThreadUnlock1(v20, v19);
                        v21 = v205;
                        goto LABEL_96;
                      }
                      xxxHandleMenuPainting(v8, (struct tagMENU *)v24);
LABEL_460:
                      if ( v204 )
                        ThreadUnlock1(v20, v19);
                      goto LABEL_98;
                    }
                    v37 = *((_DWORD *)i + 2);
                    if ( (v37 & 0x100) != 0 )
                    {
                      if ( (_WORD)a3 )
                        goto LABEL_94;
                      if ( (v37 & 0x200) != 0 )
                        goto LABEL_94;
                      if ( (**(_DWORD **)i & 0x80000) != 0 )
                        goto LABEL_94;
                      v205 = HMValidateHandleNoSecure(v21, 1);
                      v38 = safe_cast_fnid_to_PMENUWND(v205);
                      if ( !v21 )
                        goto LABEL_94;
                      if ( v38 )
                      {
                        v39 = *(_QWORD *)(v38 + 376);
                        if ( v39 )
                        {
                          if ( *(_QWORD *)i == *(_QWORD *)(v39 + 64) )
                            goto LABEL_94;
                        }
                      }
                      v40 = *((_DWORD *)i + 2);
                      if ( (v40 & 0x10000) != 0 && gpqForeground == *(_QWORD *)(gptiCurrent + 392LL) )
                      {
                        *((_DWORD *)i + 2) = v40 & 0xFFFEFFFF;
                        PostMessage((__int64)v8, 0x1F2u, 0LL, 0LL);
                        goto LABEL_93;
                      }
                      goto LABEL_99;
                    }
                    if ( !(_WORD)a3 )
                      goto LABEL_460;
                    if ( *((_WORD *)*v23 + 280) >= 0x500u )
                    {
LABEL_99:
                      v41 = (__int64)v8;
LABEL_100:
                      PostMessage(v41, 0x1F3u, 0LL, 0LL);
                      goto LABEL_460;
                    }
                    if ( gpqForegroundPrev )
                    {
                      v42 = *(_QWORD *)(gpqForegroundPrev + 88LL);
                      if ( !(unsigned int)FBadWindow((struct tagWND *)v42) && (*(_WORD *)(v42 + 66) & 0x3FFF) != 0x29C )
                      {
                        v20 = v210;
                        v8 = (struct tagWND *)v42;
LABEL_116:
                        if ( !v8 )
                          goto LABEL_460;
                        v50 = *(_QWORD *)v20;
                        v224[0] = *(_QWORD *)(v50 + 376);
                        *(_QWORD *)(v50 + 376) = v224;
                        v224[1] = v8;
                        ++*((_DWORD *)v8 + 2);
                        v51 = *(_QWORD *)(v50 + 392);
                        if ( *(_QWORD *)(*((_QWORD *)v8 + 2) + 392LL) == v51 )
                        {
                          xxxActivateThisWindow(v8, 0, 2, 0);
                        }
                        else if ( gpqForeground == v51 )
                        {
                          xxxSetForegroundWindow(v8, 0LL, v43, v44);
                        }
                        goto LABEL_216;
                      }
                      v23 = (struct tagTHREADINFO **)v210;
                    }
                    v45 = v8;
                    v46 = 0;
                    while ( 1 )
                    {
                      TopWindow = NextTopWindow(*v23, (__int64)v8, 0LL, 0);
                      v8 = TopWindow;
                      if ( !TopWindow )
                        break;
                      v48 = *((_QWORD *)TopWindow + 30);
                      if ( !(unsigned int)FBadWindow((struct tagWND *)v48) && (*(_WORD *)(v48 + 66) & 0x3FFF) != 0x29C )
                      {
                        v8 = (struct tagWND *)v48;
LABEL_115:
                        v20 = gptiCurrent;
                        goto LABEL_116;
                      }
                      v49 = v46++;
                      if ( v49 >= 0xFF )
                        break;
                      v23 = (struct tagTHREADINFO **)gptiCurrent;
                    }
                    if ( !v46 )
                      goto LABEL_115;
                    v41 = (__int64)v45;
                    goto LABEL_100;
                  }
                }
                v52 = *(_QWORD *)(v17 + 24);
                if ( !v52 )
                  goto LABEL_460;
                v206 = (struct tagITEM *)MNGetpItem(v17, *(unsigned int *)(v17 + 84), v52, v21);
                v54 = safe_cast_fnid_to_PMENUWND(v53);
                v213 = (struct tagWND *)v54;
                if ( !v55 )
                  goto LABEL_460;
                if ( !v54 )
                  goto LABEL_460;
                v20 = *(_QWORD *)(v54 + 376);
                if ( !v20 )
                  goto LABEL_460;
                v57 = *(_QWORD *)(v20 + 40);
                v58 = 0;
                v59 = *v56;
                v60 = 0;
                v217 = 0;
                v216 = 0;
                v211 = v57;
                v219 = *(_QWORD *)(v59 + 376);
                *(_QWORD *)(v59 + 376) = &v219;
                v220 = v54;
                ++*(_DWORD *)(v54 + 8);
                v61 = *v56;
                v226[0] = *(_QWORD *)(*v56 + 376);
                *(_QWORD *)(v61 + 376) = v226;
                v226[1] = v57;
                ++*(_DWORD *)(v57 + 8);
                if ( !*(_DWORD *)(v57 + 56) )
                {
                  xxxSendMessage((struct tagWND *)v54, 0x1E2u, 0LL, 0LL);
                  v55 = (__int64)v206;
                }
                v62 = *(_QWORD *)(v17 + 40);
                if ( !v62 || (unsigned int)MNGetpItemIndex(v62, v55) == -1 )
                {
LABEL_170:
                  xxxSetWindowPosAndBand(v213, 0LL, v58, v60, 0, 0, 1029, 0);
                  ThreadUnlock1(v80, v79);
LABEL_216:
                  ThreadUnlock1(v50, v51);
                  goto LABEL_460;
                }
                if ( (unsigned int)IsDPIAbsoluteSysMet(8uLL) )
                {
                  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v63) + 776) & 0x2000) != 0
                    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v64) + 776) & 0x4000) != 0 )
                  {
                    goto LABEL_134;
                  }
                }
                else if ( !IsDPIDWMSysMet(v63)
                       || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v67) + 776) & 0x2000) != 0
                       || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v68) + 776) & 0x4000) != 0
                       || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                         ? (v69 = 0)
                         : (v69 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                    + 416)
                                                        + 8LL)
                                            + 260LL) & 1),
                           !v69) )
                {
LABEL_134:
                  if ( IsDPIDWMSysMet(8uLL)
                    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v65) + 776) & 0x2000) != 0
                    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                      ? (v66 = 0)
                      : (v66 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                 + 416)
                                                     + 8LL)
                                         + 260LL) & 1),
                        v66) )
                  {
                    v70 = (_DWORD *)(gpsi + 2688LL);
                  }
                  else
                  {
                    v70 = (_DWORD *)(gpsi + 1912LL);
                  }
LABEL_150:
                  if ( (unsigned int)IsDPIAbsoluteSysMet(7uLL) )
                  {
                    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v71) + 776) & 0x2000) != 0
                      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v72) + 776) & 0x4000) != 0 )
                    {
                      goto LABEL_153;
                    }
                  }
                  else if ( !IsDPIDWMSysMet(v71)
                         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v75) + 776) & 0x2000) != 0
                         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v76) + 776) & 0x4000) != 0
                         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                           ? (v77 = 0)
                           : (v77 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                      + 416)
                                                          + 8LL)
                                              + 260LL) & 1),
                             !v77) )
                  {
LABEL_153:
                    if ( IsDPIDWMSysMet(7uLL)
                      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v73) + 776) & 0x2000) != 0
                      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                        ? (v74 = 0)
                        : (v74 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                   + 416)
                                                       + 8LL)
                                           + 260LL) & 1),
                          v74) )
                    {
                      v78 = (_DWORD *)(gpsi + 2684LL);
                    }
                    else
                    {
                      v78 = (_DWORD *)(gpsi + 1908LL);
                    }
                    goto LABEL_169;
                  }
                  v78 = (_DWORD *)(gpsi + 2296LL);
LABEL_169:
                  xxxMNPositionHierarchy(
                    (struct tagPOPUPMENU *)v17,
                    v206,
                    *(_DWORD *)(v211 + 56) + 2 * *v78,
                    *(_DWORD *)(v211 + 60) + 2 * *v70,
                    &v217,
                    &v216,
                    0LL);
                  v58 = v217;
                  v60 = v216;
                  goto LABEL_170;
                }
                v70 = (_DWORD *)(gpsi + 2300LL);
                goto LABEL_150;
              }
              if ( a3 )
                goto LABEL_94;
              xxxMNCancel(i, 0LL, 0LL, 0LL);
LABEL_93:
              v21 = v205;
              goto LABEL_94;
            }
            v81 = v22 - 28;
            if ( !v81 )
            {
              if ( (*((_DWORD *)i + 2) & 0x100) == 0 || v8 != *(struct tagWND **)(*(_QWORD *)i + 56LL) )
                goto LABEL_460;
              if ( a3 )
              {
                PostMessage((__int64)v8, 0x1F2u, 0LL, 0LL);
                v23 = (struct tagTHREADINFO **)gptiCurrent;
                v20 = *(_QWORD *)(gptiCurrent + 392LL);
                *((_DWORD *)i + 2) ^= (*((_DWORD *)i + 2) ^ ((gpqForeground != v20) << 16)) & 0x10000;
              }
              v19 = *(_QWORD *)(v17 + 8);
              if ( !v19 )
                goto LABEL_460;
              v93 = *v23;
              v219 = *((_QWORD *)*v23 + 47);
              *((_QWORD *)v93 + 47) = &v219;
              v220 = v19;
              ++*(_DWORD *)(v19 + 8);
              if ( !a3 || (v94 = 1, (*((_BYTE *)i + 10) & 1) != 0) )
                v94 = 2;
              xxxDWP_DoNCActivate(*(_QWORD *)(v17 + 8), v94, 1LL);
              goto LABEL_216;
            }
            v82 = v81 - 42;
            if ( v82 )
            {
              v83 = v82 - 1;
              if ( !v83 )
              {
                if ( (*(_DWORD *)(v21 + 32) & 0x40) == 0 || (*(_DWORD *)v17 & 0x8000000) == 0 )
                  goto LABEL_94;
                v86 = gfade[12];
                if ( (v86 & 0x10) != 0 )
                {
                  zzzStartFade(v86, v19, v27);
                }
                else
                {
                  *((_DWORD *)i + 26) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
                  SetTimer((_DWORD)v8, 65531, 10, 0, 0);
                }
                *(_DWORD *)v17 &= ~0x8000000u;
                goto LABEL_93;
              }
              if ( v83 != 41 )
                goto LABEL_94;
              if ( i && (*((_DWORD *)i + 2) & 0x400) != 0 )
              {
                v222 = *(_QWORD *)v8;
                xxxUserModeCallback(100, (unsigned int)&v222, 8, v21);
              }
              xxxMNDestroyHandler(v8);
LABEL_181:
              if ( v204 )
                ThreadUnlock1(v85, v84);
              goto LABEL_470;
            }
            if ( (*(_DWORD *)(v21 + 32) & 0x40) == 0 )
              goto LABEL_94;
            v20 = (unsigned int)gpdwCPUserPreferencesMask & 0x80000002;
            if ( (_DWORD)v20 != -2147483646 || (*(_DWORD *)v17 & 0x8000000) == 0 || (v20 = glinp[15], (v20 & 0x11) != 0) )
            {
LABEL_198:
              *(_DWORD *)v17 &= ~0x8000000u;
              goto LABEL_94;
            }
            if ( (GetAppCompatFlags2(0x400u) & 1) == 0 )
            {
              *((_DWORD *)i + 29) = *((_DWORD *)v8 + 30) - *((_DWORD *)v8 + 28);
              *((_DWORD *)i + 30) = *((_DWORD *)v8 + 31) - *((_DWORD *)v8 + 29);
              if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000200) != 0x80000200 )
              {
                if ( !(unsigned int)MNCreateAnimationBitmap(i, *((unsigned int *)i + 29)) )
                  goto LABEL_197;
                *((_QWORD *)i + 12) = _GetDCEx(v8, 1LL, 65665LL);
                v88 = 0;
                v89 = *((_DWORD *)i + 2) ^ (*((_DWORD *)i + 2) ^ (*(_DWORD *)v17 >> 4)) & 0xF80000;
                *((_DWORD *)i + 2) = v89;
                v90 = v89 >> 19;
                if ( (v90 & 3) == 0 )
                  v88 = *((_DWORD *)i + 29);
                v91 = (v90 & 0xC) == 0;
                *((_DWORD *)i + 27) = v88;
                v92 = 0;
                if ( v91 )
                  v92 = *((_DWORD *)i + 30);
                *((_DWORD *)i + 28) = v92;
                Fade = *((_QWORD *)i + 17);
              }
              else
              {
                Fade = CreateFade(v8, *((_DWORD *)v8 + 86));
                if ( !Fade )
                  goto LABEL_197;
              }
              *(_DWORD *)(v24 + 40) |= 8u;
              xxxSendMessage(v8, 0x317u, Fade, 14LL);
              *(_DWORD *)(v24 + 40) &= ~8u;
              v20 = gfade[12];
              if ( (v20 & 0x10) != 0 )
                zzzShowFade();
              goto LABEL_93;
            }
LABEL_197:
            v21 = v205;
            goto LABEL_198;
          }
LABEL_62:
          if ( !*((_QWORD *)v8 + 47) && !*((_QWORD *)v8 + 48) )
          {
            v30 = MNAllocPopup(1);
            if ( v30 )
            {
              *((_QWORD *)v8 + 47) = v30;
              *v30 |= 0x40000000u;
              v30[20] = -1;
              HMAssignmentLock(v30 + 4, v8);
              goto LABEL_253;
            }
          }
          if ( v204 )
            goto LABEL_218;
LABEL_219:
          v25 = 0LL;
LABEL_255:
          v5 = v25;
          goto LABEL_470;
        }
LABEL_48:
        v19 = 131LL;
        switch ( v22 )
        {
          case 0x83u:
            xxxDefWindowProc(v8, 0x83u, a3, v21);
            if ( (*(_DWORD *)(v24 + 128) & 3) != 0 )
            {
              DPIMetrics = GetDPIMetrics(v20, v19, v102);
              v20 = (unsigned int)-*(_DWORD *)(DPIMetrics + 68);
              *(_DWORD *)(v205 + 4) += *(_DWORD *)(DPIMetrics + 68);
              *(_DWORD *)(v205 + 12) += v20;
            }
            goto LABEL_460;
          case 0x84u:
            if ( (*((_DWORD *)i + 2) & 0x100) != 0 )
            {
              LODWORD(v215) = (__int16)v21;
              HIDWORD(v215) = SWORD1(v21);
              if ( v204 )
                ThreadUnlock1(v20, 131LL);
              if ( !PtInRect((_DWORD *)v8 + 28, v215) )
                goto LABEL_98;
              goto LABEL_471;
            }
            goto LABEL_94;
          case 0x85u:
            if ( (*(_DWORD *)v17 & 0x8000000) != 0 )
            {
              xxxValidateRect(v8, 0LL);
              goto LABEL_460;
            }
            if ( (*(_DWORD *)(v24 + 128) & 3) != 0 )
            {
              if ( (unsigned int)MNIsUAHMenu(v24) )
              {
                v95 = *(struct tagWND **)(v17 + 16);
                v96 = 0LL;
                v97 = 65537LL;
              }
              else
              {
                v97 = 328833LL;
                v96 = a3;
                v95 = v8;
              }
              DCEx = _GetDCEx(v95, v96, v97);
              xxxMNDrawFullNC(v8);
            }
            else
            {
              if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) != 0x80020000 )
              {
                v25 = xxxDefWindowProc(v8, 0x85u, a3, v21);
                if ( (unsigned int)MNIsUAHMenu(v24) )
                {
                  v32 = *(_QWORD *)(v17 + 16);
                  if ( v32 )
                  {
                    v101 = _GetDCEx(v32, 0LL, 65537LL);
                    xxxSendUAHMenuMessage(*(struct tagWND **)(v17 + 16), 0x95u, v24, v101);
                    _ReleaseDC(v101);
                  }
                }
                goto LABEL_253;
              }
              if ( (unsigned int)MNIsUAHMenu(v24) )
              {
                v99 = _GetDCEx(*(_QWORD *)(v17 + 16), 0LL, 65537LL);
                v100 = xxxSendUAHMenuMessage(*(struct tagWND **)(v17 + 16), 0x95u, v24, v99);
                _ReleaseDC(v99);
                if ( v100 )
                  goto LABEL_460;
              }
              DCEx = _GetDCEx(v8, a3, 328833LL);
              MNDrawEdge(v24, DCEx, (char *)v8 + 112, 0LL);
            }
            _ReleaseDC(DCEx);
            goto LABEL_460;
        }
        if ( v22 != 256 )
        {
          v20 = 2LL;
          if ( v22 == 258 )
            goto LABEL_236;
          if ( v22 != 260 )
          {
            if ( v22 != 262 )
            {
              if ( v22 != 275 )
              {
                if ( v22 != 480 )
                  goto LABEL_94;
                if ( a3 )
                {
                  v29 = ValidateHmenu(a3);
                  if ( v29 )
                    LockPopupMenu(v17, v17 + 40, v29);
                }
                goto LABEL_460;
              }
              v19 = 65529LL;
              if ( a3 != 65529 )
              {
                if ( a3 == 65531 )
                {
                  if ( *((_QWORD *)i + 12) )
                    MNAnimate(i, 1LL);
                  goto LABEL_460;
                }
                if ( a3 == 65534 )
                {
                  *(_DWORD *)v17 &= ~0x80u;
                  xxxMNOpenHierarchy((struct tagPOPUPMENU *)v17, (__int64)i);
                  goto LABEL_460;
                }
                if ( a3 != 0xFFFF )
                {
                  if ( a3 - 4294967292u <= 1 )
                  {
                    if ( (*((_DWORD *)i + 2) & 8) != 0 )
                      xxxMNDoScroll((struct tagPOPUPMENU *)v17, a3, 0);
                    else
                      FindTimer((__int64)v8, (unsigned int)a3, 0, 1, 0LL);
                  }
                  goto LABEL_460;
                }
                *(_DWORD *)v17 &= ~0x80u;
LABEL_229:
                xxxMNCloseHierarchy(v17);
                goto LABEL_460;
              }
              FindTimer((__int64)v8, 65529LL, 0, 1, 0LL);
              if ( (*((_DWORD *)i + 2) & 0x1000) == 0 )
                goto LABEL_460;
LABEL_234:
              xxxEndMenuLoop(i, *(_QWORD *)i);
              if ( (*((_DWORD *)i + 2) & 0x100) != 0 )
                xxxMNEndMenuState(i);
              goto LABEL_181;
            }
LABEL_236:
            xxxMNChar(v17, i, (unsigned int)a3);
            goto LABEL_460;
          }
        }
        xxxMNKeyDown(v17, i, (unsigned int)a3);
        goto LABEL_460;
      }
      if ( (_DWORD)v27 )
        v24 = ThreadUnlock1(v20, v19);
      if ( !v24 )
        goto LABEL_470;
      v25 = *(_QWORD *)v24;
LABEL_471:
      v5 = v25;
      goto LABEL_98;
    }
    if ( v22 <= 0x2A3 )
    {
      if ( v22 == 675 )
      {
        *((_DWORD *)i + 2) ^= (*((_DWORD *)i + 2) ^ ((((*((_DWORD *)i + 2) >> 15) & 1) == 0) << 14)) & 0x4000;
        *(_DWORD *)v17 &= ~0x100000u;
        MNSetTimerToAutoDismiss(i, v8);
        v20 = *(_QWORD *)(*(_QWORD *)i + 56LL);
        if ( *(_QWORD *)(v17 + 16) == v20 )
          xxxMNSelectItem((struct tagPOPUPMENU *)v17);
        goto LABEL_460;
      }
      if ( v22 > 0x1ED )
      {
        v151 = v22 - 494;
        if ( !v151 )
        {
          xxxMNMouseMove((struct tagPOPUPMENU *)v17, i);
          goto LABEL_460;
        }
        v152 = v151 - 1;
        if ( !v152 )
        {
          if ( a3 < *(unsigned int *)(v24 + 52) || a3 >= 0xFFFFFFFC )
            xxxMNButtonUp((struct tagPOPUPMENU *)v17, i);
          goto LABEL_460;
        }
        v153 = v152 - 1;
        if ( !v153 )
        {
          if ( (_DWORD)v27 )
            ThreadUnlock1(v20, v19);
          v25 = (unsigned __int16)MNSetTimerToOpenHierarchy((struct tagPOPUPMENU *)v17);
          goto LABEL_471;
        }
        v154 = v153 - 1;
        if ( !v154 )
        {
          xxxMNDoubleClick((__int64)i, (struct tagPOPUPMENU *)v17);
          goto LABEL_460;
        }
        v155 = v154 - 1;
        if ( !v155 )
        {
          xxxActivateThisWindow(v8, 0, 0, 0);
          goto LABEL_460;
        }
        v156 = v155 - 1;
        if ( v156 )
        {
          if ( v156 != 1 )
            goto LABEL_94;
          if ( (_DWORD)v27 )
          {
            ThreadUnlock1(v20, v19);
            v204 = 0;
          }
          v157 = *((unsigned int *)i + 2);
          if ( (v157 & 0x80u) == 0LL )
            goto LABEL_470;
          if ( !*(_QWORD *)(v17 + 8) )
            goto LABEL_470;
          if ( !(unsigned int)IsMFMWFPWindow(*((_QWORD *)i + 8), v19, v157, v21) )
            goto LABEL_470;
          v159 = safe_cast_fnid_to_PMENUWND(v158);
          if ( !v159 )
            goto LABEL_470;
          v162 = *(_QWORD *)(v159 + 376);
          if ( !v162 )
            goto LABEL_470;
          v163 = *(__int64 **)(v162 + 40);
          if ( (v160 & 0x100) == 0 )
            *(_DWORD *)(*(_QWORD *)(*v161 + 392) + 332LL) &= ~0x100000u;
          ++*((_DWORD *)i + 10);
          v164 = *v161;
          v165 = *(_QWORD *)(v17 + 8);
          v219 = *(_QWORD *)(*v161 + 376);
          *(_QWORD *)(v164 + 376) = &v219;
          v220 = v165;
          ++*(_DWORD *)(v165 + 8);
          *((_DWORD *)i + 2) |= 0x8000u;
          if ( v163 )
            v166 = *v163;
          else
            v166 = 0LL;
          v167 = xxxSendMessage(*(struct tagWND **)(v17 + 8), 0x123u, *((unsigned int *)i + 18), v166);
          v169 = *((unsigned int *)i + 2);
          LODWORD(v169) = v169 & 0xFFFF7FFF;
          *((_DWORD *)i + 2) = v169;
          if ( v167 != 1 )
          {
            *((_DWORD *)i + 2) = v169 | 0x2000;
            MNCheckButtonDownState(i);
            if ( (*((_DWORD *)i + 2) & 0x100) == 0 )
              xxxMNSetCapture(v17, (__int64)i);
            ThreadUnlock1(v171, v170);
            xxxUnlockMenuStateInternal(i, 1);
            goto LABEL_470;
          }
          ThreadUnlock1(v169, v168);
          if ( (unsigned int)xxxUnlockMenuStateInternal(i, 1) )
          {
LABEL_470:
            v25 = v5;
            goto LABEL_471;
          }
        }
        goto LABEL_234;
      }
      if ( v22 == 493 )
      {
        if ( a3 < *(unsigned int *)(v24 + 52) || a3 >= 0xFFFFFFFC )
          xxxMNButtonDown((struct tagPOPUPMENU *)v17, (__int64)i, a3, 1);
        goto LABEL_460;
      }
      v104 = v22 - 482;
      if ( v104 )
      {
        v105 = v104 - 1;
        if ( v105 )
        {
          v106 = v105 - 1;
          if ( !v106 )
            goto LABEL_229;
          v107 = v106 - 1;
          if ( !v107 )
          {
            if ( a3 < *(unsigned int *)(v24 + 52) || a3 >= 0xFFFFFFFC )
            {
              v119 = xxxMNSelectItem((struct tagPOPUPMENU *)v17);
              if ( v119 )
              {
                if ( v204 )
                  ThreadUnlock1(v20, v19);
                v25 = (*(_QWORD *)(v119 + 16) != 0LL ? 0x10 : 0) | (unsigned __int64)*(unsigned __int16 *)(v119 + 4);
                goto LABEL_471;
              }
            }
            goto LABEL_460;
          }
          v108 = v107 - 1;
          if ( !v108 )
          {
            xxxMNCancel(i, (unsigned int)a3, (unsigned __int16)v21, 0LL);
            goto LABEL_460;
          }
          v109 = v108 - 1;
          if ( !v109 )
          {
            ValidItem = MNFindNextValidItem(v24, 0xFFFFFFFFLL, 1LL, 1LL);
            v116 = (int)ValidItem;
            xxxSendMessage(v8, 0x1E5u, ValidItem, 0LL);
            if ( v204 )
              ThreadUnlock1(v118, v117);
            v25 = v116;
            goto LABEL_471;
          }
          v110 = v109 - 4;
          if ( v110 )
          {
            if ( v110 != 1 )
              goto LABEL_94;
            PlayEventSound(5u);
            xxxShowWindow(v8, (*((_DWORD *)i + 2) & 0x100 | 0x400u) >> 8);
            goto LABEL_460;
          }
          v25 = xxxMNFindWindowFromPoint(v17, a3, (unsigned int)v21);
          if ( v204 )
            ThreadUnlock1(v112, v111);
          if ( !(unsigned int)IsMFMWFPWindow(v25, v111, v113, v114) )
            goto LABEL_471;
        }
        else
        {
          v25 = xxxMNOpenHierarchy((struct tagPOPUPMENU *)v17, (__int64)i);
          if ( v204 )
            ThreadUnlock1(v121, v120);
          if ( v25 == -1 )
            goto LABEL_470;
        }
        if ( !v25 )
          goto LABEL_470;
        v25 = *(_QWORD *)v25;
        goto LABEL_471;
      }
      v122 = *v23;
      v123 = *(_QWORD *)(v17 + 8);
      v219 = *((_QWORD *)*v23 + 47);
      *((_QWORD *)v122 + 47) = &v219;
      v220 = v123;
      if ( v123 )
        ++*(_DWORD *)(v123 + 8);
      xxxMNCompute((struct tagMENU *)v24, *(_QWORD *)(v17 + 8), (__int64)v8, 0, 0, 0, 0LL);
      ThreadUnlock1(v125, v124);
      v127 = (struct tagMONITOR *)MonitorFromWindow((__int64)v8, 1LL, v126);
      v209 = *(_DWORD *)(v24 + 56);
      v207 = MNCheckScroll((struct tagPOPUPMENU *)v17, (struct tagMENU *)v24, v127);
      v130 = v207;
      if ( !a3 )
      {
        v150 = v209;
        goto LABEL_347;
      }
      v131 = 532;
      v212 = 0;
      v214 = 0;
      if ( (a3 & 4) != 0 )
        v131 = 564;
      v91 = (*((_BYTE *)v8 + 55) & 0x10) == 0;
      *(_DWORD *)v218 = v131;
      if ( v91 )
      {
        *(_DWORD *)v218 = v131 | 2;
      }
      else
      {
        MNGetPopupBoundsRect((struct tagPOPUPMENU *)v17, (const struct tagRECT *)v127, &v225, 1);
        BestPos = FindBestPos(
                    *((_DWORD *)v8 + 28),
                    HIDWORD(*((_QWORD *)v8 + 14)),
                    v209,
                    v207,
                    &v225,
                    0,
                    (unsigned int *)v17,
                    (struct tagRECT *)v127,
                    *((_QWORD *)v8 + 14));
        v212 = (__int16)BestPos;
        v214 = SHIWORD(BestPos);
      }
      if ( (unsigned int)IsDPIAbsoluteSysMet(8uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v133) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v134) + 776) & 0x4000) != 0 )
        {
          goto LABEL_310;
        }
      }
      else if ( !IsDPIDWMSysMet(v133)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v137) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v138) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v139 = 0)
               : (v139 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                 !v139) )
      {
LABEL_310:
        if ( IsDPIDWMSysMet(8uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v135) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v136 = 0)
            : (v136 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
              v136) )
        {
          v140 = (int *)(gpsi + 2688LL);
        }
        else
        {
          v140 = (int *)(gpsi + 1912LL);
        }
LABEL_326:
        if ( (unsigned int)IsDPIAbsoluteSysMet(7uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v141) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v142) + 776) & 0x4000) != 0 )
          {
            goto LABEL_329;
          }
        }
        else if ( !IsDPIDWMSysMet(v141)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v145) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v146) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 ? (v147 = 0)
                 : (v147 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 416)
                                                 + 8LL)
                                     + 260LL) & 1),
                   !v147) )
        {
LABEL_329:
          if ( IsDPIDWMSysMet(7uLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v143) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v144 = 0)
              : (v144 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                v144) )
          {
            v148 = (_DWORD *)(gpsi + 2684LL);
          }
          else
          {
            v148 = (_DWORD *)(gpsi + 1908LL);
          }
          goto LABEL_345;
        }
        v148 = (_DWORD *)(gpsi + 2296LL);
LABEL_345:
        v149 = *v140;
        v150 = v209;
        v130 = v207;
        xxxSetWindowPosAndBand(v8, 0LL, v212, v214, v209 + 2 * *v148, v207 + 2 * v149, *(int *)v218, 0);
LABEL_347:
        if ( v204 )
          ThreadUnlock1(v129, v128);
        v25 = v150 | (v130 << 16);
        goto LABEL_471;
      }
      v140 = (int *)(gpsi + 2300LL);
      goto LABEL_326;
    }
    v20 = 791LL;
    v172 = v22 - 791;
    if ( v172 )
    {
      if ( v172 != 1 )
        goto LABEL_94;
      xxxMenuDraw((HDC)a3, v24, (__int64)v8);
      goto LABEL_460;
    }
    if ( (v21 & 2) == 0 || (*(_DWORD *)(v24 + 128) & 3) == 0 )
    {
      v200 = xxxDefWindowProc(v8, 0x317u, a3, v21);
      if ( !(unsigned int)MNIsUAHMenu(v24)
        || (v202 = *(struct tagWND **)(v17 + 16)) == 0LL
        || !(unsigned int)xxxSendUAHMenuMessage(v202, 0x95u, v24, a3) )
      {
        v203 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
        if ( (_DWORD)v203 == -2147352576 )
          MNDrawEdge(v24, a3, (char *)v8 + 112, 0LL);
      }
      if ( v204 )
        ThreadUnlock1(v203, v201);
      v5 = v200;
      goto LABEL_470;
    }
    if ( a3 && (*((_BYTE *)v8 + 50) & 0x40) != 0 && (GreGetLayout((HDC)a3) & 1) == 0 )
    {
      v173 = 1;
      v174 = GreSetLayout(a3, (unsigned int)(*((_DWORD *)v8 + 30) - *((_DWORD *)v8 + 28)), 1LL);
    }
    else
    {
      v173 = 0;
      v174 = 0;
    }
    xxxMNDrawFullNC(v8);
    if ( v173 )
      GreSetLayout(a3, (unsigned int)(*((_DWORD *)v8 + 30) - *((_DWORD *)v8 + 28)), v174);
    GreGetDCPoint(a3, 8LL, &v215);
    if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v175) + 776) & 0x2000) == 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v176) + 776) & 0x4000) == 0 )
      {
        goto LABEL_415;
      }
    }
    else if ( IsDPIDWMSysMet(v175)
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v178) + 776) & 0x2000) == 0
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v179) + 776) & 0x4000) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                        + 260LL) & 1 )
    {
      goto LABEL_415;
    }
    if ( IsDPIDWMSysMet(6uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v177) + 776) & 0x2000) != 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) )
    {
      W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    }
LABEL_415:
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2EuLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v181) + 776) & 0x2000) == 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v182) + 776) & 0x4000) == 0 )
      {
        goto LABEL_429;
      }
    }
    else if ( IsDPIDWMSysMet(v181)
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v184) + 776) & 0x2000) == 0
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v185) + 776) & 0x4000) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                        + 260LL) & 1 )
    {
      goto LABEL_429;
    }
    if ( IsDPIDWMSysMet(0x2EuLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v183) + 776) & 0x2000) != 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) )
    {
      W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    }
LABEL_429:
    if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v187) + 776) & 0x2000) == 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v188) + 776) & 0x4000) == 0 )
      {
        goto LABEL_443;
      }
    }
    else if ( IsDPIDWMSysMet(v187)
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v190) + 776) & 0x2000) == 0
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v191) + 776) & 0x4000) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                        + 260LL) & 1 )
    {
      goto LABEL_443;
    }
    if ( IsDPIDWMSysMet(5uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v189) + 776) & 0x2000) != 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) )
    {
      W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    }
LABEL_443:
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v193) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v194) + 776) & 0x4000) != 0 )
      {
        goto LABEL_446;
      }
    }
    else if ( !IsDPIDWMSysMet(v193)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v198) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v199) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v196 = 0LL)
             : (v196 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
               !(_DWORD)v196) )
    {
LABEL_446:
      if ( IsDPIDWMSysMet(0x2DuLL) && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v196) + 776) & 0x2000) != 0 )
      {
        if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) )
          v196 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1;
        else
          v196 = 0LL;
      }
    }
    GetDPIMetrics(v196, v195, v197);
    GreSetWindowOrg((HDC)a3);
    xxxDefWindowProc(v8, 0x317u, a3, v205 & 0xFFFFFFFFFFFFFFFDuLL);
    GreSetWindowOrg((HDC)a3);
    goto LABEL_460;
  }
  switch ( v22 )
  {
    case 0x1E0u:
      if ( !v17 || *((char *)v8 + 43) < 0 )
        goto LABEL_219;
      goto LABEL_48;
    case 0x81u:
      if ( *((char *)v8 + 43) < 0 )
        goto LABEL_219;
      goto LABEL_62;
    case 0x70u:
      v27 = 0LL;
      goto LABEL_68;
  }
LABEL_97:
  v5 = xxxDefWindowProc(v8, v22, a3, v21);
LABEL_98:
  MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)v221);
  return v5;
}
