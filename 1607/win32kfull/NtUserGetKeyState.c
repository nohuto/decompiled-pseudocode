/*
 * XREFs of NtUserGetKeyState @ 0x1C0095670
 * Callers:
 *     <none>
 * Callees:
 *     IsKeyStateCached @ 0x1C0095810 (IsKeyStateCached.c)
 *     _GetKeyState @ 0x1C0095870 (_GetKeyState.c)
 *     PostUpdateKeyStateEvent @ 0x1C0096168 (PostUpdateKeyStateEvent.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     IsForegroundShellFrameQueueAccessible @ 0x1C00A9964 (IsForegroundShellFrameQueueAccessible.c)
 */

__int64 __fastcall NtUserGetKeyState(unsigned int a1)
{
  __int16 KeyState; // bx
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *ThreadWin32Thread; // rax
  __int64 v8; // rcx
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax

  EnterSharedCrit(0LL, 1LL);
  KeyState = 0;
  v3 = 0LL;
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread(), v4, v5, v6);
  if ( ThreadWin32Thread )
    v3 = (_QWORD *)*ThreadWin32Thread;
  if ( (*(_DWORD *)(v3[48] + 340LL) & 1) != 0 )
  {
    ChangeAcquireResourceType();
    v10 = v3[48];
    if ( (*(_DWORD *)(v10 + 340) & 1) != 0 )
      PostUpdateKeyStateEvent(v10);
  }
  if ( !(unsigned int)IsKeyStateCached(a1) )
  {
    if ( v3[51] != grpdeskRitInput )
      goto LABEL_6;
    if ( gpqForeground )
    {
      v11 = *(_QWORD *)(gpqForeground + 380LL);
      v12 = v3[47];
      v13 = *(_QWORD *)(v12 + 824);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v13 <= (unsigned int)v11 )
        {
          if ( (_DWORD)v13 != (_DWORD)v11
            || (v14 = HIDWORD(v13), v15 = HIDWORD(v11), (_DWORD)v14 != (_DWORD)v15)
            && (_DWORD)v14 != -1
            && (_DWORD)v15 != -1 )
          {
            if ( *(int *)(v12 + 12) >= 0 && !(unsigned int)IsForegroundShellFrameQueueAccessible(v3) )
            {
              EtwTraceUIPIInputError(v3, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 3);
              goto LABEL_6;
            }
          }
        }
      }
    }
  }
  KeyState = GetKeyState(a1);
LABEL_6:
  *(_DWORD *)(v3[54] + 112LL) = *(_DWORD *)(gpsi + 5640LL);
  v8 = v3[54];
  *(_QWORD *)(v8 + 116) = *(_QWORD *)(v3[48] + 192LL);
  UserSessionSwitchLeaveCrit(v8, gpsi);
  return KeyState;
}
