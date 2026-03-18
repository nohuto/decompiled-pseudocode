/*
 * XREFs of ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01C4B0C
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0056A14 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     GetSystemMetricsForWindow @ 0x1C00720B4 (GetSystemMetricsForWindow.c)
 *     _MonitorFromRect @ 0x1C00780C0 (_MonitorFromRect.c)
 *     GetWindowExtendedMargin @ 0x1C00916E4 (GetWindowExtendedMargin.c)
 *     RECTFromSIZERECT @ 0x1C00EE3AC (RECTFromSIZERECT.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

void __fastcall ExtendArrangedRectangleByFrameMargin(struct tagWND *a1, struct tagSIZERECT *a2)
{
  int v4; // eax
  __int64 v5; // rdi
  int v6; // eax
  int *v7; // rdi
  int v8; // r8d
  int v9; // ecx
  int v10; // edx
  int v11; // r10d
  int v12; // eax
  int v13; // r14d
  int v14; // ebp
  char v15; // r11
  int v16; // eax
  bool v17; // zf
  char v18; // dl
  int v19; // ebp
  __int64 v20; // [rsp+20h] [rbp-38h] BYREF
  int v21[4]; // [rsp+28h] [rbp-30h] BYREF

  if ( (unsigned int)GetWindowExtendedMargin((__int64)a1, &v20) )
  {
    RECTFromSIZERECT(v21, a2);
    v4 = MonitorFlagsFromDpiAwareness(*((unsigned int *)a1 + 86));
    v5 = MonitorFromRect(v21, v4 | 1u);
    if ( v5 )
    {
      v6 = *((_DWORD *)a1 + 86);
      if ( v6 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL) + 8LL) + 244LL) & 1) == 0 )
      {
        if ( v6 == 1 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL) + 8LL) + 244LL) & 1) != 0 )
          v7 = (int *)(v5 + 108);
        else
          v7 = (int *)(v5 + 76);
      }
      else
      {
        v7 = (int *)(v5 + 92);
      }
      v8 = *v7;
      v9 = *(_DWORD *)a2;
      if ( *v7 > *(_DWORD *)a2
        || (v10 = *((_DWORD *)a2 + 2), v11 = v7[2], v11 < v10 + v9)
        || (v12 = *((_DWORD *)a2 + 1), v7[1] > v12)
        || (v13 = *((_DWORD *)a2 + 3), v14 = v13 + v12, v7[3] < v13 + v12) )
      {
        if ( v7[1] == *((_DWORD *)a2 + 1) )
        {
          if ( (v18 = *((_BYTE *)a1 + 289), (v18 & 3) == 3)
            || (v18 & 1) != 0 && v9 + (unsigned __int16)v20 == v8
            || (v18 & 2) != 0 && v9 + *((_DWORD *)a2 + 2) - WORD1(v20) == v7[2] )
          {
            v13 = *((_DWORD *)a2 + 3);
            v19 = *((_DWORD *)a2 + 1);
            if ( v13 - v19 <= (int)GetSystemMetricsForWindow((__int64)a1, 0x3Cu) )
            {
              v17 = v7[3] == v13 + v19;
LABEL_31:
              if ( v17 )
                *((_DWORD *)a2 + 3) = v13 + HIWORD(v20);
            }
          }
        }
      }
      else
      {
        v15 = *((_BYTE *)a1 + 289);
        if ( (v15 & 3) == 3 )
        {
LABEL_22:
          v17 = v7[3] == v14;
          goto LABEL_31;
        }
        if ( (v15 & 1) != 0 && v8 == v9 )
        {
          v16 = (unsigned __int16)v20;
LABEL_21:
          *((_DWORD *)a2 + 2) = v10 + 2 * v16;
          *(_DWORD *)a2 = v9 - v16;
          goto LABEL_22;
        }
        if ( (v15 & 2) != 0 && v11 == v10 + v9 )
        {
          v16 = WORD1(v20);
          goto LABEL_21;
        }
      }
    }
  }
}
