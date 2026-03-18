/*
 * XREFs of xxxSnapWindow @ 0x140289660
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     GreCreateCompatibleBitmapEx @ 0x1400171C0 (GreCreateCompatibleBitmapEx.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x140046914 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@UtagWINDOWSTATION@@$1?UserDereferenceObject@@YAXPEAX@Z$00$00$00@@AEAAX_N0@Z @ 0x14004AEE8 (-UnlockWorker@-$Win32RawLockedItemBase@UtagWINDOWSTATION@@$1-UserDereferenceObject@@YAXPEAX@Z$00.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     GreBitBltInternal @ 0x1400B5980 (GreBitBltInternal.c)
 *     IntersectRect @ 0x14012B290 (IntersectRect.c)
 *     IsToplevelWindowDesktopComposed @ 0x14012D424 (IsToplevelWindowDesktopComposed.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x140138DEC (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140138E4C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ReferenceWindowStation @ 0x140173AB0 (ReferenceWindowStation.c)
 *     xxxPlayEventSound @ 0x140176A50 (xxxPlayEventSound.c)
 *     _OpenClipboard @ 0x1401AFF98 (_OpenClipboard.c)
 *     xxxCloseClipboard @ 0x1401B02A0 (xxxCloseClipboard.c)
 *     _SetClipboardData @ 0x1401B1CEC (_SetClipboardData.c)
 *     xxxEmptyClipboard @ 0x1401B2154 (xxxEmptyClipboard.c)
 *     ?ManualLock@?$Win32RawLockedNtObject@UtagWINDOWSTATION@@@@QEAAXPEAUtagWINDOWSTATION@@@Z @ 0x1401B255C (-ManualLock@-$Win32RawLockedNtObject@UtagWINDOWSTATION@@@@QEAAXPEAUtagWINDOWSTATION@@@Z.c)
 *     GetPhysicalScreenRect @ 0x14021550C (GetPhysicalScreenRect.c)
 *     GreEnableAppContainerRestriction @ 0x14021A9AC (GreEnableAppContainerRestriction.c)
 *     ClientNoMemoryPopup @ 0x1402D508C (ClientNoMemoryPopup.c)
 *     CreateScreenPalette @ 0x1402EF664 (CreateScreenPalette.c)
 *     DwmAsyncSnapshotWindow @ 0x1403475B8 (DwmAsyncSnapshotWindow.c)
 */

__int64 __fastcall xxxSnapWindow(__int64 a1, int a2)
{
  Gre::Base *CompatibleDC; // rsi
  _QWORD *v3; // rdi
  struct tagTHREADINFO *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagWINDOWSTATION *v10; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  void *v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // rbx
  __int64 v17; // rdx
  unsigned int v18; // ebx
  unsigned int v19; // r12d
  unsigned __int64 v20; // kr00_8
  int v21; // edx
  __int64 v22; // rcx
  int v23; // r8d
  __int64 DCEx; // rax
  Gre::Base *v25; // r15
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  HBITMAP Bitmap; // rax
  __int64 UserSessionState; // rax
  char *v32; // r14
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  ULONG_PTR v38[2]; // [rsp+68h] [rbp-31h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v40; // [rsp+88h] [rbp-11h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+90h] [rbp-9h] BYREF
  __int128 v42; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v43; // [rsp+B0h] [rbp+17h]
  ULONG_PTR v45; // [rsp+110h] [rbp+77h] BYREF
  struct tagTHREADINFO *v46; // [rsp+118h] [rbp+7Fh] BYREF

  v40 = -1LL;
  v43 = 0LL;
  CompatibleDC = 0LL;
  BugCheckParameter3[1] = 0LL;
  v45 = 0LL;
  v3 = (_QWORD *)a1;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  BugCheckParameter3[0] = -1LL;
  v4 = PtiCurrent(a1);
  v46 = v4;
  v7 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19176);
  if ( v7 == *(_QWORD *)(W32GetUserSessionState(v9, v8) + 62968)
    || ReferenceWindowStation(KeGetCurrentThread(), 0LL, 0x200u, &v45, 1) < 0
    || (v10 = (struct tagWINDOWSTATION *)v45, (*(_DWORD *)(v45 + 32) & 4) != 0)
    || *(_QWORD *)(v3[3] + 40LL) != v45 )
  {
LABEL_5:
    Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3);
    if ( v40 != -1 )
      PopAndFreeW32ThreadLock((__int64)BugCheckParameter2);
    return 0LL;
  }
  while ( (*(_BYTE *)(v3[5] + 31LL) & 0x40) != 0 )
    v3 = (_QWORD *)v3[13];
  if ( !(unsigned int)IsToplevelWindowDesktopComposed((__int64)v3) )
  {
    Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)BugCheckParameter3, (__int64)v3);
    Win32RawLockedNtObject<tagWINDOWSTATION>::ManualLock(BugCheckParameter2, (ULONG_PTR)v10);
    v16 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 61) + 8LL) + 24LL);
    Win32HM_LockIntoThread<1>((__int64)v4, v16, (__int64 *)v38);
    LODWORD(v16) = OpenClipboard(v16, 0LL);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v38);
    if ( !(_DWORD)v16 )
      goto LABEL_5;
    xxxEmptyClipboard((__int64)v10);
    *(_OWORD *)v38 = *(_OWORD *)(v3[5] + 88LL);
    v42 = *GetPhysicalScreenRect(&v42, v17);
    if ( !(unsigned int)IntersectRect(v38, (int *)v38, (int *)&v42) )
    {
      v15 = 0;
LABEL_43:
      xxxCloseClipboard(v10);
      HMAssignmentUnlock((char *)v10 + 80);
      if ( CompatibleDC )
        GreDeleteDC(CompatibleDC);
      Win32RawLockedItemBase<tagWINDOWSTATION,&void UserDereferenceObject(void *),1,1,1>::UnlockWorker(
        (ULONG_PTR)BugCheckParameter2,
        0);
      goto LABEL_46;
    }
    v18 = LODWORD(v38[1]) - LODWORD(v38[0]);
    v19 = HIDWORD(v38[1]) - HIDWORD(v38[0]);
    v20 = v38[0];
    if ( v3 != (_QWORD *)GetDesktopWindow((__int64)v3) )
      v20 = __PAIR64__(v23 - *(_DWORD *)(v3[5] + 92LL), v21 - *(_DWORD *)(v3[5] + 88LL));
    DCEx = _GetDCEx(v22, 0LL, 65537LL);
    v25 = (Gre::Base *)DCEx;
    if ( DCEx
      && (CompatibleDC = (Gre::Base *)GreCreateCompatibleDC(DCEx)) != 0LL
      && ((v29 = *(_QWORD *)(W32GetUserSessionState(v27, v26) + 19904), !*(_DWORD *)(v29 + 2220))
        ? (UserSessionState = W32GetUserSessionState(v29, v28),
           Bitmap = (HBITMAP)GreCreateBitmap(
                               v18,
                               v19,
                               1LL,
                               *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 56968) + 128LL),
                               0LL))
        : (Bitmap = GreCreateCompatibleBitmapEx(v25, v18, v19, 0, 0LL, 0LL)),
          (v32 = (char *)Bitmap) != 0LL || (v32 = (char *)GreCreateBitmap(v18, v19, 1LL, 1LL, 0LL)) != 0LL) )
    {
      v38[0] = GreSelectBitmap(CompatibleDC, v32);
      if ( !a2
        && (v33 = *((_QWORD *)v46 + 61), v34 = *(_QWORD *)(v33 + 8), v3 == *(_QWORD **)(v34 + 24))
        && (unsigned int)UserIsCurrentProcessImmersiveAppContainer(v33, v34) )
      {
        LOBYTE(v45) = 1;
        GreEnableAppContainerRestriction(0LL);
      }
      else
      {
        LOBYTE(v45) = 0;
      }
      if ( (unsigned int)IsWindowDesktopComposed(v3) )
      {
        LOBYTE(v35) = 1;
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v46, v35);
        v15 = GreBitBltInternal(CompatibleDC, 0, 0, v18, v19, (__int64)v25, v20, SHIDWORD(v20), 0x40CC0020u, 0, 4u);
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v46);
      }
      else
      {
        v15 = GreBitBltInternal(CompatibleDC, 0, 0, v18, v19, (__int64)v25, v20, SHIDWORD(v20), 0x40CC0020u, 0, 0);
      }
      if ( (_BYTE)v45 )
        GreEnableAppContainerRestriction(1LL);
      GreSelectBitmap(CompatibleDC, v38[0]);
      if ( v15 )
      {
        SetClipboardData(2LL, v32, 0, 1);
        if ( (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v37, v36) + 19904) + 7004LL) & 1) != 0 )
        {
          v46 = 0LL;
          v45 = 0LL;
          if ( (int)CreateScreenPalette((HDC)v25) >= 0 )
          {
            SetClipboardData(9LL, (char *)v45, 0, 1);
            Win32FreePool(v46);
          }
        }
        v15 = 1;
      }
      else if ( v32 )
      {
        GreDeleteObject(v32);
      }
    }
    else
    {
      ClientNoMemoryPopup();
      v15 = 0;
      if ( !v25 )
        goto LABEL_43;
    }
    _ReleaseDC(v25);
    goto LABEL_43;
  }
  v14 = (void *)ReferenceDwmApiPort(v13, v12);
  v15 = (int)DwmAsyncSnapshotWindow(v14) >= 0;
LABEL_46:
  if ( v15 )
    xxxPlayEventSound(13LL);
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3);
  if ( v40 != -1 )
    PopAndFreeW32ThreadLock((__int64)BugCheckParameter2);
  return v15;
}
