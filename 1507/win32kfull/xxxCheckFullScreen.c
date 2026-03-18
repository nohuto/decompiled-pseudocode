/*
 * XREFs of xxxCheckFullScreen @ 0x1C008B384
 * Callers:
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0066D0C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     RECTFromSIZERECT @ 0x1C005CCBC (RECTFromSIZERECT.c)
 *     _MonitorFromWindow @ 0x1C0082D50 (_MonitorFromWindow.c)
 *     _MonitorFromRect @ 0x1C0082E40 (_MonitorFromRect.c)
 *     ?IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z @ 0x1C008B630 (-IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z.c)
 *     xxxRemoveFullScreen @ 0x1C008B664 (xxxRemoveFullScreen.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C0093900 (GetWindowBordersWithDpiAwareness.c)
 *     GetSystemMetricsForWindow @ 0x1C0095290 (GetSystemMetricsForWindow.c)
 *     xxxAddFullScreen @ 0x1C00FCEA4 (xxxAddFullScreen.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall xxxCheckFullScreen(__int64 a1, const struct tagSIZERECT *a2, __int64 a3)
{
  unsigned int v5; // r12d
  __int64 v6; // rbp
  __int64 v7; // rbx
  int v8; // r13d
  int v9; // edx
  struct tagRECT *v10; // r15
  struct tagRECT *v11; // rbp
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // r8
  int v17; // ebx
  signed int right; // r14d
  int v19; // ebx
  int WindowBordersWithDpiAwareness; // ebx
  int v21; // ebx
  int v22; // r8d
  unsigned int v23; // ebx
  struct tagRECT *v24; // rcx
  _DWORD *v25; // rdx
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // r14
  int v29; // eax
  _DWORD *v30; // rdx
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // [rsp+20h] [rbp-68h] BYREF
  __int64 v34; // [rsp+28h] [rbp-60h]
  int v35[4]; // [rsp+38h] [rbp-50h] BYREF

  v5 = 0;
  v6 = *(_QWORD *)(GetDispInfo(a1, a2, a3) + 88);
  if ( *(_DWORD *)(gpDispInfo + 80LL) <= 1u )
  {
    v7 = v6;
    goto LABEL_3;
  }
  v23 = *(_DWORD *)(a1 + 344);
  if ( v23 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
  {
    if ( v23 != 1
      || (v24 = (struct tagRECT *)(gpDispInfo + 136LL),
          (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0) )
    {
      v24 = (struct tagRECT *)(gpDispInfo + 104LL);
    }
  }
  else
  {
    v24 = (struct tagRECT *)(gpDispInfo + 120LL);
  }
  if ( !(unsigned int)IsMaxedRect(v24, a2) )
  {
    RECTFromSIZERECT(v35, v25);
    v26 = MonitorFlagsFromDpiAwareness(v23);
    v7 = MonitorFromRect(v35, v26 | 1u, v27);
    if ( v7 != v6 )
    {
      v8 = 0;
      goto LABEL_4;
    }
LABEL_3:
    v8 = 1;
LABEL_4:
    v33 = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = &v33;
    v34 = v7;
    ++*(_DWORD *)(v7 + 8);
    v9 = *(_DWORD *)(a1 + 344);
    if ( v9 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
    {
      if ( v9 != 1
        || (v10 = (struct tagRECT *)(v7 + 108),
            (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0) )
      {
        v10 = (struct tagRECT *)(v7 + 76);
      }
    }
    else
    {
      v10 = (struct tagRECT *)(v7 + 92);
    }
    if ( v9 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
    {
      if ( v9 != 1
        || (v11 = (struct tagRECT *)(v7 + 60),
            (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0) )
      {
        v11 = (struct tagRECT *)(v7 + 28);
      }
    }
    else
    {
      v11 = (struct tagRECT *)(v7 + 44);
    }
    if ( (unsigned int)IsMaxedRect(v10, a2) )
    {
      if ( (*(_BYTE *)(a1 + 55) & 1) == 0 )
        goto LABEL_25;
      SetOrClrWF(1, (_DWORD *)a1, 0x340u, 1);
      if ( *(_DWORD *)(gpDispInfo + 80LL) > 1u )
      {
        v28 = MonitorFromWindow(a1, 33LL, v16);
        if ( v28 != v7 )
        {
          if ( v8 )
          {
            v29 = *(_DWORD *)(a1 + 344);
            if ( v29 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
            {
              if ( v29 != 1
                || (v30 = (_DWORD *)(v28 + 60),
                    (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0) )
              {
                v30 = (_DWORD *)(v28 + 28);
              }
            }
            else
            {
              v30 = (_DWORD *)(v28 + 44);
            }
            *(_DWORD *)a2 += *v30;
            *((_DWORD *)a2 + 1) += v30[1];
            *((_DWORD *)a2 + 2) += v11->left + v30[2] - v11->right - *v30;
            v31 = (unsigned int)(v11->top + v30[3] - v11->bottom - v30[1]);
            *((_DWORD *)a2 + 3) += v31;
            ThreadUnlock1(v31, v30);
            v8 = 0;
            v33 = *(_QWORD *)(gptiCurrent + 376LL);
            *(_QWORD *)(gptiCurrent + 376LL) = &v33;
            v34 = v28;
            ++*(_DWORD *)(v28 + 8);
          }
        }
      }
      if ( (*(_BYTE *)(a1 + 55) & 1) != 0 && (*(_BYTE *)(a1 + 54) & ((*(_BYTE *)(a1 + 54) & 0xC0) == 0xC0)) != 0 )
      {
        v17 = *(_DWORD *)a2;
        right = v11->right;
        if ( (int)(v17 + GetSystemMetricsForWindow(a1, 4LL)) > right
          || v17 + *((_DWORD *)a2 + 2) < right
          || (v19 = *((_DWORD *)a2 + 1), (signed int)(v19 + GetSystemMetricsForWindow(a1, 4LL)) > v11->top)
          || (v13 = (unsigned int)(v19 + *((_DWORD *)a2 + 3)), (int)v13 < v11->bottom) )
        {
          if ( (*(_BYTE *)(a1 + 44) & 0x40) != 0 )
            v5 = xxxRemoveFullScreen(a1);
          WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1);
          v21 = GetSystemMetricsForWindow(a1, 5LL) * WindowBordersWithDpiAwareness;
          *(_DWORD *)a2 = v10->left - v21;
          v13 = (unsigned int)(2 * v21);
          *((_DWORD *)a2 + 1) = v10->top - v21;
          v22 = v13 + v10->bottom - v10->top;
          v14 = (unsigned int)(v13 + v10->right - v10->left);
          *((_DWORD *)a2 + 2) = v14;
          if ( v8 && (*(_BYTE *)(a1 + 45) & 2) == 0 )
          {
            v32 = *((_DWORD *)a2 + 3);
            if ( v22 < v32 )
              v32 = v22;
            *((_DWORD *)a2 + 3) = v32;
          }
          else
          {
            *((_DWORD *)a2 + 3) = v22;
          }
          goto LABEL_15;
        }
        if ( (*(_BYTE *)(a1 + 44) & 0x40) != 0 )
        {
LABEL_15:
          ThreadUnlock1(v14, v13);
          return v5;
        }
      }
      else
      {
LABEL_25:
        if ( !(unsigned int)IsMaxedRect(v11, a2) )
          goto LABEL_15;
      }
      v12 = xxxAddFullScreen(a1);
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 55) & 1) != 0 )
        SetOrClrWF(0, (_DWORD *)a1, 0x340u, 1);
      v12 = xxxRemoveFullScreen(a1);
    }
    v5 = v12;
    goto LABEL_15;
  }
  return 0LL;
}
