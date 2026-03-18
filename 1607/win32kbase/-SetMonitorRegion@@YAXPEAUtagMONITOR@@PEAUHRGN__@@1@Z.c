/*
 * XREFs of ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0078F90
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0034760 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GetMonitorDC @ 0x1C0038300 (GetMonitorDC.c)
 * Callees:
 *     GreCombineRgn @ 0x1C002FB30 (GreCombineRgn.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00352B8 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreOffsetRgn @ 0x1C0036A90 (GreOffsetRgn.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     GreSetRectRgn @ 0x1C0039670 (GreSetRectRgn.c)
 */

void __fastcall SetMonitorRegion(struct tagMONITOR *a1, HRGN a2, HRGN a3)
{
  HRGN v6; // r8
  char *v7; // rdi
  char *v8; // rbx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx

  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v9 = 0)
      : (v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 244LL) & 1),
        !v9) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v12 = 0)
        : (v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v12) )
    {
      v6 = (HRGN)*((_QWORD *)a1 + 18);
    }
    else
    {
      v6 = (HRGN)*((_QWORD *)a1 + 16);
    }
  }
  else
  {
    v6 = (HRGN)*((_QWORD *)a1 + 17);
  }
  if ( (unsigned int)GreCombineRgn(a2, a3, v6, 1) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v10 = 0)
        : (v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          !v10) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 1
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v13 = 0)
          : (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v7 = (char *)a1 + 60,
            !v13) )
      {
        v7 = (char *)a1 + 28;
      }
    }
    else
    {
      v7 = (char *)a1 + 44;
    }
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v11 = 0)
        : (v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          !v11) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v14 = 0)
          : (v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v14) )
      {
        v8 = (char *)a1 + 60;
      }
      else
      {
        v8 = (char *)a1 + 28;
      }
    }
    else
    {
      v8 = (char *)a1 + 44;
    }
    GreOffsetRgn(a2, -*(_DWORD *)v8, -*((_DWORD *)v7 + 1));
  }
  else
  {
    GreSetRectRgn(a2, 0, 0, 0, 0);
  }
}
