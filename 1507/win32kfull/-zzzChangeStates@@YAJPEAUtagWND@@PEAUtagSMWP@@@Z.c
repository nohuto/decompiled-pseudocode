/*
 * XREFs of ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0092654
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0062A3C (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     SetOldRedirectionBitmap @ 0x1C000A8A8 (SetOldRedirectionBitmap.c)
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C000AB30 (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     RecreateRedirectionBitmap @ 0x1C000B580 (RecreateRedirectionBitmap.c)
 *     DecomposeWindowIfNeeded @ 0x1C000B824 (DecomposeWindowIfNeeded.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C000BF8C (DeleteOrSetRedirectionBitmap.c)
 *     xxxInternalInvalidate @ 0x1C000DB50 (xxxInternalInvalidate.c)
 *     SelectWindowRgn @ 0x1C000E814 (SelectWindowRgn.c)
 *     UpdateSprite @ 0x1C00591C0 (UpdateSprite.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C005BADC (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     PWInsertAfter @ 0x1C005BC30 (PWInsertAfter.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C005C038 (UpdateMonitorForWindowAndChildren.c)
 *     GetNewMonitor @ 0x1C005C238 (GetNewMonitor.c)
 *     GreClientRgnUpdated @ 0x1C0061BE4 (GreClientRgnUpdated.c)
 *     UnlinkWindow @ 0x1C0065F2C (UnlinkWindow.c)
 *     LinkWindow @ 0x1C006616C (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0066998 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0067710 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     IsTrayWindow @ 0x1C0068BA0 (IsTrayWindow.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     SetVisible @ 0x1C0081FA0 (SetVisible.c)
 *     ComposeWindowIfNeeded @ 0x1C008227C (ComposeWindowIfNeeded.c)
 *     PostShellHookMessagesEx @ 0x1C0085F90 (PostShellHookMessagesEx.c)
 *     IntersectRect @ 0x1C008E444 (IntersectRect.c)
 *     zzzCalcStartCursorHide @ 0x1C0090590 (zzzCalcStartCursorHide.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00918C4 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     OffsetChildren @ 0x1C00EA6A4 (OffsetChildren.c)
 *     CreateSpb @ 0x1C00FF068 (CreateSpb.c)
 *     IsSmallerThanScreen @ 0x1C0108218 (IsSmallerThanScreen.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     InvalidateGDIWindows @ 0x1C01E7E34 (InvalidateGDIWindows.c)
 *     ?TraceLoggingNewWindowPosToHandleDPIChangeEvent@@YAXQEAUtagWND@@HHHH@Z @ 0x1C0224368 (-TraceLoggingNewWindowPosToHandleDPIChangeEvent@@YAXQEAUtagWND@@HHHH@Z.c)
 */

__int64 __fastcall zzzChangeStates(struct tagWND *a1, struct tagSMWP *a2)
{
  unsigned int v3; // ebx
  struct tagSMWP *v4; // r14
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // rsi
  int v8; // r15d
  int v9; // r12d
  __int64 v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  unsigned __int64 v14; // rdx
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rbx
  BOOL v19; // eax
  struct tagRECT *v20; // rdx
  __int64 NewMonitor; // rax
  int v22; // eax
  int v23; // edx
  int v24; // r10d
  int v25; // r9d
  int v26; // r8d
  unsigned int v27; // r15d
  int v28; // ecx
  unsigned int v29; // r14d
  int v30; // edx
  __int64 v31; // r8
  char v32; // al
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  int v35; // eax
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  int v40; // eax
  int v41; // edx
  int v42; // ebx
  int v43; // eax
  __int64 i; // rbx
  int v45; // eax
  int v46; // ecx
  char v47; // al
  __int64 v48; // rax
  int v49; // r14d
  int v50; // ecx
  struct tagRECT *v51; // rcx
  int v52; // eax
  HSURF v53; // rbx
  int v54; // edx
  int v55; // r8d
  __int64 v56; // r9
  __int64 v57; // rdx
  int v58; // [rsp+60h] [rbp-A0h]
  unsigned int updated; // [rsp+64h] [rbp-9Ch]
  int v60; // [rsp+68h] [rbp-98h]
  int v61; // [rsp+6Ch] [rbp-94h]
  int v63; // [rsp+78h] [rbp-88h]
  int v64; // [rsp+7Ch] [rbp-84h]
  struct tagSIZE v65; // [rsp+80h] [rbp-80h] BYREF
  struct tagPOINT v66; // [rsp+88h] [rbp-78h] BYREF
  __int64 v67; // [rsp+90h] [rbp-70h] BYREF
  int v68; // [rsp+98h] [rbp-68h]
  int v69; // [rsp+9Ch] [rbp-64h]
  _BYTE v70[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v71[8]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v72[3]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v73[3]; // [rsp+C8h] [rbp-38h] BYREF
  _DWORD v74[4]; // [rsp+E0h] [rbp-20h] BYREF
  struct tagRECT v75; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v76; // [rsp+100h] [rbp+0h] BYREF
  __int128 v77; // [rsp+110h] [rbp+10h] BYREF

  updated = 0;
  v60 = 0;
  v3 = 0;
  v4 = a2;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v70);
  v6 = gptiCurrent;
  v73[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v73;
  ++*((_DWORD *)a1 + 2);
  v7 = *((_QWORD *)v4 + 5);
  v8 = *((_DWORD *)v4 + 7) - 1;
  v58 = v8;
  v73[1] = a1;
  if ( v8 < 0 )
    goto LABEL_23;
  do
  {
    v6 = *(_QWORD *)v7;
    v9 = 0;
    v61 = 0;
    v63 = 0;
    v64 = 0;
    if ( !*(_QWORD *)v7 )
      goto LABEL_19;
    v10 = HMValidateHandleNoSecure(v6, 1);
    if ( !v10 || !IsStillWindowC(*(_QWORD *)(v7 + 8)) )
    {
      *(_DWORD *)(v7 + 32) = 6159;
      *(_QWORD *)v7 = 0LL;
    }
    v6 = *(_DWORD *)(v7 + 32) & 0x18E7;
    if ( (_DWORD)v6 == 6151 )
    {
      *(_DWORD *)(v7 + 32) |= 8u;
      goto LABEL_19;
    }
    if ( (_DWORD)v6 == 6147 && (*(_BYTE *)(v10 + 43) & 4) == 0 && (unsigned int)ValidateZorder((struct tagCVR *)v7) )
    {
      *(_DWORD *)(v7 + 32) |= 0xCu;
      v6 = *(_QWORD *)(v7 + 96);
      if ( v6 )
      {
        GreDeleteObject(v6);
        *(_QWORD *)(v7 + 96) = 0LL;
      }
      goto LABEL_19;
    }
    if ( (*(_DWORD *)(v7 + 32) & 0x1803) != 0x1803 )
    {
      if ( ((*(_BYTE *)(v10 + 51) & 0x20) != 0 || (*(_BYTE *)(v10 + 50) & 8) != 0)
        && (*(_DWORD *)(v10 + 120) - *(_DWORD *)(v10 + 112) != *(_DWORD *)(v7 + 24)
         || *(_DWORD *)(v10 + 124) - *(_DWORD *)(v10 + 116) != *(_DWORD *)(v7 + 28)) )
      {
        v9 = 1;
        v63 = *(_DWORD *)(v10 + 120) - *(_DWORD *)(v10 + 112);
        v64 = *(_DWORD *)(v10 + 124) - *(_DWORD *)(v10 + 116);
      }
      if ( *(_DWORD *)(v10 + 112) != *(_DWORD *)(v7 + 16) || *(_DWORD *)(v10 + 116) != *(_DWORD *)(v7 + 20) )
        v61 = 1;
      v22 = *(_DWORD *)(v10 + 368);
      if ( (v22 & 1) != 0 && v9 )
      {
        *(_DWORD *)(v10 + 368) = v22 & 0xFFFFFFFE;
        TraceLoggingNewWindowPosToHandleDPIChangeEvent(
          (struct tagWND *const)v10,
          *(_DWORD *)(v7 + 16),
          *(_DWORD *)(v7 + 20),
          *(_DWORD *)(v7 + 24),
          *(_DWORD *)(v7 + 28));
      }
      *(_DWORD *)(v10 + 112) = *(_DWORD *)(v7 + 16);
      *(_DWORD *)(v10 + 116) = *(_DWORD *)(v7 + 20);
      if ( a1 != (struct tagWND *)GetDesktopWindow(v10) )
      {
        *(_DWORD *)(v10 + 112) += *((_DWORD *)a1 + 32);
        *(_DWORD *)(v10 + 116) += *((_DWORD *)a1 + 33);
      }
      v25 = *(_DWORD *)(v10 + 116);
      v26 = *(_DWORD *)(v10 + 112);
      v27 = v25 - v24;
      v28 = v26 + *(_DWORD *)(v7 + 24);
      *(_DWORD *)(v10 + 120) = v28;
      v29 = v26 - v23;
      v30 = v25 + *(_DWORD *)(v7 + 28);
      if ( v28 < v26 )
        v28 = v26;
      *(_DWORD *)(v10 + 120) = v28;
      if ( v30 < v25 )
        v30 = v25;
      *(_DWORD *)(v10 + 124) = v30;
      if ( v10 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 248LL) )
      {
        if ( a1 != (struct tagWND *)GetDesktopWindow(v10) )
        {
          v54 -= *((_DWORD *)a1 + 32);
          v55 -= *((_DWORD *)a1 + 33);
        }
        if ( v54 | v55 )
        {
          *(_DWORD *)(v56 + 264) += v54;
          *(_DWORD *)(v56 + 268) += v55;
        }
      }
      *(_DWORD *)(v10 + 128) = *(_DWORD *)(v7 + 40);
      *(_DWORD *)(v10 + 132) = *(_DWORD *)(v7 + 44);
      if ( a1 != (struct tagWND *)GetDesktopWindow(v10) )
      {
        *(_DWORD *)(v10 + 128) += *((_DWORD *)a1 + 32);
        *(_DWORD *)(v10 + 132) += *((_DWORD *)a1 + 33);
      }
      *(_DWORD *)(v10 + 136) = *(_DWORD *)(v10 + 128) + *(_DWORD *)(v7 + 48);
      *(_DWORD *)(v10 + 140) = *(_DWORD *)(v10 + 132) + *(_DWORD *)(v7 + 52);
      v32 = *(_BYTE *)(v10 + 45);
      *(_QWORD *)&v75.left = 0LL;
      if ( (v32 & 8) != 0
        && ((unsigned int)IsSmallerThanScreen(v10, &v75) || *(_QWORD *)(v10 + 200) != *(_QWORD *)&v75.left) )
      {
        SelectWindowRgn(v10, 0LL, ((unsigned __int8)~*(_BYTE *)(v7 + 32) >> 3) & 1);
      }
      if ( v9 )
      {
        *(_DWORD *)(v7 + 156) |= 1u;
        if ( (*(_BYTE *)(v10 + 51) & 0x20) != 0 && (v47 = *(_BYTE *)(v10 + 50), (v47 & 0x20) == 0) )
        {
          *(_QWORD *)&v75.left = 0LL;
          if ( (v47 & 8) != 0 )
          {
            v3 = 1;
            v51 = &v75;
          }
          else
          {
            v51 = 0LL;
          }
          v52 = RecreateRedirectionBitmap(
                  (struct tagWND *)v10,
                  (unsigned int)(*(_DWORD *)(v10 + 112) - *(_DWORD *)(v7 + 80)),
                  (unsigned int)(*(_DWORD *)(v10 + 116) - *(_DWORD *)(v7 + 84)),
                  0LL,
                  0,
                  (HSURF *)v51);
          updated = v52;
          if ( v3 && v52 >= 0 )
          {
            v53 = *(HSURF *)&v75.left;
            if ( *(_QWORD *)&v75.left )
            {
              if ( (unsigned int)SetOldRedirectionBitmap(v10) )
                v53 = 0LL;
            }
            else
            {
              UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v71);
              xxxInternalInvalidate((struct tagWND *)v10, (HRGN)1, 0x401u);
              UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v71);
            }
          }
          else
          {
            v53 = *(HSURF *)&v75.left;
          }
          if ( v53 )
            DeleteOrSetRedirectionBitmap(v10, v53, 1);
          v3 = 0;
        }
        else if ( (unsigned int)IsWindowDesktopComposed(v10) )
        {
          v65.cx = *(_DWORD *)(v10 + 120) - *(_DWORD *)(v10 + 112);
          v65.cy = *(_DWORD *)(v10 + 124) - *(_DWORD *)(v10 + 116);
          updated = UpdateSprite((HDEV)*gpDispInfo, v10, v31, 0LL, 0LL, &v65, 0LL, 0LL, 0, 0LL, 0, 0LL);
        }
      }
      if ( v29 || v27 )
      {
        v33 = *(_QWORD *)(v10 + 200);
        if ( v33 > 1 && (*(_BYTE *)(v10 + 45) & 8) == 0 )
          GreOffsetRgn(v33, v29, v27);
      }
      if ( *(_QWORD *)(v7 + 72) )
      {
        v34 = *(_QWORD *)(v10 + 160);
        if ( v34 > 1 )
          GreOffsetRgn(v34, *(unsigned int *)(v7 + 72), *(unsigned int *)(v7 + 76));
        OffsetChildren(v10, *(_DWORD *)(v7 + 72), *(_DWORD *)(v7 + 76), 0, 0);
      }
      if ( !v61 && !v29 && !v27 )
      {
LABEL_103:
        if ( !v9 )
        {
LABEL_61:
          v8 = v58;
          v4 = a2;
          goto LABEL_8;
        }
LABEL_60:
        if ( (*(_BYTE *)(v10 + 51) & 0x20) != 0 && (*(_BYTE *)(v10 + 50) & 0x20) == 0 )
        {
          v48 = *(_QWORD *)(gptiCurrent + 600LL);
          if ( (!v48 || (*(_DWORD *)(v48 + 180) & 0x100000) == 0)
            && !(unsigned int)WindowRedirectionBitmapMatchesMonitorAdapter((HWND *)v10) )
          {
            *(_DWORD *)(v10 + 288) &= ~0x80000u;
            RecreateRedirectionBitmap((struct tagWND *)v10, 0LL, 0LL, 0LL, 0, 0LL);
          }
        }
        goto LABEL_61;
      }
      v66 = *(struct tagPOINT *)(v10 + 112);
      v76 = 0LL;
      if ( v61 )
      {
        v35 = *(_DWORD *)(v10 + 288);
        if ( (v35 & 0x8000) != 0 )
        {
          v57 = *(_QWORD *)v10;
          *(_DWORD *)(v10 + 288) = v35 & 0xFFFF7FFF;
          PostShellHookMessagesEx(0x36u, v57, 0LL);
        }
        if ( (*(_BYTE *)(v10 + 50) & 8) == 0 )
        {
LABEL_59:
          if ( v61 )
            goto LABEL_60;
          goto LABEL_103;
        }
        v3 = 0;
        if ( v9 )
        {
          v49 = -v29;
          v68 = *(_DWORD *)(v10 + 120) - *(_DWORD *)(v10 + 112);
          v50 = *(_DWORD *)(v10 + 124) - *(_DWORD *)(v10 + 116);
          DWORD2(v76) = v49 + v63;
          v69 = v50;
          v67 = 0LL;
          LODWORD(v76) = v49;
          DWORD1(v76) = -v27;
          HIDWORD(v76) = v64 - v27;
          IntersectRect(&v76, (int *)&v76, (int *)&v67);
        }
        if ( gcountPWO )
        {
          InvalidateGDIWindows(v10);
          GreClientRgnUpdated(1);
        }
        if ( v9 && !(unsigned int)IsWindowDesktopComposed(v10) )
          v3 = 1;
      }
      if ( (*(_BYTE *)(v10 + 50) & 8) != 0 )
        updated = UpdateSprite(
                    (HDEV)*gpDispInfo,
                    v10,
                    v31,
                    0LL,
                    &v66,
                    0LL,
                    0LL,
                    0LL,
                    0,
                    0LL,
                    0,
                    (struct tagRECT *)((unsigned __int64)&v76 & -(__int64)(v3 != 0)));
      goto LABEL_59;
    }
LABEL_8:
    if ( (*(_DWORD *)(v7 + 32) & 4) == 0 )
    {
      v36 = *(_QWORD *)(v7 + 8);
      if ( v36 >= 2 && (v36 == 0xFFFF || v36 >= 0xFFFFFFFFFFFFFFFDuLL) || !ValidateWindowPos((struct tagCVR *)v7, a1) )
      {
        *(_DWORD *)(v7 + 32) |= 4u;
        SetOrClrWF(0, (_DWORD *)v10, 0x304u, 1);
      }
      else
      {
        UnlinkWindow(v10, (__int64)a1);
        v38 = PWInsertAfter(*(_QWORD *)(v7 + 8), v37);
        LinkWindow((struct tagWND *)v10, v38, (__int64)a1);
        ++v60;
        if ( (*(_BYTE *)(v10 + 43) & 4) != 0 )
        {
          SetOrClrWF(0, (_DWORD *)v10, 0x304u, 1);
          *(_BYTE *)(v10 + 48) ^= 8u;
        }
      }
    }
    if ( (*(_DWORD *)(v7 + 156) & 0x20) != 0 )
    {
      v16 = ValidateHmonitor(*(_QWORD *)(v7 + 128));
      v17 = *(_DWORD *)(v7 + 156);
      v18 = v16;
      v75 = 0LL;
      if ( (v17 & 0x80u) != 0 )
        v75 = *(struct tagRECT *)(v7 + 136);
      v19 = IsRectEmptyInl(&v75);
      v20 = &v75;
      if ( v19 )
        v20 = 0LL;
      NewMonitor = GetNewMonitor((__m128i *)v10, v20, (struct tagRECT *)(v7 + 136));
      if ( NewMonitor && v18 != NewMonitor )
        *(_DWORD *)(v7 + 156) ^= (*(_DWORD *)(v7 + 156) ^ ((unsigned int)UpdateMonitorForWindowAndChildren(
                                                                           v10,
                                                                           NewMonitor,
                                                                           (__int64 *)(v7 + 160),
                                                                           0) << 6)) & 0x40;
    }
    v11 = gptiCurrent;
    v72[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v72;
    v72[1] = v10;
    ++*(_DWORD *)(v10 + 8);
    v12 = *(_DWORD *)(v7 + 32);
    if ( (v12 & 0x40) == 0 )
    {
      if ( (v12 & 0x80u) != 0 )
      {
        v45 = IsTrayWindow(v10);
        v3 = 0;
        if ( (*(_BYTE *)(v7 + 32) & 0x1F) != 0x1F && v45 && (*(_WORD *)(v10 + 66) & 0x3FFF) != 0x2AA )
        {
          *((_DWORD *)v4 + 6) |= 1u;
          *(_DWORD *)(v7 + 32) |= 0x20000000u;
        }
        if ( (unsigned int)SetVisible(v10, 10) )
          DecomposeWindowIfNeeded((struct tagWND *)v10);
        v46 = 1;
        if ( gdwDeferWinEvent )
          v46 = 3;
        xxxWindowEvent(0x8003u, (__int64 *)v10, 0, 0, v46);
        goto LABEL_13;
      }
      goto LABEL_12;
    }
    v39 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 384LL);
    if ( (*(_DWORD *)(v39 + 12) & 0x40) != 0 )
      zzzCalcStartCursorHide(v39, 5000);
    v40 = SetVisible(v10, 9);
    v41 = 1;
    v42 = v40;
    if ( gdwDeferWinEvent )
      v41 = 3;
    xxxWindowEvent(0x8002u, (__int64 *)v10, 0, 0, v41);
    if ( v42 )
    {
      *(_DWORD *)(v7 + 156) |= 2u;
      if ( (*(_BYTE *)(v10 + 50) & 8) == 0 )
        updated = ComposeWindowIfNeeded(v10, 0);
    }
    v43 = IsTrayWindow(v10);
    v11 = *(_WORD *)(v10 + 66) & 0x3FFF;
    if ( (_DWORD)v11 == 682 )
    {
      if ( (*(_BYTE *)(v10 + 40) & 0x40) != 0 )
      {
        *((_DWORD *)v4 + 6) |= 1u;
        *(_DWORD *)(v7 + 32) |= 0x40000000u;
      }
      v3 = 0;
    }
    else
    {
      if ( (*(_BYTE *)(v10 + 40) & 0x40) != 0 )
      {
        *((_DWORD *)v4 + 6) |= 1u;
        *(_DWORD *)(v7 + 32) |= 0x40000000u;
      }
      v3 = 0;
      if ( !v43 && !*(_QWORD *)(v10 + 104) )
        goto LABEL_86;
      *((_DWORD *)v4 + 6) |= 1u;
      *(_DWORD *)(v7 + 32) |= 0x10000000u;
      if ( v43 )
        goto LABEL_90;
      *(_DWORD *)(v7 + 156) |= 8u;
    }
    if ( !v43 )
    {
      if ( !*(_QWORD *)(v10 + 104) )
      {
LABEL_86:
        if ( (*(_DWORD *)(v7 + 32) & 0x40000000) != 0 )
          *(_DWORD *)(v7 + 156) |= 0x10u;
      }
      if ( (*(_BYTE *)(v10 + 44) & 0x40) != 0 )
      {
        *((_DWORD *)v4 + 6) |= 1u;
        *(_DWORD *)(v7 + 32) |= 0x80000000;
      }
    }
LABEL_90:
    if ( (*(_DWORD *)(v7 + 32) & 0x4008) == 8 )
      goto LABEL_13;
    if ( (*(_BYTE *)(*(_QWORD *)(v10 + 152) + 85LL) & 8) == 0 )
      goto LABEL_13;
    v11 = grpdeskRitInput;
    if ( *(_QWORD *)(v10 + 24) != grpdeskRitInput )
      goto LABEL_13;
    for ( i = *(_QWORD *)(*(_QWORD *)(v10 + 88) + 96LL); i; i = *(_QWORD *)(i + 72) )
    {
      if ( i == v10 )
      {
        CreateSpb((struct tagWND *)v10);
        break;
      }
      if ( (*(_BYTE *)(i + 55) & 0x10) != 0 )
      {
        v77 = *(_OWORD *)(i + 112);
        TransformRectBetweenCoordinateSpaces(&v77, &v77, v10, i);
        if ( (unsigned int)IntersectRect(v74, (int *)(v10 + 112), (int *)&v77) )
          break;
      }
    }
LABEL_12:
    v3 = 0;
LABEL_13:
    if ( (*(_BYTE *)(v10 + 55) & 0x10) != 0 )
    {
      v13 = *(_DWORD *)(v7 + 32);
      if ( (v13 & 0x8000) != 0 || (LOBYTE(v11) = ((v13 & 8) != 0) & ~*(_BYTE *)(v10 + 45), (_BYTE)v11) )
        SetOrClrWF(1, (_DWORD *)v10, 0x108u, 1);
    }
    v14 = *(_QWORD *)(v7 + 112);
    if ( v14 )
      SelectWindowRgn(v10, v14, ((unsigned __int8)~*(_BYTE *)(v7 + 32) >> 3) & 1);
    ThreadUnlock1(v11, v14);
LABEL_19:
    v7 += 168LL;
    v58 = --v8;
  }
  while ( v8 >= 0 );
  if ( v60 )
    xxxWindowEvent(0x8004u, (__int64 *)a1, -4, 0, gdwDeferWinEvent != 0 ? 2 : 0);
  v3 = updated;
LABEL_23:
  ThreadUnlock1(v6, v5);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v70);
  return v3;
}
