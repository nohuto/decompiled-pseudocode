/*
 * XREFs of UpdateLogicalCursorPos @ 0x1C0058678
 * Callers:
 *     zzzSetFMouseMovedWorker @ 0x1C00587A4 (zzzSetFMouseMovedWorker.c)
 *     ProcessQueuedMouseEvents @ 0x1C00E11B4 (ProcessQueuedMouseEvents.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall UpdateLogicalCursorPos(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  __int64 *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = a1;
  v3 = a2;
  if ( (a2 & 0xE0) == 0 )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1, a2, a3);
    v3 = MonitorFlagsFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
    a1 = v10;
  }
  if ( (v3 & 0x20) != 0 )
  {
    PhysicalToLogicalDPIPoint(gpsi + 5344LL, &v10, 64LL);
    v4 = &v10;
    v5 = gpsi;
  }
  else
  {
    if ( v3 < 0 )
    {
      *(_QWORD *)(gpsi + 5352LL) = a1;
      v6 = 64LL;
      v4 = (__int64 *)(gpsi + 5368LL);
      v7 = gpsi + 5344LL;
      return PhysicalToLogicalDPIPoint(v7, v4, v6);
    }
    *(_QWORD *)(gpsi + 5344LL) = a1;
    v5 = gpsi;
    v4 = (__int64 *)(gpsi + 5368LL);
  }
  v6 = 128LL;
  v7 = v5 + 5352;
  return PhysicalToLogicalDPIPoint(v7, v4, v6);
}
