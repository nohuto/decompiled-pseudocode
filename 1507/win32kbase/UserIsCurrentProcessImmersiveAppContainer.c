/*
 * XREFs of UserIsCurrentProcessImmersiveAppContainer @ 0x1C000B530
 * Callers:
 *     <none>
 * Callees:
 *     IsImmersiveAppRestricted @ 0x1C0051DB0 (IsImmersiveAppRestricted.c)
 */

_BOOL8 UserIsCurrentProcessImmersiveAppContainer()
{
  __int64 CurrentProcess; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v2; // rbx

  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  v2 = ProcessWin32Process;
  return ProcessWin32Process
      && *(_DWORD *)(ProcessWin32Process + 836)
      && (unsigned int)IsImmersiveAppRestricted(ProcessWin32Process)
      && (*(_DWORD *)(v2 + 776) & 0x200) == 0;
}
