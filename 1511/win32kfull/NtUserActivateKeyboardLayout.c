/*
 * XREFs of NtUserActivateKeyboardLayout @ 0x1C0099FF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _GetProcessWindowStation @ 0x1C00699F0 (_GetProcessWindowStation.c)
 *     xxxActivateKeyboardLayout @ 0x1C0099F54 (xxxActivateKeyboardLayout.c)
 */

struct tagKL *__fastcall NtUserActivateKeyboardLayout(__int64 a1, unsigned int a2)
{
  struct tagKL *v4; // rbx
  int v5; // eax
  __int64 ProcessWindowStation; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx

  EnterCrit(0LL, 1LL);
  v4 = 0LL;
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x20000000) != 0 )
    v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 728LL) + 24LL) & 1;
  else
    v5 = 0;
  if ( v5 )
  {
    UserSetLastError(5);
  }
  else
  {
    ProcessWindowStation = GetProcessWindowStation(0LL);
    v4 = xxxActivateKeyboardLayout(ProcessWindowStation, a1, a2, 0LL);
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v4;
}
