/*
 * XREFs of ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x140018BB0
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14001996C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     SetRedrawProp @ 0x14000FC8C (SetRedrawProp.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x140010D38 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140011324 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     GreClientRgnUpdated @ 0x140013A14 (GreClientRgnUpdated.c)
 *     UpdateSprite @ 0x140015F78 (UpdateSprite.c)
 *     SelectWindowRgn @ 0x140018490 (SelectWindowRgn.c)
 *     OffsetChildren @ 0x1400186DC (OffsetChildren.c)
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x1400189D4 (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     SetOldRedirectionBitmap @ 0x140018B50 (SetOldRedirectionBitmap.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x14001AC48 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x14002BD18 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x14002C4D4 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     xxxInternalInvalidate @ 0x14002CCF0 (xxxInternalInvalidate.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14002EDBC (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     RecreateRedirectionBitmap @ 0x140041830 (RecreateRedirectionBitmap.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x140047DFC (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     PWInsertAfter @ 0x140048268 (PWInsertAfter.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x14004A948 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     UpdateMonitorForWindowAndChildren @ 0x14004AF3C (UpdateMonitorForWindowAndChildren.c)
 *     GetNewMonitor @ 0x14004B044 (GetNewMonitor.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x14011F33C (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IntersectRect @ 0x14012B290 (IntersectRect.c)
 *     ?ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z @ 0x14012CD74 (-ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z.c)
 *     LinkWindow @ 0x14012DC64 (LinkWindow.c)
 *     UnlinkWindow @ 0x14012E600 (UnlinkWindow.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14018CD00 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1401EDA58 (DeleteOrSetRedirectionBitmap.c)
 *     IsPseudoHwnd @ 0x1401F8FCC (IsPseudoHwnd.c)
 *     ?DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z @ 0x1401FE798 (-DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z.c)
 *     RemoveWindowFullScreen @ 0x14024985C (RemoveWindowFullScreen.c)
 *     ?FixupMonitorRgn@@YAXPEAUtagWND@@_N@Z @ 0x14026F7C4 (-FixupMonitorRgn@@YAXPEAUtagWND@@_N@Z.c)
 *     zzzCalcStartCursorHide @ 0x14028AAB0 (zzzCalcStartCursorHide.c)
 *     InvalidateGDIWindows @ 0x140296394 (InvalidateGDIWindows.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall zzzChangeStates(struct tagWND *a1, struct tagSMWP *a2)
{
  struct tagWND *v2; // r15
  __int64 v3; // rbx
  int v4; // r13d
  struct tagSMWP *v5; // r14
  __int64 v6; // rdx
  __int64 *v7; // rdi
  int v8; // r12d
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rcx
  LONG top; // r13d
  __int64 DesktopWindow; // rax
  int v15; // r8d
  int v16; // r9d
  LONG v17; // ebx
  LONG v18; // r14d
  _DWORD *v19; // rdx
  int v20; // r15d
  int v21; // ecx
  unsigned int v22; // r15d
  int v23; // r12d
  unsigned int v24; // r12d
  __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // rax
  int v28; // ecx
  int v29; // edx
  int v30; // r8d
  __int64 v31; // r9
  __int64 v32; // rcx
  struct tagRECT v33; // xmm0
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // r10
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // ebx
  BOOL v41; // r14d
  __int64 v42; // rdx
  char v43; // bl
  char v44; // bl
  int v45; // eax
  __int64 v46; // rbx
  HRGN ExplicitClipRgn; // rax
  unsigned __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  int v51; // r15d
  int v52; // r12d
  int v53; // ecx
  _DWORD *v54; // rdx
  __int64 v55; // rax
  __int64 v56; // r8
  __int64 UserSessionState; // rax
  __int64 v58; // r8
  __int64 v59; // r8
  unsigned int v60; // ecx
  __int64 v61; // rcx
  int v62; // edx
  __int64 NewMonitor; // rax
  __int64 v64; // rbx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // r9
  __int16 v68; // cx
  __int16 v69; // dx
  int v70; // eax
  __int64 v71; // rcx
  char v72; // bl
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  int v76; // ecx
  char v77; // al
  __int64 v78; // rcx
  char v79; // dl
  char v80; // al
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rax
  int v84; // ecx
  __int64 v85; // rdx
  __int64 v86; // rax
  int updated; // [rsp+60h] [rbp-A0h]
  int v89; // [rsp+64h] [rbp-9Ch]
  int v90; // [rsp+68h] [rbp-98h]
  int v91; // [rsp+6Ch] [rbp-94h]
  int v92; // [rsp+70h] [rbp-90h]
  unsigned int v93; // [rsp+74h] [rbp-8Ch]
  LONG left; // [rsp+78h] [rbp-88h]
  struct tagSIZE v97; // [rsp+90h] [rbp-70h] BYREF
  struct tagPOINT v98; // [rsp+98h] [rbp-68h] BYREF
  __int64 v99; // [rsp+A0h] [rbp-60h] BYREF
  int v100; // [rsp+A8h] [rbp-58h]
  int v101; // [rsp+ACh] [rbp-54h]
  _BYTE v102[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v103; // [rsp+B8h] [rbp-48h]
  _BYTE v104[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v105; // [rsp+C8h] [rbp-38h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+D0h] [rbp-30h] BYREF
  ULONG_PTR v107[2]; // [rsp+E0h] [rbp-20h] BYREF
  struct tagRECT v108; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v109; // [rsp+100h] [rbp+0h] BYREF

  v2 = a1;
  updated = 0;
  v89 = 0;
  v3 = 0LL;
  v92 = 0;
  v4 = 0;
  v104[0] = 0;
  v105 = 0LL;
  v5 = a2;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v104);
  Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v107, (__int64)v2);
  v7 = (__int64 *)*((_QWORD *)v5 + 5);
  v8 = *((_DWORD *)v5 + 7) - 1;
  v90 = v8;
  if ( v8 < 0 )
    goto LABEL_160;
  do
  {
    v9 = *v7;
    v91 = 0;
    v93 = 0;
    *(_QWORD *)&v108.left = 0LL;
    if ( !v9 )
      goto LABEL_156;
    LOBYTE(v6) = 1;
    v10 = HMValidateHandleNoSecure(v9, v6);
    if ( !v10 || !(unsigned int)IsStillWindowC((HWND)v7[1]) )
    {
      *((_DWORD *)v7 + 8) = 6159;
      *v7 = 0LL;
    }
    v11 = *((_DWORD *)v7 + 8);
    v9 = v11 & 0x18E7;
    if ( (v11 & 0x80000) == 0 && (_DWORD)v9 == 6151 )
    {
      *((_DWORD *)v7 + 8) = v11 | 8;
      goto LABEL_156;
    }
    if ( (_DWORD)v9 == 6147
      && (*(_BYTE *)(*(_QWORD *)(v10 + 40) + 19LL) & 4) == 0
      && (unsigned int)ValidateZorder((struct tagCVR *)v7) )
    {
      *((_DWORD *)v7 + 8) |= 0xCu;
      v9 = v7[12];
      if ( v9 )
      {
        GreDeleteObject(v9);
        v7[12] = 0LL;
      }
      goto LABEL_156;
    }
    if ( (v7[4] & 0x1803) != 0x1803 )
    {
      v12 = *(_QWORD *)(v10 + 40);
      if ( ((*(_BYTE *)(v12 + 27) & 0x20) != 0 || (*(_BYTE *)(v12 + 26) & 8) != 0)
        && ((top = *(_DWORD *)(v12 + 100) - *(_DWORD *)(v12 + 92),
             left = *(_DWORD *)(v12 + 96) - *(_DWORD *)(v12 + 88),
             left != *((_DWORD *)v7 + 6))
         || top != *((_DWORD *)v7 + 7)) )
      {
        v91 = 1;
      }
      else
      {
        top = v108.top;
        left = v108.left;
      }
      if ( *(_DWORD *)(v12 + 88) != *((_DWORD *)v7 + 4) || *(_DWORD *)(v12 + 92) != *((_DWORD *)v7 + 5) )
        v93 = 1;
      v108 = *(struct tagRECT *)(*((_QWORD *)v2 + 5) + 104LL);
      if ( IsChildWindowDpiBoundary((const struct tagWND *)v10) )
      {
        if ( (*((_DWORD *)v7 + 39) & 0x100) == 0 )
        {
          v3 = v10 + 224;
          *(_DWORD *)(v10 + 224) = 0;
          *(_DWORD *)(v10 + 228) = 0;
        }
        LogicalToPhysicalInPlaceRectWithSubpixel(v2, &v108, v3);
        PhysicalToLogicalInPlaceRectWithSubpixel(v10, &v108, v3);
        v92 = 1;
      }
      *(_DWORD *)(*(_QWORD *)(v10 + 40) + 88LL) = *((_DWORD *)v7 + 4);
      *(_DWORD *)(*(_QWORD *)(v10 + 40) + 92LL) = *((_DWORD *)v7 + 5);
      DesktopWindow = GetDesktopWindow(v10);
      v17 = v108.top;
      v18 = v108.left;
      if ( v2 != (struct tagWND *)DesktopWindow )
      {
        *(_DWORD *)(*(_QWORD *)(v10 + 40) + 88LL) += v108.left;
        *(_DWORD *)(*(_QWORD *)(v10 + 40) + 92LL) += v17;
      }
      v19 = *(_DWORD **)(v10 + 40);
      v20 = v19[22];
      v21 = *((_DWORD *)v7 + 6) + v20;
      v22 = v20 - v15;
      v23 = v19[23];
      v19[24] = v21;
      v24 = v23 - v16;
      *(_DWORD *)(*(_QWORD *)(v10 + 40) + 100LL) = *((_DWORD *)v7 + 7) + *(_DWORD *)(*(_QWORD *)(v10 + 40) + 92LL);
      v25 = *(_QWORD *)(v10 + 40);
      v26 = *(_DWORD *)(v25 + 88);
      if ( *(_DWORD *)(v25 + 96) < v26 )
        *(_DWORD *)(v25 + 96) = v26;
      v27 = *(_QWORD *)(v10 + 40);
      v28 = *(_DWORD *)(v27 + 92);
      if ( *(_DWORD *)(v27 + 100) < v28 )
        *(_DWORD *)(v27 + 100) = v28;
      if ( v10 == *(_QWORD *)(*((_QWORD *)PtiCurrent() + 58) + 344LL) )
      {
        if ( a1 != (struct tagWND *)GetDesktopWindow(v10) )
        {
          v29 -= v18;
          v30 -= v17;
        }
        if ( v29 | v30 )
        {
          *(_DWORD *)(v31 + 364) += v29;
          *(_DWORD *)(v31 + 368) += v30;
        }
      }
      v32 = *(_QWORD *)(v10 + 40);
      v33 = *(struct tagRECT *)(v32 + 104);
      *(_DWORD *)(v32 + 104) = *((_DWORD *)v7 + 10);
      v34 = *(_QWORD *)(v10 + 40);
      v35 = *((_DWORD *)v7 + 11);
      v108 = v33;
      *(_DWORD *)(v34 + 108) = v35;
      v36 = GetDesktopWindow(v10);
      if ( v37 != v36 )
      {
        *(_DWORD *)(*(_QWORD *)(v10 + 40) + 104LL) += v18;
        *(_DWORD *)(*(_QWORD *)(v10 + 40) + 108LL) += v17;
      }
      *(_DWORD *)(*(_QWORD *)(v10 + 40) + 112LL) = *((_DWORD *)v7 + 12) + *(_DWORD *)(*(_QWORD *)(v10 + 40) + 104LL);
      *(_DWORD *)(*(_QWORD *)(v10 + 40) + 116LL) = *((_DWORD *)v7 + 13) + *(_DWORD *)(*(_QWORD *)(v10 + 40) + 108LL);
      v38 = *(_QWORD *)(v10 + 40);
      v39 = *(_QWORD *)&v108.left - *(_QWORD *)(v38 + 104);
      if ( *(_QWORD *)&v108.left == *(_QWORD *)(v38 + 104) )
        v39 = *(_QWORD *)&v108.right - *(_QWORD *)(v38 + 112);
      v40 = 0;
      v41 = v39 == 0;
      FixupMonitorRgn((struct tagWND *)v10, (v7[4] & 8) == 0);
      if ( !v91 )
        goto LABEL_58;
      *((_DWORD *)v7 + 39) |= 1u;
      if ( (*((_DWORD *)v7 + 39) & 0x1000) != 0 )
        tagWND::ComputeDominantState((tagWND *)v10);
      v42 = *(_QWORD *)(v10 + 40);
      if ( (*(_BYTE *)(v42 + 27) & 0x20) != 0 )
      {
        v43 = *(_BYTE *)(v42 + 26);
        if ( (v43 & 0x20) == 0 )
        {
          v44 = v43 & 8;
          *(_QWORD *)&v108.left = 0LL;
          v45 = RecreateRedirectionBitmap((struct tagWND *)v10, 0, (unsigned __int64)&v108 & -(__int64)(v44 != 0));
          updated = v45;
          if ( v44 && v45 >= 0 )
          {
            v46 = *(_QWORD *)&v108.left;
            if ( *(_QWORD *)&v108.left )
            {
              if ( (unsigned int)SetOldRedirectionBitmap(v10, *(__int64 *)&v108.left) )
                v46 = 0LL;
            }
            else
            {
              v102[0] = 0;
              v103 = 0LL;
              AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v102);
              xxxInternalInvalidate((struct tagWND *)v10, (HRGN)1, 0x401u);
              AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v102);
            }
          }
          else
          {
            v46 = *(_QWORD *)&v108.left;
          }
          if ( v46 )
            DeleteOrSetRedirectionBitmap(v10, v46, 1LL);
          v40 = 0;
LABEL_58:
          if ( v22 || v24 )
          {
            ExplicitClipRgn = tagWND::GetExplicitClipRgn((tagWND *)v10);
            if ( ExplicitClipRgn )
              GreOffsetRgn(ExplicitClipRgn, v22, v24);
          }
          if ( v7[9] || v92 )
          {
            v48 = *(_QWORD *)(*(_QWORD *)(v10 + 40) + 136LL);
            if ( v48 > 1 )
              GreOffsetRgn(v48, *((unsigned int *)v7 + 18), *((unsigned int *)v7 + 19));
            OffsetChildren((struct tagWND *)v10, *((_DWORD *)v7 + 18), *((_DWORD *)v7 + 19), 0LL);
          }
          v49 = v93;
          if ( v93 || !v41 || v22 || v24 )
          {
            v50 = *(_QWORD *)(v10 + 40);
            v98 = *(struct tagPOINT *)(v50 + 88);
            v109 = 0LL;
            if ( v93 )
            {
              if ( (*(_DWORD *)(v10 + 380) & 0x400) != 0 )
                RemoveWindowFullScreen(v10);
              v49 = *(_QWORD *)(v10 + 40);
              if ( (*(_BYTE *)(v49 + 26) & 8) != 0 )
              {
                if ( v91 )
                {
                  v51 = -v22;
                  v52 = -v24;
                  v100 = *(_DWORD *)(v49 + 96) - *(_DWORD *)(v49 + 88);
                  v53 = *(_DWORD *)(v49 + 100) - *(_DWORD *)(v49 + 92);
                  DWORD2(v109) = v51 + left;
                  v101 = v53;
                  HIDWORD(v109) = v52 + top;
                  v99 = 0LL;
                  *(_QWORD *)&v109 = __PAIR64__(v52, v51);
                  IntersectRect(&v109, &v109, &v99);
                }
                if ( *(_DWORD *)(W32GetUserSessionState(v50, v49) + 43272) )
                {
                  InvalidateGDIWindows(v10);
                  GreClientRgnUpdated((Gre::Base *)1);
                }
                if ( !v91 || (v40 = 1, (unsigned int)IsWindowDesktopComposed(v10)) )
                  v40 = 0;
              }
            }
            if ( (*(_BYTE *)(*(_QWORD *)(v10 + 40) + 26LL) & 8) != 0 )
            {
              UserSessionState = W32GetUserSessionState(v50, v49);
              updated = UpdateSprite(
                          *(HDEV *)(*(_QWORD *)(UserSessionState + 56968) + 40LL),
                          (struct tagWND *)v10,
                          v58,
                          0LL,
                          &v98,
                          0LL,
                          0LL,
                          0LL,
                          0,
                          0LL,
                          0,
                          (struct tagRECT *)((unsigned __int64)&v109 & -(__int64)(v40 != 0)));
            }
          }
          v5 = a2;
          v2 = a1;
          v8 = v90;
          v4 = v89;
          goto LABEL_88;
        }
        v40 = 0;
      }
      if ( (unsigned int)IsWindowDesktopComposed(v10) )
      {
        v54 = *(_DWORD **)(v10 + 40);
        v97.cx = v54[24] - v54[22];
        v97.cy = v54[25] - v54[23];
        v55 = W32GetUserSessionState((unsigned int)v97.cy, v54);
        updated = UpdateSprite(
                    *(HDEV *)(*(_QWORD *)(v55 + 56968) + 40LL),
                    (struct tagWND *)v10,
                    v56,
                    0LL,
                    0LL,
                    &v97,
                    0LL,
                    0LL,
                    0,
                    0LL,
                    0,
                    0LL);
      }
      goto LABEL_58;
    }
LABEL_88:
    if ( (v7[4] & 4) == 0 )
    {
      if ( (unsigned __int64)v7[1] >= 2 && (unsigned int)IsPseudoHwnd()
        || !(unsigned int)ValidateWindowPos((struct tagCVR *)v7, v2) )
      {
        *((_DWORD *)v7 + 8) |= 4u;
        v59 = 772LL;
        v61 = 0LL;
        goto LABEL_95;
      }
      UnlinkWindow((struct tagWND *)v10);
      PWInsertAfter(v7[1]);
      LinkWindow((struct tagWND *)v10);
      v89 = ++v4;
      if ( (*(_BYTE *)(*(_QWORD *)(v10 + 40) + 19LL) & 4) != 0 )
      {
        SetOrClrWF(0LL, v10, 772LL, 1LL);
        v59 = 2056LL;
        LOBYTE(v60) = ~*(_BYTE *)(*(_QWORD *)(v10 + 40) + 24LL);
        v61 = (v60 >> 3) & 1;
LABEL_95:
        SetOrClrWF(v61, v10, v59, 1LL);
      }
    }
    v62 = *((_DWORD *)v7 + 39);
    if ( (v62 & 0x20) != 0 && (*(_BYTE *)(*(_QWORD *)(v10 + 40) + 31LL) & 0x20) == 0 )
    {
      if ( (v62 & 0x200) != 0 )
      {
        NewMonitor = ValidateHmonitorNoRip(v7[16]);
      }
      else
      {
        v108 = 0LL;
        if ( (v62 & 0x80u) != 0 )
          v108 = *(struct tagRECT *)(v7 + 17);
        IsRectEmptyInl(&v108);
        NewMonitor = GetNewMonitor((struct tagWND *)v10);
      }
      v64 = NewMonitor;
      if ( NewMonitor )
      {
        v65 = (*((_DWORD *)v7 + 39) & 0x200) != 0 ? *(_QWORD *)(*(_QWORD *)(v10 + 40) + 256LL) : v7[16];
        if ( ValidateHmonitor(v65) != NewMonitor
          || (v67 = *(_QWORD *)(v10 + 40), (v68 = *(_WORD *)(v67 + 286)) != 0)
          && *(_WORD *)(*(_QWORD *)(v64 + 40) + 60LL) != v68
          && (*(_DWORD *)(v67 + 288) & 0xF) == 2
          && (*(_DWORD *)(*(_QWORD *)(v10 + 16) + 680LL) & 0x2000000) == 0
          && (unsigned int)IsTopLevelWindow(v10, v66)
          || (*(_BYTE *)(v67 + 288) & 0xF) == 3
          && (v69 = *(_WORD *)(*(_QWORD *)(v64 + 40) + 84LL), v69 != ((*(_DWORD *)(v67 + 288) >> 8) & 0x1FF))
          && v69 != *(_WORD *)(v10 + 304) )
        {
          *((_DWORD *)v7 + 39) ^= ((unsigned __int8)*((_DWORD *)v7 + 39) ^ (unsigned __int8)((unsigned __int8)UpdateMonitorForWindowAndChildren((struct tagWND *)v10) << 6)) & 0x40;
        }
      }
    }
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, v10);
    v70 = *((_DWORD *)v7 + 8);
    if ( (v70 & 0x40) == 0 )
    {
      if ( (v70 & 0x80u) == 0 )
      {
        v3 = 0LL;
      }
      else
      {
        v80 = IsTrayWindow((_QWORD *)v10, 1LL);
        v3 = 0LL;
        if ( (v7[4] & 0x1F) != 0x1F && v80 && (*(_WORD *)(*(_QWORD *)(v10 + 40) + 42LL) & 0x2FFF) != 0x2AA )
        {
          *((_DWORD *)v5 + 6) |= 1u;
          *((_DWORD *)v7 + 8) |= 0x20000000u;
        }
        SetRedrawProp(v10, 0);
        if ( SetVisible(v10, 0xAu) )
          DecomposeWindowIfNeeded((struct tagWND *)v10);
        v83 = W32GetUserSessionState(v82, v81);
        v84 = 3;
        if ( !*(_DWORD *)(v83 + 70592) )
          v84 = 1;
        xxxWindowEvent(0x8003u, v84);
      }
      goto LABEL_150;
    }
    v71 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 456LL);
    if ( (*(_DWORD *)(v71 + 12) & 0x40) != 0 )
      zzzCalcStartCursorHide(v71, 5000LL);
    SetRedrawProp(v10, 0);
    v72 = SetVisible(v10, 9u);
    v75 = W32GetUserSessionState(v74, v73);
    v76 = 3;
    if ( !*(_DWORD *)(v75 + 70592) )
      v76 = 1;
    xxxWindowEvent(0x8002u, v76);
    if ( v72 )
    {
      *((_DWORD *)v7 + 39) |= 2u;
      if ( (*(_BYTE *)(*(_QWORD *)(v10 + 40) + 26LL) & 8) == 0 )
        updated = ComposeWindowIfNeeded((struct tagWND *)v10, 0);
    }
    v77 = IsTrayWindow((_QWORD *)v10, 1LL);
    v78 = *(_QWORD *)(v10 + 40);
    v3 = 0LL;
    v79 = *(_BYTE *)(v78 + 16) & 0x40;
    if ( (*(_WORD *)(v78 + 42) & 0x2FFF) == 0x2AA )
    {
      if ( v79 )
      {
        *((_DWORD *)v5 + 6) |= 1u;
        *((_DWORD *)v7 + 8) |= 0x40000000u;
      }
      if ( v77 )
        goto LABEL_150;
LABEL_136:
      if ( !*(_QWORD *)(v10 + 120) )
        goto LABEL_137;
      goto LABEL_150;
    }
    if ( v79 )
    {
      *((_DWORD *)v5 + 6) |= 1u;
      *((_DWORD *)v7 + 8) |= 0x40000000u;
    }
    if ( !v77 && !*(_QWORD *)(v10 + 120) )
    {
LABEL_137:
      if ( (v7[4] & 0x40000000) != 0 )
        *((_DWORD *)v7 + 39) |= 0x10u;
      goto LABEL_150;
    }
    *((_DWORD *)v5 + 6) |= 1u;
    *((_DWORD *)v7 + 8) |= 0x10000000u;
    if ( !v77 )
    {
      *((_DWORD *)v7 + 39) |= 8u;
      goto LABEL_136;
    }
LABEL_150:
    if ( (*(_BYTE *)(*(_QWORD *)(v10 + 40) + 31LL) & 0x10) != 0 && (v7[4] & 0x8000) != 0 )
      SetOrClrWF(1LL, v10, 264LL, 1LL);
    v85 = v7[14];
    if ( v85 )
      SelectWindowRgn((struct tagWND *)v10, v85, (v7[4] & 8) == 0);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
LABEL_156:
    v7 += 21;
    v90 = --v8;
  }
  while ( v8 >= 0 );
  if ( v4 )
  {
    v86 = W32GetUserSessionState(v9, v6);
    xxxWindowEvent(0x8004u, *(_DWORD *)(v86 + 70592) != 0 ? 2 : 0);
  }
  LODWORD(v3) = updated;
LABEL_160:
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(v107);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v104);
  return (unsigned int)v3;
}
