/*
 * XREFs of NtUserModifyUserStartupInfoFlags @ 0x1402B8830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserModifyUserStartupInfoFlags(int a1, int a2)
{
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx

  EnterCrit(0LL, 0LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  v6 = (unsigned int)~a1;
  v7 = a2 & a1 | v6 & *(_DWORD *)(CurrentProcessWin32Process + 792);
  v8 = PsGetCurrentProcessWin32Process(v6);
  if ( v8 )
  {
    v9 = -*(_QWORD *)v8;
    v8 &= -(__int64)(*(_QWORD *)v8 != 0LL);
  }
  *(_DWORD *)(v8 + 792) = v7;
  UserSessionSwitchLeaveCrit(v9);
  return 1LL;
}
