/*
 * XREFs of UserGetMonitorDC @ 0x1C0054ECC
 * Callers:
 *     hdcOpenDCW @ 0x1C0020120 (hdcOpenDCW.c)
 * Callees:
 *     _ReleaseDC @ 0x1C0021290 (_ReleaseDC.c)
 *     _GetDCEx @ 0x1C00212B0 (_GetDCEx.c)
 *     GreLockVisRgn @ 0x1C0025520 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C00255C0 (GreUnlockVisRgn.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     GetMonitorDC @ 0x1C0038300 (GetMonitorDC.c)
 *     LookupDC @ 0x1C0054F80 (LookupDC.c)
 *     MonitorFromHdev @ 0x1C0054FC0 (MonitorFromHdev.c)
 */

__int64 UserGetMonitorDC()
{
  __int64 MonitorDC; // rbx
  __int64 v1; // rsi
  __int64 v2; // rcx
  int v3; // edx
  __int64 DCEx; // rdi
  int v5; // r8d
  __int64 v6; // rax

  MonitorDC = 0LL;
  v1 = MonitorFromHdev();
  if ( v1 )
  {
    v2 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408);
    if ( v2 )
    {
      DCEx = GetDCEx(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL), 0LL, 0x800003u);
      if ( DCEx )
      {
        GreLockVisRgn(*(_QWORD *)gpDispInfo, v3, v5);
        v6 = LookupDC(DCEx, 1LL);
        MonitorDC = GetMonitorDC(v6, v1, 1);
        ReleaseDC(DCEx);
        GreUnlockVisRgn(*(_QWORD *)gpDispInfo);
      }
    }
  }
  return MonitorDC;
}
