/*
 * XREFs of ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0066D0C
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00634F0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     LogMDAQueueOp @ 0x1C00433CC (LogMDAQueueOp.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C005BADC (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     GetNewMonitor @ 0x1C005C238 (GetNewMonitor.c)
 *     GetAppCompatFlags @ 0x1C005CA60 (GetAppCompatFlags.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C0063454 (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     GetStyleWindow @ 0x1C0066940 (GetStyleWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0067710 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     IsTrayWindow @ 0x1C0068BA0 (IsTrayWindow.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     _FChildVisible @ 0x1C0081ECC (_FChildVisible.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C0083EC8 (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     GetRect @ 0x1C0087D10 (GetRect.c)
 *     xxxCheckFullScreen @ 0x1C008B384 (xxxCheckFullScreen.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00918C4 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C00F8D64 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C01001C4 (IsWindowBroadcastingDpiToChildrenX.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01C2F4C (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 */

__int64 __fastcall xxxCalcValidRects(struct tagSMWP *a1, HWND *a2)
{
  HWND v2; // r14
  struct tagWINDOWPOS *ValidWindowPos; // rax
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r9d
  int v13; // r8d
  int v14; // r8d
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  unsigned __int64 v18; // r15
  __int64 v19; // rdi
  int v20; // esi
  __int64 v21; // r12
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
  int v33; // r15d
  int v34; // eax
  LONG *v35; // r14
  int v36; // r15d
  int v37; // eax
  __int64 result; // rax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  __int128 v43; // xmm1
  __int64 v44; // xmm0_8
  unsigned int v45; // esi
  int v46; // r12d
  unsigned int v47; // r14d
  int v48; // r15d
  int v49; // eax
  int v50; // eax
  int v51; // edx
  int v52; // r11d
  int v53; // r9d
  int v54; // r8d
  int v55; // r10d
  int v56; // esi
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  _DWORD *v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rcx
  _DWORD *v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  int v69; // ecx
  __int64 v70; // rcx
  __int64 v71; // rcx
  int v73; // ecx
  __int64 AppCompatFlags; // rax
  __int64 v75; // rax
  LONG v76; // r8d
  __int64 v77; // rsi
  LONG v78; // edx
  __int64 NewMonitor; // rax
  int v80; // eax
  LONG top; // r9d
  int v82; // edx
  int v83; // eax
  int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // rcx
  int v87; // [rsp+50h] [rbp-B0h]
  int v88; // [rsp+54h] [rbp-ACh]
  int v89; // [rsp+58h] [rbp-A8h]
  int v90; // [rsp+5Ch] [rbp-A4h]
  int v91; // [rsp+60h] [rbp-A0h]
  int v92; // [rsp+64h] [rbp-9Ch]
  int v93; // [rsp+68h] [rbp-98h]
  int v94; // [rsp+6Ch] [rbp-94h]
  HWND v95; // [rsp+70h] [rbp-90h]
  struct tagRECT v96; // [rsp+78h] [rbp-88h] BYREF
  HWND *v97; // [rsp+88h] [rbp-78h]
  _QWORD v98[3]; // [rsp+90h] [rbp-70h] BYREF
  char v99[8]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v100[3]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v101[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v102; // [rsp+E8h] [rbp-18h]
  _OWORD v103[3]; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD *v104; // [rsp+120h] [rbp+20h]

  v2 = 0LL;
  v97 = a2;
  v95 = 0LL;
  memset(v103, 0, sizeof(v103));
  v104 = 0LL;
  v94 = 0;
  v88 = 0;
  ValidWindowPos = FindValidWindowPos(a1);
  if ( !ValidWindowPos )
    return 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)ValidWindowPos
                             + gSharedInfo[1])
                 + 88LL);
  v7 = gptiCurrent;
  v100[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v100;
  v100[1] = v6;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v8 = *((_QWORD *)a1 + 5);
  v9 = *((_DWORD *)a1 + 7);
  v92 = 1;
  while ( 1 )
  {
    v90 = --v9;
    if ( v9 < 0 )
    {
      ThreadUnlock1(v7, v5);
      result = 1LL;
      *v97 = v2;
      return result;
    }
    v18 = *(_QWORD *)v8;
    if ( !*(_QWORD *)v8 )
      goto LABEL_19;
    v19 = HMValidateHandleNoSecure(*(_QWORD *)v8, 1);
    if ( !v19 || !(unsigned int)IsStillWindowC(*(HWND *)(v8 + 8)) )
    {
      *(_QWORD *)v8 = 0LL;
      *(_DWORD *)(v8 + 32) = 6159;
      goto LABEL_19;
    }
    v98[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v98;
    v98[1] = v19;
    ++*(_DWORD *)(v19 + 8);
    if ( !v2 && (*(_DWORD *)(v8 + 32) & 0x10) == 0 )
      v95 = *(HWND *)v19;
    v20 = *(_DWORD *)(v8 + 32);
    if ( (v20 & 0x400) == 0 )
    {
      v21 = *(_QWORD *)(v8 + 8);
      v22 = (unsigned __int8)v20;
      v23 = v20 & 0x350000;
      v24 = (v22 >> 2) & 1;
      if ( gfShellFrameHangResilient
        && (*(_DWORD *)(gptiCurrent + 1080LL) & 0x40000) != 0
        && gptiCurrent != *(_QWORD *)(v19 + 16) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 336LL) == 1
          || !xxxSendTransformableMessageTimeout((struct tagWND *)v19, 0x46u, 0LL, v8, 2, 50, (__int64)v99, 1, 0) )
        {
          LogMDAQueueOp(0xD0u, v19, 0LL, 1u);
        }
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
          v42 = CheckTopmost((struct tagWINDOWPOS *)v8);
          if ( v42 )
          {
            if ( *(_DWORD *)(v19 + 304) == 1 )
              SetTopmostEnum((struct tagWND *)v19, v42 == 1, (*(_DWORD *)(v8 + 32) >> 9) & 1);
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
    v93 = v26;
    v89 = v28;
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
      v93 = v26;
      v89 = v28;
      if ( (*(_BYTE *)(v6 + 50) & 0x40) != 0 && (*(_BYTE *)(v19 + 55) & 0xC0) == 0x40 )
      {
        v29 = *(_DWORD *)(v6 + 136) - *(_DWORD *)(v19 + 120);
        v88 = 1;
      }
      else
      {
        v88 = 0;
        v29 = v26;
      }
    }
    v32 = *(_DWORD *)(v19 + 120) - *(_DWORD *)(v19 + 112);
    v33 = *(_DWORD *)(v19 + 124) - *(_DWORD *)(v19 + 116);
    *(_DWORD *)(v8 + 32) |= 0x1800u;
    v91 = v32;
    if ( (*(_BYTE *)(v19 + 289) & 3) != 0 && (*(_DWORD *)(v8 + 32) & 0x100000) != 0 )
    {
      ExtendArrangedRectangleByFrameMargin((struct tagWND *)v19, (struct tagSIZERECT *)(v8 + 16));
      v28 = v89;
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
        v39 = v94;
        if ( v88 )
          v39 = 1;
        v94 = v39;
      }
      if ( (*(_BYTE *)(v19 + 55) & 0x20) != 0 && (unsigned int)IsTrayWindow(v19) )
      {
        *v35 = -32000;
        *(_DWORD *)(v8 + 20) = -32000;
      }
    }
    if ( (*(_DWORD *)(v8 + 32) & 1) != 0 )
    {
      *(_DWORD *)(v8 + 24) = v91;
      *(_DWORD *)(v8 + 28) = v33;
LABEL_41:
      v36 = 0;
      goto LABEL_42;
    }
    if ( (*(_BYTE *)(v19 + 55) & 0x20) != 0 && GetProp(v19, (unsigned __int16)atomCheckpointProp, 1LL) )
    {
      if ( (unsigned int)IsDPIAbsoluteSysMet(57LL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v58) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v66) + 776) & 0x4000) == 0 )
        {
LABEL_164:
          v61 = (_DWORD *)(gpsi + 2496LL);
          goto LABEL_141;
        }
      }
      else if ( (unsigned int)IsDPIDWMSysMet(v58)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v59) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v67) + 776) & 0x4000) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1 )
      {
        goto LABEL_164;
      }
      if ( (unsigned int)IsDPIDWMSysMet(57LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v60) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v69 = 0)
          : (v69 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v69) )
      {
        v61 = (_DWORD *)(gpsi + 2884LL);
      }
      else
      {
        v61 = (_DWORD *)(gpsi + 2108LL);
      }
LABEL_141:
      *(_DWORD *)(v8 + 24) = *v61;
      if ( (unsigned int)IsDPIAbsoluteSysMet(58LL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v62) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v70) + 776) & 0x4000) == 0 )
        {
LABEL_180:
          v65 = (_DWORD *)(gpsi + 2500LL);
LABEL_145:
          *(_DWORD *)(v8 + 28) = *v65;
          goto LABEL_78;
        }
      }
      else if ( (unsigned int)IsDPIDWMSysMet(v62)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v63) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v71) + 776) & 0x4000) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1 )
      {
        goto LABEL_180;
      }
      if ( (unsigned int)IsDPIDWMSysMet(58LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v64) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v73 = 0)
          : (v73 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v73) )
      {
        v65 = (_DWORD *)(gpsi + 2888LL);
      }
      else
      {
        v65 = (_DWORD *)(gpsi + 2112LL);
      }
      goto LABEL_145;
    }
    if ( *(int *)(v8 + 24) < 0 )
      *(_DWORD *)(v8 + 24) = 0;
    if ( *(int *)(v8 + 28) < 0 )
      *(_DWORD *)(v8 + 28) = 0;
LABEL_78:
    if ( *(_DWORD *)(v8 + 24) != v91 )
      goto LABEL_41;
    if ( *(_DWORD *)(v8 + 28) != v33 )
      goto LABEL_41;
    *(_DWORD *)(v8 + 32) |= 1u;
    if ( (*(_BYTE *)(v19 + 45) & 1) != 0 )
      goto LABEL_41;
    v36 = 1;
LABEL_42:
    if ( v88 )
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
    if ( (*(_BYTE *)(v19 + 51) & 2) == 0 && GetStyleWindow(v19, 2818) )
      *(_DWORD *)(v8 + 32) |= 0x100u;
    if ( (*(_BYTE *)(v19 + 44) & 0x20) != 0 )
    {
      *(_DWORD *)(v8 + 32) &= ~4u;
      *(_QWORD *)(v8 + 8) = 1LL;
    }
    if ( v92 )
    {
      if ( (*(_DWORD *)(v8 + 32) & 4) == 0 )
      {
        v92 = 0;
        if ( (*(_BYTE *)(v19 + 43) & 4) == 0 )
        {
          if ( (unsigned int)ValidateZorder((struct tagCVR *)v8) )
          {
            *(_DWORD *)(v8 + 32) |= 4u;
            v92 = 1;
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
    if ( (*(_DWORD *)(v8 + 156) & 0x20) != 0 && (*(_WORD *)(v19 + 66) & 0x3FFF) == 0x2A4 )
    {
      if ( (unsigned int)IsWindowBroadcastingDpiToChildrenX(v19) )
      {
        v75 = ValidateHmonitor(*(_QWORD *)(v8 + 128));
        v76 = *(_DWORD *)(v8 + 20);
        v77 = v75;
        v96.left = *v35;
        v96.right = *(_DWORD *)(v8 + 24) + v96.left;
        v78 = v76 + *(_DWORD *)(v8 + 28);
        v96.top = v76;
        v96.bottom = v78;
        NewMonitor = GetNewMonitor((__m128i *)v19, &v96, 0LL);
        if ( NewMonitor && v77 != NewMonitor )
        {
          v80 = xxxSendMessage(
                  v19,
                  737LL,
                  *(unsigned __int16 *)(NewMonitor + 152) | (unsigned __int64)(*(unsigned __int16 *)(NewMonitor + 152) << 16));
          top = v96.top;
          v82 = v96.left + (unsigned __int16)v80;
          v83 = v96.top + HIWORD(v80);
          *(_DWORD *)(v8 + 136) = v96.left;
          *(_DWORD *)(v8 + 148) = v83;
          *(_DWORD *)(v8 + 140) = top;
          *(_DWORD *)(v8 + 144) = v82;
          *(_DWORD *)(v8 + 156) ^= (*(_DWORD *)(v8 + 156) ^ (((unsigned int)IsRectEmptyInl((const struct tagRECT *)(v8 + 136)) == 0) << 7)) & 0x80;
        }
      }
    }
    LODWORD(v11) = *(_DWORD *)(v8 + 32);
    if ( (v11 & 0x21) == 1 && !v36 )
    {
      v12 = v89;
      goto LABEL_11;
    }
    *(_DWORD *)(v8 + 156) |= 4u;
    if ( (*(_BYTE *)(v19 + 55) & 0x40) == 0 && *(char *)(v19 + 48) >= 0 )
      xxxCheckFullScreen(v19, v8 + 16);
    v43 = *(_OWORD *)(v8 + 16);
    v101[0] = *(_OWORD *)v8;
    v44 = *(_QWORD *)(v8 + 32);
    v104 = v101;
    LODWORD(v103[0]) = *v35;
    DWORD2(v103[0]) = *(_DWORD *)(v8 + 24) + LODWORD(v103[0]);
    DWORD1(v103[0]) = *(_DWORD *)(v8 + 20);
    HIDWORD(v103[0]) = *(_DWORD *)(v8 + 28) + DWORD1(v103[0]);
    v101[1] = v43;
    v102 = v44;
    GetRect(v19, &v103[1], 66LL);
    GetRect(v19, &v103[2], 65LL);
    v45 = v103[2];
    v46 = DWORD2(v103[2]) - LODWORD(v103[2]);
    v47 = DWORD1(v103[2]);
    v87 = HIDWORD(v103[2]) - DWORD1(v103[2]);
    _InterlockedAdd(&glSendMessage, 1u);
    v48 = xxxSendTransformableMessageTimeout((struct tagWND *)v19, 0x83u, 1uLL, (__int64)v103, 0, 0, 0LL, 1, 0);
    if ( !(unsigned int)IsStillWindowC(*(HWND *)(v8 + 8)) )
      break;
    if ( (unsigned int)(v48 - 16) > 0x3F0 )
    {
      LOWORD(v48) = 48;
      v103[1] = v103[0];
    }
    if ( (*(_BYTE *)(v19 + 50) & 0x40) != 0 )
      v49 = DWORD2(v103[1]) - DWORD2(v103[2]);
    else
      v49 = LODWORD(v103[1]) - LODWORD(v103[2]);
    *(_DWORD *)(v8 + 72) = v49;
    *(_DWORD *)(v8 + 76) = DWORD1(v103[1]) - DWORD1(v103[2]);
    *(_QWORD *)(v8 + 40) = *(_QWORD *)&v103[0];
    *(_DWORD *)(v8 + 48) = DWORD2(v103[0]) - LODWORD(v103[0]);
    v50 = HIDWORD(v103[0]) - DWORD1(v103[0]);
    *(_DWORD *)(v8 + 52) = HIDWORD(v103[0]) - DWORD1(v103[0]);
    if ( __PAIR64__(v47, v45) != *(_QWORD *)&v103[0] )
      *(_DWORD *)(v8 + 32) &= ~0x1000u;
    v10 = *(unsigned int *)(v8 + 48);
    if ( v46 != (_DWORD)v10 || v87 != v50 )
      *(_DWORD *)(v8 + 32) &= ~0x800u;
    v11 = *(unsigned int *)(v8 + 32);
    if ( (v11 & 0x100) == 0 && !v94 && (*(_BYTE *)(v19 + 48) & 0x20) == 0 )
    {
      if ( (*(_DWORD *)(v8 + 32) & 0x821) == 0x801 )
      {
        v35 = (LONG *)(v8 + 16);
        if ( *(_DWORD *)(v8 + 72) == *(_DWORD *)(v8 + 16) - v93 )
        {
          v12 = v89;
          if ( *(_DWORD *)(v8 + 76) == *(_DWORD *)(v8 + 20) - v89 )
          {
            v26 = v93;
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
              *(_DWORD *)(v8 + 64) = *(_DWORD *)(v8 + 56) + *(_DWORD *)(v8 + 24);
              *(_DWORD *)(v8 + 68) = *(_DWORD *)(v8 + 28) + *(_DWORD *)(v8 + 60);
            }
            if ( (*(_BYTE *)(v19 + 50) & 0x40) != 0 )
              v15 = *v35 + *(_DWORD *)(v8 + 24) - v91 - v26;
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
            v9 = v90;
            v2 = v95;
            goto LABEL_19;
          }
        }
      }
      if ( (v46 == (_DWORD)v10 || (v48 & 0x100) == 0 && (*(_BYTE *)(*(_QWORD *)(v19 + 152) + 84LL) & 2) == 0)
        && (v87 == *(_DWORD *)(v8 + 52) || (v48 & 0x200) == 0 && (*(_BYTE *)(*(_QWORD *)(v19 + 152) + 84LL) & 1) == 0) )
      {
        v51 = DWORD2(v103[2]) - LODWORD(v103[2]);
        v52 = HIDWORD(v103[2]) - DWORD1(v103[2]);
        v53 = v103[1];
        v54 = DWORD2(v103[1]) - LODWORD(v103[1]);
        v55 = DWORD1(v103[1]);
        v56 = HIDWORD(v103[1]) - DWORD1(v103[1]);
        if ( ((v48 & 0x80u) != 0) != ((*(_BYTE *)(v19 + 50) & 0x40) != 0) )
        {
          if ( (*(_BYTE *)(v19 + 50) & 0x40) != 0 && v51 > v54 )
            v84 = v51 - v54;
          else
            v84 = v54 - v51;
          v53 = v84 + LODWORD(v103[1]);
          LODWORD(v103[1]) += v84;
        }
        if ( (v48 & 0x40) != 0 )
        {
          v55 = HIDWORD(v103[1]) - v52;
          DWORD1(v103[1]) = HIDWORD(v103[1]) - v52;
        }
        if ( v51 < v54 )
          DWORD2(v103[1]) = v53 + v51;
        if ( v52 < v56 )
          HIDWORD(v103[1]) = v55 + v52;
        *(_OWORD *)(v8 + 56) = v103[1];
        if ( v6 != GetDesktopWindow(v19) )
        {
          v16 = *(unsigned int *)(v6 + 132);
          v57 = *(_DWORD *)(v6 + 128);
          *(_DWORD *)(v8 + 56) += v57;
          *(_DWORD *)(v8 + 64) += v57;
          *(_DWORD *)(v8 + 68) += v16;
          *(_DWORD *)(v8 + 60) += v16;
        }
        goto LABEL_18;
      }
    }
    *(_QWORD *)(v8 + 56) = 0LL;
    *(_QWORD *)(v8 + 64) = 0LL;
    ThreadUnlock1(v11, v10);
    v9 = v90;
    v2 = v95;
LABEL_19:
    v8 += 168LL;
  }
  ThreadUnlock1(v41, v40);
  ThreadUnlock1(v86, v85);
  return 0LL;
}
