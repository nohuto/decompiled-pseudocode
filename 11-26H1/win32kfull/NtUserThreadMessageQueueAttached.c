/*
 * XREFs of NtUserThreadMessageQueueAttached @ 0x1401AB260
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 */

_BOOL8 __fastcall NtUserThreadMessageQueueAttached(unsigned int a1)
{
  __int64 v2; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdx
  int v7; // eax
  _BOOL8 v8; // rbx
  __int64 v10; // rax

  EnterCrit(0LL, 0LL);
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v2);
  if ( !CurrentThreadWin32Thread )
    goto LABEL_7;
  v5 = *CurrentThreadWin32Thread;
  if ( !*CurrentThreadWin32Thread )
    goto LABEL_7;
  *(_QWORD *)(v5 + 1360) &= ~0x200uLL;
  if ( a1 )
  {
    v10 = PtiFromThreadId(a1);
    if ( v10 )
    {
      v8 = *(_QWORD *)(v5 + 464) == *(_QWORD *)(v10 + 464);
      goto LABEL_8;
    }
    UserSetLastError(87);
    goto LABEL_7;
  }
  v6 = *(_QWORD *)(v5 + 464);
  v7 = 0;
  v4 = *(_QWORD *)(v6 + 528);
  v8 = 1LL;
  if ( !v4 || (v7 = 1, !*(_QWORD *)(v4 + 1688)) )
  {
    v4 = *(_QWORD *)(v6 + 536);
    if ( !v4 || (unsigned int)(v7 + 1) <= 1 && !*(_QWORD *)(v4 + 1696) )
LABEL_7:
      v8 = 0LL;
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v4);
  return v8;
}
