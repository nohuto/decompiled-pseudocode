/*
 * XREFs of xxxCalcCaptionButton @ 0x14014AFF8
 * Callers:
 *     xxxTrackCaptionButton @ 0x140149F00 (xxxTrackCaptionButton.c)
 *     xxxGetTitleBarInfoEx @ 0x14014C0C0 (xxxGetTitleBarInfoEx.c)
 * Callees:
 *     GetWindowBordersForDpi @ 0x14000F560 (GetWindowBordersForDpi.c)
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     xxxMNCanClose @ 0x140032C30 (xxxMNCanClose.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 */

__int64 __fastcall xxxCalcCaptionButton(_QWORD *a1, int a2, _WORD *a3, _DWORD *a4, int *a5, int a6)
{
  __int64 v8; // r8
  int v10; // ecx
  unsigned int WindowDpiLastNotify; // esi
  int v12; // r9d
  _DWORD *v13; // r8
  __int64 v14; // rax
  int v15; // r12d
  int v16; // r13d
  int v17; // ebx
  int DpiDependentMetric; // r15d
  int v19; // ebx
  int v21; // ecx
  int v22; // edx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rax
  int *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax

  *a3 = 0;
  v8 = a1[5];
  v10 = *(_DWORD *)(v8 + 288) & 0xF;
  if ( v10 == 3 )
  {
    WindowDpiLastNotify = (*(_DWORD *)(v8 + 288) >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v8 + 232) & 0x400) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
  }
  else if ( !v10 && (v28 = *(_QWORD *)(a1[2] + 488LL)) != 0 && (*(_DWORD *)(**(_QWORD **)(v28 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(a1[2] + 456LL) + 272LL);
  }
  if ( (*(_BYTE *)(v8 + 31) & 0x20) != 0 )
    v12 = -3;
  else
    v12 = -(int)GetWindowBordersForDpi(*(_DWORD *)(v8 + 28), *(_DWORD *)(v8 + 24), v8, (__int64)a4, WindowDpiLastNotify);
  v13 = (_DWORD *)a1[5];
  *a4 = v13[22] - v12;
  a4[2] = v12 + v13[24];
  a4[1] = v13[23] - v12;
  a4[3] = v12 + v13[25];
  v14 = a1[5];
  v15 = -*(_DWORD *)(v14 + 88);
  v16 = -*(_DWORD *)(v14 + 92);
  v17 = (*(char *)(v14 + 24) >> 7) & 0xB;
  DpiDependentMetric = GetDpiDependentMetric(v17 + 12, WindowDpiLastNotify);
  v19 = GetDpiDependentMetric(v17 + 13, WindowDpiLastNotify);
  if ( a2 == 5 )
  {
    if ( (unsigned int)xxxMNCanClose(a1) || a6 )
    {
      v27 = a1[5];
      *a3 = -4000;
      *a5 = (*(char *)(v27 + 24) >> 7) & 0x29;
    }
    goto LABEL_8;
  }
  v25 = a1[5];
  if ( a2 == 2 )
  {
    if ( (*(_BYTE *)(v25 + 30) & 2) == 0 && !a6 )
      goto LABEL_8;
    LOWORD(v15) = v15 + 2;
    a4[2] += -2 * DpiDependentMetric;
    v26 = a5;
    if ( (*(_BYTE *)(a1[5] + 31LL) & 0x20) == 0 )
    {
      *a5 = 4;
      *a3 = -4064;
      goto LABEL_8;
    }
  }
  else
  {
    if ( a2 != 3 )
    {
      if ( (*(_BYTE *)(v25 + 25) & 4) != 0 )
      {
        a4[2] -= DpiDependentMetric;
        *a3 = -3712;
        *a5 = 11;
      }
LABEL_8:
      if ( !*a3 )
        return (unsigned __int16)v15 | ((unsigned __int16)v16 << 16);
      goto LABEL_13;
    }
    if ( (*(_BYTE *)(v25 + 30) & 1) == 0 && !a6 )
      goto LABEL_8;
    a4[2] -= DpiDependentMetric;
    v26 = a5;
    if ( (*(_BYTE *)(a1[5] + 31LL) & 1) == 0 )
    {
      *a5 = 14;
      *a3 = -4048;
      goto LABEL_8;
    }
  }
  *v26 = 8;
  *a3 = -3808;
LABEL_13:
  v21 = a4[1];
  v22 = a4[2];
  LOWORD(v16) = v21 + v16 + 2;
  LOWORD(v15) = v22 - DpiDependentMetric + v15;
  *a4 = v22 - DpiDependentMetric - 1;
  a4[2] = v22 + 1;
  a4[1] = v21 - 1;
  a4[3] = v19 + v21 + 1;
  v23 = a1[5];
  if ( (*(_BYTE *)(v23 + 26) & 0x40) != 0 )
  {
    v24 = *(_DWORD *)(v23 + 88) + *(_DWORD *)(v23 + 96) - v22;
    a4[2] = DpiDependentMetric + v24 + 1;
    *a4 = v24 - 1;
  }
  return (unsigned __int16)v15 | ((unsigned __int16)v16 << 16);
}
