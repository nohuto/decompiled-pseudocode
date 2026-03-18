/*
 * XREFs of NtUserSetWindowsHookEx @ 0x1C00A4740
 * Callers:
 *     <none>
 * Callees:
 *     PtiFromThreadId @ 0x1C0057448 (PtiFromThreadId.c)
 *     zzzSetWindowsHookEx @ 0x1C00A4854 (zzzSetWindowsHookEx.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetWindowsHookEx(__int64 a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 CurrentProcess; // rax
  unsigned __int64 ProcessPeb; // rax
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx

  EnterCrit(0LL, 1LL);
  v11 = 0LL;
  if ( a3 )
  {
    v12 = PtiFromThreadId(a3);
    if ( !v12 )
    {
      UserSetLastError(87LL);
      goto LABEL_11;
    }
  }
  else
  {
    LODWORD(v12) = 0;
  }
  if ( a1 )
  {
    CurrentProcess = PsGetCurrentProcess(v10);
    ProcessPeb = PsGetProcessPeb(CurrentProcess);
    if ( ProcessPeb + 1952 > W32UserProbeAddress || ProcessPeb + 1952 < ProcessPeb )
      *W32UserProbeAddress = 0;
    if ( *(_QWORD *)(ProcessPeb + 16) == a1 )
    {
      LODWORD(a1) = 0;
      a2 = 0;
    }
  }
  v15 = (__int64 *)zzzSetWindowsHookEx(a1, a2, v12, a4, a5, a6);
  if ( v15 )
    v11 = *v15;
LABEL_11:
  UserSessionSwitchLeaveCrit(v17, v16);
  return v11;
}
