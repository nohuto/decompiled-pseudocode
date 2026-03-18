/*
 * XREFs of _MonitorFromRect @ 0x1C00B0090
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0056A5C (xxxCheckFullScreen.c)
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     GetNewMonitor @ 0x1C0070AA8 (GetNewMonitor.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     CitGetWindowInfo @ 0x1C00AED20 (CitGetWindowInfo.c)
 *     _GetWindowPlacement @ 0x1C00AF118 (_GetWindowPlacement.c)
 *     CkptUpdate @ 0x1C00AFE40 (CkptUpdate.c)
 *     _MonitorFromWindow @ 0x1C00AFFA0 (_MonitorFromWindow.c)
 *     xxxSetWindowPlacement @ 0x1C00B2E28 (xxxSetWindowPlacement.c)
 *     CreateSpb @ 0x1C012210C (CreateSpb.c)
 *     CreateFade @ 0x1C013FE3C (CreateFade.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01C3D78 (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     DetectNewMonitor @ 0x1C01DB9AC (DetectNewMonitor.c)
 *     xxxSetInternalWindowPos @ 0x1C01FB91C (xxxSetInternalWindowPos.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FE80C (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FF724 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C02036C0 (xxxEndSetWindowArrangement.c)
 *     ?xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C020E760 (-xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _MonitorFromPoint @ 0x1C00AEF70 (_MonitorFromPoint.c)
 *     GetDPIMonitorRect @ 0x1C00B0210 (GetDPIMonitorRect.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromRect(int *a1, unsigned int a2)
{
  __int64 v4; // r14
  __int64 v5; // rdx
  _DWORD *v6; // rcx
  __int64 DispInfo; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // esi
  __int64 v12; // rdi
  int *DPIMonitorRect; // rax
  __int64 v14; // rdx
  _BOOL8 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // ecx
  bool v25; // zf
  unsigned int v26; // esi
  __int64 j; // rdi
  int *v28; // rax
  int v29; // edx
  int v30; // ecx
  unsigned int v31; // ecx
  int v32; // r8d
  int v33; // edx
  int v34; // edx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned __int64 v37; // rsi
  __int64 i; // rdi
  int *v39; // r8
  int v40; // eax
  int v41; // ecx
  int v42; // ecx
  __int64 v43; // rdx
  int v44; // ecx
  int v45; // eax
  int v46; // eax
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rdx
  __int64 v49; // [rsp+20h] [rbp-48h] BYREF
  __int64 v50; // [rsp+28h] [rbp-40h]

  v4 = 0LL;
  DispInfo = GetDispInfo(a1);
  if ( *(_DWORD *)(DispInfo + 80) == 1 && (a2 & 3) != 0 )
    return *(_QWORD *)(GetDispInfo(v6) + 88);
  if ( *a1 >= a1[2] || a1[1] >= a1[3] )
    return MonitorFromPoint(*(_QWORD *)a1, a2);
  if ( (a2 & 0x20) != 0 )
    goto LABEL_7;
  if ( (a2 & 0x40) != 0 )
    goto LABEL_30;
  if ( (a2 & 0x80u) != 0 )
  {
    v6 = (_DWORD *)(DispInfo + 136);
    goto LABEL_8;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)v6, v5, v8, v9) & 0xF) == 0 )
  {
    v15 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v16, v17) + 408)
       && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v16, v17) + 408)
                                + 8LL)
                    + 244LL) & 1;
    if ( v15 )
    {
LABEL_30:
      v6 = (_DWORD *)(DispInfo + 120);
      goto LABEL_8;
    }
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(v15, v14, v16, v17) & 0xF) != 1
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19, v20) + 408)
      ? (v24 = 0)
      : (v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22, v23)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v25 = v24 == 0,
        v6 = (_DWORD *)(DispInfo + 136),
        v25) )
  {
LABEL_7:
    v6 = (_DWORD *)(DispInfo + 104);
  }
LABEL_8:
  if ( *a1 <= *v6 && a1[1] <= v6[1] && a1[2] >= v6[2] && a1[3] >= v6[3] )
    return *(_QWORD *)(GetDispInfo(v6) + 88);
  v11 = 0;
  v12 = *(_QWORD *)(GetDispInfo(v6) + 96);
  if ( v12 )
  {
    do
    {
      if ( (*(_DWORD *)(v12 + 24) & 1) != 0 )
      {
        DPIMonitorRect = (int *)GetDPIMonitorRect(v12, a2);
        if ( (unsigned int)IntersectRect(&v49, a1, DPIMonitorRect) )
        {
          v6 = (_DWORD *)(v49 - *(_QWORD *)a1);
          if ( v49 == *(_QWORD *)a1 )
            v6 = (_DWORD *)(v50 - *((_QWORD *)a1 + 1));
          if ( !v6 )
            return v12;
          if ( (a2 & 0x10) == 0 && ((int)v50 - (int)v49) * (HIDWORD(v50) - HIDWORD(v49)) > v11 )
          {
            v11 = (v50 - v49) * (HIDWORD(v50) - HIDWORD(v49));
            v4 = v12;
          }
        }
      }
      v12 = *(_QWORD *)(v12 + 16);
    }
    while ( v12 );
    if ( v11 > 0 )
      return v4;
  }
  if ( (a2 & 3) != 0 )
  {
    if ( (a2 & 3) != 1 )
    {
      if ( (a2 & 3) == 2 )
      {
        if ( (unsigned int)(*a1 + 0x8000) > 0xFFFF
          || (unsigned int)(a1[1] + 0x8000) > 0xFFFF
          || (unsigned int)(a1[2] + 0x8000) > 0xFFFF
          || (unsigned int)(a1[3] + 0x8000) > 0xFFFF )
        {
          v37 = -1LL;
          for ( i = *(_QWORD *)(GetDispInfo(0x8000LL) + 96); i; i = *(_QWORD *)(i + 16) )
          {
            if ( (*(_DWORD *)(i + 24) & 1) != 0 )
            {
              v39 = (int *)GetDPIMonitorRect(i, a2);
              v40 = a1[2];
              v41 = *v39;
              if ( v40 <= *v39 || (v41 = *a1, v40 = v39[2], *a1 >= v40) )
                v42 = v41 - v40 + 1;
              else
                v42 = 0;
              v43 = v42;
              if ( v42 < v37 )
              {
                v44 = a1[3];
                v45 = v39[1];
                if ( v44 <= v45 || (v45 = a1[1], v44 = v39[3], v45 >= v44) )
                  v46 = v45 - v44 + 1;
                else
                  v46 = 0;
                v47 = v43 * v43;
                if ( v47 < v37 && v46 + v47 < v37 )
                {
                  v48 = v46 * (__int64)v46 + v47;
                  if ( v48 < v37 )
                  {
                    v37 = v48;
                    v4 = i;
                  }
                }
              }
            }
          }
        }
        else
        {
          v26 = -1;
          for ( j = *(_QWORD *)(GetDispInfo(0x8000LL) + 96); j; j = *(_QWORD *)(j + 16) )
          {
            if ( (*(_DWORD *)(j + 24) & 1) != 0 )
            {
              v28 = (int *)GetDPIMonitorRect(j, a2);
              v29 = a1[2];
              v30 = *v28;
              if ( v29 <= *v28 || (v30 = *a1, v29 = v28[2], *a1 >= v29) )
                v31 = v30 - v29 + 1;
              else
                v31 = 0;
              if ( v31 < v26 )
              {
                v32 = a1[3];
                v33 = v28[1];
                if ( v32 <= v33 || (v33 = a1[1], v32 = v28[3], v33 >= v32) )
                  v34 = v33 - v32 + 1;
                else
                  v34 = 0;
                v35 = v31 * v31;
                if ( v35 < v26 && v35 + v34 < v26 )
                {
                  v36 = v34 * v34 + v35;
                  if ( v36 < v26 )
                  {
                    v26 = v36;
                    v4 = j;
                  }
                }
              }
            }
          }
        }
        return v4;
      }
      return 0LL;
    }
    return *(_QWORD *)(GetDispInfo(v6) + 88);
  }
  return 0LL;
}
