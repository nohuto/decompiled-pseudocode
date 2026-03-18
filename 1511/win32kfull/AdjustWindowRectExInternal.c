/*
 * XREFs of AdjustWindowRectExInternal @ 0x1C006F17C
 * Callers:
 *     DwmChildRectChange @ 0x1C006EE8C (DwmChildRectChange.c)
 * Callees:
 *     GetWindowBordersWithCompatFlags2 @ 0x1C0070844 (GetWindowBordersWithCompatFlags2.c)
 *     ScaleSystemMetricForDPI @ 0x1C0071688 (ScaleSystemMetricForDPI.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     NeedsWindowEdge @ 0x1C00722D8 (NeedsWindowEdge.c)
 */

__int64 __fastcall AdjustWindowRectExInternal(
        _DWORD *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        unsigned int a7)
{
  int v10; // r8d
  unsigned int v11; // ebx
  __int64 result; // rax
  int v13; // r8d
  int v14; // ecx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx

  if ( (unsigned int)NeedsWindowEdge(a2, a4, a5 >= 0x400) )
    v11 = a4 | 0x100;
  else
    v11 = a4 & 0xFFFFFEFF;
  if ( (BYTE2(a2) & 0xC0) != 0xC0 )
    goto LABEL_4;
  if ( (v11 & 0x80u) != 0 )
  {
    if ( !a7 )
    {
      if ( (a6 & 0x2000000) != 0 || !(unsigned int)IsDPIAbsoluteSysMet(51LL) )
        v17 = gpsi + 1880LL;
      else
        v17 = gpsi + 2268LL;
      v16 = *(_DWORD *)(v17 + 204);
      goto LABEL_12;
    }
    v15 = 51LL;
  }
  else
  {
    if ( !a7 )
    {
      if ( (a6 & 0x2000000) != 0 || !(unsigned int)IsDPIAbsoluteSysMet(4LL) )
        v18 = gpsi + 1880LL;
      else
        v18 = gpsi + 2268LL;
      v16 = *(_DWORD *)(v18 + 16);
      goto LABEL_12;
    }
    v15 = 4LL;
  }
  v16 = ScaleSystemMetricForDPI(v15, a7);
LABEL_12:
  a1[1] -= v16;
LABEL_4:
  result = GetWindowBordersWithCompatFlags2(a2, v11, v10, 1, a6, a7);
  if ( (_DWORD)result )
  {
    v13 = *(_DWORD *)(gpsi + 1904LL) * result;
    v14 = result * *(_DWORD *)(gpsi + 1900LL);
    a1[1] -= v13;
    *a1 -= v14;
    a1[2] += v14;
    a1[3] += v13;
  }
  return result;
}
