/*
 * XREFs of PhysicalToLogicalDPIPointWithHitTest @ 0x1C0127B40
 * Callers:
 *     DetermineInputTarget @ 0x1C0058B9C (DetermineInputTarget.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01F1F34 (-xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z.c)
 * Callees:
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     _GetTopLevelWindow @ 0x1C0075DF0 (_GetTopLevelWindow.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     DCEHitTestWindow @ 0x1C01DB530 (DCEHitTestWindow.c)
 */

__int64 __fastcall PhysicalToLogicalDPIPointWithHitTest(
        unsigned __int64 *a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // r15d
  __int64 v8; // rdi
  __int64 TopLevelWindow; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned __int64 v16; // [rsp+20h] [rbp-48h] BYREF
  __int128 v17; // [rsp+28h] [rbp-40h] BYREF

  v4 = *(_DWORD *)(a4 + 352);
  if ( (v4 & 0xF) == 2 )
  {
    *a1 = *a2;
    return 0LL;
  }
  v8 = 0LL;
  TopLevelWindow = GetTopLevelWindow(a4);
  if ( TopLevelWindow )
    v8 = *(_QWORD *)(TopLevelWindow + 272);
  v10 = *a2;
  v16 = *a2;
  if ( v8 )
  {
    v14 = *(_QWORD *)(TopLevelWindow + 208);
    if ( v14 )
      GreGetRgnBox(v14, &v17);
    else
      v17 = *(_OWORD *)(TopLevelWindow + 112);
    v12 = DCEHitTestWindow(&v17, v8, &v16, a3);
    v10 = v16;
LABEL_8:
    if ( v12 )
    {
      *a1 = v10;
      return 1LL;
    }
    goto LABEL_16;
  }
  if ( TopLevelWindow )
  {
    v11 = *(_QWORD *)(TopLevelWindow + 208);
    if ( v11 )
      v12 = GrePtInRegion(v11, (unsigned int)v10, HIDWORD(v16));
    else
      v12 = PtInRect((_DWORD *)(TopLevelWindow + 112), v10);
    goto LABEL_8;
  }
LABEL_16:
  v15 = MonitorFlagsFromDpiAwarenessContext(v4);
  return PhysicalToLogicalDPIMonitorPoint(a1, a2, v15, 0LL);
}
