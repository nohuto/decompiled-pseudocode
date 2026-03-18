/*
 * XREFs of _EnableSessionForMMCSS @ 0x1C0119FE0
 * Callers:
 *     <none>
 * Callees:
 *     WakeRIT @ 0x1C011A044 (WakeRIT.c)
 */

__int64 __fastcall EnableSessionForMMCSS(int a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 CurrentProcess; // rax

  v2 = 0;
  GreLockDwmState();
  CurrentProcess = PsGetCurrentProcess(v3);
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
