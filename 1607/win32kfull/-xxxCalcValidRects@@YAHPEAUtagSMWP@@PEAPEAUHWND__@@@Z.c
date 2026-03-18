/*
 * XREFs of ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0079810
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0078230 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0035534 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     xxxCheckFullScreen @ 0x1C0056A5C (xxxCheckFullScreen.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     GetNewMonitor @ 0x1C0070AA8 (GetNewMonitor.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C00781F4 (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C007A248 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     GetStyleWindow @ 0x1C007A490 (GetStyleWindow.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _FChildVisible @ 0x1C009E9A8 (_FChildVisible.c)
 *     IsTrayWindow @ 0x1C00A1E80 (IsTrayWindow.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C00A56DC (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C00A6954 (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     GetRect @ 0x1C00AFEE8 (GetRect.c)
 *     GetAppCompatFlags @ 0x1C01140E0 (GetAppCompatFlags.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C011DD14 (IsWindowBroadcastingDpiToChildrenX.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C0121C7C (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01C3D78 (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 */

__int64 __fastcall xxxCalcValidRects(struct tagSMWP *a1, HWND *a2)
{
  HWND v2; // r14
  struct tagWINDOWPOS *ValidWindowPos; // rax
  __int64 v5; // rdx
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r10d
  int v13; // r8d
  int v14; // r8d
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // r12
  __int64 v19; // rdi
  int v20; // esi
  __int64 v21; // r13
  unsigned int v22; // r14d
  int v23; // esi
  int v24; // r14d
  int v25; // eax
  int v26; // r12d
  __int64 v27; // rdx
  int v28; // r8d
  int v29; // esi
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // ecx
  int v33; // r14d
  int v34; // eax
  LONG *v35; // r13
  int v36; // r14d
  int v37; // eax
  __int64 result; // rax
  __int64 v39; // rax
  LONG v40; // r8d
  __int64 v41; // rsi
  LONG v42; // edx
  __int64 NewMonitor; // rax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // eax
  __int128 v48; // xmm1
  __int64 v49; // xmm0_8
  unsigned int v50; // esi
  unsigned int v51; // r14d
  int v52; // r12d
  int v53; // eax
  int v54; // eax
  int v55; // edx
  int v56; // r11d
  int v57; // r9d
  int v58; // r8d
  int v59; // r10d
  int v60; // esi
  int v61; // eax
  __int64 v62; // rdx
  unsigned __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  _DWORD *v71; // rcx
  __int64 v72; // rdx
  unsigned __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  _DWORD *v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // r9
  int v95; // ecx
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v103; // rdx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rdx
  __int64 v107; // r8
  __int64 v108; // r9
  int v109; // ecx
  __int64 AppCompatFlags; // rax
  int v111; // eax
  LONG top; // r9d
  int v113; // edx
  int v114; // eax
  int v115; // eax
  __int64 v116; // rdx
  __int64 v117; // rcx
  int v118; // [rsp+50h] [rbp-B0h]
  int v119; // [rsp+54h] [rbp-ACh]
  int v120; // [rsp+58h] [rbp-A8h]
  int v121; // [rsp+5Ch] [rbp-A4h]
  int v122; // [rsp+60h] [rbp-A0h]
  int v123; // [rsp+64h] [rbp-9Ch]
  int v124; // [rsp+68h] [rbp-98h]
  int v125; // [rsp+6Ch] [rbp-94h]
  int v126; // [rsp+70h] [rbp-90h]
  HWND v127; // [rsp+78h] [rbp-88h]
  struct tagRECT v128; // [rsp+80h] [rbp-80h] BYREF
  HWND *v129; // [rsp+90h] [rbp-70h]
  char BugCheckParameter3[8]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v131[3]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v132[3]; // [rsp+B8h] [rbp-48h] BYREF
  _OWORD v133[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v134; // [rsp+F0h] [rbp-10h]
  __int64 v135[7]; // [rsp+F8h] [rbp-8h] BYREF

  v2 = 0LL;
  v129 = a2;
  v127 = 0LL;
  memset(v135, 0, sizeof(v135));
  v122 = 0;
  v119 = 0;
  ValidWindowPos = FindValidWindowPos(a1);
  if ( !ValidWindowPos )
    return 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)ValidWindowPos
                             + *((_QWORD *)&gSharedInfo + 1))
                 + 88LL);
  v7 = gptiCurrent;
  v131[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v131;
  v131[1] = v6;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v8 = *((_QWORD *)a1 + 5);
  v9 = *((_DWORD *)a1 + 7);
  v121 = 1;
  while ( 1 )
  {
    v125 = --v9;
    if ( v9 < 0 )
    {
      ThreadUnlock1(v7, v5);
      result = 1LL;
      *v129 = v2;
      return result;
    }
    v18 = *(_QWORD *)v8;
    if ( !*(_QWORD *)v8 )
      goto LABEL_19;
    LOBYTE(v5) = 1;
    v19 = HMValidateHandleNoSecure(*(_QWORD *)v8, v5);
    if ( !v19 || !(unsigned int)IsStillWindowC(*(HWND *)(v8 + 8)) )
    {
      *(_QWORD *)v8 = 0LL;
      *(_DWORD *)(v8 + 32) = 6159;
      goto LABEL_19;
    }
    v132[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v132;
    v132[1] = v19;
    ++*(_DWORD *)(v19 + 8);
    if ( !v2 && (*(_DWORD *)(v8 + 32) & 0x10) == 0 )
      v127 = *(HWND *)v19;
    v20 = *(_DWORD *)(v8 + 32);
    if ( (v20 & 0x400) == 0 )
    {
      v21 = *(_QWORD *)(v8 + 8);
      v22 = (unsigned __int8)v20;
      v23 = v20 & 0x350000;
      v24 = (v22 >> 2) & 1;
      if ( gfShellFrameHangResilient
        && (*(_DWORD *)(gptiCurrent + 1096LL) & 0x40000) != 0
        && gptiCurrent != *(_QWORD *)(v19 + 16) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 344LL) != 1 )
          xxxSendTransformableMessageTimeout(
            (struct tagWND *)v19,
            0x46u,
            0LL,
            v8,
            2,
            50,
            (ULONG_PTR)BugCheckParameter3,
            1,
            0);
      }
      else
      {
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout((struct tagWND *)v19, 0x46u, 0LL, v8, 0, 0, 0LL, 1, 0);
      }
      *(_DWORD *)(v8 + 32) |= v23;
      v25 = *(_DWORD *)(v8 + 32);
      *(_QWORD *)v8 = v18;
      if ( (v25 & 4) == 0 && (v24 || *(_WORD *)(v8 + 8) != (_WORD)v21) )
      {
        if ( !(unsigned int)IsStillWindowC(*(HWND *)(v8 + 8)) )
          break;
        if ( *(_WORD *)(v8 + 8) != (_WORD)v21 || *(_QWORD *)(v8 + 8) >= 0xFFFFFFFFFFFFFFFEuLL )
        {
          v47 = CheckTopmost((struct tagWINDOWPOS *)v8);
          if ( v47 )
          {
            if ( *(_DWORD *)(v19 + 304) == 1 )
              SetTopmostEnum((struct tagWND *)v19, v47 == 1, (*(_DWORD *)(v8 + 32) >> 9) & 1);
          }
        }
      }
    }
    v26 = *(_DWORD *)(v19 + 112);
    v27 = 0LL;
    v28 = *(_DWORD *)(v19 + 116);
    v29 = v26;
    *(_DWORD *)(v8 + 80) = v26;
    *(_DWORD *)(v8 + 84) = v28;
    v30 = *(_QWORD *)(v19 + 24);
    v123 = v26;
    v120 = v28;
    if ( v30 )
    {
      v31 = *(_QWORD *)(v30 + 8);
      if ( v31 )
        v27 = *(_QWORD *)(v31 + 16);
    }
    if ( v6 != v27 )
    {
      v26 -= *(_DWORD *)(v6 + 128);
      v28 -= *(_DWORD *)(v6 + 132);
      v123 = v26;
      v120 = v28;
      if ( (*(_BYTE *)(v6 + 50) & 0x40) != 0 && (*(_BYTE *)(v19 + 55) & 0xC0) == 0x40 )
      {
        v29 = *(_DWORD *)(v6 + 136) - *(_DWORD *)(v19 + 120);
        v119 = 1;
      }
      else
      {
        v119 = 0;
        v29 = v26;
      }
    }
    v32 = *(_DWORD *)(v19 + 120) - *(_DWORD *)(v19 + 112);
    v33 = *(_DWORD *)(v19 + 124) - *(_DWORD *)(v19 + 116);
    *(_DWORD *)(v8 + 32) |= 0x1800u;
    v124 = v32;
    if ( (*(_BYTE *)(v19 + 289) & 3) != 0 && (*(_DWORD *)(v8 + 32) & 0x100000) != 0 )
    {
      ExtendArrangedRectangleByFrameMargin((struct tagWND *)v19, (struct tagSIZERECT *)(v8 + 16));
      v28 = v120;
    }
    v34 = *(_DWORD *)(v8 + 32);
    v35 = (LONG *)(v8 + 16);
    if ( (v34 & 2) != 0 )
    {
      *v35 = v29;
      *(_DWORD *)(v8 + 20) = v28;
    }
    else
    {
      if ( *v35 == v29 && *(_DWORD *)(v8 + 20) == v28 )
      {
        *(_DWORD *)(v8 + 32) = v34 | 2;
        v44 = v122;
        if ( v119 )
          v44 = 1;
        v122 = v44;
      }
      if ( (*(_BYTE *)(v19 + 55) & 0x20) != 0 && (unsigned int)IsTrayWindow(v19) )
      {
        *v35 = -32000;
        *(_DWORD *)(v8 + 20) = -32000;
      }
    }
    if ( (*(_DWORD *)(v8 + 32) & 1) != 0 )
    {
      *(_DWORD *)(v8 + 24) = v124;
      *(_DWORD *)(v8 + 28) = v33;
LABEL_43:
      v36 = 0;
      goto LABEL_44;
    }
    if ( (*(_BYTE *)(v19 + 55) & 0x20) != 0 && GetProp(v19, (unsigned __int16)atomCheckpointProp, 1LL) )
    {
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x39uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v63, v62, v64) & 0xF) == 0 )
        {
LABEL_165:
          v71 = (_DWORD *)(gpsi + 2496LL);
          goto LABEL_143;
        }
      }
      else if ( IsDPIDWMSysMet(v63)
             && (W32GetCurrentThreadDpiAwarenessContext(v66, v65, v67) & 0xF) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v82, v83, v84) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v85,
                                                      v86,
                                                      v87)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_165;
      }
      if ( IsDPIDWMSysMet(0x39uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v69, v68, v70) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v89, v90, v91) + 408)
          ? (v95 = 0)
          : (v95 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v92,
                                                         v93,
                                                         v94)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v95) )
      {
        v71 = (_DWORD *)(gpsi + 2884LL);
      }
      else
      {
        v71 = (_DWORD *)(gpsi + 2108LL);
      }
LABEL_143:
      *(_DWORD *)(v8 + 24) = *v71;
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x3AuLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v73, v72, v74) & 0xF) == 0 )
        {
LABEL_179:
          v81 = (_DWORD *)(gpsi + 2500LL);
LABEL_147:
          *(_DWORD *)(v8 + 28) = *v81;
          goto LABEL_81;
        }
      }
      else if ( IsDPIDWMSysMet(v73)
             && (W32GetCurrentThreadDpiAwarenessContext(v76, v75, v77) & 0xF) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v96, v97, v98) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v99,
                                                      v100,
                                                      v101)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_179;
      }
      if ( IsDPIDWMSysMet(0x3AuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v79, v78, v80) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v103, v104, v105) + 408)
          ? (v109 = 0)
          : (v109 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v106,
                                                          v107,
                                                          v108)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v109) )
      {
        v81 = (_DWORD *)(gpsi + 2888LL);
      }
      else
      {
        v81 = (_DWORD *)(gpsi + 2112LL);
      }
      goto LABEL_147;
    }
    if ( *(int *)(v8 + 24) < 0 )
      *(_DWORD *)(v8 + 24) = 0;
    if ( *(int *)(v8 + 28) < 0 )
      *(_DWORD *)(v8 + 28) = 0;
LABEL_81:
    if ( *(_DWORD *)(v8 + 24) != v124 )
      goto LABEL_43;
    if ( *(_DWORD *)(v8 + 28) != v33 )
      goto LABEL_43;
    *(_DWORD *)(v8 + 32) |= 1u;
    if ( (*(_BYTE *)(v19 + 45) & 1) != 0 )
      goto LABEL_43;
    v36 = 1;
LABEL_44:
    if ( v119 )
      *v35 = *(_DWORD *)(v6 + 136) - *(_DWORD *)(v6 + 128) - *(_DWORD *)(v8 + 24) - *v35;
    if ( (*(_BYTE *)(v19 + 55) & 0x10) != 0 )
    {
      *(_DWORD *)(v8 + 32) &= ~0x40u;
    }
    else
    {
      *(_DWORD *)(v8 + 32) &= ~0x80u;
      v37 = *(_DWORD *)(v8 + 32);
      if ( (v37 & 0x40) == 0 )
        *(_DWORD *)(v8 + 32) = v37 | 8;
    }
    if ( (*(_BYTE *)(v19 + 51) & 2) == 0 && GetStyleWindow(v19, 2818LL) )
      *(_DWORD *)(v8 + 32) |= 0x100u;
    if ( (*(_BYTE *)(v19 + 44) & 0x20) != 0 )
    {
      *(_DWORD *)(v8 + 32) &= ~4u;
      *(_QWORD *)(v8 + 8) = 1LL;
    }
    if ( v121 )
    {
      if ( (*(_DWORD *)(v8 + 32) & 4) == 0 )
      {
        v121 = 0;
        if ( (*(_BYTE *)(v19 + 43) & 4) == 0 )
        {
          if ( (unsigned int)ValidateZorder((struct tagCVR *)v8) )
          {
            *(_DWORD *)(v8 + 32) |= 4u;
            v121 = 1;
          }
        }
      }
    }
    v10 = *(unsigned int *)(v8 + 32);
    if ( (v10 & 8) == 0 && ((*(_DWORD *)(v8 + 32) & 0x18E7) == 0x1807 || !(unsigned int)FChildVisible(v19)) )
    {
      v10 = (unsigned int)v10 | 8;
      *(_DWORD *)(v8 + 32) = v10;
    }
    if ( (*(_DWORD *)(v8 + 32) & 2) == 0 && (*(_BYTE *)(v19 + 45) & 1) == 0 )
    {
      AppCompatFlags = GetAppCompatFlags(0LL);
      if ( (AppCompatFlags & 0x20000) != 0 )
        v36 = 1;
    }
    if ( (*(_DWORD *)(v8 + 156) & 0x20) != 0
      && ((*(_WORD *)(v19 + 66) & 0x3FFF) == 0x2A4 && (unsigned int)IsWindowBroadcastingDpiToChildrenX(v19)
       || (*(_DWORD *)(v19 + 288) & 0x800) != 0) )
    {
      v39 = ValidateHmonitor(*(_QWORD *)(v8 + 128));
      v40 = *(_DWORD *)(v8 + 20);
      v41 = v39;
      v128.left = *v35;
      v128.right = *(_DWORD *)(v8 + 24) + v128.left;
      v42 = v40 + *(_DWORD *)(v8 + 28);
      v128.top = v40;
      v128.bottom = v42;
      NewMonitor = GetNewMonitor((__m128i *)v19, &v128, 0LL);
      if ( NewMonitor )
      {
        if ( v41 != NewMonitor )
        {
          v111 = xxxSendMessage(
                   (struct tagWND *)v19,
                   0x2E1u,
                   *(unsigned __int16 *)(NewMonitor + 154) | (unsigned __int64)(*(unsigned __int16 *)(NewMonitor + 154) << 16),
                   0LL);
          top = v128.top;
          v113 = v128.left + (unsigned __int16)v111;
          v114 = v128.top + HIWORD(v111);
          *(_DWORD *)(v8 + 136) = v128.left;
          *(_DWORD *)(v8 + 148) = v114;
          *(_DWORD *)(v8 + 140) = top;
          *(_DWORD *)(v8 + 144) = v113;
          *(_DWORD *)(v8 + 156) ^= (*(_DWORD *)(v8 + 156) ^ (!IsRectEmptyInl((const struct tagRECT *)(v8 + 136)) << 7)) & 0x80;
        }
      }
    }
    LODWORD(v11) = *(_DWORD *)(v8 + 32);
    if ( (v11 & 0x21) == 1 && !v36 )
    {
      v12 = v120;
      goto LABEL_11;
    }
    *(_DWORD *)(v8 + 156) |= 4u;
    if ( (*(_BYTE *)(v19 + 55) & 0x40) == 0 && *(char *)(v19 + 48) >= 0 )
      xxxCheckFullScreen(v19, (const struct tagSIZERECT *)(v8 + 16));
    v48 = *(_OWORD *)(v8 + 16);
    v133[0] = *(_OWORD *)v8;
    v49 = *(_QWORD *)(v8 + 32);
    v135[6] = (__int64)v133;
    LODWORD(v135[0]) = *v35;
    LODWORD(v135[1]) = *(_DWORD *)(v8 + 24) + LODWORD(v135[0]);
    HIDWORD(v135[0]) = *(_DWORD *)(v8 + 20);
    HIDWORD(v135[1]) = *(_DWORD *)(v8 + 28) + HIDWORD(v135[0]);
    v133[1] = v48;
    v134 = v49;
    GetRect(v19, &v135[2], 66LL);
    GetRect(v19, &v135[4], 65LL);
    v50 = v135[4];
    v51 = HIDWORD(v135[4]);
    v126 = LODWORD(v135[5]) - LODWORD(v135[4]);
    v118 = HIDWORD(v135[5]) - HIDWORD(v135[4]);
    _InterlockedAdd(&glSendMessage, 1u);
    v52 = xxxSendTransformableMessageTimeout((struct tagWND *)v19, 0x83u, 1uLL, (__int64)v135, 0, 0, 0LL, 1, 0);
    if ( !(unsigned int)IsStillWindowC(*(HWND *)(v8 + 8)) )
      break;
    if ( (unsigned int)(v52 - 16) > 0x3F0 )
    {
      LOWORD(v52) = 48;
      *(_OWORD *)&v135[2] = *(_OWORD *)v135;
    }
    if ( (*(_BYTE *)(v19 + 50) & 0x40) != 0 )
      v53 = LODWORD(v135[3]) - LODWORD(v135[5]);
    else
      v53 = LODWORD(v135[2]) - LODWORD(v135[4]);
    *(_DWORD *)(v8 + 72) = v53;
    *(_DWORD *)(v8 + 76) = HIDWORD(v135[2]) - HIDWORD(v135[4]);
    *(_QWORD *)(v8 + 40) = v135[0];
    *(_DWORD *)(v8 + 48) = LODWORD(v135[1]) - LODWORD(v135[0]);
    v54 = HIDWORD(v135[1]) - HIDWORD(v135[0]);
    *(_DWORD *)(v8 + 52) = HIDWORD(v135[1]) - HIDWORD(v135[0]);
    if ( __PAIR64__(v51, v50) != v135[0] )
      *(_DWORD *)(v8 + 32) &= ~0x1000u;
    v10 = *(unsigned int *)(v8 + 48);
    if ( v126 != (_DWORD)v10 || v118 != v54 )
      *(_DWORD *)(v8 + 32) &= ~0x800u;
    v11 = *(unsigned int *)(v8 + 32);
    if ( (v11 & 0x100) == 0 && !v122 && (*(_BYTE *)(v19 + 48) & 0x20) == 0 )
    {
      if ( (*(_DWORD *)(v8 + 32) & 0x821) == 0x801 && *(_DWORD *)(v8 + 72) == *v35 - v123 )
      {
        v12 = v120;
        if ( *(_DWORD *)(v8 + 76) == *(_DWORD *)(v8 + 20) - v120 )
        {
          v26 = v123;
LABEL_11:
          if ( (v11 & 0x100) != 0 )
          {
            *(_QWORD *)(v8 + 56) = 0LL;
            *(_QWORD *)(v8 + 64) = 0LL;
          }
          else
          {
            v13 = *(_DWORD *)(v8 + 20);
            *(_DWORD *)(v8 + 56) = *v35;
            *(_DWORD *)(v8 + 60) = v13;
            if ( v6 != GetDesktopWindow(v19) )
            {
              *(_DWORD *)(v8 + 56) = v10 + *(_DWORD *)(v6 + 128);
              *(_DWORD *)(v8 + 60) = v14 + *(_DWORD *)(v6 + 132);
            }
            *(_DWORD *)(v8 + 64) = *(_DWORD *)(v8 + 24) + *(_DWORD *)(v8 + 56);
            *(_DWORD *)(v8 + 68) = *(_DWORD *)(v8 + 60) + *(_DWORD *)(v8 + 28);
          }
          if ( (*(_BYTE *)(v19 + 50) & 0x40) != 0 )
            v15 = *v35 + *(_DWORD *)(v8 + 24) - v124 - v26;
          else
            v15 = *v35 - v26;
          v16 = (unsigned int)(*(_DWORD *)(v8 + 20) - v12);
          *(_DWORD *)(v8 + 72) = v15;
          v17 = *(_DWORD *)(v8 + 32);
          *(_DWORD *)(v8 + 76) = v16;
          if ( (v17 & 2) == 0 )
          {
            *(_DWORD *)(v8 + 32) = v17 & 0xFFFFEFFF;
            *(_DWORD *)(v8 + 40) = *(_DWORD *)(v8 + 72) + *(_DWORD *)(v19 + 128);
            *(_DWORD *)(v8 + 44) = *(_DWORD *)(v19 + 132) + v16;
            if ( v6 != GetDesktopWindow(v19) )
            {
              *(_DWORD *)(v8 + 40) -= *(_DWORD *)(v6 + 128);
              *(_DWORD *)(v8 + 44) -= *(_DWORD *)(v6 + 132);
            }
            *(_DWORD *)(v8 + 48) = *(_DWORD *)(v19 + 136) - *(_DWORD *)(v19 + 128);
            v16 = (unsigned int)(*(_DWORD *)(v19 + 140) - *(_DWORD *)(v19 + 132));
            *(_DWORD *)(v8 + 52) = v16;
          }
LABEL_18:
          ThreadUnlock1(v16, v10);
          v9 = v125;
          v2 = v127;
          goto LABEL_19;
        }
      }
      if ( (v126 == (_DWORD)v10 || (v52 & 0x100) == 0 && (*(_BYTE *)(*(_QWORD *)(v19 + 152) + 84LL) & 2) == 0)
        && (v118 == *(_DWORD *)(v8 + 52) || (v52 & 0x200) == 0 && (*(_BYTE *)(*(_QWORD *)(v19 + 152) + 84LL) & 1) == 0) )
      {
        v55 = LODWORD(v135[5]) - LODWORD(v135[4]);
        v56 = HIDWORD(v135[5]) - HIDWORD(v135[4]);
        v57 = v135[2];
        v58 = LODWORD(v135[3]) - LODWORD(v135[2]);
        v59 = HIDWORD(v135[2]);
        v60 = HIDWORD(v135[3]) - HIDWORD(v135[2]);
        if ( ((v52 & 0x80u) != 0) != ((*(_BYTE *)(v19 + 50) & 0x40) != 0) )
        {
          if ( (*(_BYTE *)(v19 + 50) & 0x40) != 0 && v55 > v58 )
            v115 = v55 - v58;
          else
            v115 = v58 - v55;
          v57 = v115 + LODWORD(v135[2]);
          LODWORD(v135[2]) += v115;
        }
        if ( (v52 & 0x40) != 0 )
        {
          v59 = HIDWORD(v135[3]) - v56;
          HIDWORD(v135[2]) = HIDWORD(v135[3]) - v56;
        }
        if ( v55 < v58 )
          LODWORD(v135[3]) = v57 + v55;
        if ( v56 < v60 )
          HIDWORD(v135[3]) = v59 + v56;
        *(_OWORD *)(v8 + 56) = *(_OWORD *)&v135[2];
        if ( v6 != GetDesktopWindow(v19) )
        {
          v16 = *(unsigned int *)(v6 + 132);
          v61 = *(_DWORD *)(v6 + 128);
          *(_DWORD *)(v8 + 56) += v61;
          *(_DWORD *)(v8 + 64) += v61;
          *(_DWORD *)(v8 + 68) += v16;
          *(_DWORD *)(v8 + 60) += v16;
        }
        goto LABEL_18;
      }
    }
    *(_QWORD *)(v8 + 56) = 0LL;
    *(_QWORD *)(v8 + 64) = 0LL;
    ThreadUnlock1(v11, v10);
    v9 = v125;
    v2 = v127;
LABEL_19:
    v8 += 168LL;
  }
  ThreadUnlock1(v46, v45);
  ThreadUnlock1(v117, v116);
  return 0LL;
}
