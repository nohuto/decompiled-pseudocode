/*
 * XREFs of ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14026F8C8
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x14002B508 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140011324 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x14001AC48 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x14002BD18 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x14002C4D4 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14002EDBC (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     GetStyleWindow @ 0x1400463E0 (GetStyleWindow.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x140047DFC (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     ?CheckTopmost@@YAHPEAUtagCVR@@@Z @ 0x14004952C (-CheckTopmost@@YAHPEAUtagCVR@@@Z.c)
 *     GetNewMonitor @ 0x14004B044 (GetNewMonitor.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     GetRect @ 0x14012B140 (GetRect.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x140179C70 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1401C2BA8 (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     ?xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z @ 0x1401C89A4 (-xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z.c)
 *     ?IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z @ 0x1401D77C4 (-IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z.c)
 *     CheckFullScreen @ 0x1401D954C (CheckFullScreen.c)
 *     _FChildVisible @ 0x1401DD560 (_FChildVisible.c)
 *     ?s_xxxOnWindowBecomingVisible@CRecalcProp@@SAXPEAUtagWND@@PEAUtagWINDOWPOS@@@Z @ 0x1401F3684 (-s_xxxOnWindowBecomingVisible@CRecalcProp@@SAXPEAUtagWND@@PEAUtagWINDOWPOS@@@Z.c)
 *     ?CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z @ 0x140209C58 (-CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x14026F0F4 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     ?SendNotifications@DwmNotifyMoveReason@@SAXPEAUtagWND@@@Z @ 0x14026F844 (-SendNotifications@DwmNotifyMoveReason@@SAXPEAUtagWND@@@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x14028E0D0 (xxxAppAdjustDpiCandidateRect.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxCalcValidRects(struct tagSMWP *a1)
{
  unsigned int v1; // esi
  struct tagWINDOWPOS *ValidWindowPos; // rax
  const struct tagWND *v5; // r13
  __int128 *v6; // rbx
  int v7; // eax
  struct tagWND *v8; // rdi
  int v9; // r14d
  __int64 v10; // r12
  __int64 v11; // rdx
  int v12; // eax
  int v13; // r8d
  int v14; // edx
  int v15; // ecx
  __int64 v16; // rax
  unsigned int v17; // r13d
  __int64 DesktopWindow; // rax
  __int64 v19; // rdx
  int v20; // r8d
  int v21; // r15d
  __int64 v22; // rcx
  int v23; // r10d
  _DWORD *v24; // rcx
  int v25; // eax
  int v26; // r9d
  int v27; // r12d
  bool v28; // zf
  int v29; // eax
  char v30; // al
  __int64 UserSessionState; // rax
  __int64 v32; // rcx
  _DWORD *v33; // r14
  __int64 v34; // rcx
  __int64 v35; // rdx
  int v36; // eax
  int v37; // r14d
  unsigned int v38; // r14d
  int v39; // r15d
  int v40; // r10d
  int v41; // r9d
  __int64 v42; // rax
  __int64 v43; // r14
  __int16 v44; // r15
  __int32 v45; // edx
  int v46; // ecx
  __int64 NewMonitor; // rax
  __int64 v48; // rdx
  int v49; // ecx
  int v50; // r9d
  __int64 v51; // rdx
  __int128 v52; // xmm1
  __int64 v53; // xmm0_8
  unsigned int v54; // r15d
  unsigned int v55; // r13d
  int v56; // r12d
  unsigned int v57; // r14d
  int v58; // eax
  int v59; // edx
  int v60; // r8d
  __int64 v61; // r15
  int v62; // r10d
  int v63; // edx
  int v64; // r11d
  int v65; // r9d
  int v66; // r8d
  int v67; // r10d
  char v68; // r15
  int v69; // eax
  int v70; // ecx
  int v71; // r8d
  int v72; // edx
  int v73; // r8d
  int v74; // r8d
  int v75; // edx
  int v76; // eax
  int v77; // r8d
  int v78; // edx
  int v79; // r9d
  int v80; // r11d
  int v81; // [rsp+58h] [rbp-B0h]
  int v82; // [rsp+5Ch] [rbp-ACh]
  int v83; // [rsp+60h] [rbp-A8h]
  int v84; // [rsp+64h] [rbp-A4h]
  int v85; // [rsp+68h] [rbp-A0h]
  int v86; // [rsp+6Ch] [rbp-9Ch]
  int v87; // [rsp+70h] [rbp-98h]
  int v88; // [rsp+74h] [rbp-94h]
  const struct tagWND *v89; // [rsp+78h] [rbp-90h]
  int v90; // [rsp+80h] [rbp-88h]
  unsigned int v91; // [rsp+84h] [rbp-84h]
  __int128 v92; // [rsp+88h] [rbp-80h] BYREF
  __int32 v93[4]; // [rsp+98h] [rbp-70h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+A8h] [rbp-60h] BYREF
  ULONG_PTR v95[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v96; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v97; // [rsp+D8h] [rbp-30h]
  __int64 v98; // [rsp+E8h] [rbp-20h]
  __int128 v99; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v100; // [rsp+100h] [rbp-8h] BYREF
  __int128 v101; // [rsp+110h] [rbp+8h] BYREF
  __int128 *v102; // [rsp+120h] [rbp+18h]

  v1 = 0;
  v102 = 0LL;
  v99 = 0LL;
  v87 = 0;
  v100 = 0LL;
  v82 = 0;
  v101 = 0LL;
  ValidWindowPos = FindValidWindowPos(a1);
  if ( !ValidWindowPos )
    return 0LL;
  v5 = *(const struct tagWND **)(_HMObjectFromHandle(*(_QWORD *)ValidWindowPos) + 104);
  v89 = v5;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v95, (__int64)v5);
  v6 = (__int128 *)*((_QWORD *)a1 + 5);
  v81 = *((_DWORD *)a1 + 7) - 1;
  v86 = 1;
  if ( v81 < 0 )
  {
LABEL_149:
    v1 = 1;
    goto LABEL_150;
  }
  v7 = *((_DWORD *)a1 + 7) - 1;
  while ( !*(_QWORD *)v6 )
  {
LABEL_148:
    v6 = (__int128 *)((char *)v6 + 168);
    v81 = --v7;
    if ( v7 < 0 )
      goto LABEL_149;
  }
  v8 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)v6, 1);
  if ( !v8 || !(unsigned int)IsStillWindowC(*((HWND *)v6 + 1)) )
  {
    *(_QWORD *)v6 = 0LL;
    *((_DWORD *)v6 + 8) = 6159;
    goto LABEL_147;
  }
  Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v8);
  xxxProcessPreemptiveDpiChange(v8, (struct tagCVR *)v6);
  v9 = *((_DWORD *)v6 + 8);
  if ( (v9 & 0x400) == 0 )
  {
    v10 = *((_QWORD *)v6 + 1);
    xxxSendPosMessage((struct tagTHREADINFO **)v8, 0x46u, (struct tagWINDOWPOS *)v6);
    v12 = *((_DWORD *)v6 + 8) | v9 & 0x1FC0000;
    *((_DWORD *)v6 + 8) = v12;
    LOBYTE(v13) = v12;
    if ( (v9 & 0x40) != 0 && (v12 & 0x40) == 0 )
    {
      NotifyShell::CuratedWindowHidden((__int64)v8, v11);
      v13 = *((_DWORD *)v6 + 8);
    }
    v14 = *((_DWORD *)v6 + 39);
    if ( (v14 & 0x20) == 0 && (v13 & 3) != 3 )
    {
      if ( (v14 & 0x200) == 0 )
        *((_QWORD *)v6 + 16) = *(_QWORD *)(*((_QWORD *)v8 + 5) + 256LL);
      *((_DWORD *)v6 + 39) = v14 | 0x20;
    }
    if ( (v13 & 4) == 0 && ((v9 & 4) != 0 || *((_WORD *)v6 + 4) != (_WORD)v10) )
    {
      if ( !(unsigned int)IsStillWindowC(*((HWND *)v6 + 1)) )
      {
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v95);
        return 0LL;
      }
      if ( *((_WORD *)v6 + 4) != (_WORD)v10 || *((_QWORD *)v6 + 1) >= 0xFFFFFFFFFFFFFFFEuLL )
      {
        v15 = CheckTopmost((struct tagCVR *)v6);
        if ( v15 )
        {
          if ( *(_DWORD *)(*((_QWORD *)v8 + 5) + 236LL) == 1 )
            SetTopmostEnum(v8, v15 == 1, (*((_DWORD *)v6 + 8) >> 9) & 1);
        }
      }
    }
  }
  CRecalcProp::s_xxxOnWindowBecomingVisible(v8, (struct tagWINDOWPOS *)v6);
  *((_DWORD *)v6 + 39) = *((_DWORD *)v6 + 39) & 0xFFFFFFDF ^ (*((_DWORD *)v6 + 39) & 0x20 | ((v6[2] & 3) != 3 ? 0x20 : 0));
  v92 = *(_OWORD *)(*((_QWORD *)v5 + 5) + 104LL);
  if ( IsChildWindowDpiBoundary(v8) )
  {
    LogicalToPhysicalInPlaceRectWithSubpixel(v5, (int *)&v92, 0LL);
    PhysicalToLogicalInPlaceRectWithSubpixel(v8, (int *)&v92, 0LL);
  }
  v16 = *((_QWORD *)v8 + 5);
  v17 = *(_DWORD *)(v16 + 88);
  v91 = v17;
  v88 = *(_DWORD *)(v16 + 92);
  *((_DWORD *)v6 + 20) = v17;
  *((_DWORD *)v6 + 21) = v88;
  DesktopWindow = GetDesktopWindow((__int64)v8);
  v21 = DWORD2(v92);
  v83 = DWORD1(v92);
  v85 = v92;
  if ( v89 == (const struct tagWND *)DesktopWindow )
  {
    v23 = v82;
  }
  else
  {
    v17 -= v92;
    v20 -= DWORD1(v92);
    v91 = v17;
    v88 = v20;
    if ( (*(_BYTE *)(*((_QWORD *)v89 + 5) + 26LL) & 0x40) != 0
      && (v22 = *((_QWORD *)v8 + 5), (*(_BYTE *)(v22 + 31) & 0xC0) == 0x40) )
    {
      v82 = 1;
      v19 = (unsigned int)(DWORD2(v92) - *(_DWORD *)(v22 + 96));
      v23 = 1;
    }
    else
    {
      v23 = 0;
      v82 = 0;
      v19 = v17;
    }
  }
  v24 = (_DWORD *)*((_QWORD *)v8 + 5);
  v25 = *((_DWORD *)v6 + 8) | 0x1800;
  v26 = v24[24] - v24[22];
  v27 = v24[25] - v24[23];
  v84 = v26;
  *((_DWORD *)v6 + 8) = v25;
  if ( (v25 & 2) != 0 )
  {
    *((_DWORD *)v6 + 39) |= 0x100u;
    *((_DWORD *)v6 + 4) = v19;
    *((_DWORD *)v6 + 5) = v20;
  }
  else
  {
    v28 = *((_DWORD *)v6 + 4) == (_DWORD)v19;
    v19 = 1LL;
    if ( v28 && *((_DWORD *)v6 + 5) == v20 )
    {
      *((_DWORD *)v6 + 8) = v25 | 2;
      v29 = v87;
      if ( v23 )
        v29 = 1;
      v87 = v29;
    }
    if ( (*(_BYTE *)(*((_QWORD *)v8 + 5) + 31LL) & 0x20) != 0 )
    {
      v30 = IsTrayWindow(v8, 1LL);
      v26 = v84;
      if ( v30 )
      {
        *((_DWORD *)v6 + 4) = -32000;
        *((_DWORD *)v6 + 5) = -32000;
      }
    }
  }
  if ( (v6[2] & 1) != 0 )
  {
    v33 = (_DWORD *)v6 + 6;
    *((_DWORD *)v6 + 7) = v27;
    *((_DWORD *)v6 + 6) = v26;
  }
  else
  {
    if ( (*(_BYTE *)(*((_QWORD *)v8 + 5) + 31LL) & 0x20) != 0
      && (UserSessionState = W32GetUserSessionState(v24, v19),
          GetProp((__int64)v8, *(unsigned __int16 *)(UserSessionState + 41374), 1u)) )
    {
      v33 = (_DWORD *)v6 + 6;
      v34 = *(_QWORD *)(W32GetUserSessionState(v32, v19) + 19904);
      *((_DWORD *)v6 + 6) = *(_DWORD *)(v34 + 2124);
      v36 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v34, v35) + 19904) + 2128LL);
      *((_DWORD *)v6 + 7) = v36;
    }
    else
    {
      v33 = (_DWORD *)v6 + 6;
      if ( *((int *)v6 + 6) < 0 )
        *v33 = 0;
      v36 = *((_DWORD *)v6 + 7);
      if ( v36 < 0 )
      {
        *((_DWORD *)v6 + 7) = 0;
        v36 = 0;
      }
    }
    if ( *v33 == v84 && v36 == v27 )
      *((_DWORD *)v6 + 8) |= 1u;
  }
  if ( (v6[2] & 3) != 3 )
    DwmNotifyMoveReason::SendNotifications(v8, v19);
  if ( v82 )
    *((_DWORD *)v6 + 4) = v21 - *((_DWORD *)v6 + 4) - v85 - *v33;
  v37 = *((_DWORD *)v6 + 8);
  if ( (*(_BYTE *)(*((_QWORD *)v8 + 5) + 31LL) & 0x10) != 0 )
  {
    v38 = v37 & 0xFFFFFFBF;
LABEL_64:
    *((_DWORD *)v6 + 8) = v38;
    goto LABEL_65;
  }
  v38 = v37 & 0xFFFFFF7F;
  *((_DWORD *)v6 + 8) = v38;
  if ( (v38 & 0x40) == 0 )
  {
    v38 |= 8u;
    goto LABEL_64;
  }
LABEL_65:
  v39 = v38;
  if ( (*(_BYTE *)(*((_QWORD *)v8 + 5) + 27LL) & 2) == 0 && GetStyleWindow((__int64)v8, 2818) )
  {
    v39 = v38 | 0x100;
    *((_DWORD *)v6 + 8) = v38 | 0x100;
  }
  if ( (*(_BYTE *)(*((_QWORD *)v8 + 5) + 20LL) & 0x20) != 0 )
  {
    v39 &= ~4u;
    *((_QWORD *)v6 + 1) = 1LL;
    *((_DWORD *)v6 + 8) = v39;
  }
  if ( v86 )
  {
    if ( (v39 & 4) == 0 )
    {
      v86 = 0;
      if ( (*(_BYTE *)(*((_QWORD *)v8 + 5) + 19LL) & 4) == 0 )
      {
        if ( (unsigned int)ValidateZorder((struct tagCVR *)v6) )
        {
          *((_DWORD *)v6 + 8) |= 4u;
          v86 = 1;
        }
      }
    }
  }
  v40 = *((_DWORD *)v6 + 8);
  v41 = v40;
  if ( (v40 & 8) == 0 && ((v6[2] & 0x18E7) == 0x1807 || !(unsigned int)FChildVisible((__int64)v8)) )
  {
    v41 = v40 | 8;
    *((_DWORD *)v6 + 8) = v40 | 8;
  }
  if ( (*((_DWORD *)v6 + 39) & 0x20) != 0 && (v41 & 0x80000) == 0 && IsWindowBroadcastingDpiToChildrenX(v8) )
  {
    v42 = ValidateHmonitor(*((_QWORD *)v6 + 16));
    v43 = v42;
    v44 = v42 ? *(_WORD *)(*(_QWORD *)(v42 + 40) + 60LL) : 0;
    v45 = *((_DWORD *)v6 + 5);
    v93[0] = *((_DWORD *)v6 + 4);
    v93[2] = *((_DWORD *)v6 + 6) + v93[0];
    v46 = *((_DWORD *)v6 + 7);
    v93[1] = v45;
    v93[3] = v45 + v46;
    NewMonitor = GetNewMonitor(v8, v93, 0LL);
    if ( NewMonitor )
    {
      if ( v43 != NewMonitor )
      {
        v48 = *(unsigned __int16 *)(*(_QWORD *)(NewMonitor + 40) + 60LL);
        if ( v44 != (_WORD)v48 )
          *((_DWORD *)v6 + 39) ^= ((unsigned __int8)*((_DWORD *)v6 + 39) ^ (unsigned __int8)((unsigned __int8)xxxAppAdjustDpiCandidateRect(v8, v48, v93, (char *)v6 + 136) << 7)) & 0x80;
      }
    }
  }
  v49 = *((_DWORD *)v6 + 8);
  if ( (v49 & 0x21) == 1 )
  {
    v62 = v88;
    goto LABEL_132;
  }
  v50 = *((_DWORD *)v6 + 39) | 4;
  *((_DWORD *)v6 + 39) = v50;
  v51 = *((_QWORD *)v8 + 5);
  v96 = 0LL;
  v98 = 0LL;
  v97 = 0LL;
  if ( (*(_BYTE *)(v51 + 31) & 0x40) == 0 && *(char *)(v51 + 24) >= 0 )
    CheckFullScreen(v8, (struct tagSIZERECT *)(v6 + 1), v49, (v50 & 0x800) == 0);
  v52 = v6[1];
  v96 = *v6;
  v53 = *((_QWORD *)v6 + 4);
  v102 = &v96;
  LODWORD(v99) = *((_DWORD *)v6 + 4);
  DWORD2(v99) = *((_DWORD *)v6 + 6) + v99;
  DWORD1(v99) = *((_DWORD *)v6 + 5);
  HIDWORD(v99) = *((_DWORD *)v6 + 7) + DWORD1(v99);
  v97 = v52;
  v98 = v53;
  GetRect(v8, (__int64)&v100, 66);
  GetRect(v8, (__int64)&v101, 65);
  v54 = DWORD1(v101);
  v55 = v101;
  v56 = DWORD2(v101) - v101;
  v90 = HIDWORD(v101) - DWORD1(v101);
  v57 = xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)v8, 131LL, 1uLL, (__int64)&v99, 0, 0, 0LL, 1u, 0);
  if ( (unsigned int)IsStillWindowC(*((HWND *)v6 + 1)) )
  {
    if ( v57 - 16 > 0x3F0 )
    {
      v57 = 48;
      v100 = v99;
    }
    if ( (*(_BYTE *)(*((_QWORD *)v8 + 5) + 26LL) & 0x40) != 0 )
      v58 = DWORD2(v100) - DWORD2(v101);
    else
      v58 = v100 - v101;
    *((_DWORD *)v6 + 18) = v58;
    *((_DWORD *)v6 + 19) = DWORD1(v100) - DWORD1(v101);
    *((_QWORD *)v6 + 5) = v99;
    v59 = DWORD2(v99) - v99;
    *((_DWORD *)v6 + 12) = DWORD2(v99) - v99;
    v60 = HIDWORD(v99) - DWORD1(v99);
    *((_DWORD *)v6 + 13) = HIDWORD(v99) - DWORD1(v99);
    if ( __PAIR64__(v54, v55) != (_QWORD)v99 )
      *((_DWORD *)v6 + 8) &= ~0x1000u;
    if ( v56 != v59 || v90 != v60 )
      *((_DWORD *)v6 + 8) &= ~0x800u;
    v49 = *((_DWORD *)v6 + 8);
    if ( (v49 & 0x100) != 0 )
      goto LABEL_130;
    if ( v87 )
      goto LABEL_130;
    v61 = *((_QWORD *)v8 + 5);
    if ( (*(_BYTE *)(v61 + 24) & 0x20) != 0 )
      goto LABEL_130;
    if ( (v6[2] & 0x821) != 0x801
      || (v17 = v91, *((_DWORD *)v6 + 18) != *((_DWORD *)v6 + 4) - v91)
      || (v62 = v88, *((_DWORD *)v6 + 19) != *((_DWORD *)v6 + 5) - v88) )
    {
      if ( (v56 == v59 || (v57 & 0x100) == 0 && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v8 + 17) + 8LL) + 8LL) & 2) == 0)
        && (v90 == v60 || (v57 & 0x200) == 0 && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v8 + 17) + 8LL) + 8LL) & 1) == 0) )
      {
        v63 = DWORD2(v101) - v101;
        v64 = HIDWORD(v101) - DWORD1(v101);
        v65 = v100;
        v66 = DWORD2(v100) - v100;
        v67 = HIDWORD(v100) - DWORD1(v100);
        v68 = *(_BYTE *)(v61 + 26) & 0x40;
        if ( (v68 != 0) != ((v57 >> 7) & 1) )
        {
          if ( v68 && v63 > v66 )
            v69 = v63 - v66;
          else
            v69 = v66 - v63;
          v65 = v69 + v100;
          LODWORD(v100) = v69 + v100;
        }
        v70 = DWORD1(v100);
        if ( (v57 & 0x40) != 0 )
        {
          v70 = HIDWORD(v100) - v64;
          DWORD1(v100) = HIDWORD(v100) - v64;
        }
        if ( v63 < v66 )
          DWORD2(v100) = v65 + v63;
        if ( v64 < v67 )
          HIDWORD(v100) = v70 + v64;
        *(__int128 *)((char *)v6 + 56) = v100;
        v5 = v89;
        if ( v89 != (const struct tagWND *)GetDesktopWindow((__int64)v8) )
        {
          *((_DWORD *)v6 + 14) += v85;
          *((_DWORD *)v6 + 16) += v85;
          *((_DWORD *)v6 + 17) += v83;
          *((_DWORD *)v6 + 15) += v83;
        }
LABEL_145:
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
        goto LABEL_147;
      }
LABEL_130:
      *(__int128 *)((char *)v6 + 56) = 0LL;
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
      v5 = v89;
LABEL_147:
      v7 = v81;
      goto LABEL_148;
    }
LABEL_132:
    if ( (v49 & 0x100) != 0 )
    {
      *(__int128 *)((char *)v6 + 56) = 0LL;
    }
    else
    {
      v71 = *((_DWORD *)v6 + 5);
      *((_DWORD *)v6 + 14) = *((_DWORD *)v6 + 4);
      *((_DWORD *)v6 + 15) = v71;
      if ( v89 != (const struct tagWND *)GetDesktopWindow((__int64)v8) )
      {
        v72 += v85;
        v73 += v83;
        *((_DWORD *)v6 + 14) = v72;
        *((_DWORD *)v6 + 15) = v73;
      }
      *((_DWORD *)v6 + 16) = v72 + *((_DWORD *)v6 + 6);
      *((_DWORD *)v6 + 17) = v73 + *((_DWORD *)v6 + 7);
    }
    v74 = *((_DWORD *)v6 + 4);
    if ( (*(_BYTE *)(*((_QWORD *)v8 + 5) + 26LL) & 0x40) != 0 )
      v75 = v74 + *((_DWORD *)v6 + 6) - v84 - v17;
    else
      v75 = v74 - v17;
    *((_DWORD *)v6 + 18) = v75;
    v76 = *((_DWORD *)v6 + 8);
    v77 = *((_DWORD *)v6 + 5) - v62;
    *((_DWORD *)v6 + 19) = v77;
    if ( (v76 & 2) != 0 )
    {
      v5 = v89;
    }
    else
    {
      *((_DWORD *)v6 + 8) = v76 & 0xFFFFEFFF;
      *((_DWORD *)v6 + 10) = v75 + *(_DWORD *)(*((_QWORD *)v8 + 5) + 104LL);
      *((_DWORD *)v6 + 11) = v77 + *(_DWORD *)(*((_QWORD *)v8 + 5) + 108LL);
      v5 = v89;
      if ( v89 != (const struct tagWND *)GetDesktopWindow((__int64)v8) )
      {
        *((_DWORD *)v6 + 10) = v79 - v85;
        *((_DWORD *)v6 + 11) = v78 - v80;
      }
      *((_DWORD *)v6 + 12) = *(_DWORD *)(*((_QWORD *)v8 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v8 + 5) + 104LL);
      *((_DWORD *)v6 + 13) = *(_DWORD *)(*((_QWORD *)v8 + 5) + 116LL) - *(_DWORD *)(*((_QWORD *)v8 + 5) + 108LL);
    }
    goto LABEL_145;
  }
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
LABEL_150:
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v95);
  return v1;
}
