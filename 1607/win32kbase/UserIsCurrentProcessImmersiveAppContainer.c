/*
 * XREFs of UserIsCurrentProcessImmersiveAppContainer @ 0x1C0011A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 UserIsCurrentProcessImmersiveAppContainer()
{
  __int64 CurrentProcess; // rax
  __int64 ProcessWin32Process; // rax
  unsigned int v2; // ecx
  int v4; // edx

  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  v2 = 0;
  if ( ProcessWin32Process )
  {
    if ( *(_DWORD *)(ProcessWin32Process + 828) )
    {
      v4 = *(_DWORD *)(ProcessWin32Process + 768);
      if ( (v4 & 0x30) == 0x10 )
        return (v4 & 0x200) == 0;
    }
  }
  return v2;
}
