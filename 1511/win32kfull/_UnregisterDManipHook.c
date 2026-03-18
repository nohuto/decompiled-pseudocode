/*
 * XREFs of _UnregisterDManipHook @ 0x1C0114090
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     RemoveHmodDependency @ 0x1C00849F0 (RemoveHmodDependency.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UnregisterDManipHook(__int64 a1)
{
  int v1; // r9d
  __int64 result; // rax

  if ( PsGetCurrentProcessWin32Process(a1) == gppiDManipHook )
  {
    gppiDManipHook = 0LL;
    if ( gihmodDManipHook >= 0 )
    {
      RemoveHmodDependency(gihmodDManipHook);
      gihmodDManipHook = -1;
      RemoveHmodDependency(gihmodDManipHookWOW);
      gihmodDManipHookWOW = v1;
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
