/*
 * XREFs of NtUserKillTimer @ 0x140020EF0
 * Callers:
 *     <none>
 * Callees:
 *     FreeTimer @ 0x140020580 (FreeTimer.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 */

__int64 __fastcall NtUserKillTimer(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  _QWORD **v7; // r15
  __int64 v8; // rbp
  _QWORD *i; // rsi
  int v10; // eax
  __int64 CurrentProcessWin32Process; // rax
  _BYTE v13[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck(v13);
  if ( a1 )
  {
    v6 = ValidateHwnd(a1);
    if ( !v6 )
    {
      v8 = 0LL;
      goto LABEL_14;
    }
  }
  else
  {
    v6 = 0LL;
  }
  v7 = (_QWORD **)(W32GetUserSessionState(v5, v4) + 16 * ((((_BYTE)a2 + BYTE1(v6)) & 0x3F) + 3853LL));
  v8 = 0LL;
  for ( i = *v7; i != v7; i = (_QWORD *)*i )
  {
    if ( *(i - 2) == v6 && *(i - 1) == a2 )
    {
      v10 = *((_DWORD *)i - 18);
      if ( (v10 & 0x1006) == 0 )
      {
        if ( (v10 & 0x40) != 0 )
          goto LABEL_13;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
        if ( CurrentProcessWin32Process )
          CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        v5 = *(i - 12);
        if ( CurrentProcessWin32Process == *(_QWORD *)(v5 + 456) || !v6 && (*(_DWORD *)(i - 9) & 4) == 0 )
        {
LABEL_13:
          FreeTimer((struct tagTIMER *)(i - 15));
          v8 = 1LL;
          break;
        }
      }
    }
  }
LABEL_14:
  if ( v13[0] )
  {
    v5 = v14;
    --*(_DWORD *)(v14 + 28);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v8;
}
