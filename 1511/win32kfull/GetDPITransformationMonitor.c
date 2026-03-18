/*
 * XREFs of GetDPITransformationMonitor @ 0x1C01E54D8
 * Callers:
 *     ?MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F90B8 (-MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?PointerInfoCopyOutHelper@@YAHPEAUtagPOINTERINFONODE@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C01F93B8 (-PointerInfoCopyOutHelper@@YAHPEAUtagPOINTERINFONODE@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagP.c)
 *     ?UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z @ 0x1C01F9B3C (-UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C004FBD0 (_GetTopLevelWindow.c)
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     _MonitorFromPoint @ 0x1C0077F10 (_MonitorFromPoint.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall GetDPITransformationMonitor(unsigned __int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 TopLevelWindow; // r14
  __int64 v7; // rcx
  unsigned int MonitorFlags; // eax
  __int64 result; // rax
  unsigned __int64 v10; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+28h] [rbp-28h] BYREF
  unsigned __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  __int128 v13; // [rsp+38h] [rbp-18h] BYREF

  v3 = a1;
  v10 = a1;
  TopLevelWindow = GetTopLevelWindow(a2);
  if ( !TopLevelWindow )
    goto LABEL_9;
  v7 = *(_QWORD *)(a2 + 208);
  if ( v7 )
    GreGetRgnBox(v7, &v13);
  else
    v13 = *(_OWORD *)(a2 + 112);
  v11 = ValidateHmonitorNoRip(*(_QWORD *)(TopLevelWindow + 352));
  if ( !v11
    || (MonitorFlags = GetMonitorFlags(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 376LL)),
        PhysicalToLogicalDPIPoint(&v12, &v10, MonitorFlags, &v11),
        !PtInRect(&v13, v12)) )
  {
    v3 = v10;
LABEL_9:
    result = MonitorFromPoint(v3, 0x22u);
    goto LABEL_10;
  }
  result = v11;
LABEL_10:
  *a3 = result;
  return result;
}
