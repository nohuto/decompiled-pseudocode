/*
 * XREFs of NtUserSetWindowFNID @ 0x1C00F5D30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetWindowFNID(__int64 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 CurrentProcessWin32Process; // rax
  int v11; // ecx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  v8 = v4;
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    v6 = *(_QWORD *)(v8 + 16);
    if ( *(_QWORD *)(v6 + 376) == CurrentProcessWin32Process )
    {
      if ( a2 == 0x4000 || (v6 = 673LL, (unsigned __int16)(a2 - 673) <= 9u) && (*(_WORD *)(v8 + 66) & 0x3FFF) == 0 )
      {
        *(_WORD *)(v8 + 66) |= a2;
        v7 = 1;
        goto LABEL_7;
      }
      v11 = 87;
    }
    else
    {
      v11 = 5;
    }
    UserSetLastError(v11);
  }
LABEL_7:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
