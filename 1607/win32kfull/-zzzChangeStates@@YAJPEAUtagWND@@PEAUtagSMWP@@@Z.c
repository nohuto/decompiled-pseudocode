/*
 * XREFs of ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006CB00
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00777E4 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0035534 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     UpdateSprite @ 0x1C00527B0 (UpdateSprite.c)
 *     zzzCalcStartCursorHide @ 0x1C005C530 (zzzCalcStartCursorHide.c)
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     xxxInternalInvalidate @ 0x1C005EB10 (xxxInternalInvalidate.c)
 *     ComposeWindowIfNeeded @ 0x1C0061A28 (ComposeWindowIfNeeded.c)
 *     SelectWindowRgn @ 0x1C0061AA0 (SelectWindowRgn.c)
 *     UnlinkWindow @ 0x1C0063380 (UnlinkWindow.c)
 *     GetNewMonitor @ 0x1C0070AA8 (GetNewMonitor.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C007219C (UpdateMonitorForWindowAndChildren.c)
 *     GreClientRgnUpdated @ 0x1C0075BE8 (GreClientRgnUpdated.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C007A248 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C007A280 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     LinkWindow @ 0x1C007B12C (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     DecomposeWindowIfNeeded @ 0x1C0096460 (DecomposeWindowIfNeeded.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     PostShellHookMessagesEx @ 0x1C00992D4 (PostShellHookMessagesEx.c)
 *     SetVisible @ 0x1C00A0D80 (SetVisible.c)
 *     IsTrayWindow @ 0x1C00A1E80 (IsTrayWindow.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C00A6954 (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     PWInsertAfter @ 0x1C00A6AA8 (PWInsertAfter.c)
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C00D69F8 (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00D7CB8 (DeleteOrSetRedirectionBitmap.c)
 *     RecreateRedirectionBitmap @ 0x1C00D7E4C (RecreateRedirectionBitmap.c)
 *     SetOldRedirectionBitmap @ 0x1C00D8A64 (SetOldRedirectionBitmap.c)
 *     OffsetChildren @ 0x1C010F838 (OffsetChildren.c)
 *     CreateSpb @ 0x1C012210C (CreateSpb.c)
 *     IsSmallerThanScreen @ 0x1C014BD94 (IsSmallerThanScreen.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     InvalidateGDIWindows @ 0x1C01DEB20 (InvalidateGDIWindows.c)
 */

__int64 __fastcall zzzChangeStates(struct tagWND *a1, struct tagSMWP *a2)
{
  unsigned int v3; // r12d
  struct tagSMWP *v4; // r14
  __int64 v5; // rdx
  __int64 *v6; // rsi
  __int64 v7; // rcx
  int v8; // eax
  int v9; // ebx
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
  int v22; // ecx
  int v23; // edx
  int v24; // r10d
  int v25; // r9d
  int v26; // r8d
  unsigned int v27; // r12d
  int v28; // ecx
  unsigned int v29; // r15d
  int v30; // edx
  __int128 v31; // xmm0
  int v32; // eax
  __int64 v33; // r8
  int v34; // r11d
  __int64 v35; // rcx
  __int64 v36; // rcx
  char v37; // al
  int v38; // r14d
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  int v41; // ebx
  int v42; // eax
  int v43; // r14d
  unsigned __int64 v44; // rax
  __int64 v45; // rcx
  int v46; // eax
  int v47; // edx
  int v48; // ebx
  int v49; // eax
  __int64 i; // rbx
  int v51; // eax
  int v52; // ecx
  char v53; // al
  __int64 v54; // rax
  int v55; // ecx
  int v56; // r15d
  int v57; // ecx
  int v58; // ebx
  __int64 *v59; // rcx
  int v60; // eax
  __int64 v61; // rbx
  int v62; // edx
  int v63; // r8d
  __int64 v64; // r9
  __int64 v65; // rdx
  unsigned int updated; // [rsp+60h] [rbp-A0h]
  int v67; // [rsp+64h] [rbp-9Ch]
  int v68; // [rsp+68h] [rbp-98h]
  int v69; // [rsp+6Ch] [rbp-94h]
  int v70; // [rsp+70h] [rbp-90h]
  int v72; // [rsp+80h] [rbp-80h]
  __int64 v73; // [rsp+88h] [rbp-78h] BYREF
  __int64 v74; // [rsp+90h] [rbp-70h] BYREF
  int v75[4]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v76[8]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v77[8]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v78[3]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v79[3]; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD v80[4]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v81[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v82; // [rsp+108h] [rbp+8h] BYREF
  struct tagRECT v83; // [rsp+118h] [rbp+18h] BYREF
  __int128 v84; // [rsp+128h] [rbp+28h] BYREF

  updated = 0;
  v70 = 0;
  v3 = 0;
  v4 = a2;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v77);
  v78[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v78;
  ++*((_DWORD *)a1 + 2);
  v6 = (__int64 *)*((_QWORD *)v4 + 5);
  v7 = (unsigned int)(*((_DWORD *)v4 + 7) - 1);
  v67 = v7;
  v78[1] = a1;
  if ( (int)v7 < 0 )
    goto LABEL_23;
  v8 = v7;
  v5 = 1LL;
  do
  {
    v7 = *v6;
    v9 = 0;
    v69 = 0;
    v72 = 0;
    v68 = 0;
    *(_QWORD *)&v83.left = 0LL;
    if ( !v7 )
      goto LABEL_20;
    v10 = HMValidateHandleNoSecure(v7, 1LL);
    if ( !v10 || !(unsigned int)IsStillWindowC((HWND)v6[1]) )
    {
      *((_DWORD *)v6 + 8) = 6159;
      *v6 = 0LL;
    }
    v7 = v6[4] & 0x18E7;
    if ( (_DWORD)v7 != 6151 )
    {
      if ( (_DWORD)v7 == 6147 && (*(_BYTE *)(v10 + 43) & 4) == 0 && (unsigned int)ValidateZorder((struct tagCVR *)v6) )
      {
        *((_DWORD *)v6 + 8) |= 0xCu;
        v7 = v6[12];
        if ( v7 )
        {
          GreDeleteObject(v7);
          v6[12] = 0LL;
        }
        goto LABEL_19;
      }
      if ( (v6[4] & 0x1803) == 0x1803 )
      {
LABEL_9:
        if ( (v6[4] & 4) == 0 )
        {
          v44 = v6[1];
          if ( v44 >= 2 && (v44 == 0xFFFF || v44 >= 0xFFFFFFFFFFFFFFFDuLL)
            || !(unsigned int)ValidateWindowPos((struct tagCVR *)v6, a1) )
          {
            *((_DWORD *)v6 + 8) |= 4u;
            SetOrClrWF(0LL, v10, 772LL, 1LL);
          }
          else
          {
            UnlinkWindow(v10, (__int64)a1);
            PWInsertAfter(v6[1]);
            LinkWindow((struct tagWND *)v10);
            ++v70;
            if ( (*(_BYTE *)(v10 + 43) & 4) != 0 )
            {
              SetOrClrWF(0LL, v10, 772LL, 1LL);
              *(_BYTE *)(v10 + 48) ^= 8u;
            }
          }
        }
        if ( (*((_DWORD *)v6 + 39) & 0x20) != 0 )
        {
          v16 = ValidateHmonitor(v6[16]);
          v17 = *((_DWORD *)v6 + 39);
          v18 = v16;
          v83 = 0LL;
          if ( (v17 & 0x80u) != 0 )
            v83 = *(struct tagRECT *)(v6 + 17);
          v19 = IsRectEmptyInl(&v83);
          v20 = &v83;
          if ( v19 )
            v20 = 0LL;
          NewMonitor = GetNewMonitor((struct tagWND *)v10, v20, (struct tagRECT *)(v6 + 17));
          if ( NewMonitor && v18 != NewMonitor )
            *((_DWORD *)v6 + 39) ^= (*((_DWORD *)v6 + 39) ^ ((unsigned int)UpdateMonitorForWindowAndChildren(
                                                                             v10,
                                                                             NewMonitor,
                                                                             v6 + 20,
                                                                             0LL) << 6)) & 0x40;
        }
        v11 = gptiCurrent;
        v79[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v79;
        v79[1] = v10;
        ++*(_DWORD *)(v10 + 8);
        v12 = *((_DWORD *)v6 + 8);
        if ( (v12 & 0x40) == 0 )
        {
          if ( (v12 & 0x80u) != 0 )
          {
            v51 = IsTrayWindow(v10);
            if ( (v6[4] & 0x1F) != 0x1F && v51 && (*(_WORD *)(v10 + 66) & 0x3FFF) != 0x2AA )
            {
              *((_DWORD *)v4 + 6) |= 1u;
              *((_DWORD *)v6 + 8) |= 0x20000000u;
            }
            if ( (unsigned int)SetVisible(v10, 10LL) )
              DecomposeWindowIfNeeded((struct tagWND *)v10);
            v52 = 1;
            if ( gdwDeferWinEvent )
              v52 = 3;
            xxxWindowEvent(32771, v10, 0, 0, v52);
          }
LABEL_13:
          if ( (*(_BYTE *)(v10 + 55) & 0x10) != 0 )
          {
            v13 = *((_DWORD *)v6 + 8);
            if ( (v13 & 0x8000) != 0 || (LOBYTE(v11) = ((v13 & 8) != 0) & ~*(_BYTE *)(v10 + 45), (_BYTE)v11) )
              SetOrClrWF(1LL, v10, 264LL, 1LL);
          }
          v14 = v6[14];
          if ( v14 )
            SelectWindowRgn(v10, v14, ((unsigned __int8)~*((_BYTE *)v6 + 32) >> 3) & 1);
          ThreadUnlock1(v11, v14);
          goto LABEL_19;
        }
        v45 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 376LL);
        if ( (*(_DWORD *)(v45 + 12) & 0x40) != 0 )
          zzzCalcStartCursorHide(v45, 5000);
        v46 = SetVisible(v10, 9LL);
        v47 = 1;
        v48 = v46;
        if ( gdwDeferWinEvent )
          v47 = 3;
        xxxWindowEvent(32770, v10, 0, 0, v47);
        if ( v48 )
        {
          *((_DWORD *)v6 + 39) |= 2u;
          if ( (*(_BYTE *)(v10 + 50) & 8) == 0 )
          {
            v3 = ComposeWindowIfNeeded((struct tagWND *)v10);
            updated = v3;
          }
        }
        v49 = IsTrayWindow(v10);
        v11 = *(_WORD *)(v10 + 66) & 0x3FFF;
        if ( (_DWORD)v11 == 682 )
        {
          if ( (*(_BYTE *)(v10 + 40) & 0x40) != 0 )
          {
            *((_DWORD *)v4 + 6) |= 1u;
            *((_DWORD *)v6 + 8) |= 0x40000000u;
          }
        }
        else
        {
          if ( (*(_BYTE *)(v10 + 40) & 0x40) != 0 )
          {
            *((_DWORD *)v4 + 6) |= 1u;
            *((_DWORD *)v6 + 8) |= 0x40000000u;
          }
          if ( !v49 && !*(_QWORD *)(v10 + 104) )
          {
LABEL_92:
            if ( (v6[4] & 0x40000000) != 0 )
              *((_DWORD *)v6 + 39) |= 0x10u;
LABEL_94:
            if ( (*(_BYTE *)(v10 + 44) & 0x40) != 0 )
            {
              *((_DWORD *)v4 + 6) |= 1u;
              *((_DWORD *)v6 + 8) |= 0x80000000;
            }
LABEL_96:
            if ( (v6[4] & 0x4008) != 8 && (*(_BYTE *)(*(_QWORD *)(v10 + 152) + 85LL) & 8) != 0 )
            {
              v11 = grpdeskRitInput;
              if ( *(_QWORD *)(v10 + 24) == grpdeskRitInput )
              {
                for ( i = *(_QWORD *)(*(_QWORD *)(v10 + 88) + 96LL); i; i = *(_QWORD *)(i + 72) )
                {
                  if ( i == v10 )
                  {
                    CreateSpb((struct tagWND *)v10);
                    goto LABEL_13;
                  }
                  if ( (*(_BYTE *)(i + 55) & 0x10) != 0 )
                  {
                    v84 = *(_OWORD *)(i + 112);
                    TransformRectBetweenCoordinateSpaces(&v84, &v84, v10, i);
                    if ( (unsigned int)IntersectRect(v80, (int *)(v10 + 112), (int *)&v84) )
                      goto LABEL_13;
                  }
                }
              }
            }
            goto LABEL_13;
          }
          *((_DWORD *)v4 + 6) |= 1u;
          *((_DWORD *)v6 + 8) |= 0x10000000u;
          if ( v49 )
            goto LABEL_96;
          *((_DWORD *)v6 + 39) |= 8u;
        }
        if ( v49 )
          goto LABEL_96;
        if ( *(_QWORD *)(v10 + 104) )
          goto LABEL_94;
        goto LABEL_92;
      }
      if ( ((*(_BYTE *)(v10 + 51) & 0x20) != 0 || (*(_BYTE *)(v10 + 50) & 8) != 0)
        && (*(_DWORD *)(v10 + 120) - *(_DWORD *)(v10 + 112) != *((_DWORD *)v6 + 6)
         || *(_DWORD *)(v10 + 124) - *(_DWORD *)(v10 + 116) != *((_DWORD *)v6 + 7)) )
      {
        v72 = *(_DWORD *)(v10 + 120) - *(_DWORD *)(v10 + 112);
        v9 = 1;
        v83.left = *(_DWORD *)(v10 + 124) - *(_DWORD *)(v10 + 116);
        v68 = 1;
      }
      v22 = *((_DWORD *)v6 + 4);
      if ( *(_DWORD *)(v10 + 112) != v22 || *(_DWORD *)(v10 + 116) != *((_DWORD *)v6 + 5) )
        v69 = 1;
      *(_DWORD *)(v10 + 112) = v22;
      *(_DWORD *)(v10 + 116) = *((_DWORD *)v6 + 5);
      if ( a1 != (struct tagWND *)GetDesktopWindow(v10) )
      {
        *(_DWORD *)(v10 + 112) += *((_DWORD *)a1 + 32);
        *(_DWORD *)(v10 + 116) += *((_DWORD *)a1 + 33);
      }
      v25 = *(_DWORD *)(v10 + 116);
      v26 = *(_DWORD *)(v10 + 112);
      v27 = v25 - v24;
      v28 = v26 + *((_DWORD *)v6 + 6);
      *(_DWORD *)(v10 + 120) = v28;
      v29 = v26 - v23;
      v30 = v25 + *((_DWORD *)v6 + 7);
      if ( v28 < v26 )
        v28 = v26;
      *(_DWORD *)(v10 + 120) = v28;
      if ( v30 < v25 )
        v30 = v25;
      *(_DWORD *)(v10 + 124) = v30;
      if ( v10 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 256LL) )
      {
        if ( a1 != (struct tagWND *)GetDesktopWindow(v10) )
        {
          v62 -= *((_DWORD *)a1 + 32);
          v63 -= *((_DWORD *)a1 + 33);
        }
        if ( v62 | v63 )
        {
          *(_DWORD *)(v64 + 272) += v62;
          *(_DWORD *)(v64 + 276) += v63;
        }
      }
      v31 = *(_OWORD *)(v10 + 128);
      *(_DWORD *)(v10 + 128) = *((_DWORD *)v6 + 10);
      v32 = *((_DWORD *)v6 + 11);
      *(_OWORD *)v81 = v31;
      *(_DWORD *)(v10 + 132) = v32;
      if ( a1 != (struct tagWND *)GetDesktopWindow(v10) )
      {
        *(_DWORD *)(v10 + 128) += *((_DWORD *)a1 + 32);
        *(_DWORD *)(v10 + 132) += *((_DWORD *)a1 + 33);
      }
      v35 = v81[0];
      *(_DWORD *)(v10 + 136) = *(_DWORD *)(v10 + 128) + *((_DWORD *)v6 + 12);
      *(_DWORD *)(v10 + 140) = *(_DWORD *)(v10 + 132) + *((_DWORD *)v6 + 13);
      v36 = v35 - *(_QWORD *)(v10 + 128);
      if ( !v36 )
        v36 = v81[1] - *(_QWORD *)(v10 + 136);
      v37 = *(_BYTE *)(v10 + 45);
      v38 = 0;
      if ( v36 )
        v38 = v34;
      v81[0] = 0LL;
      if ( (v37 & 8) != 0 )
      {
        if ( (unsigned int)IsSmallerThanScreen(v10, v81) || *(_QWORD *)(v10 + 200) != v81[0] )
          SelectWindowRgn(v10, 0LL, ((unsigned __int8)~*((_BYTE *)v6 + 32) >> 3) & 1);
        v34 = 1;
      }
      if ( v9 )
      {
        *((_DWORD *)v6 + 39) |= v34;
        if ( (*(_BYTE *)(v10 + 51) & 0x20) != 0 && (v53 = *(_BYTE *)(v10 + 50), (v53 & 0x20) == 0) )
        {
          v81[0] = 0LL;
          if ( (v53 & 8) != 0 )
          {
            v58 = v34;
            v59 = v81;
          }
          else
          {
            v58 = 0;
            v59 = 0LL;
          }
          v60 = RecreateRedirectionBitmap((struct tagWND *)v10, 0, (__int64)v59);
          updated = v60;
          if ( v58 && v60 >= 0 )
          {
            v61 = v81[0];
            if ( v81[0] )
            {
              if ( (unsigned int)SetOldRedirectionBitmap(v10, v81[0]) )
                v61 = 0LL;
            }
            else
            {
              UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v76);
              xxxInternalInvalidate((struct tagWND *)v10, (HRGN)1, 0x401u);
              UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v76);
            }
          }
          else
          {
            v61 = v81[0];
          }
          if ( v61 )
            DeleteOrSetRedirectionBitmap(v10, v61, 1LL);
        }
        else if ( (unsigned int)IsWindowDesktopComposed(v10) )
        {
          LODWORD(v73) = *(_DWORD *)(v10 + 120) - *(_DWORD *)(v10 + 112);
          HIDWORD(v73) = *(_DWORD *)(v10 + 124) - *(_DWORD *)(v10 + 116);
          updated = UpdateSprite(
                      (HDEV)*gpDispInfo,
                      v10,
                      v33,
                      0LL,
                      0LL,
                      (struct tagSIZE *)&v73,
                      0LL,
                      0LL,
                      0,
                      0LL,
                      0,
                      0LL);
        }
      }
      if ( v29 || v27 )
      {
        v39 = *(_QWORD *)(v10 + 200);
        if ( v39 > 1 && (*(_BYTE *)(v10 + 45) & 8) == 0 )
          GreOffsetRgn(v39, v29, v27);
      }
      if ( v6[9] )
      {
        v40 = *(_QWORD *)(v10 + 160);
        if ( v40 > 1 )
          GreOffsetRgn(v40, *((unsigned int *)v6 + 18), *((unsigned int *)v6 + 19));
        OffsetChildren(v10, *((_DWORD *)v6 + 18), *((_DWORD *)v6 + 19), 0, 0);
      }
      if ( v69 || v38 || v29 || v27 )
      {
        v41 = 0;
        v74 = *(_QWORD *)(v10 + 112);
        v82 = 0LL;
        if ( v69 )
        {
          v42 = *(_DWORD *)(v10 + 288);
          if ( (v42 & 0x8000) != 0 )
          {
            v65 = *(_QWORD *)v10;
            *(_DWORD *)(v10 + 288) = v42 & 0xFFFF7FFF;
            PostShellHookMessagesEx(0x36uLL, v65, 0LL);
          }
          v43 = v68;
          if ( (*(_BYTE *)(v10 + 50) & 8) != 0 )
          {
            if ( v68 )
            {
              v55 = *(_DWORD *)(v10 + 120) - *(_DWORD *)(v10 + 112);
              v56 = -v29;
              v75[0] = 0;
              v75[1] = 0;
              v75[2] = v55;
              v57 = *(_DWORD *)(v10 + 124) - *(_DWORD *)(v10 + 116);
              DWORD2(v82) = v56 + v72;
              v75[3] = v57;
              LODWORD(v82) = v56;
              DWORD1(v82) = -v27;
              HIDWORD(v82) = v83.left - v27;
              IntersectRect(&v82, (int *)&v82, v75);
            }
            if ( gcountPWO )
            {
              InvalidateGDIWindows(v10);
              v41 = 1;
              GreClientRgnUpdated(1LL);
            }
            else
            {
              v41 = 1;
            }
            if ( !v68 || (unsigned int)IsWindowDesktopComposed(v10) )
              v41 = 0;
          }
        }
        else
        {
          v43 = v68;
        }
        if ( (*(_BYTE *)(v10 + 50) & 8) != 0 )
          updated = UpdateSprite(
                      (HDEV)*gpDispInfo,
                      v10,
                      v33,
                      0LL,
                      (struct tagPOINT *)&v74,
                      0LL,
                      0LL,
                      0LL,
                      0,
                      0LL,
                      0,
                      (struct tagRECT *)((unsigned __int64)&v82 & -(__int64)(v41 != 0)));
        if ( v69 )
          goto LABEL_65;
      }
      else
      {
        v43 = v68;
      }
      if ( !v43 )
      {
LABEL_66:
        v3 = updated;
        v4 = a2;
        goto LABEL_9;
      }
LABEL_65:
      if ( (*(_BYTE *)(v10 + 51) & 0x20) != 0 && (*(_BYTE *)(v10 + 50) & 0x20) == 0 )
      {
        v54 = *(_QWORD *)(gptiCurrent + 592LL);
        if ( (!v54 || (*(_DWORD *)(v54 + 180) & 0x100000) == 0)
          && !(unsigned int)WindowRedirectionBitmapMatchesMonitorAdapter(v10) )
        {
          *(_DWORD *)(v10 + 288) &= ~0x80000u;
          RecreateRedirectionBitmap((struct tagWND *)v10, 0, 0LL);
        }
      }
      goto LABEL_66;
    }
    *((_DWORD *)v6 + 8) |= 8u;
LABEL_19:
    v8 = v67;
    v5 = 1LL;
LABEL_20:
    v6 += 21;
    v67 = --v8;
  }
  while ( v8 >= 0 );
  if ( v70 )
    xxxWindowEvent(32772, (_DWORD)a1, -4, 0, gdwDeferWinEvent != 0 ? 2 : 0);
LABEL_23:
  ThreadUnlock1(v7, v5);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v77);
  return v3;
}
