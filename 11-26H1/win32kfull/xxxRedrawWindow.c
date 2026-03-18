/*
 * XREFs of xxxRedrawWindow @ 0x14002CA0C
 * Callers:
 *     xxxValidateRect @ 0x14002C178 (xxxValidateRect.c)
 *     xxxInvalidateRect @ 0x14002C804 (xxxInvalidateRect.c)
 *     xxxSetLayeredWindow @ 0x14014CE10 (xxxSetLayeredWindow.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1401B8F18 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetWindowStyle @ 0x1401C9A38 (xxxSetWindowStyle.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1401FFD98 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     NtUserInvalidateRgn @ 0x140203EB0 (NtUserInvalidateRgn.c)
 *     NtUserValidateRgn @ 0x14021A5F0 (NtUserValidateRgn.c)
 *     xxxUserResetDisplayDevice @ 0x140248210 (xxxUserResetDisplayDevice.c)
 *     NtUserRedrawWindow @ 0x14024C180 (NtUserRedrawWindow.c)
 *     _DwmLockScreenUpdates @ 0x14024F1D0 (_DwmLockScreenUpdates.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14027BA68 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxMinimizeHungWindow @ 0x140292240 (xxxMinimizeHungWindow.c)
 *     RemoteRedrawRectangle @ 0x1402CB024 (RemoteRedrawRectangle.c)
 *     ?xxxSoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402CB460 (-xxxSoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxDwmStopRedirection @ 0x1402CFD60 (xxxDwmStopRedirection.c)
 * Callees:
 *     MirrorRegion @ 0x14002C1A8 (MirrorRegion.c)
 *     xxxInternalInvalidate @ 0x14002CCF0 (xxxInternalInvalidate.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 */

__int64 __fastcall xxxRedrawWindow(struct tagWND *a1, __int64 a2, __int64 a3, int a4)
{
  int *v6; // rsi
  struct tagWND *v7; // rbx
  _QWORD *CurrentThreadWin32Thread; // rax
  struct tagWND *i; // rcx
  char v10; // al
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // edx
  int v14; // eax
  int v15; // edx
  __int64 v16; // rcx
  struct tagWND *v17; // rax
  __int64 v18; // rcx
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  ULONG_PTR *v23; // rdx
  ULONG_PTR v24; // rcx
  __int64 UserSessionState; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v6 = (int *)a2;
  v7 = a1;
  if ( !a1 )
  {
    CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(0LL);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread = (_QWORD *)*CurrentThreadWin32Thread;
    v7 = *(struct tagWND **)(*(_QWORD *)(CurrentThreadWin32Thread[61] + 8LL) + 24LL);
  }
  for ( i = v7; i; i = (struct tagWND *)*((_QWORD *)i + 13) )
  {
    a2 = *((_QWORD *)i + 5);
    v10 = *(_BYTE *)(a2 + 31);
    if ( (v10 & 0x10) == 0 || (v10 & 0x20) != 0 && i != v7 )
      return 1LL;
    if ( (*(_WORD *)(a2 + 42) & 0x2FFF) == 0x29D )
      break;
  }
  if ( (a4 & 9) != 0 )
  {
    if ( a3 )
    {
      if ( a3 != 1 )
      {
        UserSessionState = W32GetUserSessionState(i, a2);
        GreCombineRgn(*(_QWORD *)(UserSessionState + 63344), a3, 0LL, 5LL);
        v29 = W32GetUserSessionState(v28, v27);
        MirrorRegion((__int64)v7, *(_QWORD *)(v29 + 63344), 1);
        a3 = *(_QWORD *)(W32GetUserSessionState(v31, v30) + 63344);
      }
      if ( v7 != (struct tagWND *)GetDesktopWindow(v7) )
        GreOffsetRgn(a3, *(unsigned int *)(*((_QWORD *)v7 + 5) + 104LL), *(unsigned int *)(*((_QWORD *)v7 + 5) + 108LL));
    }
    else if ( v6 )
    {
      v11 = W32GetUserSessionState(i, a2);
      v12 = *((_QWORD *)v7 + 5);
      a3 = *(_QWORD *)(v11 + 63344);
      if ( (*(_BYTE *)(v12 + 26) & 0x40) != 0 )
      {
        v13 = *(_DWORD *)(v12 + 112) - *(_DWORD *)(v12 + 104);
        v14 = v13 - v6[2];
        v15 = v13 - *v6;
        *v6 = v14;
        v6[2] = v15;
      }
      v16 = *((_QWORD *)v7 + 3);
      v17 = 0LL;
      if ( v16 )
      {
        v18 = *(_QWORD *)(v16 + 8);
        if ( v18 )
          v17 = *(struct tagWND **)(v18 + 24);
      }
      if ( v7 == v17 )
        SetRectRgnIndirect(a3, v6);
      else
        GreSetRectRgn(
          a3,
          (unsigned int)(*v6 + *(_DWORD *)(*((_QWORD *)v7 + 5) + 104LL)),
          (unsigned int)(*(_DWORD *)(*((_QWORD *)v7 + 5) + 108LL) + v6[1]),
          (unsigned int)(*(_DWORD *)(*((_QWORD *)v7 + 5) + 104LL) + v6[2]),
          *(_DWORD *)(*((_QWORD *)v7 + 5) + 108LL) + v6[3]);
    }
    else
    {
      a3 = 1LL;
    }
  }
  v19 = (__int64 *)PsGetCurrentThreadWin32Thread(i);
  if ( v19 )
    v20 = *v19;
  else
    v20 = 0LL;
  BugCheckParameter3[0] = *(_QWORD *)(v20 + 448);
  *(_QWORD *)(v20 + 448) = BugCheckParameter3;
  BugCheckParameter3[1] = (ULONG_PTR)v7;
  if ( v7 )
    HMLockObject(v7);
  xxxInternalInvalidate(v7, (HRGN)a3, a4 | 0x1000);
  v22 = (_QWORD *)PsGetCurrentThreadWin32Thread(v21);
  if ( v22 )
    v22 = (_QWORD *)*v22;
  v23 = (ULONG_PTR *)v22[56];
  if ( v23 != BugCheckParameter3 )
    KeBugCheckEx(0x164u, 0x3BuLL, (ULONG_PTR)v22, (ULONG_PTR)BugCheckParameter3, 0LL);
  v22[56] = *v23;
  v24 = v23[1];
  if ( v24 )
    HMUnlockObject(v24);
  return 1LL;
}
