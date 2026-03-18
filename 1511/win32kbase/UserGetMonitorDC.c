/*
 * XREFs of UserGetMonitorDC @ 0x1C0043940
 * Callers:
 *     hdcOpenDCW @ 0x1C0042710 (hdcOpenDCW.c)
 * Callees:
 *     _GetDCEx @ 0x1C002EFC0 (_GetDCEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     _ReleaseDC @ 0x1C0035A80 (_ReleaseDC.c)
 *     GreUnlockVisRgn @ 0x1C00439F0 (GreUnlockVisRgn.c)
 *     GetMonitorDC @ 0x1C0043A70 (GetMonitorDC.c)
 *     LookupDC @ 0x1C00445C0 (LookupDC.c)
 *     GreLockVisRgn @ 0x1C0044600 (GreLockVisRgn.c)
 *     MonitorFromHdev @ 0x1C0044694 (MonitorFromHdev.c)
 */

__int64 UserGetMonitorDC()
{
  __int64 MonitorDC; // rbx
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 DCEx; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8

  MonitorDC = 0LL;
  v2 = MonitorFromHdev();
  if ( v2 )
  {
    v4 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v1, v3) + 408);
    if ( v4 )
    {
      DCEx = GetDCEx(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL), 0LL, 8388611LL);
      if ( DCEx )
      {
        GreLockVisRgn(*(_QWORD *)gpDispInfo);
        v6 = LookupDC(DCEx, 1LL);
        MonitorDC = GetMonitorDC(v6, v2, 1LL);
        ReleaseDC(DCEx, v7, v8);
        GreUnlockVisRgn(*(_QWORD *)gpDispInfo);
      }
    }
  }
  return MonitorDC;
}
