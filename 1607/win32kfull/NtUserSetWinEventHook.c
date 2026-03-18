/*
 * XREFs of NtUserSetWinEventHook @ 0x1C00A9280
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _SetWinEventHook @ 0x1C00A9348 (_SetWinEventHook.c)
 */

__int64 __fastcall NtUserSetWinEventHook(
        unsigned int a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  __int64 *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx

  EnterCrit(0LL, 1LL);
  if ( (a8 & 0xFFFFFFF0) != 0 )
  {
    UserSetLastError(1004LL);
    v13 = 0LL;
  }
  else
  {
    v12 = (__int64 *)SetWinEventHook(a1, a2, a3, a4, a5, (int)a6, a7, a8);
    v13 = 0LL;
    if ( v12 )
      v13 = *v12;
    EtwTraceAuditApiSetWinEventHook(a1, a2, a6, a7, a8, v13);
  }
  UserSessionSwitchLeaveCrit(v15, v14);
  return v13;
}
