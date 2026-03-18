/*
 * XREFs of NtUserGetKeyboardState @ 0x1C00932A0
 * Callers:
 *     <none>
 * Callees:
 *     IsForegroundShellFrameQueueAccessible @ 0x1C0003224 (IsForegroundShellFrameQueueAccessible.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsKeyStateCached @ 0x1C0093640 (IsKeyStateCached.c)
 */

__int64 __fastcall NtUserGetKeyboardState(_BYTE *a1)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v2; // rdi
  BOOL v3; // r14d
  unsigned __int64 v4; // rcx
  __int64 v5; // r8
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  _BYTE *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r15
  int v13; // esi
  _BYTE *v14; // rdi
  int v15; // r8d
  unsigned __int64 v16; // r9

  EnterSharedCrit(0LL, 1LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v2 = ThreadWin32Thread;
  v3 = *(_QWORD *)(ThreadWin32Thread + 408) == grpdeskRitInput;
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
          if ( *(int *)(v5 + 12) >= 0 && !IsForegroundShellFrameQueueAccessible(v2) )
          {
            EtwTraceUIPIInputError(v2, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 372LL), 3);
            v3 = 0;
          }
        }
      }
    }
  }
  v9 = a1;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v9 = (_BYTE *)W32UserProbeAddress;
  *v9 = *v9;
  v9[255] = v9[255];
  v12 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 384);
  v13 = 0;
  v14 = a1;
  while ( v13 < 256 )
  {
    *v14 = 0;
    if ( v3 || (unsigned int)IsKeyStateCached((unsigned int)v13) )
    {
      v15 = v13 & 3;
      v16 = (unsigned __int64)(unsigned __int8)v13 >> 2;
      if ( ((unsigned __int8)(1 << (2 * v15)) & *(_BYTE *)(v16 + v12 + 184)) != 0 )
        *v14 = 0x80;
      v11 = (unsigned int)(2 * v15 + 1);
      v10 = (unsigned int)(1 << (2 * v15 + 1));
      if ( ((unsigned __int8)v10 & *(_BYTE *)(v16 + v12 + 184)) != 0 )
        *v14 |= 1u;
    }
    ++v13;
    ++v14;
  }
  UserSessionSwitchLeaveCrit(v11, v10);
  return 1LL;
}
