/*
 * XREFs of _UnregisterUserApiHook @ 0x1C0135250
 * Callers:
 *     NtUserUnregisterUserApiHook @ 0x1C021B8C0 (NtUserUnregisterUserApiHook.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     RemoveHmodDependency @ 0x1C00A758C (RemoveHmodDependency.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UnregisterUserApiHook(__int64 a1, __int64 a2)
{
  int v2; // r9d
  __int64 result; // rax

  if ( PsGetCurrentProcessWin32Process(a1, a2) == gppiUserApiHook )
  {
    gppiUserApiHook = 0LL;
    if ( gihmodUserApiHook >= 0 )
    {
      RemoveHmodDependency(gihmodUserApiHook);
      gihmodUserApiHook = -1;
      RemoveHmodDependency(gihmodUserApiHookWOW);
      gihmodUserApiHookWOW = v2;
    }
    result = 1LL;
    *gpsi &= ~0x10u;
  }
  else
  {
    UserSetLastError(5LL);
    return 0LL;
  }
  return result;
}
