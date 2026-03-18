/*
 * XREFs of xxxMNLoop @ 0x14005AD84
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 *     xxxSysCommand @ 0x1402D135C (xxxSysCommand.c)
 *     xxxMNKeyFilter @ 0x1402FC2DC (xxxMNKeyFilter.c)
 * Callees:
 *     xxxGetSysMenuPtr @ 0x14000EF90 (xxxGetSysMenuPtr.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     xxxCallMsgFilter @ 0x14002004C (xxxCallMsgFilter.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     xxxSendNotifyMessage @ 0x140044970 (xxxSendNotifyMessage.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxInternalGetMessage @ 0x140057C40 (xxxInternalGetMessage.c)
 *     IsShellFrameHangResilient @ 0x1400598D4 (IsShellFrameHangResilient.c)
 *     xxxHandleMenuMessages @ 0x14005B450 (xxxHandleMenuMessages.c)
 *     xxxTranslateMessage @ 0x14005BDE8 (xxxTranslateMessage.c)
 *     xxxWaitMessageEx @ 0x14005C04C (xxxWaitMessageEx.c)
 *     FindNCHit @ 0x14008AB60 (FindNCHit.c)
 *     xxxMNStartMenu @ 0x140176B5C (xxxMNStartMenu.c)
 *     xxxMNReleaseCapture @ 0x140178014 (xxxMNReleaseCapture.c)
 *     _IsChild @ 0x1401882D0 (_IsChild.c)
 *     SlowAppThreadInShellFrame @ 0x14020BCAC (SlowAppThreadInShellFrame.c)
 *     _GetMenuState @ 0x140220F5C (_GetMenuState.c)
 *     xxxEndMenuLoop @ 0x14028CF70 (xxxEndMenuLoop.c)
 *     TryDetachShellFrame @ 0x140292DFC (TryDetachShellFrame.c)
 *     MNFlushDestroyedPopups @ 0x1402D0840 (MNFlushDestroyedPopups.c)
 */

__int64 __fastcall xxxMNLoop(struct tagWND ****a1, __int64 a2, __int64 a3, int a4)
{
  int v8; // r12d
  struct tagTHREADINFO *v9; // r14
  int v10; // eax
  int v11; // ebx
  _DWORD *v12; // rcx
  __int64 v13; // rbx
  struct tagTHREADINFO *v14; // rax
  __int64 v15; // r15
  __int64 v16; // rax
  struct tagWND *v17; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  bool v22; // sf
  _DWORD *v23; // rcx
  unsigned __int64 v24; // r8
  int v25; // eax
  struct tagWND ***v26; // rax
  __int64 UserSessionState; // rax
  struct tagWND *v28; // rbx
  __int64 SysMenuPtr; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // [rsp+28h] [rbp-39h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v33[2]; // [rsp+48h] [rbp-19h] BYREF
  __int64 v34; // [rsp+58h] [rbp-9h]
  __int128 v35; // [rsp+60h] [rbp-1h] BYREF
  __int128 v36; // [rsp+70h] [rbp+Fh]
  __int128 v37; // [rsp+80h] [rbp+1Fh]
  int v38; // [rsp+D0h] [rbp+6Fh] BYREF

  *(_DWORD *)(a2 + 8) |= 4u;
  v35 = 0LL;
  *(_DWORD *)(a2 + 24) = 0;
  v36 = 0LL;
  v37 = 0LL;
  v8 = 1;
  v9 = PtiCurrent((__int64)a1);
  *(_DWORD *)(a2 + 12) = *((_DWORD *)v9 + 197);
  *(_DWORD *)(a2 + 16) = *((_DWORD *)v9 + 198);
  *(_DWORD *)(*((_QWORD *)v9 + 58) + 436LL) &= ~0x40u;
  if ( (*(_DWORD *)(a2 + 8) & 1) == 0 )
  {
    v22 = (_GetKeyState((unsigned int)((*(_DWORD *)**a1 & 0x40) != 0) + 1) & 0x8000u) != 0LL;
    v23 = **a1;
    if ( v22 )
    {
      if ( (*v23 & 8) != 0 || (unsigned int)xxxMNStartMenu(a1, a2, 0xFFFFFFFFLL) )
      {
        if ( (*(_DWORD *)**a1 & 0x40) != 0 )
        {
          *(_QWORD *)&v36 = 2LL;
          v25 = a4 != 0 ? 518 : 516;
        }
        else
        {
          *(_QWORD *)&v36 = 1LL;
          v25 = a4 != 0 ? 515 : 513;
        }
        DWORD2(v35) = v25;
        v26 = *a1;
        *((_QWORD *)&v36 + 1) = a3;
        if ( (*v26)[2] )
          *(_QWORD *)&v35 = *(_QWORD *)(**a1)[2];
        else
          *(_QWORD *)&v35 = 0LL;
        xxxHandleMenuMessages(&v35, a2, a1);
        goto LABEL_2;
      }
    }
    else if ( (*v23 & 0x800) == 0 && (**a1)[1] )
    {
      Win32HM_LockIntoThread<0>((__int64)v9, (__int64)(**a1)[1], BugCheckParameter3);
      if ( (*(_DWORD *)**a1 & 8) == 0 || (v24 = 1LL, (*(_DWORD *)**a1 & 4) != 0) )
        v24 = 0LL;
      xxxSendNotifyMessage((**a1)[1], 0x212u, v24, 0LL, 1);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
LABEL_51:
    *(_DWORD *)(a2 + 8) &= 0xFFFFFEFB;
    xxxEndMenuLoop(a2, **a1);
    xxxMNReleaseCapture(a2);
    LODWORD(v31) = 2;
    xxxInternalGetMessage((__int64)&v35, 0, 512, 512, v31, 0);
    return *(unsigned int *)(a2 + 24);
  }
LABEL_2:
  if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
          goto LABEL_51;
        LODWORD(v31) = 2;
        if ( (unsigned int)xxxInternalGetMessage((__int64)&v35, 0, 0, 0, v31, 0) )
          break;
LABEL_28:
        if ( (*(_DWORD *)(a2 + 8) & 4) == 0 || (*(_DWORD *)**a1 & 0x8000) != 0 )
          goto LABEL_51;
        v12 = **a1;
        if ( (*v12 & 0x20000) != 0 )
        {
          MNFlushDestroyedPopups(**a1);
          v12 = **a1;
          *v12 &= ~0x20000u;
        }
        if ( v8 )
        {
          if ( (**a1)[1] )
          {
            Win32HM_LockIntoThread<0>((__int64)v9, (__int64)(**a1)[1], BugCheckParameter3);
            xxxSendMessage((**a1)[1], 0x121u);
            Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
          }
          v8 = 0;
        }
        else
        {
          v13 = *(_QWORD *)(a2 + 96);
          v14 = PtiCurrent((__int64)v12);
          v38 = 0;
          v15 = (__int64)v14;
          xxxWaitMessageEx(15615LL, v13 != 0, &v38);
          if ( (unsigned int)IsShellFrameHangResilient(v15) && v38 )
          {
            v16 = SlowAppThreadInShellFrame(v15, 0LL, 0LL, 1LL);
            if ( v16 )
              TryDetachShellFrame(v15, v16, v38 == 2);
          }
        }
      }
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
        goto LABEL_51;
      if ( (*(_DWORD *)**a1 & 0x8000) != 0 )
        goto LABEL_51;
      if ( (*(_DWORD *)**a1 & 8) == 0 )
      {
        v17 = *(struct tagWND **)(*((_QWORD *)v9 + 58) + 128LL);
        if ( v17 != (**a1)[1] && (!v17 || !(unsigned int)IsChild(*(_QWORD *)(*((_QWORD *)v9 + 58) + 128LL), (**a1)[1])) )
          goto LABEL_51;
      }
      if ( (*(_DWORD *)**a1 & 1) != 0 )
      {
        v10 = DWORD2(v35);
        if ( DWORD2(v35) != 515 )
          goto LABEL_10;
        if ( !(**a1)[1] )
          goto LABEL_14;
        if ( (unsigned int)FindNCHit((**a1)[1], DWORD2(v36)) == 2 )
        {
          SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v33);
          LODWORD(v31) = 1;
          xxxInternalGetMessage((__int64)&v35, 0, SDWORD2(v35), SDWORD2(v35), v31, 0);
          if ( (*(_DWORD *)(a2 + 8) & 4) == 0 || (*(_DWORD *)**a1 & 0x8000) != 0 )
            goto LABEL_78;
          if ( (**a1)[1] )
          {
            v28 = (**a1)[1];
            Win32HM_LockIntoThread<0>((__int64)v9, (__int64)v28, BugCheckParameter3);
            SysMenuPtr = xxxGetSysMenuPtr(v28);
            v34 = 0LL;
            SmartObjStackRefBase<tagMENU>::operator=((__int64)v33, SysMenuPtr);
            v30 = v34;
            if ( !v34 )
              v30 = *(_QWORD *)v33[0];
            if ( (GetMenuState(v30, 61728LL) & 3) == 0 )
              PostMessage((int)v28, 274, 61728, 0);
            Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
LABEL_78:
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v33);
            goto LABEL_51;
          }
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v33);
        }
      }
      v10 = DWORD2(v35);
LABEL_10:
      if ( v10 != 513 && v10 != 516 && v10 != 161 && v10 != 164 )
      {
LABEL_14:
        v11 = 0;
        _InterlockedOr((volatile signed __int32 *)v9 + 130, 0x200000u);
        LODWORD(v31) = 1;
        if ( !(unsigned int)xxxInternalGetMessage((__int64)&v35, 0, SDWORD2(v35), SDWORD2(v35), v31, 0)
          && (_InterlockedCompareExchange((volatile signed __int32 *)v9 + 130, 0, 0) & 0x200000) != 0 )
        {
          _InterlockedAnd((volatile signed __int32 *)v9 + 130, 0xFFDFFFFF);
          goto LABEL_28;
        }
        _InterlockedAnd((volatile signed __int32 *)v9 + 130, 0xFFDFFFFF);
        goto LABEL_16;
      }
      v11 = 1;
LABEL_16:
      if ( (unsigned int)xxxCallMsgFilter((__int64)&v35, 2) )
      {
        if ( v11 )
        {
          LODWORD(v31) = 1;
          xxxInternalGetMessage((__int64)&v35, 0, SDWORD2(v35), SDWORD2(v35), v31, 0);
        }
LABEL_25:
        v8 = 1;
      }
      else
      {
        if ( !(unsigned int)xxxHandleMenuMessages(&v35, a2, a1) )
        {
          xxxTranslateMessage(&v35, 0LL);
          xxxDispatchMessage((struct tagMSG *)&v35);
        }
        if ( (*(_DWORD *)(a2 + 8) & 4) == 0
          || (*(_DWORD *)**a1 & 0x8000) != 0
          || (*(_DWORD *)(*((_QWORD *)v9 + 58) + 436LL) & 0x40) != 0 )
        {
          goto LABEL_51;
        }
        if ( DWORD2(v35) != 275 )
        {
          if ( DWORD2(v35) == 280 )
            goto LABEL_28;
          if ( DWORD2(v35) != 15 )
            goto LABEL_25;
        }
      }
    }
  }
  xxxMNReleaseCapture(a2);
  v21 = *(_DWORD *)(a2 + 8);
  if ( (v21 & 0x2000000) != 0 )
  {
    *(_DWORD *)(a2 + 8) = v21 & 0xFDFFFFFF;
    UserSessionState = W32GetUserSessionState(v20, v19);
    --*(_DWORD *)(UserSessionState + 18896);
  }
  return 0LL;
}
