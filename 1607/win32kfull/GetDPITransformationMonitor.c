/*
 * XREFs of GetDPITransformationMonitor @ 0x1C01DBDF0
 * Callers:
 *     ?MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F02D0 (-MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?PointerInfoCopyOutHelper@@YAHPEAUtagPOINTERINFONODE@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C01F05C0 (-PointerInfoCopyOutHelper@@YAHPEAUtagPOINTERINFONODE@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagP.c)
 *     ?UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z @ 0x1C01F0D70 (-UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z.c)
 *     ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0PEBUtagPOINTERINFONODE@@@Z @ 0x1C01F2528 (-xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0PEBUtagPOINTERINFONODE@@@Z.c)
 *     ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C023B1F4 (-GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z.c)
 * Callees:
 *     GetMonitorFlagsFromWindow @ 0x1C0058654 (GetMonitorFlagsFromWindow.c)
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     _GetTopLevelWindow @ 0x1C0075DF0 (_GetTopLevelWindow.c)
 *     _MonitorFromPoint @ 0x1C00AEF70 (_MonitorFromPoint.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall GetDPITransformationMonitor(unsigned __int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 TopLevelWindow; // r14
  __int64 v7; // rcx
  unsigned int MonitorFlagsFromWindow; // eax
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-30h]
  unsigned __int64 v11; // [rsp+28h] [rbp-28h] BYREF
  unsigned __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  __int128 v13; // [rsp+38h] [rbp-18h] BYREF

  v3 = a1;
  v11 = a1;
  TopLevelWindow = GetTopLevelWindow(a2);
  if ( !TopLevelWindow )
    goto LABEL_9;
  v7 = *(_QWORD *)(a2 + 208);
  if ( v7 )
    GreGetRgnBox(v7, &v13);
  else
    v13 = *(_OWORD *)(a2 + 112);
  v10 = ValidateHmonitorNoRip(*(_QWORD *)(TopLevelWindow + 344));
  if ( !v10
    || (MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(a2),
        PhysicalToLogicalDPIPoint(&v12, &v11, MonitorFlagsFromWindow),
        !PtInRect(&v13, v12)) )
  {
    v3 = v11;
LABEL_9:
    result = MonitorFromPoint(v3, 0x22u);
    goto LABEL_10;
  }
  result = v10;
LABEL_10:
  *a3 = result;
  return result;
}
