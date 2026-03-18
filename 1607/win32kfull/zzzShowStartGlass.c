/*
 * XREFs of zzzShowStartGlass @ 0x1C01CB4E0
 * Callers:
 *     <none>
 * Callees:
 *     zzzCalcStartCursorHide @ 0x1C005C530 (zzzCalcStartCursorHide.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzShowStartGlass(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 CurrentProcessWin32Process; // rax

  v2 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x400) != 0 )
  {
    gdwPUDFlags |= 0x8000000u;
    *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x100u;
  }
  *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x400u;
  zzzCalcStartCursorHide(CurrentProcessWin32Process, v2);
  return 1LL;
}
