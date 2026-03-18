/*
 * XREFs of NtUserGetKeyboardState @ 0x1C0095470
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsKeyStateCached @ 0x1C0095810 (IsKeyStateCached.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     IsForegroundShellFrameQueueAccessible @ 0x1C00A9964 (IsForegroundShellFrameQueueAccessible.c)
 */

__int64 __fastcall NtUserGetKeyboardState(_BYTE *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  BOOL v8; // r14d
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  _BYTE *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r15
  int v17; // esi
  _BYTE *v18; // rdi
  int v19; // r8d
  unsigned __int64 v20; // r9

  EnterSharedCrit(0LL, 1LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v1, v2, v3);
  v7 = ThreadWin32Thread;
  v8 = *(_QWORD *)(ThreadWin32Thread + 408) == grpdeskRitInput;
  if ( gpqForeground )
  {
    v9 = *(_QWORD *)(gpqForeground + 380LL);
    v5 = *(_QWORD *)(ThreadWin32Thread + 376);
    v10 = *(_QWORD *)(v5 + 824);
    if ( gbEnforceUIPI )
    {
      if ( (unsigned int)v10 <= (unsigned int)v9 )
      {
        if ( (_DWORD)v10 != (_DWORD)v9
          || (v11 = HIDWORD(v10), v12 = HIDWORD(v9), (_DWORD)v11 != (_DWORD)v12)
          && (_DWORD)v12 != -1
          && (_DWORD)v11 != -1 )
        {
          if ( *(int *)(v5 + 12) >= 0 && !(unsigned int)IsForegroundShellFrameQueueAccessible(v7) )
          {
            EtwTraceUIPIInputError(v7, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 3);
            v8 = 0;
          }
        }
      }
    }
  }
  v13 = a1;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v13 = (_BYTE *)W32UserProbeAddress;
  *v13 = *v13;
  v13[255] = v13[255];
  v16 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v13, v5, v6) + 384);
  v17 = 0;
  v18 = a1;
  while ( v17 < 256 )
  {
    *v18 = 0;
    if ( v8 || (unsigned int)IsKeyStateCached((unsigned int)v17) )
    {
      v19 = v17 & 3;
      v20 = (unsigned __int64)(unsigned __int8)v17 >> 2;
      if ( ((unsigned __int8)(1 << (2 * v19)) & *(_BYTE *)(v20 + v16 + 192)) != 0 )
        *v18 = 0x80;
      v15 = (unsigned int)(2 * v19 + 1);
      v14 = (unsigned int)(1 << (2 * v19 + 1));
      if ( ((unsigned __int8)v14 & *(_BYTE *)(v20 + v16 + 192)) != 0 )
        *v18 |= 1u;
    }
    ++v17;
    ++v18;
  }
  UserSessionSwitchLeaveCrit(v15, v14);
  return 1LL;
}
