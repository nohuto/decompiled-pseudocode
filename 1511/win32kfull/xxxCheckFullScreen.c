/*
 * XREFs of xxxCheckFullScreen @ 0x1C006899C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0056A14 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z @ 0x1C0068C48 (-IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z.c)
 *     xxxRemoveFullScreen @ 0x1C0068C7C (xxxRemoveFullScreen.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C00707C8 (GetWindowBordersWithDpiAwareness.c)
 *     GetSystemMetricsForWindow @ 0x1C00720B4 (GetSystemMetricsForWindow.c)
 *     _MonitorFromWindow @ 0x1C0077FC0 (_MonitorFromWindow.c)
 *     _MonitorFromRect @ 0x1C00780C0 (_MonitorFromRect.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     RECTFromSIZERECT @ 0x1C00EE3AC (RECTFromSIZERECT.c)
 *     xxxAddFullScreen @ 0x1C01092CC (xxxAddFullScreen.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
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
  int v15; // ebx
  signed int right; // r14d
  int v17; // ebx
  int WindowBordersWithDpiAwareness; // ebx
  int v19; // ebx
  int v20; // r8d
  unsigned int v21; // ebx
  struct tagRECT *v22; // rcx
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // r14
  int v26; // eax
  _DWORD *v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // [rsp+20h] [rbp-68h] BYREF
  __int64 v31; // [rsp+28h] [rbp-60h]
  _BYTE v32[16]; // [rsp+38h] [rbp-50h] BYREF

  v4 = 0;
  v5 = *(_QWORD *)(GetDispInfo() + 88);
  if ( *(_DWORD *)(gpDispInfo + 80LL) <= 1u )
  {
    v6 = v5;
    goto LABEL_3;
  }
  v21 = *(_DWORD *)(a1 + 344);
  if ( v21 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0 )
  {
    if ( v21 != 1
      || (v22 = (struct tagRECT *)(gpDispInfo + 136LL),
          (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0) )
    {
      v22 = (struct tagRECT *)(gpDispInfo + 104LL);
    }
  }
  else
  {
    v22 = (struct tagRECT *)(gpDispInfo + 120LL);
  }
  if ( !(unsigned int)IsMaxedRect(v22, a2) )
  {
    RECTFromSIZERECT(v32, v23);
    v24 = MonitorFlagsFromDpiAwareness(v21);
    v6 = MonitorFromRect(v32, v24 | 1u);
    if ( v6 != v5 )
    {
      v7 = 0;
      goto LABEL_4;
    }
LABEL_3:
    v7 = 1;
LABEL_4:
    v30 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v30;
    v31 = v6;
    ++*(_DWORD *)(v6 + 8);
    v8 = *(_DWORD *)(a1 + 344);
    if ( v8 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0 )
    {
      if ( v8 != 1
        || (v9 = (struct tagRECT *)(v6 + 108),
            (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0) )
      {
        v9 = (struct tagRECT *)(v6 + 76);
      }
    }
    else
    {
      v9 = (struct tagRECT *)(v6 + 92);
    }
    if ( v8 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0 )
    {
      if ( v8 != 1
        || (v10 = (struct tagRECT *)(v6 + 60),
            (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0) )
      {
        v10 = (struct tagRECT *)(v6 + 28);
      }
    }
    else
    {
      v10 = (struct tagRECT *)(v6 + 44);
    }
    if ( (unsigned int)IsMaxedRect(v9, a2) )
    {
      if ( (*(_BYTE *)(a1 + 55) & 1) == 0 )
        goto LABEL_25;
      SetOrClrWF(1LL, a1, 832LL, 1LL);
      if ( *(_DWORD *)(gpDispInfo + 80LL) > 1u )
      {
        v25 = MonitorFromWindow(a1, 33LL);
        if ( v25 != v6 )
        {
          if ( v7 )
          {
            v26 = *(_DWORD *)(a1 + 344);
            if ( v26 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0 )
            {
              if ( v26 != 1
                || (v27 = (_DWORD *)(v25 + 60),
                    (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0) )
              {
                v27 = (_DWORD *)(v25 + 28);
              }
            }
            else
            {
              v27 = (_DWORD *)(v25 + 44);
            }
            *(_DWORD *)a2 += *v27;
            *((_DWORD *)a2 + 1) += v27[1];
            *((_DWORD *)a2 + 2) += v10->left + v27[2] - v10->right - *v27;
            v28 = (unsigned int)(v10->top + v27[3] - v10->bottom - v27[1]);
            *((_DWORD *)a2 + 3) += v28;
            ThreadUnlock1(v28, v27);
            v7 = 0;
            v30 = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = &v30;
            v31 = v25;
            ++*(_DWORD *)(v25 + 8);
          }
        }
      }
      if ( (*(_BYTE *)(a1 + 55) & 1) != 0 && (*(_BYTE *)(a1 + 54) & ((*(_BYTE *)(a1 + 54) & 0xC0) == 0xC0)) != 0 )
      {
        v15 = *(_DWORD *)a2;
        right = v10->right;
        if ( (int)(v15 + GetSystemMetricsForWindow(a1, 4LL)) > right
          || v15 + *((_DWORD *)a2 + 2) < right
          || (v17 = *((_DWORD *)a2 + 1), (signed int)(v17 + GetSystemMetricsForWindow(a1, 4LL)) > v10->top)
          || (v12 = (unsigned int)(v17 + *((_DWORD *)a2 + 3)), (int)v12 < v10->bottom) )
        {
          if ( (*(_BYTE *)(a1 + 44) & 0x40) != 0 )
            v4 = xxxRemoveFullScreen(a1);
          WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1);
          v19 = GetSystemMetricsForWindow(a1, 5LL) * WindowBordersWithDpiAwareness;
          *(_DWORD *)a2 = v9->left - v19;
          v12 = (unsigned int)(2 * v19);
          *((_DWORD *)a2 + 1) = v9->top - v19;
          v20 = v12 + v9->bottom - v9->top;
          v13 = (unsigned int)(v12 + v9->right - v9->left);
          *((_DWORD *)a2 + 2) = v13;
          if ( v7 && (*(_BYTE *)(a1 + 45) & 2) == 0 )
          {
            v29 = *((_DWORD *)a2 + 3);
            if ( v20 < v29 )
              v29 = v20;
            *((_DWORD *)a2 + 3) = v29;
          }
          else
          {
            *((_DWORD *)a2 + 3) = v20;
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
LABEL_25:
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
