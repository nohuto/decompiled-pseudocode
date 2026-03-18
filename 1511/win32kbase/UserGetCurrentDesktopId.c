/*
 * XREFs of UserGetCurrentDesktopId @ 0x1C00A8F80
 * Callers:
 *     hdcOpenDCW @ 0x1C0042710 (hdcOpenDCW.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall UserGetCurrentDesktopId(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 ThreadWin32Thread; // rdx
  __int64 v6; // r8

  *a1 = -1LL;
  v4 = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  if ( *(_QWORD *)(ThreadWin32Thread + 408) == grpdeskRitInput )
  {
    v4 = 1;
    *a1 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), ThreadWin32Thread, v6) + 408)
                    + 40LL);
  }
  return v4;
}
