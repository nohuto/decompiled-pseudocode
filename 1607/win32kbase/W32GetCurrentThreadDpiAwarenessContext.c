/*
 * XREFs of W32GetCurrentThreadDpiAwarenessContext @ 0x1C00352B8
 * Callers:
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C001FAD0 (NtUserGetProcessDpiAwarenessContext.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0034760 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C0035330 (LogicalToPhysicalDPIPoint.c)
 *     TransformPointBetweenCoordinateSpaces @ 0x1C0037B00 (TransformPointBetweenCoordinateSpaces.c)
 *     ?ValidateMonFlags@@YAHPEAK@Z @ 0x1C003826C (-ValidateMonFlags@@YAHPEAK@Z.c)
 *     GetMonitorDC @ 0x1C0038300 (GetMonitorDC.c)
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C0056368 (-UpdateUserScreen@@YAHH@Z.c)
 *     NtUserGetDpiForMonitor @ 0x1C0057FA0 (NtUserGetDpiForMonitor.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C00588F0 (TransformRectBetweenCoordinateSpaces.c)
 *     xxxEnumDisplayMonitors @ 0x1C0058B60 (xxxEnumDisplayMonitors.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0078F90 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     GetDPIMetrics @ 0x1C007A6D0 (GetDPIMetrics.c)
 *     GetDPIServerInfo @ 0x1C007A720 (GetDPIServerInfo.c)
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C0082240 (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 *     ExpandedMonitorSpace @ 0x1C00B93A0 (ExpandedMonitorSpace.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C00C3078 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00C30AC (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1C00D3F64 (RIMTransformPhysicalPointToScreen.c)
 *     _GetClientRect @ 0x1C00E278C (_GetClientRect.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0035710 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 */

__int64 W32GetCurrentThreadDpiAwarenessContext()
{
  unsigned int v0; // edi
  _QWORD *ThreadWin32Thread; // rax
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 CurrentProcessWin32Process; // rax

  v0 = 18;
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v3 = *ThreadWin32Thread;
    if ( *ThreadWin32Thread )
    {
      if ( *(_QWORD *)(v3 + 352) )
        CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
      if ( *(_DWORD *)(v3 + 340) )
      {
        return *(unsigned int *)(v3 + 340);
      }
      else
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
        if ( CurrentProcessWin32Process )
          return *(unsigned int *)(CurrentProcessWin32Process + 280);
      }
    }
  }
  return v0;
}
