/*
 * XREFs of xxxCheckFullScreen @ 0x1C0056A5C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0079810 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z @ 0x1C0056D28 (-IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z.c)
 *     xxxRemoveFullScreen @ 0x1C0056D5C (xxxRemoveFullScreen.c)
 *     GetMonitorFlagsFromWindow @ 0x1C0058654 (GetMonitorFlagsFromWindow.c)
 *     GetSystemMetricsForWindow @ 0x1C006E7C8 (GetSystemMetricsForWindow.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C006EAD8 (GetWindowBordersWithDpiAwareness.c)
 *     RECTFromSIZERECT @ 0x1C006F9A8 (RECTFromSIZERECT.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     _MonitorFromWindow @ 0x1C00AFFA0 (_MonitorFromWindow.c)
 *     _MonitorFromRect @ 0x1C00B0090 (_MonitorFromRect.c)
 *     xxxAddFullScreen @ 0x1C0129B34 (xxxAddFullScreen.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxCheckFullScreen(__int64 a1, const struct tagSIZERECT *a2)
{
  unsigned int v4; // r12d
  __int64 v5; // rbp
  __int64 v6; // rbx
  int v7; // r13d
  int v8; // edx
  struct tagRECT *v9; // r15
  struct tagRECT *v10; // rbp
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // ebx
  int SystemMetricsForWindow; // eax
  LONG right; // edx
  int v22; // ebx
  int WindowBordersWithDpiAwareness; // ebx
  int v24; // ebx
  int v25; // r8d
  __int64 v26; // rax
  struct tagRECT *v27; // rcx
  __int64 v28; // rax
  int MonitorFlagsFromWindow; // eax
  __int64 v30; // r14
  __int64 v31; // rax
  _DWORD *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // [rsp+20h] [rbp-68h] BYREF
  __int64 v37; // [rsp+28h] [rbp-60h]
  _BYTE v38[16]; // [rsp+38h] [rbp-50h] BYREF

  v4 = 0;
  v5 = *(_QWORD *)(GetDispInfo() + 88);
  if ( *(_DWORD *)(gpDispInfo + 80LL) <= 1u )
  {
    v6 = v5;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(a1 + 352) & 0xF) == 0
    && (v26 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
    && (*(_DWORD *)(*(_QWORD *)(v26 + 8) + 244LL) & 1) != 0 )
  {
    v27 = (struct tagRECT *)(gpDispInfo + 120LL);
  }
  else if ( (*(_DWORD *)(a1 + 352) & 0xF) != 1
         || (v28 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) == 0
         || (v27 = (struct tagRECT *)(gpDispInfo + 136LL), (*(_DWORD *)(*(_QWORD *)(v28 + 8) + 244LL) & 1) == 0) )
  {
    v27 = (struct tagRECT *)(gpDispInfo + 104LL);
  }
  if ( !(unsigned int)IsMaxedRect(v27, a2) )
  {
    RECTFromSIZERECT(v38);
    MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(a1);
    v6 = MonitorFromRect(v38, MonitorFlagsFromWindow | 1u);
    if ( v6 != v5 )
    {
      v7 = 0;
      goto LABEL_4;
    }
LABEL_3:
    v7 = 1;
LABEL_4:
    v36 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v36;
    v37 = v6;
    ++*(_DWORD *)(v6 + 8);
    v8 = *(_DWORD *)(a1 + 352) & 0xF;
    if ( !v8
      && (v17 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
      && (*(_DWORD *)(*(_QWORD *)(v17 + 8) + 244LL) & 1) != 0 )
    {
      v9 = (struct tagRECT *)(v6 + 92);
    }
    else if ( v8 != 1
           || (v15 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) == 0
           || (v9 = (struct tagRECT *)(v6 + 108), (*(_DWORD *)(*(_QWORD *)(v15 + 8) + 244LL) & 1) == 0) )
    {
      v9 = (struct tagRECT *)(v6 + 76);
    }
    if ( !v8
      && (v18 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
      && (*(_DWORD *)(*(_QWORD *)(v18 + 8) + 244LL) & 1) != 0 )
    {
      v10 = (struct tagRECT *)(v6 + 44);
    }
    else if ( v8 != 1
           || (v16 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) == 0
           || (v10 = (struct tagRECT *)(v6 + 60), (*(_DWORD *)(*(_QWORD *)(v16 + 8) + 244LL) & 1) == 0) )
    {
      v10 = (struct tagRECT *)(v6 + 28);
    }
    if ( (unsigned int)IsMaxedRect(v9, a2) )
    {
      if ( (*(_BYTE *)(a1 + 55) & 1) == 0 )
        goto LABEL_29;
      SetOrClrWF(1LL, a1, 832LL, 1LL);
      if ( *(_DWORD *)(gpDispInfo + 80LL) > 1u )
      {
        v30 = MonitorFromWindow(a1, 33LL);
        if ( v30 != v6 )
        {
          if ( v7 )
          {
            if ( (*(_DWORD *)(a1 + 352) & 0xF) == 0
              && (v31 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
              && (*(_DWORD *)(*(_QWORD *)(v31 + 8) + 244LL) & 1) != 0 )
            {
              v32 = (_DWORD *)(v30 + 44);
            }
            else if ( (*(_DWORD *)(a1 + 352) & 0xF) != 1
                   || (v33 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) == 0
                   || (v32 = (_DWORD *)(v30 + 60), (*(_DWORD *)(*(_QWORD *)(v33 + 8) + 244LL) & 1) == 0) )
            {
              v32 = (_DWORD *)(v30 + 28);
            }
            *(_DWORD *)a2 += *v32;
            *((_DWORD *)a2 + 1) += v32[1];
            *((_DWORD *)a2 + 2) += v10->left + v32[2] - v10->right - *v32;
            v34 = (unsigned int)(v10->top + v32[3] - v10->bottom - v32[1]);
            *((_DWORD *)a2 + 3) += v34;
            ThreadUnlock1(v34, v32);
            v7 = 0;
            v36 = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = &v36;
            v37 = v30;
            ++*(_DWORD *)(v30 + 8);
          }
        }
      }
      if ( (*(_BYTE *)(a1 + 55) & 1) != 0 && (*(_BYTE *)(a1 + 54) & ((*(_BYTE *)(a1 + 54) & 0xC0) == 0xC0)) != 0 )
      {
        v19 = *(_DWORD *)a2;
        SystemMetricsForWindow = GetSystemMetricsForWindow(a1, 4LL);
        right = v10->right;
        if ( SystemMetricsForWindow + v19 > right
          || v19 + *((_DWORD *)a2 + 2) < right
          || (v22 = *((_DWORD *)a2 + 1), (signed int)(GetSystemMetricsForWindow(a1, 4LL) + v22) > v10->top)
          || (v12 = (unsigned int)(v22 + *((_DWORD *)a2 + 3)), (int)v12 < v10->bottom) )
        {
          if ( (*(_BYTE *)(a1 + 44) & 0x40) != 0 )
            v4 = xxxRemoveFullScreen(a1);
          WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1);
          v24 = GetSystemMetricsForWindow(a1, 5LL) * WindowBordersWithDpiAwareness;
          *(_DWORD *)a2 = v9->left - v24;
          v12 = (unsigned int)(2 * v24);
          *((_DWORD *)a2 + 1) = v9->top - v24;
          v25 = v12 + v9->bottom - v9->top;
          v13 = (unsigned int)(v12 + v9->right - v9->left);
          *((_DWORD *)a2 + 2) = v13;
          if ( v7 && (*(_BYTE *)(a1 + 45) & 2) == 0 )
          {
            v35 = *((_DWORD *)a2 + 3);
            if ( v25 < v35 )
              v35 = v25;
            *((_DWORD *)a2 + 3) = v35;
          }
          else
          {
            *((_DWORD *)a2 + 3) = v25;
          }
          goto LABEL_15;
        }
        if ( (*(_BYTE *)(a1 + 44) & 0x40) != 0 )
        {
LABEL_15:
          ThreadUnlock1(v13, v12);
          return v4;
        }
      }
      else
      {
LABEL_29:
        if ( !(unsigned int)IsMaxedRect(v10, a2) )
          goto LABEL_15;
      }
      v11 = xxxAddFullScreen(a1);
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 55) & 1) != 0 )
        SetOrClrWF(0LL, a1, 832LL, 1LL);
      v11 = xxxRemoveFullScreen(a1);
    }
    v4 = v11;
    goto LABEL_15;
  }
  return 0LL;
}
