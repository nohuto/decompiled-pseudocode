/*
 * XREFs of NtUserOpenDesktop @ 0x1C01205B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _OpenDesktop @ 0x1C0120630 (_OpenDesktop.c)
 */

__int64 __fastcall NtUserOpenDesktop(int a1, int a2, int a3)
{
  __int64 v3; // rbp
  int v7; // edx
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  ULONG v12; // eax
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = OpenDesktop(a1, v7, a2, a3, (__int64)&v13);
  if ( v8 < 0 )
  {
    v12 = RtlNtStatusToDosError(v8);
    UserSetLastError(v12);
  }
  else
  {
    v3 = v13;
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return v3;
}
