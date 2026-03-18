/*
 * XREFs of NtUserSetProcessRestrictionExemption @ 0x1C02208A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetProcessRestrictionExemption(int a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = 1;
  EnterCrit(1LL);
  if ( (unsigned __int8)ExQueryFastCacheDevLicense() )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    *(_DWORD *)(CurrentProcessWin32Process + 776) ^= (*(_DWORD *)(CurrentProcessWin32Process + 776) ^ (a1 << 8)) & 0x100;
  }
  else
  {
    v2 = 0;
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v2;
}
