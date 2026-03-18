/*
 * XREFs of GetAppCompatFlags2WithDPIAware @ 0x1C0067928
 * Callers:
 *     GetResizeBorderWidth @ 0x1C00678DC (GetResizeBorderWidth.c)
 *     GetWindowFrameMetric @ 0x1C0067910 (GetWindowFrameMetric.c)
 *     GetWindowBorders @ 0x1C00B0350 (GetWindowBorders.c)
 *     GetWindowBordersForDpi @ 0x1C00B8368 (GetWindowBordersForDpi.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GetAppCompatFlags2 @ 0x1C006F66C (GetAppCompatFlags2.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall GetAppCompatFlags2WithDPIAware(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int AppCompatFlags2; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8

  AppCompatFlags2 = GetAppCompatFlags2(39168LL, a2, a3, a4);
  v9 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7) + 432);
  if ( (*(_BYTE *)(v9 + 224) & 8) != 0 )
  {
    AppCompatFlags2 &= ~0x2000000u;
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext(v9, v8, v10) & 0xF) != 0 )
  {
    AppCompatFlags2 |= 0x2000000u;
  }
  return AppCompatFlags2;
}
