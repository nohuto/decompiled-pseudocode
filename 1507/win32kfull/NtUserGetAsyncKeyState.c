/*
 * XREFs of NtUserGetAsyncKeyState @ 0x1C0041050
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     _GetAsyncKeyState @ 0x1C00411FC (_GetAsyncKeyState.c)
 *     IsForegroundShellFrameQueueAccessible @ 0x1C0041278 (IsForegroundShellFrameQueueAccessible.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetAsyncKeyState(unsigned int a1)
{
  __int64 v2; // rcx
  __int64 ThreadWin32Thread; // rdi
  __int16 AsyncKeyState; // bx
  unsigned __int64 v5; // rax
  __int64 v6; // r8
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx

  EnterSharedCrit(1LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  AsyncKeyState = 0;
  if ( *(_QWORD *)(ThreadWin32Thread + 416) != grpdeskRitInput
    || (!gptiForeground || PsGetCurrentProcessWin32Process(v2) != *(_QWORD *)(gptiForeground + 384LL))
    && !RtlAreAnyAccessesGranted(*(_DWORD *)(ThreadWin32Thread + 776), 0x18u) )
  {
    goto LABEL_18;
  }
  if ( gpqForeground )
  {
    v5 = *(_QWORD *)(gpqForeground + 372LL);
    v6 = *(_QWORD *)(ThreadWin32Thread + 384);
    v7 = *(_QWORD *)(v6 + 832);
    if ( gbEnforceUIPI )
    {
      if ( (unsigned int)v7 <= (unsigned int)v5 )
      {
        if ( (_DWORD)v7 != (_DWORD)v5
          || (v8 = HIDWORD(v7), v9 = HIDWORD(v5), (_DWORD)v8 != (_DWORD)v9) && (_DWORD)v8 != -1 && (_DWORD)v9 != -1 )
        {
          if ( *(int *)(v6 + 12) >= 0 && !(unsigned int)IsForegroundShellFrameQueueAccessible(ThreadWin32Thread) )
          {
            EtwTraceUIPIInputError(ThreadWin32Thread, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 372LL), 3);
LABEL_18:
            UserSetLastError(5LL);
            goto LABEL_10;
          }
        }
      }
    }
  }
  AsyncKeyState = GetAsyncKeyState(a1);
  *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 440) + 124LL) = *(_DWORD *)(gpsi + 4252LL);
  v10 = *(_QWORD *)(ThreadWin32Thread + 440);
  *(_QWORD *)(v10 + 128) = *(_QWORD *)gafAsyncKeyState;
  v11 = *(_QWORD *)(ThreadWin32Thread + 440);
  *(_QWORD *)(v11 + 136) = gafAsyncKeyStateRecentDown;
LABEL_10:
  UserSessionSwitchLeaveCrit(v11, v10);
  return AsyncKeyState;
}
