/*
 * XREFs of GetDpiMetricsForWindow @ 0x140302474
 * Callers:
 *     xxxMenuDraw @ 0x14000A708 (xxxMenuDraw.c)
 *     xxxMNInvertItem @ 0x140120C3C (xxxMNInvertItem.c)
 *     xxxDrawMenuBarUnderlines @ 0x14017819C (xxxDrawMenuBarUnderlines.c)
 *     _ServerFixupMenuDC @ 0x1401A78A8 (_ServerFixupMenuDC.c)
 *     MNDrawArrow @ 0x1402FA3FC (MNDrawArrow.c)
 *     xxxMNDrawFullNC @ 0x1402FA704 (xxxMNDrawFullNC.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     GetDpiMetricsForDpi @ 0x140302424 (GetDpiMetricsForDpi.c)
 */

struct tagDpiKMMetricsCacheNode *__fastcall GetDpiMetricsForWindow(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int WindowDpiLastNotify; // eax
  __int64 v5; // r8
  int v6; // ecx
  __int64 v7; // rax

  v1 = a1;
  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 40);
    v6 = *(_DWORD *)(v5 + 288) & 0xF;
    if ( v6 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v5 + 288) >> 8) & 0x1FF;
      return GetDpiMetricsForDpi(WindowDpiLastNotify, v1);
    }
    if ( (*(_DWORD *)(v5 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(v1);
      return GetDpiMetricsForDpi(WindowDpiLastNotify, v1);
    }
    if ( v6
      || (v7 = *(_QWORD *)(*(_QWORD *)(v1 + 16) + 488LL)) == 0
      || (*(_DWORD *)(**(_QWORD **)(v7 + 8) + 64LL) & 1) == 0 )
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v1 + 16) + 456LL) + 272LL);
      return GetDpiMetricsForDpi(WindowDpiLastNotify, v1);
    }
LABEL_13:
    WindowDpiLastNotify = 96;
    return GetDpiMetricsForDpi(WindowDpiLastNotify, v1);
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(0LL) & 0xF) == 0 )
    goto LABEL_13;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
  if ( CurrentProcessWin32Process )
  {
    v1 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    CurrentProcessWin32Process &= v1;
  }
  WindowDpiLastNotify = *(unsigned __int16 *)(CurrentProcessWin32Process + 272);
  return GetDpiMetricsForDpi(WindowDpiLastNotify, v1);
}
