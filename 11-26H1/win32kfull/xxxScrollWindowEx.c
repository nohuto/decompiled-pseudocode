/*
 * XREFs of xxxScrollWindowEx @ 0x14003EEB4
 * Callers:
 *     NtUserScrollWindowEx @ 0x14003E4E0 (NtUserScrollWindowEx.c)
 *     xxxMNSetTop @ 0x1402DA3DC (xxxMNSetTop.c)
 *     xxxMNUpdateShownMenu @ 0x1402F3090 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140013510 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     OffsetChildren @ 0x1400186DC (OffsetChildren.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14001A878 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     MirrorRegion @ 0x14002C1A8 (MirrorRegion.c)
 *     xxxInternalInvalidate @ 0x14002CCF0 (xxxInternalInvalidate.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     GreDPtoLP @ 0x14003E6C0 (GreDPtoLP.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x14003F6C0 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     GetDCOrgOnScreen @ 0x140040AF8 (GetDCOrgOnScreen.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x140046914 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x14008A600 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GreLPtoDP @ 0x140127948 (GreLPtoDP.c)
 *     IsVisible @ 0x140128400 (IsVisible.c)
 *     zzzInternalHideCaret @ 0x14012B0B4 (zzzInternalHideCaret.c)
 *     GetRect @ 0x14012B140 (GetRect.c)
 *     IntersectRect @ 0x14012B290 (IntersectRect.c)
 *     zzzInternalShowCaret @ 0x14012BC20 (zzzInternalShowCaret.c)
 *     _IsDescendant @ 0x14012EA64 (_IsDescendant.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxScrollWindowEx(
        struct tagWND *a1,
        int a2,
        int a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        __int64 a6,
        struct tagRECT *a7,
        __int16 a8)
{
  int v9; // esi
  struct tagWND *v10; // rdi
  __int64 v11; // r15
  int v12; // r12d
  struct tagTHREADINFO *v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // r14d
  __int64 left; // rcx
  __int16 v17; // si
  int v18; // ebx
  __int64 UserSessionState; // rax
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v22; // r8
  HDC DCEx; // rax
  HDC v24; // r12
  struct tagRECT *v25; // r8
  int v26; // edx
  int v27; // r12d
  int v28; // r9d
  int v29; // r13d
  int v30; // ebx
  bool v31; // zf
  HDC v32; // rbx
  int v33; // eax
  struct tagRECT *v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  HRGN v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  int v51; // edx
  LONG v52; // eax
  LONG v53; // edx
  struct tagRECT *v54; // rax
  struct tagRECT *v55; // r15
  struct tagTHREADINFO *v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rsi
  __int64 v59; // rcx
  int v60; // r8d
  int v61; // eax
  struct tagRECT *v62; // r8
  int v63; // edx
  int v64; // ecx
  __int64 v65; // rax
  int v66; // r8d
  __int64 DesktopWindow; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  int v70; // edx
  int v71; // r8d
  int v73; // [rsp+50h] [rbp-B0h]
  struct tagRECT *v74[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v75; // [rsp+70h] [rbp-90h]
  int v76; // [rsp+74h] [rbp-8Ch]
  ULONG_PTR v77; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v78; // [rsp+80h] [rbp-80h]
  int v79; // [rsp+88h] [rbp-78h]
  struct tagRECT *v80; // [rsp+90h] [rbp-70h]
  HDC v81; // [rsp+98h] [rbp-68h]
  HRGN v82; // [rsp+A0h] [rbp-60h]
  __int64 v83; // [rsp+A8h] [rbp-58h] BYREF
  int v84; // [rsp+B0h] [rbp-50h]
  struct tagRECT *v85; // [rsp+B8h] [rbp-48h]
  struct tagRECT *v86; // [rsp+C0h] [rbp-40h]
  __int128 v87; // [rsp+C8h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+D8h] [rbp-28h] BYREF
  struct tagPOINT v89[2]; // [rsp+F0h] [rbp-10h] BYREF
  struct tagPOINT v90[2]; // [rsp+100h] [rbp+0h] BYREF

  v86 = a7;
  v9 = a2;
  v74[0] = a5;
  v10 = a1;
  v80 = a4;
  v75 = 0;
  v11 = 0LL;
  v83 = 0LL;
  v12 = 0;
  BugCheckParameter3[1] = 0LL;
  v76 = a2;
  v85 = a4;
  v82 = (HRGN)a6;
  *(_OWORD *)&v89[0].x = 0LL;
  BugCheckParameter3[0] = -1LL;
  *(_OWORD *)&v90[0].x = 0LL;
  v13 = PtiCurrent((__int64)a1);
  v81 = (HDC)v13;
  v15 = 1;
  if ( !v10 )
  {
    v12 = 1;
    v14 = *(_QWORD *)(*((_QWORD *)v13 + 61) + 8LL);
    v10 = *(struct tagWND **)(v14 + 24);
  }
  left = *((_QWORD *)v10 + 5);
  if ( (*(_BYTE *)(left + 26) & 0x40) != 0 )
  {
    v9 = -v9;
    v76 = v9;
    MirrorRegion((__int64)v10, a6, 1);
    if ( a4 )
    {
      left = (unsigned int)a4->left;
      v14 = (unsigned int)(*(_DWORD *)(*((_QWORD *)v10 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v10 + 5) + 104LL) - left);
      a4->left = *(_DWORD *)(*((_QWORD *)v10 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v10 + 5) + 104LL) - a4->right;
      a4->right = v14;
    }
    v62 = v74[0];
    if ( v74[0] )
    {
      left = (unsigned int)v74[0]->left;
      v14 = (unsigned int)(*(_DWORD *)(*((_QWORD *)v10 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v10 + 5) + 104LL) - left);
      v74[0]->left = *(_DWORD *)(*((_QWORD *)v10 + 5) + 112LL)
                   - *(_DWORD *)(*((_QWORD *)v10 + 5) + 104LL)
                   - v74[0]->right;
      v62->right = v14;
    }
  }
  if ( !(v9 | a3) )
    goto LABEL_7;
  if ( (unsigned int)IsVisible(v10) )
  {
    v17 = a8;
    v18 = 0;
    goto LABEL_15;
  }
  if ( (*(_BYTE *)(*((_QWORD *)v10 + 5) + 31LL) & 0x20) == 0 )
  {
    v17 = a8;
    if ( (a8 & 1) != 0 && !a4 )
    {
      v75 = 1;
      v17 = a8 & 0xFFFD;
    }
  }
  else
  {
LABEL_7:
    v17 = a8;
  }
  if ( a6 )
    SetEmptyRgn(a6);
  if ( v86 )
    *v86 = 0LL;
  v18 = v75;
  if ( v75 )
  {
LABEL_15:
    UserSessionState = W32GetUserSessionState(left, v14);
    ++*(_DWORD *)(UserSessionState + 70592);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v87);
    v79 = 0;
    if ( v12 )
      Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>(BugCheckParameter3, v10);
    if ( !v18 )
    {
      v11 = *((_QWORD *)v81 + 58) + 344LL;
      if ( *(_QWORD *)v11 )
      {
        if ( (unsigned int)IsDescendant(*(_QWORD *)v11, v10) )
        {
          v79 = 1;
          zzzInternalHideCaret();
        }
      }
    }
    v84 = v17 & 1;
    if ( v17 < 0 )
    {
      v21 = (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v10 + 17) + 8LL) + 8LL) & 0x60) != 0 ? 0x10000 : 65538;
      if ( (v17 & 1) != 0 && (*(_BYTE *)(*((_QWORD *)v10 + 5) + 31LL) & 2) != 0 )
        v21 = 589826;
    }
    else
    {
      v20 = 65538;
      if ( (v17 & 1) != 0 )
        v20 = 589826;
      v21 = v20;
    }
    GreLockVisRgn();
    v22 = v21;
    LODWORD(v22) = v21 | 0x40000000;
    DCEx = (HDC)_GetDCEx(v10, 0LL, v22);
    v81 = DCEx;
    v24 = DCEx;
    if ( (v17 & 2) != 0 )
    {
      GetDCOrgOnScreen(DCEx, &v83);
      if ( !v82 )
        v82 = *(HRGN *)(W32GetUserSessionState(v49, v48) + 43104);
    }
    if ( !a4 )
    {
      v85 = (struct tagRECT *)v90;
      GetRect(v10, v90, 17LL);
      if ( (v21 & 2) == 0 )
        GreDPtoLP(v24, v90);
    }
    v25 = v85;
    v26 = v76;
    v27 = v76;
    v28 = a3;
    v29 = a3;
    *(struct tagRECT *)&v89[0].x = *v85;
    v30 = v21 & 2;
    if ( !v30 )
    {
      GreLPtoDP(v81, v89);
      v77 = 0LL;
      v78 = __PAIR64__(a3, v76);
      GreLPtoDP(v81, (struct tagPOINT *)&v77);
      v27 = v78 - v77;
      v29 = HIDWORD(v78) - HIDWORD(v77);
      v26 = v76;
      v25 = v85;
      v28 = a3;
    }
    if ( v75 )
    {
      v32 = v81;
      v73 = 1;
    }
    else
    {
      v31 = v30 == 0;
      v32 = v81;
      v33 = InternalScrollDC(v10, v81, v26, v28, v25, v74[0], *(HRGN *)(*((_QWORD *)v10 + 5) + 136LL), v82, v86, v31);
      v34 = v86;
      v73 = v33;
      if ( v86 )
      {
        v50 = *((_QWORD *)v10 + 5);
        if ( (*(_BYTE *)(v50 + 26) & 0x40) != 0 )
        {
          v51 = *(_DWORD *)(v50 + 112) - *(_DWORD *)(v50 + 104);
          v52 = v51 - v86->right;
          v53 = v51 - v86->left;
          v86->left = v52;
          v34->right = v53;
        }
      }
    }
    _ReleaseDC(v32);
    if ( !v84 )
      goto LABEL_32;
    *(_OWORD *)v74 = 0LL;
    if ( !v75 && v10 == *(struct tagWND **)v11 )
    {
      if ( v80 )
      {
        v63 = *(_DWORD *)(v11 + 24);
        LODWORD(v74[0]) = *(_DWORD *)(v11 + 20);
        LODWORD(v74[1]) = *(_DWORD *)(v11 + 32) + LODWORD(v74[0]);
        v64 = *(_DWORD *)(v11 + 28);
        HIDWORD(v74[0]) = v63;
        HIDWORD(v74[1]) = v63 + v64;
        if ( !(unsigned int)IntersectRect(v74, v74, v89) )
        {
LABEL_77:
          if ( v10 == (struct tagWND *)GetDesktopWindow(v10) )
          {
            *(_OWORD *)v74 = *(_OWORD *)&v89[0].x;
          }
          else
          {
            v65 = *((_QWORD *)v10 + 5);
            v35 = *(unsigned int *)(v65 + 104);
            v66 = *(_DWORD *)(v65 + 108);
            LODWORD(v74[0]) = v35 + v89[0].x;
            LODWORD(v74[1]) = v35 + v89[1].x;
            HIDWORD(v74[0]) = v66 + v89[0].y;
            v36 = (unsigned int)(v66 + v89[1].y);
            HIDWORD(v74[1]) = v66 + v89[1].y;
          }
          v54 = v80;
LABEL_53:
          if ( *((_QWORD *)v10 + 14) )
          {
            OffsetChildren(v10, v27, v29, (unsigned __int64)v74 & -(__int64)(v54 != 0LL));
            zzzLockDisplayAreaAndInvalidateDCCache(
              (ULONG_PTR)v10,
              (*(_BYTE *)(*((_QWORD *)v10 + 5) + 31LL) & 2) != 0 ? 4 : 2,
              0LL);
          }
LABEL_32:
          if ( (v17 & 2) != 0 )
          {
            v37 = W32GetUserSessionState(v36, v35);
            v40 = v82;
            if ( v82 != *(HRGN *)(v37 + 43104) )
            {
              v41 = W32GetUserSessionState(v39, v38);
              GreCombineRgn(*(_QWORD *)(v41 + 43104), v40, 0LL, 5LL);
            }
            v42 = W32GetUserSessionState(v39, v38);
            GreOffsetRgn(*(_QWORD *)(v42 + 43104), (unsigned int)v83, HIDWORD(v83));
            v45 = W32GetUserSessionState(v44, v43);
            xxxInternalInvalidate(v10, *(HRGN *)(v45 + 43104), v17 & 4 | 0x81);
          }
          GreUnlockVisRgn();
          if ( (_BYTE)v87 )
            --*(_DWORD *)(*((_QWORD *)&v87 + 1) + 28LL);
          zzzEndDeferWinEventNotify();
          if ( (v17 & 1) != 0 )
          {
            v55 = v80;
            v87 = 0LL;
            *(_OWORD *)v74 = 0LL;
            if ( v80 )
            {
              DesktopWindow = GetDesktopWindow(v10);
              if ( v68 == DesktopWindow )
              {
                LODWORD(v74[0]) = v27 + v89[0].x;
                LODWORD(v74[1]) = v27 + v89[1].x;
                HIDWORD(v74[0]) = v29 + v89[0].y;
                v46 = (unsigned int)(v29 + v89[1].y);
              }
              else
              {
                v69 = *(_QWORD *)(v68 + 40);
                v70 = v27 + *(_DWORD *)(v69 + 104);
                v71 = v29 + *(_DWORD *)(v69 + 108);
                LODWORD(v74[0]) = v70 + v89[0].x;
                LODWORD(v74[1]) = v70 + v89[1].x;
                HIDWORD(v74[0]) = v71 + v89[0].y;
                v46 = (unsigned int)(v71 + v89[1].y);
              }
              HIDWORD(v74[1]) = v46;
            }
            v56 = PtiCurrent(v46);
            v77 = *((_QWORD *)v56 + 56);
            *((_QWORD *)v56 + 56) = &v77;
            v57 = *((_QWORD *)v10 + 14);
            v78 = 0LL;
            while ( v57 )
            {
              v58 = v57 + 40;
              if ( !v55 || (unsigned int)IntersectRect(&v87, v74, *(_QWORD *)v58 + 88LL) )
              {
                Win32HM_ExchangeThreadLock<1>(v57, &v77);
                if ( v10 == (struct tagWND *)GetDesktopWindow(v10) )
                {
                  v61 = *(unsigned __int16 *)(*(_QWORD *)v58 + 104LL);
                  v60 = *(unsigned __int16 *)(*(_QWORD *)v58 + 108LL) << 16;
                }
                else
                {
                  v59 = *((_QWORD *)v10 + 5);
                  v60 = (*(_DWORD *)(*(_QWORD *)v58 + 108LL) << 16) - (*(_DWORD *)(v59 + 108) << 16);
                  v61 = (unsigned __int16)(*(_DWORD *)(*(_QWORD *)v58 + 104LL) - *(_DWORD *)(v59 + 104));
                }
                xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)v57, 3LL, 0LL, v61 | v60, 0, 0, 0LL, 1u, 0);
              }
              v57 = *(_QWORD *)(v57 + 88);
            }
            Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)&v77);
          }
          if ( v79 )
            zzzInternalShowCaret();
          v15 = v73;
          goto LABEL_42;
        }
      }
      *(_DWORD *)(v11 + 20) += v27;
      *(_DWORD *)(v11 + 24) += v29;
    }
    v54 = v80;
    if ( !v80 )
      goto LABEL_53;
    goto LABEL_77;
  }
LABEL_42:
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3);
  return v15;
}
