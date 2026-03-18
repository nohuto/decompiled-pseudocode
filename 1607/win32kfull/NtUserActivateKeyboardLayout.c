/*
 * XREFs of NtUserActivateKeyboardLayout @ 0x1C0210B20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _GetProcessWindowStation @ 0x1C00DAF00 (_GetProcessWindowStation.c)
 *     xxxActivateKeyboardLayout @ 0x1C01D56D0 (xxxActivateKeyboardLayout.c)
 */

struct tagKL *__fastcall NtUserActivateKeyboardLayout(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  struct tagKL *v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 ProcessWindowStation; // rax

  EnterCrit(0LL, 1LL);
  v5 = 0LL;
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x20000000) != 0 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 720LL);
    v6 = *(_DWORD *)(v4 + 24) & 1;
  }
  else
  {
    v6 = 0;
  }
  if ( v6 )
  {
    UserSetLastError(5LL);
  }
  else
  {
    ProcessWindowStation = GetProcessWindowStation(0LL, v4);
    v5 = xxxActivateKeyboardLayout(ProcessWindowStation, a1, a2, 0LL);
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v5;
}
