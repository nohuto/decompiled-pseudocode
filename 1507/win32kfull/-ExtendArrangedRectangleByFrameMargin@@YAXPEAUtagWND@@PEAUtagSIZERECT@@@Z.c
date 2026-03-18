/*
 * XREFs of ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01C2F4C
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0066D0C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     GetWindowExtendedMargin @ 0x1C0044788 (GetWindowExtendedMargin.c)
 *     RECTFromSIZERECT @ 0x1C005CCBC (RECTFromSIZERECT.c)
 *     _MonitorFromRect @ 0x1C0082E40 (_MonitorFromRect.c)
 *     GetSystemMetricsForWindow @ 0x1C0095290 (GetSystemMetricsForWindow.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

void __fastcall ExtendArrangedRectangleByFrameMargin(struct tagWND *a1, struct tagSIZERECT *a2)
{
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // rdi
  int v7; // eax
  int *v8; // rdi
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
    v4 = MonitorFlagsFromDpiAwareness(*((unsigned int *)a1 + 86));
    v6 = MonitorFromRect(v22, v4 | 1u, v5);
    if ( v6 )
    {
      v7 = *((_DWORD *)a1 + 86);
      if ( v7 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 8LL) + 260LL) & 1) == 0 )
      {
        if ( v7 == 1 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 8LL) + 260LL) & 1) != 0 )
          v8 = (int *)(v6 + 108);
        else
          v8 = (int *)(v6 + 76);
      }
      else
      {
        v8 = (int *)(v6 + 92);
      }
      v9 = *v8;
      v10 = *(_DWORD *)a2;
      if ( *v8 > *(_DWORD *)a2
        || (v11 = *((_DWORD *)a2 + 2), v12 = v8[2], v12 < v11 + v10)
        || (v13 = *((_DWORD *)a2 + 1), v8[1] > v13)
        || (v14 = *((_DWORD *)a2 + 3), v15 = v14 + v13, v8[3] < v14 + v13) )
      {
        if ( v8[1] == *((_DWORD *)a2 + 1) )
        {
          if ( (v19 = *((_BYTE *)a1 + 289), (v19 & 3) == 3)
            || (v19 & 1) != 0 && v10 + (unsigned __int16)v21 == v9
            || (v19 & 2) != 0 && v10 + *((_DWORD *)a2 + 2) - WORD1(v21) == v8[2] )
          {
            v14 = *((_DWORD *)a2 + 3);
            v20 = *((_DWORD *)a2 + 1);
            if ( v14 - v20 <= (int)GetSystemMetricsForWindow((__int64)a1, 0x3Cu) )
            {
              v18 = v8[3] == v14 + v20;
LABEL_31:
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
LABEL_22:
          v18 = v8[3] == v15;
          goto LABEL_31;
        }
        if ( (v16 & 1) != 0 && v9 == v10 )
        {
          v17 = (unsigned __int16)v21;
LABEL_21:
          *((_DWORD *)a2 + 2) = v11 + 2 * v17;
          *(_DWORD *)a2 = v10 - v17;
          goto LABEL_22;
        }
        if ( (v16 & 2) != 0 && v12 == v11 + v10 )
        {
          v17 = WORD1(v21);
          goto LABEL_21;
        }
      }
    }
  }
}
