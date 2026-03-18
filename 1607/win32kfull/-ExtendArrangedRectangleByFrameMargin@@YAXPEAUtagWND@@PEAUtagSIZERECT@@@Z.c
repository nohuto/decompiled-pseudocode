/*
 * XREFs of ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01C3D78
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0079810 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     GetMonitorFlagsFromWindow @ 0x1C0058654 (GetMonitorFlagsFromWindow.c)
 *     GetSystemMetricsForWindow @ 0x1C006E7C8 (GetSystemMetricsForWindow.c)
 *     RECTFromSIZERECT @ 0x1C006F9A8 (RECTFromSIZERECT.c)
 *     GetWindowExtendedMargin @ 0x1C00ACD48 (GetWindowExtendedMargin.c)
 *     _MonitorFromRect @ 0x1C00B0090 (_MonitorFromRect.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void __fastcall ExtendArrangedRectangleByFrameMargin(struct tagWND *a1, struct tagSIZERECT *a2)
{
  int MonitorFlagsFromWindow; // eax
  __int64 v5; // rdi
  __int64 v6; // rcx
  int *v7; // rdi
  __int64 v8; // rax
  int v9; // r8d
  int v10; // ecx
  int v11; // edx
  int v12; // r10d
  int v13; // eax
  int v14; // r14d
  int v15; // ebp
  char v16; // r11
  int v17; // eax
  bool v18; // zf
  char v19; // dl
  int v20; // ebp
  __int64 v21; // [rsp+20h] [rbp-38h] BYREF
  int v22[4]; // [rsp+28h] [rbp-30h] BYREF

  if ( (unsigned int)GetWindowExtendedMargin((__int64)a1, &v21) )
  {
    RECTFromSIZERECT(v22, a2);
    MonitorFlagsFromWindow = GetMonitorFlagsFromWindow((__int64)a1);
    v5 = MonitorFromRect(v22, MonitorFlagsFromWindow | 1u);
    if ( v5 )
    {
      if ( (*((_DWORD *)a1 + 88) & 0xF) == 0
        && (v6 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL)) != 0
        && (*(_DWORD *)(*(_QWORD *)(v6 + 8) + 244LL) & 1) != 0 )
      {
        v7 = (int *)(v5 + 92);
      }
      else if ( (*((_DWORD *)a1 + 88) & 0xF) == 1
             && (v8 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL)) != 0
             && (*(_DWORD *)(*(_QWORD *)(v8 + 8) + 244LL) & 1) != 0 )
      {
        v7 = (int *)(v5 + 108);
      }
      else
      {
        v7 = (int *)(v5 + 76);
      }
      v9 = *v7;
      v10 = *(_DWORD *)a2;
      if ( *v7 > *(_DWORD *)a2
        || (v11 = *((_DWORD *)a2 + 2), v12 = v7[2], v12 < v11 + v10)
        || (v13 = *((_DWORD *)a2 + 1), v7[1] > v13)
        || (v14 = *((_DWORD *)a2 + 3), v15 = v14 + v13, v7[3] < v14 + v13) )
      {
        if ( v7[1] == *((_DWORD *)a2 + 1) )
        {
          if ( (v19 = *((_BYTE *)a1 + 289), (v19 & 3) == 3)
            || (v19 & 1) != 0 && v10 + (unsigned __int16)v21 == v9
            || (v19 & 2) != 0 && v10 + *((_DWORD *)a2 + 2) - WORD1(v21) == v7[2] )
          {
            v14 = *((_DWORD *)a2 + 3);
            v20 = *((_DWORD *)a2 + 1);
            if ( v14 - v20 <= (int)GetSystemMetricsForWindow((__int64)a1, 0x3Cu) )
            {
              v18 = v7[3] == v14 + v20;
LABEL_33:
              if ( v18 )
                *((_DWORD *)a2 + 3) = v14 + HIWORD(v21);
            }
          }
        }
      }
      else
      {
        v16 = *((_BYTE *)a1 + 289);
        if ( (v16 & 3) == 3 )
        {
LABEL_24:
          v18 = v7[3] == v15;
          goto LABEL_33;
        }
        if ( (v16 & 1) != 0 && v9 == v10 )
        {
          v17 = (unsigned __int16)v21;
LABEL_23:
          *((_DWORD *)a2 + 2) = v11 + 2 * v17;
          *(_DWORD *)a2 = v10 - v17;
          goto LABEL_24;
        }
        if ( (v16 & 2) != 0 && v12 == v11 + v10 )
        {
          v17 = WORD1(v21);
          goto LABEL_23;
        }
      }
    }
  }
}
