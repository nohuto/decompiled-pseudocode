/*
 * XREFs of NtUserSetWindowFNID @ 0x1C00F00B0
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0056CC4 (IsWindowBeingDestroyed.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetWindowFNID(__int64 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 CurrentProcessWin32Process; // rax
  int v10; // ecx

  EnterCrit(1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  v8 = v4;
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    v6 = *(_QWORD *)(v8 + 16);
    if ( *(_QWORD *)(v6 + 384) == CurrentProcessWin32Process )
    {
      if ( a2 == 0x4000
        || (unsigned __int16)(a2 - 673) <= 9u
        && (*(_WORD *)(v8 + 66) & 0x3FFF) == 0
        && !(unsigned int)IsWindowBeingDestroyed(v8) )
      {
        *(_WORD *)(v8 + 66) |= a2;
        v7 = 1;
        goto LABEL_11;
      }
      v10 = 87;
    }
    else
    {
      v10 = 5;
    }
    UserSetLastError(v10);
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
