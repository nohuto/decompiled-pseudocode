/*
 * XREFs of NtUserCheckWindowThreadDesktop @ 0x1C0218430
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PtiFromThreadId @ 0x1C0065AC8 (PtiFromThreadId.c)
 *     GetConsoleDesktop @ 0x1C01E8AE8 (GetConsoleDesktop.c)
 */

__int64 __fastcall NtUserCheckWindowThreadDesktop(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  v8 = v4;
  if ( v4 )
  {
    v9 = PtiFromThreadId(a2);
    if ( v9 )
    {
      v7 = ValidatePwndDesktop(v8, v9);
    }
    else if ( (int)GetConsoleDesktop(a2, v11, &v12, &v13) < 0 )
    {
      UserSetLastError(87);
    }
    else
    {
      LOBYTE(v7) = *(_QWORD *)(v8 + 24) == v12;
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
