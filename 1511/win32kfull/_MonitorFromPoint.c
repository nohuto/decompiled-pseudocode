/*
 * XREFs of _MonitorFromPoint @ 0x1C0077F10
 * Callers:
 *     _MonitorFromRect @ 0x1C00780C0 (_MonitorFromRect.c)
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@K0HH@Z @ 0x1C0087E90 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@K0HH@Z.c)
 *     ?GetMouseCoord@@YAXJJKJ_KPEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C0088738 (-GetMouseCoord@@YAXJJKJ_KPEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z.c)
 *     zzzInternalSetCursorPos @ 0x1C009A8F8 (zzzInternalSetCursorPos.c)
 *     DoNewMouseAccel @ 0x1C00FD5FC (DoNewMouseAccel.c)
 *     xxxTrackPopupMenuEx @ 0x1C0134F0C (xxxTrackPopupMenuEx.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C014A490 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     DoTouchpadAccel @ 0x1C01D2B2C (DoTouchpadAccel.c)
 *     ?MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z @ 0x1C01DB758 (-MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z.c)
 *     GetDPITransformationMonitor @ 0x1C01E54D8 (GetDPITransformationMonitor.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C02050D0 (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR.c)
 *     xxxInitializeMoveSizeData @ 0x1C020CE20 (xxxInitializeMoveSizeData.c)
 *     NtUserCalculatePopupWindowPosition @ 0x1C0217FB0 (NtUserCalculatePopupWindowPosition.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C021A790 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ClipPointToDesktop @ 0x1C0238F84 (ClipPointToDesktop.c)
 * Callees:
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     GetDPIMonitorRect @ 0x1C007824C (GetDPIMonitorRect.c)
 */

__int64 __fastcall MonitorFromPoint(unsigned __int64 a1, unsigned int a2)
{
  __int64 v3; // rbp
  unsigned int v5; // ebx
  __int64 i; // rdi
  _DWORD *DPIMonitorRect; // rax
  unsigned int v8; // edi
  __int64 j; // rbx
  _DWORD *v10; // r8
  unsigned int v11; // ecx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // r9d
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned __int64 v18; // rdi
  _DWORD *v19; // r9
  int v20; // edx
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // r10d
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rcx

  v3 = 0LL;
  if ( *(_DWORD *)(GetDispInfo() + 80) == 1 && (a2 & 3) != 0 )
    return *(_QWORD *)(GetDispInfo() + 88);
  v5 = a2 & 3;
  if ( v5 <= 1 )
  {
    for ( i = *(_QWORD *)(GetDispInfo() + 96); i; i = *(_QWORD *)(i + 16) )
    {
      if ( (*(_DWORD *)(i + 24) & 1) != 0 )
      {
        DPIMonitorRect = (_DWORD *)GetDPIMonitorRect(i, a2);
        if ( PtInRect(DPIMonitorRect, a1) )
          return i;
      }
    }
    if ( (a2 & 3) != 0 )
      return *(_QWORD *)(GetDispInfo() + 88);
    return 0LL;
  }
  if ( v5 != 2 )
    return 0LL;
  if ( (unsigned int)(a1 + 0x8000) > 0xFFFF || (unsigned int)(HIDWORD(a1) + 0x8000) > 0xFFFF )
  {
    v18 = -1LL;
    for ( j = *(_QWORD *)(GetDispInfo() + 96); j; j = *(_QWORD *)(j + 16) )
    {
      if ( (*(_DWORD *)(j + 24) & 1) != 0 )
      {
        v19 = (_DWORD *)GetDPIMonitorRect(j, a2);
        if ( (int)a1 >= *v19 )
        {
          v21 = v19[2];
          v20 = (int)a1 >= v21 ? a1 - v21 + 1 : 0;
        }
        else
        {
          v20 = *v19 - a1;
        }
        if ( v20 < v18 )
        {
          v22 = v19[1];
          if ( SHIDWORD(a1) >= v22 )
          {
            v24 = v19[3];
            if ( SHIDWORD(a1) >= v24 )
            {
              v23 = HIDWORD(a1) - v24 + 1;
            }
            else
            {
              if ( !v20 )
                return j;
              v23 = 0;
            }
          }
          else
          {
            v23 = v22 - HIDWORD(a1);
          }
          v25 = v20 * (__int64)v20;
          if ( v25 < v18 && v23 + v25 < v18 )
          {
            v26 = v23 * (__int64)v23 + v25;
            if ( v26 < v18 )
            {
              v18 = v26;
              v3 = j;
            }
          }
        }
      }
    }
  }
  else
  {
    v8 = -1;
    for ( j = *(_QWORD *)(GetDispInfo() + 96); j; j = *(_QWORD *)(j + 16) )
    {
      if ( (*(_DWORD *)(j + 24) & 1) != 0 )
      {
        v10 = (_DWORD *)GetDPIMonitorRect(j, a2);
        if ( (int)a1 >= *v10 )
        {
          v12 = v10[2];
          v11 = (int)a1 >= v12 ? a1 - v12 + 1 : 0;
        }
        else
        {
          v11 = *v10 - a1;
        }
        if ( v11 < v8 )
        {
          v13 = v10[1];
          if ( SHIDWORD(a1) >= v13 )
          {
            v15 = v10[3];
            if ( SHIDWORD(a1) >= v15 )
            {
              v14 = HIDWORD(a1) - v15 + 1;
            }
            else
            {
              if ( !v11 )
                return j;
              v14 = 0;
            }
          }
          else
          {
            v14 = v13 - HIDWORD(a1);
          }
          v16 = v11 * v11;
          if ( v16 < v8 && v16 + v14 < v8 )
          {
            v17 = v14 * v14 + v16;
            if ( v17 < v8 )
            {
              v8 = v17;
              v3 = j;
            }
          }
        }
      }
    }
  }
  return v3;
}
