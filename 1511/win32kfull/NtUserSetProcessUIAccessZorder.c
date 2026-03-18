/*
 * XREFs of NtUserSetProcessUIAccessZorder @ 0x1C0220740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserSetProcessUIAccessZorder()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 CurrentProcessWin32Process; // rax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (int)RtlQueryElevationFlags(&v4) >= 0 && (v4 & 1) == 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v1);
    *(_DWORD *)(CurrentProcessWin32Process + 776) |= 2u;
  }
  UserSessionSwitchLeaveCrit(v1, v0);
  return 1LL;
}
