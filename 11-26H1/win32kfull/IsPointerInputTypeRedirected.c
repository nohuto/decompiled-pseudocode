/*
 * XREFs of IsPointerInputTypeRedirected @ 0x1402AA430
 * Callers:
 *     <none>
 * Callees:
 *     IsPointerInputRedirected @ 0x1401C0970 (IsPointerInputRedirected.c)
 */

__int64 __fastcall IsPointerInputTypeRedirected(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rcx

  v2 = a1;
  v3 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19176) + 8LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
  v6 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v6 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  return IsPointerInputRedirected(v6, v3, v2, 0LL);
}
