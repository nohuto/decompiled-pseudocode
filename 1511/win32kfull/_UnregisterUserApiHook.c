/*
 * XREFs of _UnregisterUserApiHook @ 0x1C0113F10
 * Callers:
 *     NtUserUnregisterUserApiHook @ 0x1C0221780 (NtUserUnregisterUserApiHook.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     RemoveHmodDependency @ 0x1C00849F0 (RemoveHmodDependency.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UnregisterUserApiHook(__int64 a1)
{
  int v1; // r9d
  __int64 result; // rax

  if ( PsGetCurrentProcessWin32Process(a1) == gppiUserApiHook )
  {
    gppiUserApiHook = 0LL;
    if ( gihmodUserApiHook >= 0 )
    {
      RemoveHmodDependency(gihmodUserApiHook);
      gihmodUserApiHook = -1;
      RemoveHmodDependency(gihmodUserApiHookWOW);
      gihmodUserApiHookWOW = v1;
    }
    result = 1LL;
    *gpsi &= ~0x10u;
  }
  else
  {
    UserSetLastError(5);
    return 0LL;
  }
  return result;
}
