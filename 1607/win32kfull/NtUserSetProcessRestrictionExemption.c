/*
 * XREFs of NtUserSetProcessRestrictionExemption @ 0x1C021A570
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetProcessRestrictionExemption(int a1)
{
  int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = 1;
  EnterCrit(0LL, 1LL);
  if ( (unsigned __int8)ExQueryFastCacheDevLicense() )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4, v3);
    *(_DWORD *)(CurrentProcessWin32Process + 768) ^= (*(_DWORD *)(CurrentProcessWin32Process + 768) ^ (a1 << 8)) & 0x100;
  }
  else
  {
    v2 = 0;
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return v2;
}
