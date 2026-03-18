/*
 * XREFs of NtUserSetWindowsHookEx @ 0x1C0049BD0
 * Callers:
 *     <none>
 * Callees:
 *     zzzSetWindowsHookEx @ 0x1C0049CE8 (zzzSetWindowsHookEx.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     PtiFromThreadId @ 0x1C00911E4 (PtiFromThreadId.c)
 */

__int64 __fastcall NtUserSetWindowsHookEx(__int64 a1, int a2, unsigned int a3, int a4, __int64 a5, int a6)
{
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 CurrentProcess; // rax
  unsigned __int64 ProcessPeb; // rax

  EnterCrit(1LL);
  v10 = 0LL;
  if ( a3 )
  {
    v11 = PtiFromThreadId(a3);
    if ( !v11 )
    {
      UserSetLastError(87LL);
      goto LABEL_6;
    }
  }
  else
  {
    LODWORD(v11) = 0;
  }
  if ( a1 )
  {
    CurrentProcess = PsGetCurrentProcess();
    ProcessPeb = PsGetProcessPeb(CurrentProcess);
    if ( ProcessPeb + 904 > W32UserProbeAddress || ProcessPeb + 904 < ProcessPeb )
      *W32UserProbeAddress = 0;
    if ( *(_QWORD *)(ProcessPeb + 16) == a1 )
    {
      LODWORD(a1) = 0;
      a2 = 0;
    }
  }
  v12 = (__int64 *)zzzSetWindowsHookEx(a1, a2, v11, a4, a5, a6);
  if ( v12 )
    v10 = *v12;
LABEL_6:
  UserSessionSwitchLeaveCrit(v14, v13);
  return v10;
}
