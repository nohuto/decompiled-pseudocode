/*
 * XREFs of NtUserGetAsyncKeyState @ 0x1C00EB4B0
 * Callers:
 *     <none>
 * Callees:
 *     IsForegroundShellFrameQueueAccessible @ 0x1C0003224 (IsForegroundShellFrameQueueAccessible.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     _GetAsyncKeyState @ 0x1C00EB660 (_GetAsyncKeyState.c)
 */

__int64 __fastcall NtUserGetAsyncKeyState(unsigned int a1)
{
  __int64 ThreadWin32Thread; // rdi
  __int16 AsyncKeyState; // bx
  unsigned __int64 v4; // rax
  __int64 v5; // r8
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx

  EnterSharedCrit(0LL, 1LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  AsyncKeyState = 0;
  if ( *(_QWORD *)(ThreadWin32Thread + 408) != grpdeskRitInput
    || (!gptiForeground || PsGetCurrentProcessWin32Process(gptiForeground) != *(_QWORD *)(gptiForeground + 376LL))
    && !RtlAreAnyAccessesGranted(*(_DWORD *)(ThreadWin32Thread + 768), 0x18u) )
  {
    goto LABEL_18;
  }
  if ( gpqForeground )
  {
    v4 = *(_QWORD *)(gpqForeground + 372LL);
    v5 = *(_QWORD *)(ThreadWin32Thread + 376);
    v6 = *(_QWORD *)(v5 + 832);
    if ( gbEnforceUIPI )
    {
      if ( (unsigned int)v6 <= (unsigned int)v4 )
      {
        if ( (_DWORD)v6 != (_DWORD)v4
          || (v7 = HIDWORD(v6), v8 = HIDWORD(v4), (_DWORD)v7 != (_DWORD)v8) && (_DWORD)v7 != -1 && (_DWORD)v8 != -1 )
        {
          if ( *(int *)(v5 + 12) >= 0 && !IsForegroundShellFrameQueueAccessible(ThreadWin32Thread) )
          {
            EtwTraceUIPIInputError(ThreadWin32Thread, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 372LL), 3);
LABEL_18:
            UserSetLastError(5);
            goto LABEL_10;
          }
        }
      }
    }
  }
  AsyncKeyState = GetAsyncKeyState(a1);
  *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 432) + 124LL) = *(_DWORD *)(gpsi + 4252LL);
  v9 = *(_QWORD *)(ThreadWin32Thread + 432);
  *(_QWORD *)(v9 + 128) = *(_QWORD *)gafAsyncKeyState;
  v10 = *(_QWORD *)(ThreadWin32Thread + 432);
  *(_QWORD *)(v10 + 136) = gafAsyncKeyStateRecentDown;
LABEL_10:
  UserSessionSwitchLeaveCrit(v10, v9);
  return AsyncKeyState;
}
