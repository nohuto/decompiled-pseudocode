/*
 * XREFs of xxxHandleMenuMessages @ 0x1C0141790
 * Callers:
 *     xxxMNLoop @ 0x1C0141414 (xxxMNLoop.c)
 *     xxxCallHandleMenuMessages @ 0x1C020F130 (xxxCallHandleMenuMessages.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005425C (safe_cast_fnid_to_PMENUWND.c)
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 *     xxxTranslateMessage @ 0x1C00E7A34 (xxxTranslateMessage.c)
 *     xxxMNCancel @ 0x1C013C7D8 (xxxMNCancel.c)
 *     xxxMNButtonUp @ 0x1C013ECEC (xxxMNButtonUp.c)
 *     xxxMNButtonDown @ 0x1C013ED74 (xxxMNButtonDown.c)
 *     UnlockMFMWFPWindow @ 0x1C01413F4 (UnlockMFMWFPWindow.c)
 *     IsMFMWFPWindow @ 0x1C0142218 (IsMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x1C014223C (xxxMNFindWindowFromPoint.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C0142A34 (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     xxxMNMouseMove @ 0x1C0142A74 (xxxMNMouseMove.c)
 *     ?xxxMNRemoveMessage@@YAHII@Z @ 0x1C0142BB0 (-xxxMNRemoveMessage@@YAHII@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01EFFF4 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     GetMenuStateWindow @ 0x1C020EFD8 (GetMenuStateWindow.c)
 *     LockMFMWFPWindow @ 0x1C020F004 (LockMFMWFPWindow.c)
 *     xxxMNChar @ 0x1C020F234 (xxxMNChar.c)
 *     xxxMNDoubleClick @ 0x1C020F63C (xxxMNDoubleClick.c)
 *     xxxMNKeyDown @ 0x1C020F844 (xxxMNKeyDown.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0210154 (xxxMNSwitchToAlternateMenu.c)
 */

__int64 __fastcall xxxHandleMenuMessages(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 v9; // r14
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int16 v15; // ecx^2
  __int64 v16; // r8
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned __int64 v34; // r8
  unsigned int v35; // edx
  struct tagWND *v36; // rcx
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // eax
  int v41; // ecx
  __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  int v56; // ecx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  int v67; // ecx
  int *v68; // r14
  __int64 v69; // rdx
  unsigned __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // r9
  int v83; // ecx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rdx
  __int64 v92; // r8
  __int64 v93; // r9
  int v94; // ecx
  int *v95; // rdx
  int v96; // eax
  int v97; // ecx
  __int64 MenuStateWindow; // rax
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // r9
  unsigned __int64 v103; // r15
  __int64 v104; // r10
  __int64 v105; // r10
  unsigned __int64 ThreadPointerData; // rax
  int v107; // eax
  unsigned int v108; // eax
  __int64 v109; // r15
  __int64 v110; // r8
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // r10
  int v116; // r12d
  int v117; // eax
  __int64 v118; // rdx
  __int64 v119; // rdx
  __int64 v120; // rcx
  int v121; // edx
  unsigned int v122; // ecx
  __int64 v123; // rax
  __int64 v124; // r10
  __int64 v125; // rdx
  __int64 *v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  struct tagWND *v129; // rcx
  __int64 v130; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int64 v131; // [rsp+40h] [rbp-31h] BYREF
  __int64 v132; // [rsp+48h] [rbp-29h] BYREF
  __int64 v133; // [rsp+50h] [rbp-21h]
  __int64 v134; // [rsp+58h] [rbp-19h] BYREF
  __int64 v135; // [rsp+60h] [rbp-11h]
  __int64 v136; // [rsp+70h] [rbp-1h] BYREF
  __int64 v137; // [rsp+78h] [rbp+7h]
  _QWORD v138[3]; // [rsp+88h] [rbp+17h] BYREF

  v4 = 0LL;
  if ( !*(_QWORD *)(a3 + 40) )
    return 0LL;
  v9 = *(unsigned int *)(a1 + 16);
  v130 = *(_QWORD *)(a1 + 24);
  v10 = *(_DWORD *)(a1 + 8);
  if ( v10 > 0x105 )
  {
    if ( v10 > 0x203 )
    {
      if ( v10 == 516 )
      {
LABEL_12:
        if ( (*(_DWORD *)a3 & 0x40) != 0 )
          goto LABEL_13;
LABEL_171:
        *(_DWORD *)(a2 + 20) = -1;
        AdjustMouseCoordinates(*(struct tagWND **)(a3 + 16), &v130);
        if ( xxxMNFindWindowFromPoint(a3, &v131, (unsigned int)v130) )
        {
          if ( (*(_DWORD *)(a2 + 8) & 0x100) != 0 )
            return 1LL;
          v122 = *(_DWORD *)(a1 + 8);
LABEL_174:
          xxxMNRemoveMessage(v122, 0);
          return 1LL;
        }
LABEL_49:
        xxxMNCancel(a2, 0, 0, 0LL);
        return 1LL;
      }
      if ( v10 != 517 )
      {
        if ( v10 != 518 )
        {
          if ( v10 == 578 || v10 == 582 )
          {
            ThreadPointerData = GetThreadPointerData(
                                  (struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 968LL),
                                  *(_WORD *)(a1 + 16),
                                  0LL,
                                  0LL,
                                  0LL);
            if ( ThreadPointerData )
            {
              if ( __CFSHR__(*(_DWORD *)(ThreadPointerData + 36), 4)
                && !xxxMNFindWindowFromPoint(a3, &v131, (unsigned int)v130) )
              {
                xxxMNCancel(a2, 0, 0, 0LL);
              }
            }
          }
          return 0LL;
        }
        goto LABEL_171;
      }
      goto LABEL_126;
    }
    if ( v10 == 515 )
    {
LABEL_106:
      *(_DWORD *)(a2 + 20) = -1;
      AdjustMouseCoordinates(*(struct tagWND **)(a3 + 16), &v130);
      v99 = xxxMNFindWindowFromPoint(a3, &v131, (unsigned int)v130);
      v103 = (unsigned int)v131;
      v104 = v99;
      if ( !v99 && !(_DWORD)v131 )
        goto LABEL_49;
      if ( (*(_DWORD *)a3 & 2) != 0 && v99 == 4294967291LL )
      {
        xxxMNSwitchToAlternateMenu(a3, a2);
        v104 = 0xFFFFFFFFLL;
      }
      if ( v104 == 0xFFFFFFFFLL )
      {
        xxxMNDoubleClick(a2, (struct tagPOPUPMENU *)a3);
        return 1LL;
      }
      if ( !(unsigned int)IsMFMWFPWindow(v104, v100, v101, v102) )
        goto LABEL_49;
      v136 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v136;
      v137 = v105;
      if ( v105 )
        ++*(_DWORD *)(v105 + 8);
      v34 = v103;
      v35 = 497;
      v36 = (struct tagWND *)v105;
LABEL_45:
      xxxSendMessage(v36, v35, v34, 0LL);
LABEL_46:
      ThreadUnlock1(v26, v25);
      return 1LL;
    }
    v37 = v10 - 262;
    if ( v37 )
    {
      v38 = v37 - 18;
      if ( !v38 )
        return 1LL;
      v39 = v38 - 232;
      if ( v39 )
      {
        v40 = v39 - 1;
        if ( !v40 )
          goto LABEL_13;
        if ( v40 != 1 )
          return 0LL;
        goto LABEL_127;
      }
LABEL_63:
      v41 = *(_DWORD *)(a2 + 8);
      if ( (v41 & 0x408) != 0x408 || (v41 & 0xC0) != 0 || !*(_QWORD *)(a2 + 64) )
      {
LABEL_103:
        xxxMNMouseMove(a3, a2, (unsigned int)v130);
        return 1LL;
      }
      v132 = *(_QWORD *)(a2 + 56);
      v133 = v132;
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x45uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v43, v42, v44, v45) & 0xF) != 0 )
          goto LABEL_68;
      }
      else if ( !IsDPIDWMSysMet(v43)
             || (W32GetCurrentThreadDpiAwarenessContext(v58, v57, v59, v60) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v61, v62, v63) + 408)
               ? (v67 = 0)
               : (v67 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v64,
                                                              v65,
                                                              v66)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v67) )
      {
LABEL_68:
        if ( IsDPIDWMSysMet(0x45uLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v47, v46, v48, v49) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v50, v51, v52) + 408)
            ? (v56 = 0)
            : (v56 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v53,
                                                           v54,
                                                           v55)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v56) )
        {
          v68 = (int *)(gpsi + 2932LL);
        }
        else
        {
          v68 = (int *)(gpsi + 2156LL);
        }
LABEL_83:
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x44uLL) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v70, v69, v71, v72) & 0xF) != 0 )
            goto LABEL_85;
        }
        else if ( !IsDPIDWMSysMet(v70)
               || (W32GetCurrentThreadDpiAwarenessContext(v85, v84, v86, v87) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v88, v89, v90) + 408)
                 ? (v94 = 0)
                 : (v94 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v91,
                                                                v92,
                                                                v93)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !v94) )
        {
LABEL_85:
          if ( IsDPIDWMSysMet(0x44uLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v74, v73, v75, v76) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v77, v78, v79) + 408)
              ? (v83 = 0)
              : (v83 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v80,
                                                             v81,
                                                             v82)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v83) )
          {
            v95 = (int *)(gpsi + 2928LL);
          }
          else
          {
            v95 = (int *)(gpsi + 2152LL);
          }
LABEL_100:
          v96 = *v95;
          v97 = *v68;
          HIDWORD(v132) -= *v68;
          HIDWORD(v133) += v97;
          LODWORD(v132) = v132 - v96;
          LODWORD(v133) = v96 + v133;
          LODWORD(v131) = (__int16)v130;
          HIDWORD(v131) = SWORD1(v130);
          if ( !PtInRect(&v132, v131) )
          {
            MenuStateWindow = GetMenuStateWindow(a2);
            if ( MenuStateWindow )
            {
              *(_DWORD *)(a2 + 8) |= 0x80u;
              PostMessage(MenuStateWindow, 500LL, 0LL, 0LL);
            }
          }
          goto LABEL_103;
        }
        v95 = (int *)(gpsi + 2540LL);
        goto LABEL_100;
      }
      v68 = (int *)(gpsi + 2544LL);
      goto LABEL_83;
    }
    goto LABEL_104;
  }
  if ( v10 == 261 )
  {
    if ( (_DWORD)v9 == 18 || (_DWORD)v9 == 121 )
      return 1LL;
    goto LABEL_53;
  }
  if ( v10 > 0xA5 )
  {
    v27 = v10 - 166;
    if ( !v27 )
      goto LABEL_171;
    v28 = v27 - 90;
    if ( !v28 )
    {
LABEL_32:
      v31 = *(_DWORD *)(a2 + 8);
      if ( (v31 & 8) != 0 && (_DWORD)v9 != 112 )
      {
        if ( (v31 & 0x80u) != 0 && (_DWORD)v9 == 27 )
          *(_DWORD *)(a2 + 8) = v31 | 0x2000;
        return 1LL;
      }
      *(_DWORD *)(a2 + 20) = 1;
      if ( (_DWORD)v9 == 3 )
      {
LABEL_43:
        v33 = *(_QWORD *)(a3 + 56);
        if ( !v33 )
        {
          xxxMNKeyDown(a3, a2, (unsigned int)v9);
          return 1LL;
        }
        goto LABEL_44;
      }
      if ( (_DWORD)v9 == 9 )
      {
        if ( (*(_DWORD *)a3 & 1) != 0 && !*(_QWORD *)(a3 + 56) )
          goto LABEL_49;
      }
      else
      {
        if ( (unsigned int)v9 <= 0x28 )
        {
          v32 = 0x1E008042000LL;
          if ( _bittest64(&v32, v9) )
            goto LABEL_43;
        }
        if ( (_DWORD)v9 == 112 || (_DWORD)v9 == 121 )
          goto LABEL_43;
      }
LABEL_53:
      if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
        xxxTranslateMessage(a1, 0LL, a3, a4);
      return 1LL;
    }
    v29 = v28 - 1;
    if ( !v29 )
      goto LABEL_53;
    v30 = v29 - 1;
    if ( v30 )
    {
      if ( v30 != 2 )
        return 0LL;
      goto LABEL_32;
    }
LABEL_104:
    v33 = *(_QWORD *)(a3 + 56);
    if ( !v33 )
    {
      xxxMNChar(a3, a2, (unsigned int)v9);
      return 1LL;
    }
LABEL_44:
    v34 = v9;
    v134 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v134;
    v135 = v33;
    ++*(_DWORD *)(v33 + 8);
    v35 = *(_DWORD *)(a1 + 8);
    v36 = *(struct tagWND **)(a3 + 56);
    goto LABEL_45;
  }
  if ( v10 != 165 )
  {
    v11 = v10 - 160;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( !v12 )
      {
LABEL_13:
        *(_DWORD *)(a2 + 20) = -1;
        AdjustMouseCoordinates(*(struct tagWND **)(a3 + 16), &v130);
        v15 = WORD1(v130);
        v16 = (unsigned int)v130;
        *(_DWORD *)(a2 + 12) = (__int16)v130;
        *(_DWORD *)(a2 + 16) = v15;
        v17 = xxxMNFindWindowFromPoint(a3, &v131, v16);
        LODWORD(v130) = IsMFMWFPWindow(v17, v18, v19, v20);
        if ( (_DWORD)v130 )
        {
          v21 = gptiCurrent;
          v136 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v136;
          v137 = v17;
          if ( v17 )
            ++*(_DWORD *)(v17 + 8);
        }
        v24 = (unsigned int)v131;
        if ( (*(_DWORD *)(a2 + 8) & 0x400) != 0 )
        {
          *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 12);
          *(_DWORD *)(a2 + 72) = v24;
          LockMFMWFPWindow(a2 + 64, v17);
        }
        if ( (*(_DWORD *)(a2 + 8) & 0x500) != 0 )
          *(_DWORD *)(a2 + 76) = ((v9 & 2) != 0) + 1;
        if ( v17 || (_DWORD)v24 )
        {
          if ( (*(_DWORD *)a3 & 2) != 0 && v17 == 4294967291LL )
          {
            xxxMNSwitchToAlternateMenu(a3, a2);
            v17 = 0xFFFFFFFFLL;
          }
          if ( v17 == 0xFFFFFFFFLL )
          {
            xxxMNButtonDown((struct tagPOPUPMENU *)a3, a2, v24, 1);
            goto LABEL_167;
          }
          if ( (unsigned int)IsMFMWFPWindow(v17, v21, v22, v23) )
          {
            xxxSendMessage(v129, 0x1EDu, v24, 0LL);
LABEL_167:
            if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
              xxxMNRemoveMessage(*(_DWORD *)(a1 + 8), 0x204u);
            goto LABEL_169;
          }
        }
LABEL_165:
        xxxMNCancel(a2, 0, 0, 0LL);
        goto LABEL_169;
      }
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( v14 == 1 )
            goto LABEL_12;
          return 0LL;
        }
        goto LABEL_106;
      }
LABEL_127:
      v107 = *(_DWORD *)(a2 + 8);
      if ( (v107 & 8) == 0 )
        return 1LL;
      if ( (v107 & 0x400) != 0 )
      {
        UnlockMFMWFPWindow((_QWORD *)(a2 + 64), a2, a3, a4);
        v108 = *(_DWORD *)(a2 + 8) & 0xFFFFFF7F;
        *(_DWORD *)(a2 + 8) = v108;
        if ( (v108 & 0x2000) != 0 )
        {
          *(_DWORD *)(a2 + 8) = v108 & 0xFFFFDFF7;
          return 1LL;
        }
      }
      AdjustMouseCoordinates(*(struct tagWND **)(a3 + 16), &v130);
      v109 = v130;
      v110 = (unsigned int)v130;
      *(_DWORD *)(a2 + 12) = (__int16)v130;
      *(_DWORD *)(a2 + 16) = SWORD1(v109);
      v111 = xxxMNFindWindowFromPoint(a3, &v131, v110);
      v116 = IsMFMWFPWindow(v111, v112, v113, v114);
      LODWORD(v130) = v116;
      if ( v116 )
      {
        v25 = gptiCurrent;
        v136 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v136;
        v137 = v115;
        if ( v115 )
          ++*(_DWORD *)(v115 + 8);
      }
      v117 = *(_DWORD *)a3;
      v26 = (unsigned int)v131;
      if ( (*(_DWORD *)a3 & 2) != 0 )
      {
        if ( !v115 && !(_DWORD)v131 )
          goto LABEL_165;
        if ( v115 == 0xFFFFFFFFLL )
        {
          if ( (v117 & 0x84) == 0x84 )
            goto LABEL_165;
LABEL_147:
          xxxMNButtonUp((struct tagPOPUPMENU *)a3, (struct tagMENUSTATE *)a2, v26, 0LL);
          goto LABEL_169;
        }
      }
      else
      {
        if ( !v115 && !(_DWORD)v131 && (v117 & 0x200) == 0 )
        {
          v118 = *(_QWORD *)(a3 + 16);
          v134 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v134;
          v135 = v118;
          if ( v118 )
            ++*(_DWORD *)(v118 + 8);
          xxxSendMessage(*(struct tagWND **)(a3 + 16), 0x1E6u, 0LL, 0LL);
          ThreadUnlock1(v120, v119);
LABEL_169:
          if ( !(_DWORD)v130 )
            return 1LL;
          goto LABEL_46;
        }
        *(_DWORD *)a3 = v117 & 0xFFFFFDFF;
        if ( v115 == 0xFFFFFFFFLL )
          goto LABEL_147;
      }
      if ( v116 )
        xxxSendMessage((struct tagWND *)v115, 0x1EFu, (unsigned int)v26, v109);
      else
        *(_DWORD *)(a2 + 8) &= 0xFFFFFFB7;
      goto LABEL_169;
    }
    goto LABEL_63;
  }
LABEL_126:
  if ( (*(_DWORD *)a3 & 0x40) != 0 )
    goto LABEL_127;
  v121 = *(_DWORD *)(a2 + 8);
  if ( (v121 & 8) == 0 )
  {
    if ( v10 == 517 && (*(_DWORD *)a3 & 0x800) == 0 )
    {
      v123 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(a3 + 56));
      if ( v123 )
      {
        v124 = *(_QWORD *)(v123 + 360);
        if ( v124 )
        {
          if ( *(int *)(v124 + 80) >= 0 )
          {
            v125 = *(_QWORD *)(v124 + 8);
            v138[0] = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = v138;
            v138[1] = v125;
            if ( v125 )
              ++*(_DWORD *)(v125 + 8);
            v126 = *(__int64 **)(v124 + 40);
            if ( v126 )
              v4 = *v126;
            xxxSendMessage(*(struct tagWND **)(v124 + 8), 0x122u, *(unsigned int *)(v124 + 80), v4);
            ThreadUnlock1(v128, v127);
          }
        }
      }
    }
    return 0LL;
  }
  if ( (v121 & 0x100) == 0 )
  {
    v122 = *(_DWORD *)(a1 + 8);
    goto LABEL_174;
  }
  return 1LL;
}
