/*
 * XREFs of zzzUpdateWindowsAfterModeChange @ 0x1401ED678
 * Callers:
 *     zzzResetSharedDesktops @ 0x1401ED3F0 (zzzResetSharedDesktops.c)
 * Callees:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140013510 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1400182D8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14001A878 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     xxxInternalInvalidate @ 0x14002CCF0 (xxxInternalInvalidate.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     RecreateRedirectionBitmap @ 0x140041830 (RecreateRedirectionBitmap.c)
 *     GetRedirectionBitmap @ 0x1400429A0 (GetRedirectionBitmap.c)
 *     GetMessageWindow @ 0x140046B50 (GetMessageWindow.c)
 *     GetNewMonitor @ 0x14004B044 (GetNewMonitor.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x14004B91C (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x14004BA00 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     UpdateWindowMonitor @ 0x14004BA40 (UpdateWindowMonitor.c)
 *     HMValidateCatHandleNoSecure @ 0x14004BD14 (HMValidateCatHandleNoSecure.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x14004BFCC (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     BuildHwndList @ 0x1400510F0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140051630 (FreeHwndList.c)
 *     IsDesktopWindow @ 0x14012E9F0 (IsDesktopWindow.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1401EDA58 (DeleteOrSetRedirectionBitmap.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x140293FB4 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     GreGetBitmapDpiScaleValue @ 0x14029582C (GreGetBitmapDpiScaleValue.c)
 */

void __fastcall zzzUpdateWindowsAfterModeChange(__int64 a1, __int64 a2)
{
  int v2; // esi
  int v3; // ebp
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // r15
  __int64 *i; // r9
  ULONG_PTR v21; // rdi
  __int64 v22; // rdx
  struct tagMONITOR *NewMonitor; // rbp
  struct tagBWL *v24; // rax
  struct tagBWL *v25; // rsi
  __int64 v26; // rdx
  struct tagWLDBI *v27; // rbx
  __int64 *j; // r14
  struct tagWND *v29; // rax
  BOOL v30; // ebp
  __int64 v31; // rdx
  HSURF RedirectionBitmap; // rax
  int v33; // ebx
  int v34; // eax
  int v35; // r9d
  HSURF v36; // r14
  int v37; // r12d
  int v38; // esi
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int16 v42; // bx
  _BYTE v43[8]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v44; // [rsp+38h] [rbp-80h]
  _BYTE v45[32]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v46; // [rsp+60h] [rbp-58h]
  int v47; // [rsp+C0h] [rbp+8h]
  int v48; // [rsp+C8h] [rbp+10h]
  __int64 *v49; // [rsp+D0h] [rbp+18h]
  HSURF v50; // [rsp+D8h] [rbp+20h] BYREF

  v48 = a2;
  v47 = a1;
  v2 = a2;
  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  ++*(_DWORD *)(UserSessionState + 70592);
  GreLockVisRgn(v6, v5, v7);
  v10 = W32GetUserSessionState(v9, v8);
  v11 = *(_QWORD *)(v10 + 19920);
  v14 = v11 + 32LL * *(unsigned int *)(W32GetUserSessionState(v13, v12) + 19848);
  v17 = W32GetUserSessionState(v16, v15);
  v19 = *(_QWORD *)(v10 + 19920);
  for ( i = *(__int64 **)(v17 + 19864); ; i += 5 )
  {
    v49 = i;
    if ( v19 > v14 )
      break;
    v50 = 0LL;
    if ( *(_BYTE *)(v19 + 24) == 1 )
    {
      v21 = *i;
      if ( IsTopLevelWindow(*i) || *(_QWORD *)(v21 + 104) == GetMessageWindow(v21) )
      {
        NewMonitor = (struct tagMONITOR *)ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v21 + 40) + 256LL));
        if ( !NewMonitor )
          NewMonitor = (struct tagMONITOR *)GetNewMonitor((struct tagWND *)v21, 0LL, 0LL);
        v24 = BuildHwndList((struct tagWND *)v21, 1LL, 0LL, 1);
        v25 = v24;
        if ( v24 )
        {
          v27 = BuildWindowListWithDpiBoundaryInfo((struct tagWND *)v21, *(struct tagWND **)(v21 + 104), v24, 0LL);
          for ( j = (__int64 *)((char *)v25 + 32); *j != 1; ++j )
          {
            v29 = (struct tagWND *)HMValidateCatHandleNoSecure(*j);
            UpdateWindowMonitor(v29, NewMonitor);
          }
          if ( v27 )
          {
            UpdateWindowPositionsForDpiBoundaryChange(v27, v26);
            FreeListFree(v27);
          }
          FreeHwndList(v25, v26);
        }
        v3 = v47;
        v2 = v48;
        i = v49;
      }
      v18 = *(_QWORD *)(v21 + 40);
      if ( (*(_BYTE *)(v18 + 27) & 0x20) != 0 && (*(_BYTE *)(v18 + 26) & 0x20) == 0 )
      {
        if ( !v3 && !(unsigned int)IsWindowDesktopComposed(v21) )
        {
LABEL_27:
          i = v49;
          goto LABEL_4;
        }
        *(_DWORD *)(v21 + 380) &= ~0x20000u;
        v30 = GetRedirectionBitmap(v21, v22) == 0;
        RedirectionBitmap = (HSURF)GetRedirectionBitmap(v21, v31);
        SURFREF::SURFREF((SURFREF *)v45, RedirectionBitmap);
        v33 = v46;
        if ( v46 )
          v33 = *(_DWORD *)(v46 + 116) & 0x2000;
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v45);
        if ( v33 )
          v2 = 1;
        v48 = v2;
        RecreateRedirectionBitmap((struct tagWND *)v21, 0, 0, v2, 0, &v50);
        LOBYTE(v34) = IsDesktopWindow(v21);
        v36 = v50;
        v37 = v34;
        v38 = v30;
        if ( v50 )
        {
          if ( v34
            || v35 >= 0
            || (v18 = *(_QWORD *)(v21 + 40), (*(_DWORD *)(v18 + 232) & 2) == 0)
            || !(unsigned int)RestoreOldRedirectionBitmap((struct tagWND *)v21, (HBITMAP)v50) )
          {
            v38 = v30;
            if ( PtiCurrent(v18)
              && *((_QWORD *)PtiCurrent(v40) + 61)
              && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v41) + 61) + 8LL) + 64LL) & 1) != 0
              && (*(_DWORD *)(*(_QWORD *)(v21 + 40) + 288LL) & 0x4000000F) == 0x40000000 )
            {
              v42 = 96 * GreGetBitmapDpiScaleValue(v36);
              v38 = v30 | (v42 != (__int16)GreGetScaledLogPixels(*(unsigned __int16 *)(*(_QWORD *)(v21 + 40) + 284LL)));
            }
            DeleteOrSetRedirectionBitmap(v21, v36, 1LL);
            goto LABEL_25;
          }
LABEL_26:
          if ( !v38 )
            goto LABEL_27;
        }
        else
        {
LABEL_25:
          if ( !v37 )
            goto LABEL_26;
        }
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v43);
        zzzLockDisplayAreaAndInvalidateDCCache(v21, 0, 0LL);
        if ( v38 )
          xxxInternalInvalidate((struct tagWND *)v21, (HRGN)1, 0x401u);
        i = v49;
        if ( v43[0] )
        {
          v39 = v44;
          v44 = 0LL;
          v43[0] = 0;
          --*(_DWORD *)(v39 + 28);
        }
      }
    }
LABEL_4:
    v2 = v48;
    v19 += 32LL;
    v3 = v47;
  }
  GreUnlockVisRgn(v18);
  zzzEndDeferWinEventNotify();
}
