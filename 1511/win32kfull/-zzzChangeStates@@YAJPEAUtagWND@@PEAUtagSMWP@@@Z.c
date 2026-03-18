/*
 * XREFs of ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006C148
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0050400 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0041E08 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     GreClientRgnUpdated @ 0x1C004F8F8 (GreClientRgnUpdated.c)
 *     zzzCalcStartCursorHide @ 0x1C0053820 (zzzCalcStartCursorHide.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C005594C (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     UnlinkWindow @ 0x1C0055CCC (UnlinkWindow.c)
 *     LinkWindow @ 0x1C00564E4 (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C00573EC (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     IsTrayWindow @ 0x1C0058750 (IsTrayWindow.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     IntersectRect @ 0x1C006B798 (IntersectRect.c)
 *     UpdateSprite @ 0x1C006BC94 (UpdateSprite.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C006CE7C (UpdateMonitorForWindowAndChildren.c)
 *     GetNewMonitor @ 0x1C006DEC0 (GetNewMonitor.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C0076CCC (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     PWInsertAfter @ 0x1C0076E20 (PWInsertAfter.c)
 *     SetVisible @ 0x1C007A120 (SetVisible.c)
 *     ComposeWindowIfNeeded @ 0x1C007A3EC (ComposeWindowIfNeeded.c)
 *     SelectWindowRgn @ 0x1C007AAB8 (SelectWindowRgn.c)
 *     xxxInternalInvalidate @ 0x1C007D060 (xxxInternalInvalidate.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C007F730 (DeleteOrSetRedirectionBitmap.c)
 *     DecomposeWindowIfNeeded @ 0x1C008001C (DecomposeWindowIfNeeded.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     PostShellHookMessagesEx @ 0x1C0081C20 (PostShellHookMessagesEx.c)
 *     RecreateRedirectionBitmap @ 0x1C009AB98 (RecreateRedirectionBitmap.c)
 *     OffsetChildren @ 0x1C00EFED0 (OffsetChildren.c)
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C01019F4 (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     SetOldRedirectionBitmap @ 0x1C0109ECC (SetOldRedirectionBitmap.c)
 *     CreateSpb @ 0x1C010B97C (CreateSpb.c)
 *     IsSmallerThanScreen @ 0x1C01476B0 (IsSmallerThanScreen.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     InvalidateGDIWindows @ 0x1C01E82A8 (InvalidateGDIWindows.c)
 */

__int64 __fastcall zzzChangeStates(struct tagWND *a1, struct tagSMWP *a2)
{
  unsigned int v3; // r15d
  struct tagSMWP *v4; // r14
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // rsi
  int v8; // r12d
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdi
  BOOL v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rbx
  BOOL v22; // eax
  struct tagRECT *v23; // rdx
  __int64 NewMonitor; // rax
  int v25; // eax
  int v26; // edx
  int v27; // r10d
  int v28; // r9d
  int v29; // r8d
  unsigned int v30; // r12d
  int v31; // ecx
  unsigned int v32; // r15d
  int v33; // edx
  struct tagRECT v34; // xmm0
  int v35; // eax
  __int64 v36; // r8
  int v37; // r11d
  __int64 v38; // rcx
  __int64 v39; // rcx
  char v40; // al
  int v41; // r14d
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rcx
  int v44; // ebx
  int v45; // eax
  int v46; // r14d
  int v47; // eax
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  int v51; // eax
  int v52; // edx
  int v53; // ebx
  int v54; // eax
  __int64 v55; // rbx
  int v56; // eax
  int v57; // ecx
  char v58; // al
  int v59; // eax
  __int64 v60; // rax
  int v61; // eax
  int v62; // r15d
  int v63; // ecx
  int v64; // eax
  int v65; // ebx
  struct tagRECT *v66; // rcx
  int v67; // eax
  __int64 v68; // rbx
  int v69; // eax
  int v70; // edx
  int v71; // r8d
  __int64 v72; // r9
  __int64 v73; // rdx
  int v74; // eax
  unsigned int updated; // [rsp+60h] [rbp-A0h]
  int v76; // [rsp+64h] [rbp-9Ch]
  int v77; // [rsp+68h] [rbp-98h]
  int v78; // [rsp+6Ch] [rbp-94h]
  int v79; // [rsp+70h] [rbp-90h]
  int v81; // [rsp+80h] [rbp-80h]
  int v82; // [rsp+84h] [rbp-7Ch]
  struct tagSIZE v83; // [rsp+88h] [rbp-78h] BYREF
  struct tagPOINT v84; // [rsp+90h] [rbp-70h] BYREF
  __int64 v85; // [rsp+98h] [rbp-68h] BYREF
  int v86; // [rsp+A0h] [rbp-60h]
  int v87; // [rsp+A4h] [rbp-5Ch]
  _BYTE v88[8]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v89[8]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v90[3]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v91[3]; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD v92[4]; // [rsp+E8h] [rbp-18h] BYREF
  struct tagRECT v93; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v94; // [rsp+108h] [rbp+8h] BYREF
  __int128 v95; // [rsp+118h] [rbp+18h] BYREF

  updated = 0;
  v79 = 0;
  v3 = 0;
  v4 = a2;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v88);
  v91[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v91;
  v6 = 1LL;
  ++*((_DWORD *)a1 + 2);
  v7 = *((_QWORD *)v4 + 5);
  v8 = *((_DWORD *)v4 + 7) - 1;
  v76 = v8;
  v91[1] = a1;
  if ( v8 < 0 )
    goto LABEL_21;
  do
  {
    v6 = *(_QWORD *)v7;
    v9 = 0;
    v77 = 0;
    v78 = 0;
    v81 = 0;
    v82 = 0;
    if ( !*(_QWORD *)v7 )
      goto LABEL_18;
    v10 = HMValidateHandleNoSecure(v6, 1);
    v11 = 0LL;
    v12 = v10;
    if ( !v10 || (v13 = IsStillWindowC(*(_QWORD *)(v7 + 8)), v11 = 0LL, !v13) )
    {
      *(_DWORD *)(v7 + 32) = 6159;
      *(_QWORD *)v7 = 0LL;
    }
    v6 = *(_DWORD *)(v7 + 32) & 0x18E7;
    if ( (_DWORD)v6 == 6151 )
    {
      *(_DWORD *)(v7 + 32) |= 8u;
      goto LABEL_18;
    }
    if ( (_DWORD)v6 == 6147 && (*(_BYTE *)(v12 + 43) & 4) == 0 )
    {
      v47 = ValidateZorder((struct tagCVR *)v7);
      v11 = 0LL;
      if ( v47 )
      {
        *(_DWORD *)(v7 + 32) |= 0xCu;
        v6 = *(_QWORD *)(v7 + 96);
        if ( v6 )
        {
          GreDeleteObject(v6);
          *(_QWORD *)(v7 + 96) = 0LL;
        }
        goto LABEL_18;
      }
    }
    if ( (*(_DWORD *)(v7 + 32) & 0x1803) != 0x1803 )
    {
      if ( ((*(_BYTE *)(v12 + 51) & 0x20) != 0 || (*(_BYTE *)(v12 + 50) & 8) != 0)
        && (*(_DWORD *)(v12 + 120) - *(_DWORD *)(v12 + 112) != *(_DWORD *)(v7 + 24)
         || *(_DWORD *)(v12 + 124) - *(_DWORD *)(v12 + 116) != *(_DWORD *)(v7 + 28)) )
      {
        v81 = *(_DWORD *)(v12 + 120) - *(_DWORD *)(v12 + 112);
        v9 = 1;
        v82 = *(_DWORD *)(v12 + 124) - *(_DWORD *)(v12 + 116);
        v77 = 1;
      }
      if ( *(_DWORD *)(v12 + 112) != *(_DWORD *)(v7 + 16) || *(_DWORD *)(v12 + 116) != *(_DWORD *)(v7 + 20) )
        v78 = 1;
      v25 = *(_DWORD *)(v12 + 368);
      if ( (v25 & 1) != 0 && v9 )
        *(_DWORD *)(v12 + 368) = v25 & 0xFFFFFFFE;
      *(_DWORD *)(v12 + 112) = *(_DWORD *)(v7 + 16);
      *(_DWORD *)(v12 + 116) = *(_DWORD *)(v7 + 20);
      if ( a1 != (struct tagWND *)GetDesktopWindow(v12) )
      {
        *(_DWORD *)(v12 + 112) += *((_DWORD *)a1 + 32);
        *(_DWORD *)(v12 + 116) += *((_DWORD *)a1 + 33);
      }
      v28 = *(_DWORD *)(v12 + 116);
      v29 = *(_DWORD *)(v12 + 112);
      v30 = v28 - v27;
      v31 = v29 + *(_DWORD *)(v7 + 24);
      *(_DWORD *)(v12 + 120) = v31;
      v32 = v29 - v26;
      v33 = v28 + *(_DWORD *)(v7 + 28);
      if ( v31 < v29 )
        v31 = v29;
      *(_DWORD *)(v12 + 120) = v31;
      if ( v33 < v28 )
        v33 = v28;
      *(_DWORD *)(v12 + 124) = v33;
      if ( v12 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 248LL) )
      {
        if ( a1 != (struct tagWND *)GetDesktopWindow(v12) )
        {
          v70 -= *((_DWORD *)a1 + 32);
          v71 -= *((_DWORD *)a1 + 33);
        }
        if ( v70 | v71 )
        {
          *(_DWORD *)(v72 + 264) += v70;
          *(_DWORD *)(v72 + 268) += v71;
        }
      }
      v34 = *(struct tagRECT *)(v12 + 128);
      *(_DWORD *)(v12 + 128) = *(_DWORD *)(v7 + 40);
      v35 = *(_DWORD *)(v7 + 44);
      v93 = v34;
      *(_DWORD *)(v12 + 132) = v35;
      if ( a1 != (struct tagWND *)GetDesktopWindow(v12) )
      {
        *(_DWORD *)(v12 + 128) += *((_DWORD *)a1 + 32);
        *(_DWORD *)(v12 + 132) += *((_DWORD *)a1 + 33);
      }
      v38 = *(_QWORD *)&v93.left;
      *(_DWORD *)(v12 + 136) = *(_DWORD *)(v12 + 128) + *(_DWORD *)(v7 + 48);
      *(_DWORD *)(v12 + 140) = *(_DWORD *)(v12 + 132) + *(_DWORD *)(v7 + 52);
      v39 = v38 - *(_QWORD *)(v12 + 128);
      if ( !v39 )
        v39 = *(_QWORD *)&v93.right - *(_QWORD *)(v12 + 136);
      v40 = *(_BYTE *)(v12 + 45);
      v11 = 0LL;
      *(_QWORD *)&v93.left = 0LL;
      v41 = 0;
      if ( v39 )
        v41 = v37;
      if ( (v40 & 8) != 0 )
      {
        v74 = IsSmallerThanScreen(v12, &v93);
        v11 = 0LL;
        if ( v74 || *(_QWORD *)(v12 + 200) != *(_QWORD *)&v93.left )
        {
          SelectWindowRgn(v12, 0LL, ((unsigned __int8)~*(_BYTE *)(v7 + 32) >> 3) & 1, 0LL);
          v11 = 0LL;
        }
        v37 = 1;
      }
      if ( !v9 )
      {
LABEL_49:
        if ( v32 || v30 )
        {
          v42 = *(_QWORD *)(v12 + 200);
          if ( v42 > 1 && (*(_BYTE *)(v12 + 45) & 8) == 0 )
          {
            GreOffsetRgn(v42, v32, v30);
            v11 = 0LL;
          }
        }
        if ( *(_QWORD *)(v7 + 72) )
        {
          v43 = *(_QWORD *)(v12 + 160);
          if ( v43 > 1 )
            GreOffsetRgn(v43, *(unsigned int *)(v7 + 72), *(unsigned int *)(v7 + 76));
          OffsetChildren(v12, *(_DWORD *)(v7 + 72), *(_DWORD *)(v7 + 76), 0, 0);
          v11 = 0LL;
        }
        if ( !v78 && !v41 && !v32 && !v30 )
        {
          v46 = v77;
LABEL_113:
          if ( !v46 )
          {
LABEL_63:
            v8 = v76;
            v3 = updated;
            v4 = a2;
            goto LABEL_8;
          }
LABEL_62:
          if ( (*(_BYTE *)(v12 + 51) & 0x20) != 0 && (*(_BYTE *)(v12 + 50) & 0x20) == 0 )
          {
            v60 = *(_QWORD *)(gptiCurrent + 592LL);
            if ( !v60 || (*(_DWORD *)(v60 + 180) & 0x100000) == 0 )
            {
              v61 = WindowRedirectionBitmapMatchesMonitorAdapter(v12);
              v11 = 0LL;
              if ( !v61 )
              {
                *(_DWORD *)(v12 + 288) &= ~0x80000u;
                RecreateRedirectionBitmap((struct tagWND *)v12, 0, 0LL);
              }
            }
          }
          goto LABEL_63;
        }
        v84 = *(struct tagPOINT *)(v12 + 112);
        v44 = 0;
        v94 = 0LL;
        if ( v78 )
        {
          v45 = *(_DWORD *)(v12 + 288);
          if ( (v45 & 0x8000) != 0 )
          {
            v73 = *(_QWORD *)v12;
            *(_DWORD *)(v12 + 288) = v45 & 0xFFFF7FFF;
            PostShellHookMessagesEx(0x36uLL, v73, 0LL);
            v11 = 0LL;
          }
          v46 = v77;
          if ( (*(_BYTE *)(v12 + 50) & 8) == 0 )
          {
LABEL_61:
            if ( v78 )
              goto LABEL_62;
            goto LABEL_113;
          }
          if ( v77 )
          {
            v62 = -v32;
            v86 = *(_DWORD *)(v12 + 120) - *(_DWORD *)(v12 + 112);
            v63 = *(_DWORD *)(v12 + 124) - *(_DWORD *)(v12 + 116);
            DWORD2(v94) = v62 + v81;
            v87 = v63;
            v85 = 0LL;
            LODWORD(v94) = v62;
            DWORD1(v94) = -v30;
            HIDWORD(v94) = v82 - v30;
            IntersectRect(&v94, (int *)&v94, (int *)&v85);
            v11 = 0LL;
          }
          if ( gcountPWO )
          {
            InvalidateGDIWindows(v12);
            v44 = 1;
            GreClientRgnUpdated(1);
            v11 = 0LL;
          }
          else
          {
            v44 = 1;
          }
          if ( !v77 || (v64 = IsWindowDesktopComposed(v12), v11 = 0LL, v64) )
            v44 = 0;
        }
        else
        {
          v46 = v77;
        }
        if ( (*(_BYTE *)(v12 + 50) & 8) != 0 )
        {
          updated = UpdateSprite(
                      (HDEV)*gpDispInfo,
                      v12,
                      v36,
                      0LL,
                      &v84,
                      0LL,
                      0LL,
                      0LL,
                      0,
                      0LL,
                      0,
                      (struct tagRECT *)((unsigned __int64)&v94 & -(__int64)(v44 != 0)));
          v11 = 0LL;
        }
        goto LABEL_61;
      }
      *(_DWORD *)(v7 + 156) |= v37;
      if ( (*(_BYTE *)(v12 + 51) & 0x20) != 0 && (v58 = *(_BYTE *)(v12 + 50), (v58 & 0x20) == 0) )
      {
        *(_QWORD *)&v93.left = 0LL;
        if ( (v58 & 8) != 0 )
        {
          v65 = v37;
          v66 = &v93;
        }
        else
        {
          v65 = 0;
          v66 = 0LL;
        }
        v67 = RecreateRedirectionBitmap((struct tagWND *)v12, 0, (__int64)v66);
        v11 = 0LL;
        updated = v67;
        if ( v65 && v67 >= 0 )
        {
          v68 = *(_QWORD *)&v93.left;
          if ( *(_QWORD *)&v93.left )
          {
            v69 = SetOldRedirectionBitmap(v12, *(_QWORD *)&v93.left, v36, 0LL);
            v11 = 0LL;
            if ( v69 )
              v68 = 0LL;
          }
          else
          {
            UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v89);
            xxxInternalInvalidate((struct tagWND *)v12, (HRGN)1, 0x401u);
            UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v89);
            v11 = 0LL;
          }
        }
        else
        {
          v68 = *(_QWORD *)&v93.left;
        }
        if ( !v68 )
          goto LABEL_49;
        DeleteOrSetRedirectionBitmap(v12, v68, 1LL);
      }
      else
      {
        v59 = IsWindowDesktopComposed(v12);
        v11 = 0LL;
        if ( !v59 )
          goto LABEL_49;
        v83.cx = *(_DWORD *)(v12 + 120) - *(_DWORD *)(v12 + 112);
        v83.cy = *(_DWORD *)(v12 + 124) - *(_DWORD *)(v12 + 116);
        updated = UpdateSprite((HDEV)*gpDispInfo, v12, v36, 0LL, 0LL, &v83, 0LL, 0LL, 0, 0LL, 0, 0LL);
      }
      v11 = 0LL;
      goto LABEL_49;
    }
LABEL_8:
    if ( (*(_DWORD *)(v7 + 32) & 4) == 0 )
    {
      v48 = *(_QWORD *)(v7 + 8);
      if ( v48 >= 2 && (v48 == 0xFFFF || v48 >= 0xFFFFFFFFFFFFFFFDuLL) || !ValidateWindowPos((struct tagCVR *)v7, a1) )
      {
        *(_DWORD *)(v7 + 32) |= 4u;
        SetOrClrWF(0LL, v12, 772LL, 1LL);
      }
      else
      {
        UnlinkWindow(v12, (__int64)a1);
        v49 = PWInsertAfter(*(_QWORD *)(v7 + 8));
        LinkWindow((struct tagWND *)v12, v49, (__int64)a1);
        ++v79;
        if ( (*(_BYTE *)(v12 + 43) & 4) != 0 )
        {
          SetOrClrWF(0LL, v12, 772LL, 1LL);
          *(_BYTE *)(v12 + 48) ^= 8u;
        }
      }
    }
    if ( (*(_DWORD *)(v7 + 156) & 0x20) != 0 )
    {
      v19 = ValidateHmonitor(*(_QWORD *)(v7 + 128));
      v20 = *(_DWORD *)(v7 + 156);
      v21 = v19;
      v93 = 0LL;
      if ( (v20 & 0x80u) != 0 )
        v93 = *(struct tagRECT *)(v7 + 136);
      v22 = IsRectEmptyInl(&v93);
      v23 = &v93;
      if ( v22 )
        v23 = 0LL;
      NewMonitor = GetNewMonitor((struct tagWND *)v12, v23, (struct tagRECT *)(v7 + 136));
      if ( NewMonitor && v21 != NewMonitor )
        *(_DWORD *)(v7 + 156) ^= (*(_DWORD *)(v7 + 156) ^ ((unsigned int)UpdateMonitorForWindowAndChildren(
                                                                           v12,
                                                                           NewMonitor,
                                                                           v7 + 160,
                                                                           0LL) << 6)) & 0x40;
    }
    v14 = gptiCurrent;
    v90[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v90;
    v90[1] = v12;
    ++*(_DWORD *)(v12 + 8);
    v15 = *(_DWORD *)(v7 + 32);
    if ( (v15 & 0x40) != 0 )
    {
      v50 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 376LL);
      if ( (*(_DWORD *)(v50 + 12) & 0x40) != 0 )
        zzzCalcStartCursorHide(v50, 5000);
      v51 = SetVisible(v12, 9LL);
      v52 = 1;
      v53 = v51;
      if ( gdwDeferWinEvent )
        v52 = 3;
      xxxWindowEvent(0x8002u, (__int64 *)v12, 0, 0, v52);
      if ( v53 )
      {
        *(_DWORD *)(v7 + 156) |= 2u;
        if ( (*(_BYTE *)(v12 + 50) & 8) == 0 )
        {
          v3 = ComposeWindowIfNeeded((struct tagWND *)v12);
          updated = v3;
        }
      }
      v54 = IsTrayWindow(v12);
      v14 = *(_WORD *)(v12 + 66) & 0x3FFF;
      if ( (_DWORD)v14 == 682 )
      {
        if ( (*(_BYTE *)(v12 + 40) & 0x40) != 0 )
        {
          *((_DWORD *)v4 + 6) |= 1u;
          *(_DWORD *)(v7 + 32) |= 0x40000000u;
        }
      }
      else
      {
        if ( (*(_BYTE *)(v12 + 40) & 0x40) != 0 )
        {
          *((_DWORD *)v4 + 6) |= 1u;
          *(_DWORD *)(v7 + 32) |= 0x40000000u;
        }
        if ( !v54 && !*(_QWORD *)(v12 + 104) )
        {
LABEL_88:
          if ( (*(_DWORD *)(v7 + 32) & 0x40000000) != 0 )
            *(_DWORD *)(v7 + 156) |= 0x10u;
LABEL_90:
          if ( (*(_BYTE *)(v12 + 44) & 0x40) != 0 )
          {
            *((_DWORD *)v4 + 6) |= 1u;
            *(_DWORD *)(v7 + 32) |= 0x80000000;
          }
LABEL_92:
          if ( (*(_DWORD *)(v7 + 32) & 0x4008) != 8 && (*(_BYTE *)(*(_QWORD *)(v12 + 152) + 85LL) & 8) != 0 )
          {
            v14 = grpdeskRitInput;
            if ( *(_QWORD *)(v12 + 24) == grpdeskRitInput )
            {
              v55 = *(_QWORD *)(*(_QWORD *)(v12 + 88) + 96LL);
              if ( v55 )
              {
                while ( v55 != v12 )
                {
                  if ( (*(_BYTE *)(v55 + 55) & 0x10) == 0
                    || (v95 = *(_OWORD *)(v55 + 112),
                        TransformRectBetweenCoordinateSpaces(&v95, &v95, v12, v55),
                        !(unsigned int)IntersectRect(v92, (int *)(v12 + 112), (int *)&v95)) )
                  {
                    v55 = *(_QWORD *)(v55 + 72);
                    if ( v55 )
                      continue;
                  }
                  goto LABEL_12;
                }
                CreateSpb((struct tagWND *)v12);
              }
            }
          }
          goto LABEL_12;
        }
        *((_DWORD *)v4 + 6) |= 1u;
        *(_DWORD *)(v7 + 32) |= 0x10000000u;
        if ( v54 )
          goto LABEL_92;
        *(_DWORD *)(v7 + 156) |= 8u;
      }
      if ( v54 )
        goto LABEL_92;
      if ( *(_QWORD *)(v12 + 104) )
        goto LABEL_90;
      goto LABEL_88;
    }
    if ( (v15 & 0x80u) != 0 )
    {
      v56 = IsTrayWindow(v12);
      if ( (*(_BYTE *)(v7 + 32) & 0x1F) != 0x1F && v56 && (*(_WORD *)(v12 + 66) & 0x3FFF) != 0x2AA )
      {
        *((_DWORD *)v4 + 6) |= 1u;
        *(_DWORD *)(v7 + 32) |= 0x20000000u;
      }
      if ( (unsigned int)SetVisible(v12, 10LL) )
        DecomposeWindowIfNeeded((struct tagWND *)v12);
      v57 = 1;
      if ( gdwDeferWinEvent )
        v57 = 3;
      xxxWindowEvent(0x8003u, (__int64 *)v12, 0, 0, v57);
    }
LABEL_12:
    if ( (*(_BYTE *)(v12 + 55) & 0x10) != 0 )
    {
      v16 = *(_DWORD *)(v7 + 32);
      if ( (v16 & 0x8000) != 0 || (LOBYTE(v14) = ((v16 & 8) != 0) & ~*(_BYTE *)(v12 + 45), (_BYTE)v14) )
        SetOrClrWF(1LL, v12, 264LL, 1LL);
    }
    v17 = *(_QWORD *)(v7 + 112);
    if ( v17 )
      SelectWindowRgn(v12, v17, ((unsigned __int8)~*(_BYTE *)(v7 + 32) >> 3) & 1, v11);
    ThreadUnlock1(v14, v17);
LABEL_18:
    v7 += 168LL;
    v76 = --v8;
  }
  while ( v8 >= 0 );
  if ( v79 )
    xxxWindowEvent(0x8004u, (__int64 *)a1, -4, 0, gdwDeferWinEvent != 0 ? 2 : 0);
LABEL_21:
  ThreadUnlock1(v6, v5);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v88);
  return v3;
}
