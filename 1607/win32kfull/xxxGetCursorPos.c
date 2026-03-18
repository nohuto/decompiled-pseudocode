/*
 * XREFs of xxxGetCursorPos @ 0x1C005C1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?LogicalCursorPosFromDpiAwarenessContext@@YA?AUtagPOINT@@K@Z @ 0x1C005C35C (-LogicalCursorPosFromDpiAwarenessContext@@YA-AUtagPOINT@@K@Z.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0084C90 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall xxxGetCursorPos(struct tagPOINT *a1, __int64 a2)
{
  int v2; // ebx
  __int64 CurrentProcessWin32Process; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  int v9; // ebx
  int v10; // edi
  __int64 v11; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // ecx
  struct tagPOINT v16; // rbx
  __int64 v17; // rcx
  struct tagPOINT *v18; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx

  v2 = a2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000) == 0 )
    {
      v21 = 1459LL;
      goto LABEL_23;
    }
    if ( !RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 648), 2u) )
      goto LABEL_22;
  }
  v8 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( v8 )
  {
    if ( v8 != grpdeskRitInput )
    {
LABEL_22:
      v21 = 5LL;
LABEL_23:
      UserSetLastError(v21);
      return 0LL;
    }
  }
  v9 = v2 - 1;
  if ( !v9 )
  {
    v10 = 18;
    v11 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v5, v6, v7);
    if ( ThreadWin32Thread )
      v11 = *ThreadWin32Thread;
    if ( v11 )
    {
      if ( *(_QWORD *)(v11 + 352) )
        CaptureAndValidateUserModeDpiAwarenessContext(v11);
      if ( *(_DWORD *)(v11 + 340) )
      {
        v10 = *(_DWORD *)(v11 + 340);
      }
      else
      {
        v20 = PsGetCurrentProcessWin32Process(v14, v13);
        if ( v20 )
          v10 = *(_DWORD *)(v20 + 280);
      }
    }
    CurrentThreadDpiAwarenessContext = v10;
    goto LABEL_15;
  }
  if ( v9 != 1 )
    return 0LL;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v8, v5, v6);
LABEL_15:
  v16 = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
  if ( ((PsGetCurrentProcessWow64Process(v17) != 0 ? 0 : 3) & (unsigned int)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  v18 = a1;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v18 = (struct tagPOINT *)W32UserProbeAddress;
  LOBYTE(v18->x) = v18->x;
  HIBYTE(v18->y) = HIBYTE(v18->y);
  *a1 = v16;
  return 1LL;
}
