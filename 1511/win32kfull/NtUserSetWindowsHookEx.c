/*
 * XREFs of NtUserSetWindowsHookEx @ 0x1C00822A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PtiFromThreadId @ 0x1C0065AC8 (PtiFromThreadId.c)
 *     zzzSetWindowsHookEx @ 0x1C00823B4 (zzzSetWindowsHookEx.c)
 */

__int64 __fastcall NtUserSetWindowsHookEx(__int64 a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 CurrentProcess; // rax
  unsigned __int64 ProcessPeb; // rax
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx

  EnterCrit(0LL, 1LL);
  v14 = 0LL;
  if ( a3 )
  {
    v15 = PtiFromThreadId(a3);
    if ( !v15 )
    {
      UserSetLastError(87);
      goto LABEL_12;
    }
  }
  else
  {
    LODWORD(v15) = 0;
  }
  if ( a1 )
  {
    CurrentProcess = PsGetCurrentProcess(v11, v10, v12, v13);
    ProcessPeb = PsGetProcessPeb(CurrentProcess);
    if ( ProcessPeb + 1952 > W32UserProbeAddress || ProcessPeb + 1952 < ProcessPeb )
      *W32UserProbeAddress = 0;
    if ( *(_QWORD *)(ProcessPeb + 16) == a1 )
    {
      LODWORD(a1) = 0;
      a2 = 0;
    }
  }
  v18 = (__int64 *)zzzSetWindowsHookEx(a1, a2, v15, a4, a5, a6);
  if ( v18 )
    v14 = *v18;
LABEL_12:
  UserSessionSwitchLeaveCrit(v20, v19);
  return v14;
}
