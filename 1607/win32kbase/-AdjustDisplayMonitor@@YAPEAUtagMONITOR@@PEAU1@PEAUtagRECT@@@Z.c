/*
 * XREFs of ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C0082240
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0058B60 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00352B8 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     IntersectRect @ 0x1C005903C (IntersectRect.c)
 */

struct tagMONITOR *__fastcall AdjustDisplayMonitor(struct tagMONITOR *a1, struct tagRECT *a2)
{
  __int64 i; // rbx
  int v6; // ecx
  int *v7; // r8
  int v8; // ecx
  _DWORD v9[6]; // [rsp+20h] [rbp-18h] BYREF

  for ( i = *(_QWORD *)(gpDispInfo + 96); i; i = *(_QWORD *)(i + 16) )
  {
    if ( (*(_DWORD *)(i + 24) & 1) == 0 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v6 = 0)
          : (v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                            + 244LL) & 1),
            !v6) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 1
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v8 = 0)
            : (v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1),
              v7 = (int *)(i + 60),
              !v8) )
        {
          v7 = (int *)(i + 28);
        }
      }
      else
      {
        v7 = (int *)(i + 44);
      }
      if ( (unsigned int)IntersectRect(v9, &a2->left, v7) )
        return (struct tagMONITOR *)i;
    }
  }
  return a1;
}
