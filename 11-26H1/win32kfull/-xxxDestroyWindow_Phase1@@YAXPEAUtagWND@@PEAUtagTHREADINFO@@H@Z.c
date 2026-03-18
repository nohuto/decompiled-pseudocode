/*
 * XREFs of ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14027BA68
 * Callers:
 *     xxxDestroyWindow @ 0x140084380 (xxxDestroyWindow.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1400101EC (PostShellHookMessagesEx.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x140010D38 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140011324 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1400125F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140013510 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxRedrawWindow @ 0x14002CA0C (xxxRedrawWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x14012ED78 (-IsInsideUserApiHook@@YAHXZ.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x140177E84 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     ?xxxHandleGhostRelatedWindowDestruction@@YAXPEAUtagWND@@@Z @ 0x1401B8CB0 (-xxxHandleGhostRelatedWindowDestruction@@YAXPEAUtagWND@@@Z.c)
 *     zzzAttachThreadInput @ 0x1401CA1C8 (zzzAttachThreadInput.c)
 *     IsMotherDesktopWindow @ 0x1401D3894 (IsMotherDesktopWindow.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x14020A2DC (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     xxxFlushPalette @ 0x14028AE60 (xxxFlushPalette.c)
 *     Feature_QoSCleanupChildWindow__private_IsEnabledDeviceUsageNoInline @ 0x14028C18C (Feature_QoSCleanupChildWindow__private_IsEnabledDeviceUsageNoInline.c)
 *     xxxEndMenu @ 0x140290424 (xxxEndMenu.c)
 *     ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x140295ED8 (-PostUnownedNotification@@YAXPEAUtagWND@@@Z.c)
 */

void __fastcall xxxDestroyWindow_Phase1(struct tagWND *a1, struct tagTHREADINFO *a2, int a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 i; // rbx
  __int64 UserSessionState; // rax
  __int64 v20; // rax
  ULONG_PTR v21; // rcx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-28h] BYREF
  char v23; // [rsp+80h] [rbp+8h] BYREF

  if ( IsInsideUserApiHook((__int64)a1, (__int64)a2) )
    xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 144LL, 0LL, 0LL, 0, 0, 0LL, 1u, 1);
  v8 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 640LL);
  if ( v8 )
  {
    if ( a1 == *(struct tagWND **)(*(_QWORD *)v8 + 8LL) )
    {
      v9 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 640LL);
      do
      {
        *(_DWORD *)(v8 + 8) &= ~4u;
        v8 = *(_QWORD *)(v8 + 48);
      }
      while ( v8 );
      if ( (*(_DWORD *)(v9 + 8) & 0x100) == 0 )
      {
        MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
          (MenuStateOwnerLockxxxUnlock *)&v23,
          (struct tagTHREADINFO **)v9);
        xxxEndMenu(v9);
        MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v23);
      }
    }
  }
  v10 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v10 + 31) & 0x40) == 0 && !*((_QWORD *)a1 + 15) && (*(_BYTE *)(v10 + 18) & 0x20) != 0 )
    xxxFlushPalette(a1, v8, v6, v7);
  v11 = *((_QWORD *)a1 + 17);
  v12 = *(unsigned __int16 *)(*(_QWORD *)(W32GetUserSessionState(v10, v8) + 19904) + 898LL);
  if ( **(_WORD **)(v11 + 8) != (_WORD)v12 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
  {
    v13 = *((_QWORD *)a1 + 15);
    if ( v13 )
    {
      v14 = *((_QWORD *)a1 + 2);
      v12 = *(_QWORD *)(v13 + 16);
      if ( v12 != v14 )
        zzzAttachThreadInput(v14, v12, 0);
    }
  }
  v15 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v15 + 31) & 0x40) != 0 && (*(_BYTE *)(v15 + 24) & 4) == 0 && !IsTopLevelWindow((__int64)a1) )
  {
    v12 = *((_QWORD *)a1 + 13);
    if ( v12 )
    {
      Win32HM_LockIntoThread<0>((__int64)a2, v12, BugCheckParameter3);
      xxxSendTransformableMessageTimeout(
        *((struct tagTHREADINFO ***)a1 + 13),
        528LL,
        (*(unsigned __int16 *)(*((_QWORD *)a1 + 5) + 320LL) << 16) | 2,
        *(_QWORD *)a1,
        0,
        0,
        0LL,
        1u,
        0);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
  }
  if ( !(unsigned int)IsMotherDesktopWindow((__int64)a1, v12) )
    SetOrClrWF(1, a1, 0x480u, 1);
  if ( !a3 )
    xxxHandleGhostRelatedWindowDestruction(a1);
  if ( !(unsigned int)Feature_QoSCleanupChildWindow__private_IsEnabledDeviceUsageNoInline()
    && (*((_DWORD *)a1 + 95) & 0x8000000) != 0 )
  {
    tagWND::DwsUnlinkAllProcesses(a1, 3LL);
  }
  if ( !a3 && IsTopLevelWindow((__int64)a1) )
  {
    v17 = *(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL);
    for ( i = *(_QWORD *)(*(_QWORD *)(v17 + 24) + 112LL); i; i = *(_QWORD *)(i + 88) )
    {
      if ( *(struct tagWND **)(i + 120) == a1 && a2 != *(struct tagTHREADINFO **)(i + 16) )
        PostUnownedNotification((struct tagWND *)i);
    }
  }
  LOBYTE(v17) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v17 & 0x10) != 0 )
  {
    if ( (v17 & 0x40) != 0 )
    {
      UserSessionState = W32GetUserSessionState(v17, v16);
      xxxShowWindowEx(a1, 0, *(_DWORD *)(UserSessionState + 66792) & 0x10000);
    }
    else
    {
      xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, a3 != 0 ? 8343 : 151);
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
    {
      SetVisible((__int64)a1, 0);
      v20 = *((_QWORD *)a2 + 61);
      if ( v20 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v20 + 8) + 24LL) )
        {
          v21 = *((_QWORD *)a1 + 13);
          if ( v21 )
            zzzLockDisplayAreaAndInvalidateDCCache(v21, 16, 0LL);
          xxxRedrawWindow(0LL, *((_QWORD *)a1 + 5) + 88LL, 0LL, 133);
        }
      }
    }
  }
  else if ( IsTrayWindow(a1, 1LL) && (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) != 0x2AA )
  {
    PostShellHookMessagesEx((LastWokenThread *)2, *(_QWORD *)a1);
  }
}
