/*
 * XREFs of NtUserOpenThreadDesktop @ 0x1C0218240
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _OpenThreadDesktop @ 0x1C01DF4E8 (_OpenThreadDesktop.c)
 */

HANDLE __fastcall NtUserOpenThreadDesktop(int a1, char a2, int a3, int a4)
{
  HANDLE v4; // r14
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  ULONG v12; // eax
  HANDLE v14; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  v9 = OpenThreadDesktop(a1, a2, a3, a4, &v14);
  if ( v9 >= 0 )
  {
    v4 = v14;
  }
  else
  {
    v12 = RtlNtStatusToDosError(v9);
    UserSetLastError(v12);
  }
  UserSessionSwitchLeaveCrit(v11, v10);
  return v4;
}
