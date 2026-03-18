/*
 * XREFs of xxxInheritWindowMonitor @ 0x14004C544
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSetWindowData @ 0x14004C92C (xxxSetWindowData.c)
 *     xxxAddShadow @ 0x140083B00 (xxxAddShadow.c)
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     xxxCreateDesktopEx @ 0x14018BC74 (xxxCreateDesktopEx.c)
 *     NtUserInheritWindowMonitor @ 0x14021DD50 (NtUserInheritWindowMonitor.c)
 *     xxxMNOpenHierarchy @ 0x14024D400 (xxxMNOpenHierarchy.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x14000A29C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     InternalRemoveProp @ 0x14000FD98 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x14000FF58 (InternalSetProp.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?HasMaximizedState@@YA_NPEBUtagWND@@@Z @ 0x140032694 (-HasMaximizedState@@YA_NPEBUtagWND@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetNewMonitor @ 0x14004B044 (GetNewMonitor.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x14004B91C (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x14004BA00 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     UpdateWindowMonitor @ 0x14004BA40 (UpdateWindowMonitor.c)
 *     HMValidateCatHandleNoSecure @ 0x14004BD14 (HMValidateCatHandleNoSecure.c)
 *     xxxNotifyMonitorChanged @ 0x14004BDFC (xxxNotifyMonitorChanged.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x14004BFCC (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     _GetTopLevelWindow @ 0x14004D980 (_GetTopLevelWindow.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x140051270 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     ScaleDPIRect @ 0x140176948 (ScaleDPIRect.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x14028E0D0 (xxxAppAdjustDpiCandidateRect.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxInheritWindowMonitor(struct tagWND *a1, struct tagWND *a2, int a3)
{
  __int64 v5; // rcx
  unsigned int v7; // r13d
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 TopLevelWindow; // r14
  unsigned __int16 v12; // r12
  struct tagWND *v13; // rdx
  __int64 NewMonitor; // rsi
  __int64 v15; // rcx
  struct tagTHREADINFO *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rcx
  struct tagBWL *v24; // rbx
  _QWORD *v25; // rax
  struct tagWND *v26; // rax
  __int64 v27; // rdx
  __int64 *i; // r15
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdx
  struct tagWLDBI *v35; // r14
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 UserSessionState; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  struct tagTHREADINFO *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rbx
  __int64 v45; // rdx
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-30h] BYREF
  __int64 v47; // [rsp+38h] [rbp-28h]
  struct tagRECT v48; // [rsp+40h] [rbp-20h] BYREF

  v5 = *((_QWORD *)a1 + 5);
  v7 = 1;
  v48 = *(struct tagRECT *)(v5 + 88);
  v8 = ValidateHmonitorNoRip(*(_QWORD *)(v5 + 256));
  TopLevelWindow = GetTopLevelWindow(a2);
  if ( v8 )
    v12 = *(_WORD *)(*(_QWORD *)(v8 + 40) + 60LL);
  else
    v12 = 0;
  if ( a3 )
  {
    if ( a2 )
    {
      v37 = *(_QWORD *)a2;
      UserSessionState = W32GetUserSessionState(v10, v9);
      v7 = InternalSetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 41402), v37, 1u);
    }
    else
    {
      v39 = W32GetUserSessionState(v10, v9);
      InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(v39 + 41402), 1u);
    }
  }
  v13 = 0LL;
  v47 = 0LL;
  BugCheckParameter3 = -1LL;
  if ( a2 != a1 )
    v13 = a2;
  if ( !v13
    || TopLevelWindow && (*(_BYTE *)(*(_QWORD *)(TopLevelWindow + 40) + 20LL) & 0x20) != 0
    || (NewMonitor = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v13 + 5) + 256LL))) == 0 )
  {
    NewMonitor = GetNewMonitor(a1, 0LL, &v48);
    v16 = PtiCurrent(v15);
    BugCheckParameter3 = *((_QWORD *)v16 + 56);
    *((_QWORD *)v16 + 56) = &BugCheckParameter3;
    v47 = NewMonitor;
    HMLockObject(NewMonitor);
    v17 = *(unsigned __int16 *)(*(_QWORD *)(NewMonitor + 40) + 60LL);
    if ( (_WORD)v17 != v12 )
      xxxAppAdjustDpiCandidateRect(a1, v17, *((_QWORD *)a1 + 5) + 88LL, &v48);
  }
  else
  {
    v41 = PtiCurrent(v40);
    Win32HM_LockIntoThread<0>((__int64)v41, NewMonitor, &BugCheckParameter3);
    if ( !HasMaximizedState(a1) )
    {
      v42 = *((_QWORD *)a1 + 5);
      if ( (*(_DWORD *)(v42 + 288) & 0xF) == 2 && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 680LL) & 0x2000000) == 0 )
      {
        if ( v8 )
        {
          v43 = v42 + 88;
          v44 = *(_QWORD *)(v42 + 88);
          v45 = *(unsigned __int16 *)(*(_QWORD *)(NewMonitor + 40) + 60LL);
          if ( (_WORD)v45 != v12 && !(unsigned int)xxxAppAdjustDpiCandidateRect(a1, v45, v43, &v48) )
            ScaleDPIRect(
              (unsigned int)&v48,
              *((_QWORD *)a1 + 5) + 88,
              *(unsigned __int16 *)(*(_QWORD *)(NewMonitor + 40) + 60LL),
              v12,
              v44,
              v44);
        }
      }
    }
  }
  if ( Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(&BugCheckParameter3) )
  {
    v22 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 63424);
    if ( v22 )
    {
      *(_QWORD *)(W32GetUserSessionState(v21, v20) + 63424) = 0LL;
    }
    else
    {
      v36 = Win32AllocPoolZInit(296LL, 1819767637LL);
      v22 = v36;
      if ( !v36 )
        goto LABEL_19;
      *(_QWORD *)(v36 + 16) = v36 + 280;
    }
    *(_QWORD *)(v22 + 24) = 0LL;
    *(_QWORD *)(v22 + 8) = v22 + 32;
    v24 = InternalBuildHwndList((struct tagBWL *)v22, a1, 1u);
    v25 = (_QWORD *)*((_QWORD *)v24 + 1);
    if ( (unsigned __int64)v25 < *((_QWORD *)v24 + 2) )
    {
      *v25 = 1LL;
      *((_QWORD *)v24 + 3) = PtiCurrent(v23);
      *((_QWORD *)v24 + 3) = PtiCurrent(v30);
      v33 = *(_QWORD *)(W32GetUserSessionState(v32, v31) + 63232);
      *(_QWORD *)v24 = v33;
      *(_QWORD *)(W32GetUserSessionState(v33, v34) + 63232) = v24;
      if ( v24 )
      {
        v35 = BuildWindowListWithDpiBoundaryInfo(a1, *((struct tagWND **)a1 + 13), v24, 0LL);
        for ( i = (__int64 *)((char *)v24 + 32); *i != 1; ++i )
        {
          v26 = (struct tagWND *)HMValidateCatHandleNoSecure(*i);
          UpdateWindowMonitor(v26, (struct tagMONITOR *)NewMonitor);
        }
        if ( v35 )
        {
          UpdateWindowPositionsForDpiBoundaryChange(v35, v27);
          FreeListFree(v35);
        }
        xxxNotifyMonitorChanged(a1, &v48, v24, v12);
      }
    }
    else
    {
      Win32FreePool(v24);
    }
  }
LABEL_19:
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&BugCheckParameter3);
  return v7;
}
