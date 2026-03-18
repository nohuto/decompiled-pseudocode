/*
 * XREFs of NtUserSetWindowFNID @ 0x1C01188A0
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0065CC0 (IsWindowBeingDestroyed.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetWindowFNID(__int64 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rcx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  v8 = v4;
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v5);
    v6 = *(_QWORD *)(v8 + 16);
    if ( *(_QWORD *)(v6 + 376) == CurrentProcessWin32Process )
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
      v10 = 87LL;
    }
    else
    {
      v10 = 5LL;
    }
    UserSetLastError(v10);
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
