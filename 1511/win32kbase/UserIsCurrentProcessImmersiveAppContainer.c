/*
 * XREFs of UserIsCurrentProcessImmersiveAppContainer @ 0x1C0048C30
 * Callers:
 *     <none>
 * Callees:
 *     IsImmersiveAppRestricted @ 0x1C0046480 (IsImmersiveAppRestricted.c)
 */

_BOOL8 __fastcall UserIsCurrentProcessImmersiveAppContainer(__int64 a1, __int64 a2)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v4; // rbx
  _BOOL8 result; // rax
  int v6; // eax

  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  v4 = ProcessWin32Process;
  result = 0;
  if ( ProcessWin32Process )
  {
    if ( *(_DWORD *)(ProcessWin32Process + 836) )
    {
      LOBYTE(v6) = IsImmersiveAppRestricted(ProcessWin32Process);
      if ( v6 )
      {
        if ( (*(_DWORD *)(v4 + 776) & 0x200) == 0 )
          return 1;
      }
    }
  }
  return result;
}
