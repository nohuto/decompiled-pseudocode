/*
 * XREFs of _MonitorFromPoint @ 0x1C00AEF70
 * Callers:
 *     DoNewMouseAccel @ 0x1C00AEB48 (DoNewMouseAccel.c)
 *     _MonitorFromRect @ 0x1C00B0090 (_MonitorFromRect.c)
 *     zzzInternalSetCursorPos @ 0x1C00DB4DC (zzzInternalSetCursorPos.c)
 *     NtUserCalculatePopupWindowPosition @ 0x1C013B310 (NtUserCalculatePopupWindowPosition.c)
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C014FB78 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     DoTouchpadAccel @ 0x1C01CA6AC (DoTouchpadAccel.c)
 *     ?GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C01CF6B4 (-GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z.c)
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z @ 0x1C01D19A4 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z.c)
 *     ?MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z @ 0x1C01D315C (-MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z.c)
 *     GetDPITransformationMonitor @ 0x1C01DBDF0 (GetDPITransformationMonitor.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01FC3B0 (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR.c)
 *     xxxInitializeMoveSizeData @ 0x1C0203F8C (xxxInitializeMoveSizeData.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C0213560 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ClipPointToDesktop @ 0x1C0230FE4 (ClipPointToDesktop.c)
 * Callees:
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     GetDPIMonitorRect @ 0x1C00B0210 (GetDPIMonitorRect.c)
 */

__int64 __fastcall MonitorFromPoint(unsigned __int64 a1, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rcx
  unsigned int v6; // ebx
  __int64 i; // rdi
  _DWORD *DPIMonitorRect; // rax
  unsigned int v9; // edi
  __int64 j; // rbx
  _DWORD *v11; // r8
  unsigned int v12; // ecx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // r9d
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned __int64 v19; // rdi
  _DWORD *v20; // r9
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  int v25; // r10d
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rcx

  v3 = 0LL;
  if ( *(_DWORD *)(GetDispInfo(a1) + 80) == 1 && (a2 & 3) != 0 )
    return *(_QWORD *)(GetDispInfo(v4) + 88);
  v6 = a2 & 3;
  if ( v6 <= 1 )
  {
    for ( i = *(_QWORD *)(GetDispInfo(v4) + 96); i; i = *(_QWORD *)(i + 16) )
    {
      if ( (*(_DWORD *)(i + 24) & 1) != 0 )
      {
        DPIMonitorRect = (_DWORD *)GetDPIMonitorRect(i, a2);
        if ( PtInRect(DPIMonitorRect, a1) )
          return i;
      }
    }
    if ( (a2 & 3) != 0 )
      return *(_QWORD *)(GetDispInfo(v4) + 88);
    return 0LL;
  }
  if ( v6 != 2 )
    return 0LL;
  if ( (unsigned int)(a1 + 0x8000) > 0xFFFF || (unsigned int)(HIDWORD(a1) + 0x8000) > 0xFFFF )
  {
    v19 = -1LL;
    for ( j = *(_QWORD *)(GetDispInfo(0xFFFFLL) + 96); j; j = *(_QWORD *)(j + 16) )
    {
      if ( (*(_DWORD *)(j + 24) & 1) != 0 )
      {
        v20 = (_DWORD *)GetDPIMonitorRect(j, a2);
        if ( (int)a1 >= *v20 )
        {
          v22 = v20[2];
          v21 = (int)a1 >= v22 ? a1 - v22 + 1 : 0;
        }
        else
        {
          v21 = *v20 - a1;
        }
        if ( v21 < v19 )
        {
          v23 = v20[1];
          if ( SHIDWORD(a1) >= v23 )
          {
            v25 = v20[3];
            if ( SHIDWORD(a1) >= v25 )
            {
              v24 = HIDWORD(a1) - v25 + 1;
            }
            else
            {
              if ( !v21 )
                return j;
              v24 = 0;
            }
          }
          else
          {
            v24 = v23 - HIDWORD(a1);
          }
          v26 = v21 * (__int64)v21;
          if ( v26 < v19 && v24 + v26 < v19 )
          {
            v27 = v24 * (__int64)v24 + v26;
            if ( v27 < v19 )
            {
              v19 = v27;
              v3 = j;
            }
          }
        }
      }
    }
  }
  else
  {
    v9 = -1;
    for ( j = *(_QWORD *)(GetDispInfo(0xFFFFLL) + 96); j; j = *(_QWORD *)(j + 16) )
    {
      if ( (*(_DWORD *)(j + 24) & 1) != 0 )
      {
        v11 = (_DWORD *)GetDPIMonitorRect(j, a2);
        if ( (int)a1 >= *v11 )
        {
          v13 = v11[2];
          v12 = (int)a1 >= v13 ? a1 - v13 + 1 : 0;
        }
        else
        {
          v12 = *v11 - a1;
        }
        if ( v12 < v9 )
        {
          v14 = v11[1];
          if ( SHIDWORD(a1) >= v14 )
          {
            v16 = v11[3];
            if ( SHIDWORD(a1) >= v16 )
            {
              v15 = HIDWORD(a1) - v16 + 1;
            }
            else
            {
              if ( !v12 )
                return j;
              v15 = 0;
            }
          }
          else
          {
            v15 = v14 - HIDWORD(a1);
          }
          v17 = v12 * v12;
          if ( v17 < v9 && v17 + v15 < v9 )
          {
            v18 = v15 * v15 + v17;
            if ( v18 < v9 )
            {
              v9 = v18;
              v3 = j;
            }
          }
        }
      }
    }
  }
  return v3;
}
