/*
 * XREFs of NtUserGetKeyState @ 0x1C00934A0
 * Callers:
 *     <none>
 * Callees:
 *     IsForegroundShellFrameQueueAccessible @ 0x1C0003224 (IsForegroundShellFrameQueueAccessible.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     IsKeyStateCached @ 0x1C0093640 (IsKeyStateCached.c)
 *     _GetKeyState @ 0x1C00936A0 (_GetKeyState.c)
 *     PostUpdateKeyStateEvent @ 0x1C0093FF8 (PostUpdateKeyStateEvent.c)
 */

__int64 __fastcall NtUserGetKeyState(unsigned int a1)
{
  __int16 KeyState; // bx
  _QWORD *v3; // rdi
  _QWORD **ThreadWin32Thread; // rax
  __int64 v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax

  EnterSharedCrit(0LL, 1LL);
  KeyState = 0;
  v3 = 0LL;
  ThreadWin32Thread = (_QWORD **)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v3 = *ThreadWin32Thread;
  if ( (*(_DWORD *)(v3[48] + 332LL) & 1) != 0 )
  {
    ChangeAcquireResourceType();
    v10 = v3[48];
    if ( (*(_DWORD *)(v10 + 332) & 1) != 0 )
      PostUpdateKeyStateEvent(v10, v7, v8, v9);
  }
  if ( !(unsigned int)IsKeyStateCached(a1) )
  {
    if ( v3[51] != grpdeskRitInput )
      goto LABEL_6;
    if ( gpqForeground )
    {
      v11 = *(_QWORD *)(gpqForeground + 372LL);
      v12 = v3[47];
      v13 = *(_QWORD *)(v12 + 832);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v13 <= (unsigned int)v11 )
        {
          if ( (_DWORD)v13 != (_DWORD)v11
            || (v14 = HIDWORD(v13), v15 = HIDWORD(v11), (_DWORD)v14 != (_DWORD)v15)
            && (_DWORD)v14 != -1
            && (_DWORD)v15 != -1 )
          {
            if ( *(int *)(v12 + 12) >= 0 && !IsForegroundShellFrameQueueAccessible((__int64)v3) )
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
  *(_DWORD *)(v3[54] + 112LL) = *(_DWORD *)(gpsi + 4248LL);
  v5 = v3[54];
  *(_QWORD *)(v5 + 116) = *(_QWORD *)(v3[48] + 184LL);
  UserSessionSwitchLeaveCrit(v5, gpsi);
  return KeyState;
}
