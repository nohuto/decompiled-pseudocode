/*
 * XREFs of _MonitorFromPoint @ 0x1C0082CA0
 * Callers:
 *     zzzInternalSetCursorPos @ 0x1C0040BC0 (zzzInternalSetCursorPos.c)
 *     _MonitorFromRect @ 0x1C0082E40 (_MonitorFromRect.c)
 *     DoNewMouseAccel @ 0x1C00F75FC (DoNewMouseAccel.c)
 *     xxxTrackPopupMenuEx @ 0x1C0108A2C (xxxTrackPopupMenuEx.c)
 *     ?TooltipGetPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C0120D24 (-TooltipGetPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     DoTouchpadAccel @ 0x1C01D0ED0 (DoTouchpadAccel.c)
 *     ?GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C01D6BB0 (-GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z.c)
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z @ 0x1C01D9478 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z.c)
 *     ?MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z @ 0x1C01DB158 (-MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z.c)
 *     GetDPITransformationMonitor @ 0x1C01E5048 (GetDPITransformationMonitor.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C0204D1C (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR.c)
 *     xxxInitializeMoveSizeData @ 0x1C020C6A4 (xxxInitializeMoveSizeData.c)
 *     NtUserCalculatePopupWindowPosition @ 0x1C02181E0 (NtUserCalculatePopupWindowPosition.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C021AA10 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ClipPointToDesktop @ 0x1C0238B70 (ClipPointToDesktop.c)
 * Callees:
 *     GetDPIMonitorRect @ 0x1C0082FCC (GetDPIMonitorRect.c)
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 */

__int64 __fastcall MonitorFromPoint(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v9; // ebx
  __int64 i; // rdi
  __int64 DPIMonitorRect; // rax
  unsigned int v12; // edi
  __int64 j; // rbx
  _DWORD *v14; // r8
  unsigned int v15; // ecx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // r9d
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned __int64 v22; // rdi
  _DWORD *v23; // r9
  int v24; // edx
  int v25; // ecx
  int v26; // eax
  int v27; // eax
  int v28; // r10d
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rcx

  v3 = a2;
  v4 = 0LL;
  if ( *(_DWORD *)(GetDispInfo(a1, a2, a3) + 80) == 1 && (v3 & 3) != 0 )
    return *(_QWORD *)(GetDispInfo(v6, v5, v7) + 88);
  v9 = v3 & 3;
  if ( v9 <= 1 )
  {
    for ( i = *(_QWORD *)(GetDispInfo(v6, v5, v7) + 96); i; i = *(_QWORD *)(i + 16) )
    {
      if ( (*(_DWORD *)(i + 24) & 1) != 0 )
      {
        DPIMonitorRect = GetDPIMonitorRect(i, v3);
        if ( (unsigned int)PtInRect(DPIMonitorRect, a1) )
          return i;
      }
    }
    if ( (v3 & 3) != 0 )
      return *(_QWORD *)(GetDispInfo(v6, v5, v7) + 88);
    return 0LL;
  }
  if ( v9 != 2 )
    return 0LL;
  if ( (unsigned int)(a1 + 0x8000) > 0xFFFF || (unsigned int)(HIDWORD(a1) + 0x8000) > 0xFFFF )
  {
    v22 = -1LL;
    for ( j = *(_QWORD *)(GetDispInfo(0xFFFFLL, v5, v7) + 96); j; j = *(_QWORD *)(j + 16) )
    {
      if ( (*(_DWORD *)(j + 24) & 1) != 0 )
      {
        v23 = (_DWORD *)GetDPIMonitorRect(j, v3);
        if ( (int)a1 >= *v23 )
        {
          v25 = v23[2];
          v24 = (int)a1 >= v25 ? a1 - v25 + 1 : 0;
        }
        else
        {
          v24 = *v23 - a1;
        }
        if ( v24 < v22 )
        {
          v26 = v23[1];
          if ( SHIDWORD(a1) >= v26 )
          {
            v28 = v23[3];
            if ( SHIDWORD(a1) >= v28 )
            {
              v27 = HIDWORD(a1) - v28 + 1;
            }
            else
            {
              if ( !v24 )
                return j;
              v27 = 0;
            }
          }
          else
          {
            v27 = v26 - HIDWORD(a1);
          }
          v29 = v24 * (__int64)v24;
          if ( v29 < v22 && v27 + v29 < v22 )
          {
            v30 = v27 * (__int64)v27 + v29;
            if ( v30 < v22 )
            {
              v22 = v30;
              v4 = j;
            }
          }
        }
      }
    }
  }
  else
  {
    v12 = -1;
    for ( j = *(_QWORD *)(GetDispInfo(0xFFFFLL, v5, v7) + 96); j; j = *(_QWORD *)(j + 16) )
    {
      if ( (*(_DWORD *)(j + 24) & 1) != 0 )
      {
        v14 = (_DWORD *)GetDPIMonitorRect(j, v3);
        if ( (int)a1 >= *v14 )
        {
          v16 = v14[2];
          v15 = (int)a1 >= v16 ? a1 - v16 + 1 : 0;
        }
        else
        {
          v15 = *v14 - a1;
        }
        if ( v15 < v12 )
        {
          v17 = v14[1];
          if ( SHIDWORD(a1) >= v17 )
          {
            v19 = v14[3];
            if ( SHIDWORD(a1) >= v19 )
            {
              v18 = HIDWORD(a1) - v19 + 1;
            }
            else
            {
              if ( !v15 )
                return j;
              v18 = 0;
            }
          }
          else
          {
            v18 = v17 - HIDWORD(a1);
          }
          v20 = v15 * v15;
          if ( v20 < v12 && v20 + v18 < v12 )
          {
            v21 = v18 * v18 + v20;
            if ( v21 < v12 )
            {
              v12 = v21;
              v4 = j;
            }
          }
        }
      }
    }
  }
  return v4;
}
