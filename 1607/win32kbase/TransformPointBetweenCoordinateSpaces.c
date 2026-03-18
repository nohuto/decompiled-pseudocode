/*
 * XREFs of TransformPointBetweenCoordinateSpaces @ 0x1C0037B00
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00352B8 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C0035330 (LogicalToPhysicalDPIPoint.c)
 *     MonitorFlagsFromDpiAwarenessContext @ 0x1C0037BB0 (MonitorFlagsFromDpiAwarenessContext.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C0037BE0 (PhysicalToLogicalDPIPoint.c)
 */

__int64 __fastcall TransformPointBetweenCoordinateSpaces(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  unsigned int v8; // eax
  unsigned int v9; // eax
  int v10; // ebx
  unsigned int v11; // eax

  if ( a3 )
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(a3 + 352);
  else
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( a4 )
    v8 = *(_DWORD *)(a4 + 352);
  else
    v8 = W32GetCurrentThreadDpiAwarenessContext();
  if ( (((unsigned __int8)CurrentThreadDpiAwarenessContext ^ (unsigned __int8)v8) & 0xF) != 0 )
  {
    v9 = MonitorFlagsFromDpiAwarenessContext(v8);
    v10 = LogicalToPhysicalDPIPoint((__int64)a1, (__int64)a2, v9, 0LL);
    v11 = MonitorFlagsFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
    return v10 | (unsigned int)PhysicalToLogicalDPIPoint(a1, a1, v11, 0LL);
  }
  else
  {
    *a1 = *a2;
    return 0LL;
  }
}
