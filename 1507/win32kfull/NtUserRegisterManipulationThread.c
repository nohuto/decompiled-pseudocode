/*
 * XREFs of NtUserRegisterManipulationThread @ 0x1C0157110
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall NtUserRegisterManipulationThread(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rcx

  EnterCrit(1LL);
  CurrentProcess = PsGetCurrentProcess(v3, v2);
  v6 = 0;
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v6 = 1;
    glpfnManipulationThreadCallback = a1;
    v7 = gptiCurrent;
    gptiManipulationThread = gptiCurrent;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v7, v5);
  return v6;
}
