/*
 * XREFs of GetWindowBordersWithCompatFlags2 @ 0x1C006EB78
 * Callers:
 *     AdjustWindowRectExInternal @ 0x1C006D828 (AdjustWindowRectExInternal.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C006EAD8 (GetWindowBordersWithDpiAwareness.c)
 *     GetWindowBorders @ 0x1C00B0350 (GetWindowBorders.c)
 *     GetWindowBordersForDpi @ 0x1C00B8368 (GetWindowBordersForDpi.c)
 * Callees:
 *     GetResizeBorderWidthInternal @ 0x1C006C188 (GetResizeBorderWidthInternal.c)
 *     GetWindowFrameMetricInternal @ 0x1C006F3E4 (GetWindowFrameMetricInternal.c)
 */

__int64 __fastcall GetWindowBordersWithCompatFlags2(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  __int16 v6; // di
  int v8; // r14d
  unsigned int v9; // ebx
  int v10; // ebp
  int WindowFrameMetricInternal; // eax

  v6 = a2;
  v8 = a1;
  if ( (a2 & 0x100) != 0 )
    v9 = 2;
  else
    v9 = (a2 & 0x20000) != 0;
  v10 = a1 & 0xC00000;
  LOBYTE(a1) = (a1 & 0xC00000) == 0;
  if ( ((unsigned __int8)a1 & ((a2 & 1) == 0)) == 0 )
    ++v9;
  WindowFrameMetricInternal = GetWindowFrameMetricInternal(a1, a5, a6);
  if ( (v8 & 0x40000) != 0
    || WindowFrameMetricInternal > 0 && (v10 == 12582912 || (v8 & 0x40000) != 0) && (a5 & 0x30000000) == 0 )
  {
    v9 += WindowFrameMetricInternal + GetResizeBorderWidthInternal(a5, a6);
  }
  if ( a4 && (v6 & 0x200) != 0 )
    v9 += 2;
  return v9;
}
