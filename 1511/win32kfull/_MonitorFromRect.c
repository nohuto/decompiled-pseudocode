/*
 * XREFs of _MonitorFromRect @ 0x1C00780C0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     xxxCheckFullScreen @ 0x1C006899C (xxxCheckFullScreen.c)
 *     GetNewMonitor @ 0x1C006DEC0 (GetNewMonitor.c)
 *     _GetWindowPlacement @ 0x1C0076EB4 (_GetWindowPlacement.c)
 *     CkptUpdate @ 0x1C0077428 (CkptUpdate.c)
 *     _MonitorFromWindow @ 0x1C0077FC0 (_MonitorFromWindow.c)
 *     CitGetWindowInfo @ 0x1C00F6D90 (CitGetWindowInfo.c)
 *     xxxSetWindowPlacement @ 0x1C00F7AE0 (xxxSetWindowPlacement.c)
 *     CreateSpb @ 0x1C010B97C (CreateSpb.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 *     CreateFade @ 0x1C0139CBC (CreateFade.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01C4B0C (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     DetectNewMonitor @ 0x1C01E5118 (DetectNewMonitor.c)
 *     xxxSetInternalWindowPos @ 0x1C02045CC (xxxSetInternalWindowPos.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C0207464 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C02083DC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C020C568 (xxxEndSetWindowArrangement.c)
 *     ?xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0215A84 (-xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IntersectRect @ 0x1C006B798 (IntersectRect.c)
 *     _MonitorFromPoint @ 0x1C0077F10 (_MonitorFromPoint.c)
 *     GetDPIMonitorRect @ 0x1C007824C (GetDPIMonitorRect.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromRect(int *a1, unsigned int a2)
{
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 DispInfo; // rdi
  _DWORD *v8; // rcx
  int v9; // esi
  __int64 v10; // rdi
  int *DPIMonitorRect; // rax
  __int64 v12; // rcx
  _BOOL8 v13; // rcx
  int v14; // ecx
  bool v15; // zf
  unsigned int v16; // esi
  __int64 j; // rdi
  int *v18; // rax
  int v19; // edx
  int v20; // ecx
  unsigned int v21; // ecx
  int v22; // r8d
  int v23; // edx
  int v24; // edx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned __int64 v27; // rsi
  __int64 i; // rdi
  int *v29; // r8
  int v30; // eax
  int v31; // ecx
  int v32; // ecx
  __int64 v33; // rdx
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rdx
  __int64 v39; // [rsp+20h] [rbp-38h] BYREF
  __int64 v40; // [rsp+28h] [rbp-30h]

  v4 = 0LL;
  DispInfo = GetDispInfo();
  if ( *(_DWORD *)(DispInfo + 80) == 1 && (a2 & 3) != 0 )
    return *(_QWORD *)(GetDispInfo() + 88);
  if ( *a1 >= a1[2] || a1[1] >= a1[3] )
    return MonitorFromPoint(*(_QWORD *)a1, a2);
  if ( (a2 & 0x20) != 0 )
    goto LABEL_7;
  if ( (a2 & 0x40) != 0 )
    goto LABEL_30;
  if ( (a2 & 0x80u) != 0 )
  {
    v8 = (_DWORD *)(DispInfo + 136);
    goto LABEL_8;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x4000) == 0 )
  {
    v13 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
       && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                    + 244LL) & 1;
    if ( v13 )
    {
LABEL_30:
      v8 = (_DWORD *)(DispInfo + 120);
      goto LABEL_8;
    }
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) == 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v14 = 0)
      : (v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v15 = v14 == 0,
        v8 = (_DWORD *)(DispInfo + 136),
        v15) )
  {
LABEL_7:
    v8 = (_DWORD *)(DispInfo + 104);
  }
LABEL_8:
  if ( *a1 <= *v8 && a1[1] <= v8[1] && a1[2] >= v8[2] && a1[3] >= v8[3] )
    return *(_QWORD *)(GetDispInfo() + 88);
  v9 = 0;
  v10 = *(_QWORD *)(GetDispInfo() + 96);
  if ( v10 )
  {
    do
    {
      if ( (*(_DWORD *)(v10 + 24) & 1) != 0 )
      {
        DPIMonitorRect = (int *)GetDPIMonitorRect(v10, a2);
        if ( (unsigned int)IntersectRect(&v39, a1, DPIMonitorRect) )
        {
          v12 = v39 - *(_QWORD *)a1;
          if ( v39 == *(_QWORD *)a1 )
            v12 = v40 - *((_QWORD *)a1 + 1);
          if ( !v12 )
            return v10;
          if ( (a2 & 0x10) == 0 && ((int)v40 - (int)v39) * (HIDWORD(v40) - HIDWORD(v39)) > v9 )
          {
            v9 = (v40 - v39) * (HIDWORD(v40) - HIDWORD(v39));
            v4 = v10;
          }
        }
      }
      v10 = *(_QWORD *)(v10 + 16);
    }
    while ( v10 );
    if ( v9 > 0 )
      return v4;
  }
  if ( (a2 & 3) != 0 )
  {
    if ( (a2 & 3) == 1 )
      return *(_QWORD *)(GetDispInfo() + 88);
    if ( (a2 & 3) == 2 )
    {
      if ( (unsigned int)(*a1 + 0x8000) > 0xFFFF
        || (unsigned int)(a1[1] + 0x8000) > 0xFFFF
        || (unsigned int)(a1[2] + 0x8000) > 0xFFFF
        || (unsigned int)(a1[3] + 0x8000) > 0xFFFF )
      {
        v27 = -1LL;
        for ( i = *(_QWORD *)(GetDispInfo() + 96); i; i = *(_QWORD *)(i + 16) )
        {
          if ( (*(_DWORD *)(i + 24) & 1) != 0 )
          {
            v29 = (int *)GetDPIMonitorRect(i, a2);
            v30 = a1[2];
            v31 = *v29;
            if ( v30 <= *v29 || (v31 = *a1, v30 = v29[2], *a1 >= v30) )
              v32 = v31 - v30 + 1;
            else
              v32 = 0;
            v33 = v32;
            if ( v32 < v27 )
            {
              v34 = a1[3];
              v35 = v29[1];
              if ( v34 <= v35 || (v35 = a1[1], v34 = v29[3], v35 >= v34) )
                v36 = v35 - v34 + 1;
              else
                v36 = 0;
              v37 = v33 * v33;
              if ( v37 < v27 && v36 + v37 < v27 )
              {
                v38 = v36 * (__int64)v36 + v37;
                if ( v38 < v27 )
                {
                  v27 = v38;
                  v4 = i;
                }
              }
            }
          }
        }
      }
      else
      {
        v16 = -1;
        for ( j = *(_QWORD *)(GetDispInfo() + 96); j; j = *(_QWORD *)(j + 16) )
        {
          if ( (*(_DWORD *)(j + 24) & 1) != 0 )
          {
            v18 = (int *)GetDPIMonitorRect(j, a2);
            v19 = a1[2];
            v20 = *v18;
            if ( v19 <= *v18 || (v20 = *a1, v19 = v18[2], *a1 >= v19) )
              v21 = v20 - v19 + 1;
            else
              v21 = 0;
            if ( v21 < v16 )
            {
              v22 = a1[3];
              v23 = v18[1];
              if ( v22 <= v23 || (v23 = a1[1], v22 = v18[3], v23 >= v22) )
                v24 = v23 - v22 + 1;
              else
                v24 = 0;
              v25 = v21 * v21;
              if ( v25 < v16 && v25 + v24 < v16 )
              {
                v26 = v24 * v24 + v25;
                if ( v26 < v16 )
                {
                  v16 = v26;
                  v4 = j;
                }
              }
            }
          }
        }
      }
      return v4;
    }
  }
  return 0LL;
}
