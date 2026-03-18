/*
 * XREFs of NtUserGetKeyState @ 0x1C00419D0
 * Callers:
 *     <none>
 * Callees:
 *     IsForegroundShellFrameQueueAccessible @ 0x1C0041278 (IsForegroundShellFrameQueueAccessible.c)
 *     IsKeyStateCached @ 0x1C0041B70 (IsKeyStateCached.c)
 *     _GetKeyState @ 0x1C0041BD0 (_GetKeyState.c)
 *     PostUpdateKeyStateEvent @ 0x1C0042520 (PostUpdateKeyStateEvent.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetKeyState(unsigned int a1)
{
  __int16 KeyState; // bx
  _QWORD *v3; // rdi
  _QWORD **ThreadWin32Thread; // rax
  __int64 v5; // rcx
  unsigned __int64 v7; // rax
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax

  EnterSharedCrit(1LL);
  KeyState = 0;
  v3 = 0LL;
  ThreadWin32Thread = (_QWORD **)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v3 = *ThreadWin32Thread;
  if ( (*(_DWORD *)(v3[49] + 332LL) & 1) != 0 )
  {
    ChangeAcquireResourceType();
    if ( (*(_DWORD *)(v3[49] + 332LL) & 1) != 0 )
      PostUpdateKeyStateEvent();
  }
  if ( !(unsigned int)IsKeyStateCached(a1) )
  {
    if ( v3[52] != grpdeskRitInput )
      goto LABEL_6;
    if ( gpqForeground )
    {
      v7 = *(_QWORD *)(gpqForeground + 372LL);
      v8 = v3[48];
      v9 = *(_QWORD *)(v8 + 832);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v9 <= (unsigned int)v7 )
        {
          if ( (_DWORD)v9 != (_DWORD)v7
            || (v10 = HIDWORD(v9), v11 = HIDWORD(v7), (_DWORD)v10 != (_DWORD)v11)
            && (_DWORD)v10 != -1
            && (_DWORD)v11 != -1 )
          {
            if ( *(int *)(v8 + 12) >= 0 && !IsForegroundShellFrameQueueAccessible((__int64)v3) )
            {
              EtwTraceUIPIInputError(v3, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 372LL), 3);
              goto LABEL_6;
            }
          }
        }
      }
    }
  }
  KeyState = GetKeyState(a1);
LABEL_6:
  *(_DWORD *)(v3[55] + 112LL) = *(_DWORD *)(gpsi + 4248LL);
  v5 = v3[55];
  *(_QWORD *)(v5 + 116) = *(_QWORD *)(v3[49] + 184LL);
  UserSessionSwitchLeaveCrit(v5, gpsi);
  return KeyState;
}
