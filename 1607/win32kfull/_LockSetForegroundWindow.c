/*
 * XREFs of _LockSetForegroundWindow @ 0x1C01CAB60
 * Callers:
 *     <none>
 * Callees:
 *     CanForceForeground @ 0x1C009AF60 (CanForceForeground.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall LockSetForegroundWindow(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 CurrentProcessWin32Process; // rdi
  int v4; // ebx
  __int64 v5; // rcx

  v2 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
    goto LABEL_11;
  v4 = v2 - 1;
  if ( !v4 )
  {
    if ( (unsigned int)CanForceForeground(CurrentProcessWin32Process) && !gppiLockSFW )
    {
      MEMORY[0] = CurrentProcessWin32Process;
      return 1LL;
    }
LABEL_11:
    v5 = 5LL;
    goto LABEL_12;
  }
  if ( v4 == 1 )
  {
    if ( CurrentProcessWin32Process == gppiLockSFW )
    {
      gppiLockSFW = 0LL;
      return 1LL;
    }
    goto LABEL_11;
  }
  v5 = 87LL;
LABEL_12:
  UserSetLastError(v5);
  return 0LL;
}
