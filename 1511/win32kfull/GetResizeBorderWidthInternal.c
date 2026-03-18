/*
 * XREFs of GetResizeBorderWidthInternal @ 0x1C007102C
 * Callers:
 *     GetWindowBordersWithCompatFlags2 @ 0x1C0070844 (GetWindowBordersWithCompatFlags2.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0070B50 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     GetResizeBorderWidth @ 0x1C0101F40 (GetResizeBorderWidth.c)
 * Callees:
 *     ScaleSystemMetricForDPI @ 0x1C0071688 (ScaleSystemMetricForDPI.c)
 */

__int64 __fastcall GetResizeBorderWidthInternal(int a1, __int64 a2)
{
  unsigned int *v2; // rax
  unsigned int v3; // ebx
  __int64 v5; // r8
  int v6; // eax

  v2 = (unsigned int *)(gpsi + 4024LL);
  if ( (a1 & 0x2000000) == 0 )
    v2 = (unsigned int *)(gpsi + 4128LL);
  v3 = *v2;
  if ( (a1 & 0x10000000) != 0 )
  {
    return 1;
  }
  else if ( (a1 & 0x20000000) != 0 )
  {
    if ( (_DWORD)a2 )
    {
      v6 = ScaleSystemMetricForDPI(92LL, a2);
    }
    else
    {
      if ( (a1 & 0x2000000) != 0 )
        v5 = gpsi + 1880LL;
      else
        v5 = gpsi + 2268LL;
      v6 = *(_DWORD *)(v5 + 368);
    }
    v3 += v6;
  }
  return v3;
}
