/*
 * XREFs of NtUserSetProcessRestrictionExemption @ 0x1402BD510
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetProcessRestrictionExemption(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // r8
  __int64 v6; // rcx

  v1 = a1;
  EnterCrit(0LL, 0LL);
  v3 = 0LL;
  if ( (unsigned __int8)ExQueryFastCacheDevLicense() )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
    v5 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v5 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    v3 = 1LL;
    v6 = v1 << 8;
    *(_QWORD *)(v5 + 808) = (v1 << 8) ^ (*(_QWORD *)(v5 + 808) ^ (v1 << 8)) & 0xFFFFFFFFFFFFFEFFuLL;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v3;
}
