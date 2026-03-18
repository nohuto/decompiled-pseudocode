/*
 * XREFs of zzzLockDisplayAreaAndInvalidateDCCache @ 0x140013510
 * Callers:
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x14000FBF8 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     _SetLayeredWindowAttributes @ 0x140012004 (_SetLayeredWindowAttributes.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14001996C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxScrollWindowEx @ 0x14003EEB4 (xxxScrollWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     UnsetLayeredWindow @ 0x1400A2F94 (UnsetLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x14014CE10 (xxxSetLayeredWindow.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     xxxSetWindowStyle @ 0x1401C9A38 (xxxSetWindowStyle.c)
 *     zzzResetSharedDesktops @ 0x1401ED3F0 (zzzResetSharedDesktops.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1401ED678 (zzzUpdateWindowsAfterModeChange.c)
 *     NtUserLockWindowUpdate @ 0x140279BF0 (NtUserLockWindowUpdate.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14027BA68 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxMinimizeHungWindow @ 0x140292240 (xxxMinimizeHungWindow.c)
 * Callees:
 *     RevalidateDCE @ 0x1400137B0 (RevalidateDCE.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     GreClientRgnUpdated @ 0x140013A14 (GreClientRgnUpdated.c)
 *     GreUpdateSpriteVisRgn @ 0x1400384E0 (GreUpdateSpriteVisRgn.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     GreLockDisplayArea @ 0x140213BB8 (GreLockDisplayArea.c)
 *     InvalidateGDIWindows @ 0x140296394 (InvalidateGDIWindows.c)
 */

__int64 __fastcall zzzLockDisplayAreaAndInvalidateDCCache(ULONG_PTR a1, char a2, __int64 a3)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v7; // rsi
  ULONG_PTR v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 *i; // rsi
  int v15; // ebx
  unsigned int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 j; // rax
  __int64 v24; // r8
  __int64 UserSessionState; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    v7 = *CurrentThreadWin32Thread;
  else
    v7 = 0LL;
  BugCheckParameter3[0] = *(_QWORD *)(v7 + 448);
  *(_QWORD *)(v7 + 448) = BugCheckParameter3;
  BugCheckParameter3[1] = a1;
  HMLockObject(a1);
  LOBYTE(v9) = (_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 520), 0, 0) & 0x8000) == 0;
  if ( ((unsigned __int8)v9 & ((a2 & 0x10) == 0)) != 0 )
    GenerateMouseMove(0LL);
  if ( (a2 & 1) == 0 )
    goto LABEL_6;
  v8 = *(_QWORD *)(a1 + 104);
  a2 = 0;
  if ( !v8 || a1 == GetDesktopWindow(a1) )
    goto LABEL_6;
  if ( (*(_BYTE *)(*(_QWORD *)(v8 + 40) + 31LL) & 2) != 0 )
  {
    a2 = 4;
  }
  else
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 4) == 0 )
      goto LABEL_6;
    a2 = 2;
  }
  a1 = v8;
LABEL_6:
  if ( a3 )
  {
    UserSessionState = W32GetUserSessionState(v9, v8);
    GreLockDisplayArea(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 40LL), a3);
  }
  GreLockVisRgn();
  GreLockVisRgnPublish();
  v13 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 56968);
  for ( i = *(__int64 **)(v13 + 24); ; i = (__int64 *)*i )
  {
    v13 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 56968) + 24LL;
    if ( i == (__int64 *)v13 )
      break;
    v12 = *((unsigned int *)i + 12);
    if ( (v12 & 0x400800) == 0 )
    {
      if ( (v12 & 3) == 0 )
      {
        v24 = i[10];
        if ( (*(_BYTE *)(*(_QWORD *)(v24 + 40) + 31LL) & 2) != 0 )
        {
          v12 = (unsigned int)v12 | 8;
          *((_DWORD *)i + 12) = v12;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v24 + 40) + 31LL) & 0x20) != 0 )
        {
          v12 = (unsigned int)v12 & 0xFFFFFFF7;
          *((_DWORD *)i + 12) = v12;
        }
      }
      v13 = i[10];
      for ( j = v13; j; j = *(_QWORD *)(j + 104) )
      {
        if ( j == a1 )
        {
          if ( a1 != v13
            || (a2 & 2) == 0 && (LOBYTE(v13) = (i[6] & 1) != 0, ((unsigned __int8)v13 & ((a2 & 4) != 0)) == 0) )
          {
            RevalidateDCE(i);
          }
          break;
        }
      }
    }
  }
  GreUnlockVisRgnPublish();
  v15 = a2 & 8;
  v16 = v15 != 0 ? 2 : 0;
  if ( *(_DWORD *)(W32GetUserSessionState(v18, v17) + 43272) )
  {
    InvalidateGDIWindows(a1);
    v16 |= 1u;
  }
  GreClientRgnUpdated(v16);
  v21 = W32GetUserSessionState(v20, v19);
  GreUpdateSpriteVisRgn(*(_QWORD *)(*(_QWORD *)(v21 + 56968) + 40LL), v15 != 0 ? 4 : 0);
  GreUnlockVisRgn();
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3);
  return 1LL;
}
