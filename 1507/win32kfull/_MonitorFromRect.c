/*
 * XREFs of _MonitorFromRect @ 0x1C0082E40
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 *     GetNewMonitor @ 0x1C005C238 (GetNewMonitor.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     CitGetWindowInfo @ 0x1C0080E80 (CitGetWindowInfo.c)
 *     _MonitorFromWindow @ 0x1C0082D50 (_MonitorFromWindow.c)
 *     _GetWindowPlacement @ 0x1C0083148 (_GetWindowPlacement.c)
 *     CkptUpdate @ 0x1C0085D0C (CkptUpdate.c)
 *     xxxCheckFullScreen @ 0x1C008B384 (xxxCheckFullScreen.c)
 *     xxxSetWindowPlacement @ 0x1C00F297C (xxxSetWindowPlacement.c)
 *     CreateSpb @ 0x1C00FF068 (CreateSpb.c)
 *     CreateFade @ 0x1C010E24C (CreateFade.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01C2F4C (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     DetectNewMonitor @ 0x1C01E4C88 (DetectNewMonitor.c)
 *     xxxSetInternalWindowPos @ 0x1C020425C (xxxSetInternalWindowPos.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C0207048 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0208098 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C020BEC4 (xxxEndSetWindowArrangement.c)
 *     ?xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0215C20 (-xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     _MonitorFromPoint @ 0x1C0082CA0 (_MonitorFromPoint.c)
 *     GetDPIMonitorRect @ 0x1C0082FCC (GetDPIMonitorRect.c)
 *     IntersectRect @ 0x1C008E444 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromRect(int *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v5; // r14
  __int64 v6; // rdx
  _DWORD *v7; // rcx
  __int64 DispInfo; // rdi
  __int64 v9; // r8
  int v11; // esi
  __int64 v12; // rdi
  __int64 DPIMonitorRect; // rax
  _BOOL8 v14; // rcx
  int v15; // ecx
  bool v16; // zf
  unsigned int v17; // esi
  __int64 j; // rdi
  int *v19; // rax
  int v20; // edx
  int v21; // ecx
  unsigned int v22; // ecx
  int v23; // r8d
  int v24; // edx
  int v25; // edx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned __int64 v28; // rsi
  __int64 i; // rdi
  int *v30; // r8
  int v31; // eax
  int v32; // ecx
  int v33; // ecx
  __int64 v34; // rdx
  int v35; // ecx
  int v36; // eax
  int v37; // eax
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rdx
  __int64 v40; // [rsp+20h] [rbp-38h] BYREF
  __int64 v41; // [rsp+28h] [rbp-30h]

  v3 = a2;
  v5 = 0LL;
  DispInfo = GetDispInfo(a1, a2, a3);
  if ( *(_DWORD *)(DispInfo + 80) == 1 && (v3 & 3) != 0 )
    return *(_QWORD *)(GetDispInfo(v7, v6, v9) + 88);
  if ( *a1 >= a1[2] || a1[1] >= a1[3] )
    return MonitorFromPoint(*(_QWORD *)a1, v3, v9);
  if ( (v3 & 0x20) != 0 )
    goto LABEL_7;
  if ( (v3 & 0x40) != 0 )
    goto LABEL_30;
  if ( (v3 & 0x80u) != 0 )
  {
    v7 = (_DWORD *)(DispInfo + 136);
    goto LABEL_8;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x4000) == 0 )
  {
    v14 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
       && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                    + 260LL) & 1;
    if ( v14 )
    {
LABEL_30:
      v7 = (_DWORD *)(DispInfo + 120);
      goto LABEL_8;
    }
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) == 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v15 = 0)
      : (v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v16 = v15 == 0,
        v7 = (_DWORD *)(DispInfo + 136),
        v16) )
  {
LABEL_7:
    v7 = (_DWORD *)(DispInfo + 104);
  }
LABEL_8:
  if ( *a1 <= *v7 && a1[1] <= v7[1] && a1[2] >= v7[2] && a1[3] >= v7[3] )
    return *(_QWORD *)(GetDispInfo(v7, v6, v9) + 88);
  v11 = 0;
  v12 = *(_QWORD *)(GetDispInfo(v7, v6, v9) + 96);
  if ( v12 )
  {
    do
    {
      if ( (*(_DWORD *)(v12 + 24) & 1) != 0 )
      {
        DPIMonitorRect = GetDPIMonitorRect(v12, v3);
        if ( (unsigned int)IntersectRect(&v40, a1, DPIMonitorRect) )
        {
          v6 = v41;
          v7 = (_DWORD *)(v40 - *(_QWORD *)a1);
          if ( v40 == *(_QWORD *)a1 )
            v7 = (_DWORD *)(v41 - *((_QWORD *)a1 + 1));
          if ( !v7 )
            return v12;
          if ( (v3 & 0x10) == 0 )
          {
            v6 = (unsigned int)(v41 - v40);
            if ( (int)v6 * (HIDWORD(v41) - HIDWORD(v40)) > v11 )
            {
              v11 = v6 * (HIDWORD(v41) - HIDWORD(v40));
              v5 = v12;
            }
          }
        }
      }
      v12 = *(_QWORD *)(v12 + 16);
    }
    while ( v12 );
    if ( v11 > 0 )
      return v5;
  }
  if ( (v3 & 3) != 0 )
  {
    if ( (v3 & 3) != 1 )
    {
      if ( (v3 & 3) == 2 )
      {
        if ( (unsigned int)(*a1 + 0x8000) > 0xFFFF
          || (unsigned int)(a1[1] + 0x8000) > 0xFFFF
          || (unsigned int)(a1[2] + 0x8000) > 0xFFFF
          || (unsigned int)(a1[3] + 0x8000) > 0xFFFF )
        {
          v28 = -1LL;
          for ( i = *(_QWORD *)(GetDispInfo(0x8000LL, 0xFFFFLL, v9) + 96); i; i = *(_QWORD *)(i + 16) )
          {
            if ( (*(_DWORD *)(i + 24) & 1) != 0 )
            {
              v30 = (int *)GetDPIMonitorRect(i, v3);
              v31 = a1[2];
              v32 = *v30;
              if ( v31 <= *v30 || (v32 = *a1, v31 = v30[2], *a1 >= v31) )
                v33 = v32 - v31 + 1;
              else
                v33 = 0;
              v34 = v33;
              if ( v33 < v28 )
              {
                v35 = a1[3];
                v36 = v30[1];
                if ( v35 <= v36 || (v36 = a1[1], v35 = v30[3], v36 >= v35) )
                  v37 = v36 - v35 + 1;
                else
                  v37 = 0;
                v38 = v34 * v34;
                if ( v38 < v28 && v37 + v38 < v28 )
                {
                  v39 = v37 * (__int64)v37 + v38;
                  if ( v39 < v28 )
                  {
                    v28 = v39;
                    v5 = i;
                  }
                }
              }
            }
          }
        }
        else
        {
          v17 = -1;
          for ( j = *(_QWORD *)(GetDispInfo(0x8000LL, 0xFFFFLL, v9) + 96); j; j = *(_QWORD *)(j + 16) )
          {
            if ( (*(_DWORD *)(j + 24) & 1) != 0 )
            {
              v19 = (int *)GetDPIMonitorRect(j, v3);
              v20 = a1[2];
              v21 = *v19;
              if ( v20 <= *v19 || (v21 = *a1, v20 = v19[2], *a1 >= v20) )
                v22 = v21 - v20 + 1;
              else
                v22 = 0;
              if ( v22 < v17 )
              {
                v23 = a1[3];
                v24 = v19[1];
                if ( v23 <= v24 || (v24 = a1[1], v23 = v19[3], v24 >= v23) )
                  v25 = v24 - v23 + 1;
                else
                  v25 = 0;
                v26 = v22 * v22;
                if ( v26 < v17 && v26 + v25 < v17 )
                {
                  v27 = v25 * v25 + v26;
                  if ( v27 < v17 )
                  {
                    v17 = v27;
                    v5 = j;
                  }
                }
              }
            }
          }
        }
        return v5;
      }
      return 0LL;
    }
    return *(_QWORD *)(GetDispInfo(v7, v6, v9) + 88);
  }
  return 0LL;
}
