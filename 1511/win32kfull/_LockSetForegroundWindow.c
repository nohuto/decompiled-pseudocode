/*
 * XREFs of _LockSetForegroundWindow @ 0x1C01D2EF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     CanForceForeground @ 0x1C008B4E0 (CanForceForeground.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall LockSetForegroundWindow(__int64 a1)
{
  int v1; // ebx
  const struct tagPROCESSINFO *CurrentProcessWin32Process; // rdi
  int v3; // ebx
  int v4; // ecx

  v1 = a1;
  CurrentProcessWin32Process = (const struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1);
  if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
    goto LABEL_11;
  v3 = v1 - 1;
  if ( !v3 )
  {
    if ( (unsigned int)CanForceForeground(CurrentProcessWin32Process) && !gppiLockSFW )
    {
      MEMORY[0] = CurrentProcessWin32Process;
      return 1LL;
    }
LABEL_11:
    v4 = 5;
    goto LABEL_12;
  }
  if ( v3 == 1 )
  {
    if ( CurrentProcessWin32Process == (const struct tagPROCESSINFO *)gppiLockSFW )
    {
      gppiLockSFW = 0LL;
      return 1LL;
    }
    goto LABEL_11;
  }
  v4 = 87;
LABEL_12:
  UserSetLastError(v4);
  return 0LL;
}
