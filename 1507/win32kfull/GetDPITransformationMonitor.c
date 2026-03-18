/*
 * XREFs of GetDPITransformationMonitor @ 0x1C01E5048
 * Callers:
 *     ?MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F8C08 (-MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?PointerInfoCopyOutHelper@@YAHPEAUtagPOINTERINFONODE@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C01F8F08 (-PointerInfoCopyOutHelper@@YAHPEAUtagPOINTERINFONODE@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagP.c)
 *     ?UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z @ 0x1C01F9698 (-UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0062200 (_GetTopLevelWindow.c)
 *     _MonitorFromPoint @ 0x1C0082CA0 (_MonitorFromPoint.c)
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall GetDPITransformationMonitor(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v6; // r8
  __int64 TopLevelWindow; // r14
  __int64 v8; // rcx
  unsigned int MonitorFlags; // eax
  __int64 result; // rax
  __int64 v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+28h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  __int128 v14; // [rsp+38h] [rbp-18h] BYREF

  v3 = a1;
  v11 = a1;
  TopLevelWindow = GetTopLevelWindow(a2);
  if ( !TopLevelWindow )
    goto LABEL_9;
  v8 = *(_QWORD *)(a2 + 208);
  if ( v8 )
    GreGetRgnBox(v8, &v14);
  else
    v14 = *(_OWORD *)(a2 + 112);
  v12 = ValidateHmonitorNoRip(*(_QWORD *)(TopLevelWindow + 352));
  if ( !v12
    || (MonitorFlags = GetMonitorFlags(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 384LL)),
        PhysicalToLogicalDPIPoint(&v13, &v11, MonitorFlags, &v12),
        !PtInRect(&v14, v13)) )
  {
    v3 = v11;
LABEL_9:
    result = MonitorFromPoint(v3, 34LL, v6);
    goto LABEL_10;
  }
  result = v12;
LABEL_10:
  *a3 = result;
  return result;
}
