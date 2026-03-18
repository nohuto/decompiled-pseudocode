/*
 * XREFs of UserGetCurrentDesktopId @ 0x1C00B170C
 * Callers:
 *     hdcOpenDCW @ 0x1C0020120 (hdcOpenDCW.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall UserGetCurrentDesktopId(_QWORD *a1)
{
  unsigned int v2; // ebx

  *a1 = -1LL;
  v2 = 0;
  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) == grpdeskRitInput )
  {
    v2 = 1;
    *a1 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 40LL);
  }
  return v2;
}
