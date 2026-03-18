/*
 * XREFs of NtUserRegisterManipulationThread @ 0x1C0113900
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserRegisterManipulationThread(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 v9; // rcx

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v3, v2, v4, v5);
  v8 = 0;
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v8 = 1;
    glpfnManipulationThreadCallback = a1;
    v9 = gptiCurrent;
    gptiManipulationThread = gptiCurrent;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v9, v7);
  return v8;
}
