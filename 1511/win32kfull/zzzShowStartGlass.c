/*
 * XREFs of zzzShowStartGlass @ 0x1C01D3460
 * Callers:
 *     <none>
 * Callees:
 *     zzzCalcStartCursorHide @ 0x1C0053820 (zzzCalcStartCursorHide.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzShowStartGlass(__int64 a1)
{
  int v1; // ebx
  __int64 CurrentProcessWin32Process; // rax

  v1 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x400) != 0 )
  {
    gdwPUDFlags |= 0x8000000u;
    *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x100u;
  }
  *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x400u;
  zzzCalcStartCursorHide(CurrentProcessWin32Process, v1);
  return 1LL;
}
