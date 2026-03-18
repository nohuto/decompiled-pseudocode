/*
 * XREFs of _EnableSessionForMMCSS @ 0x1C00F4280
 * Callers:
 *     <none>
 * Callees:
 *     WakeRIT @ 0x1C00F42E4 (WakeRIT.c)
 */

__int64 __fastcall EnableSessionForMMCSS(int a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 CurrentProcess; // rax

  v2 = 0;
  GreLockDwmState();
  CurrentProcess = PsGetCurrentProcess(v4, v3);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    if ( a1 )
      *gpsi |= 0x1000u;
    else
      *gpsi &= ~0x1000u;
    WakeRIT(16LL);
    v2 = 1;
  }
  GreUnlockDwmState();
  return v2;
}
