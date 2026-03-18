/*
 * XREFs of UserGetMonitorDC @ 0x1C0053DE0
 * Callers:
 *     hdcOpenDCW @ 0x1C0053650 (hdcOpenDCW.c)
 * Callees:
 *     _ReleaseDC @ 0x1C0035790 (_ReleaseDC.c)
 *     GreLockVisRgn @ 0x1C0036AA0 (GreLockVisRgn.c)
 *     _GetDCEx @ 0x1C0036B60 (_GetDCEx.c)
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     GreUnlockVisRgn @ 0x1C0038810 (GreUnlockVisRgn.c)
 *     GetMonitorDC @ 0x1C0053E98 (GetMonitorDC.c)
 *     LookupDC @ 0x1C0054B00 (LookupDC.c)
 *     MonitorFromHdev @ 0x1C0054B40 (MonitorFromHdev.c)
 */

__int64 UserGetMonitorDC()
{
  __int64 MonitorDC; // rbx
  __int64 v1; // rsi
  __int64 v2; // rcx
  int v3; // edx
  __int64 DCEx; // rdi
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8

  MonitorDC = 0LL;
  v1 = MonitorFromHdev();
  if ( v1 )
  {
    v2 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416);
    if ( v2 )
    {
      DCEx = GetDCEx(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL), 0LL, 8388611LL);
      if ( DCEx )
      {
        GreLockVisRgn(*(_QWORD *)gpDispInfo, v3, v5);
        v6 = LookupDC(DCEx, 1LL);
        MonitorDC = GetMonitorDC(v6, v1, 1LL);
        ReleaseDC(DCEx);
        GreUnlockVisRgn(*(_QWORD *)gpDispInfo, v7, v8);
      }
    }
  }
  return MonitorDC;
}
