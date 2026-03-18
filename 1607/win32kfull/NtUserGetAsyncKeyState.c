/*
 * XREFs of NtUserGetAsyncKeyState @ 0x1C00A9750
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _GetAsyncKeyState @ 0x1C00A98E8 (_GetAsyncKeyState.c)
 *     IsForegroundShellFrameQueueAccessible @ 0x1C00A9964 (IsForegroundShellFrameQueueAccessible.c)
 */

__int64 __fastcall NtUserGetAsyncKeyState(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 ThreadWin32Thread; // rdi
  __int16 AsyncKeyState; // bx
  unsigned __int64 v7; // rax
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx

  EnterSharedCrit(0LL, 1LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v3, v4);
  AsyncKeyState = 0;
  if ( *(_QWORD *)(ThreadWin32Thread + 408) != grpdeskRitInput
    || (!gptiForeground
     || PsGetCurrentProcessWin32Process(gptiForeground, grpdeskRitInput) != *(_QWORD *)(gptiForeground + 376LL))
    && !RtlAreAnyAccessesGranted(*(_DWORD *)(ThreadWin32Thread + 776), 0x18u) )
  {
    goto LABEL_17;
  }
  if ( gpqForeground )
  {
    v7 = *(_QWORD *)(gpqForeground + 380LL);
    v8 = *(_QWORD *)(ThreadWin32Thread + 376);
    v9 = *(_QWORD *)(v8 + 824);
    if ( gbEnforceUIPI )
    {
      if ( (unsigned int)v9 <= (unsigned int)v7 )
      {
        if ( (_DWORD)v9 != (_DWORD)v7
          || (v10 = HIDWORD(v9), v11 = HIDWORD(v7), (_DWORD)v10 != (_DWORD)v11)
          && (_DWORD)v10 != -1
          && (_DWORD)v11 != -1 )
        {
          if ( *(int *)(v8 + 12) >= 0 && !(unsigned int)IsForegroundShellFrameQueueAccessible(ThreadWin32Thread) )
          {
            EtwTraceUIPIInputError(ThreadWin32Thread, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 3);
LABEL_17:
            UserSetLastError(5LL);
            goto LABEL_11;
          }
        }
      }
    }
  }
  AsyncKeyState = GetAsyncKeyState(a1);
  *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 432) + 124LL) = *(_DWORD *)(gpsi + 5644LL);
  v12 = *(_QWORD *)(ThreadWin32Thread + 432);
  *(_QWORD *)(v12 + 128) = *(_QWORD *)gafAsyncKeyState;
  v13 = *(_QWORD *)(ThreadWin32Thread + 432);
  *(_QWORD *)(v13 + 136) = gafAsyncKeyStateRecentDown;
LABEL_11:
  UserSessionSwitchLeaveCrit(v13, v12);
  return AsyncKeyState;
}
