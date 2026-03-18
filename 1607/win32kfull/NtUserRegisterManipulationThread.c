/*
 * XREFs of NtUserRegisterManipulationThread @ 0x1C0134E70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserRegisterManipulationThread(__int64 a1)
{
  __int64 v2; // rcx
  __int64 CurrentProcess; // rax
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // rcx

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v2);
  v5 = 0;
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v5 = 1;
    glpfnManipulationThreadCallback = a1;
    v6 = gptiCurrent;
    gptiManipulationThread = gptiCurrent;
  }
  else
  {
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit(v6, v4);
  return v5;
}
