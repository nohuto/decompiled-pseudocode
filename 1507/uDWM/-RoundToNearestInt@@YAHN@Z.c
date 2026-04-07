/*
 * XREFs of ?RoundToNearestInt@@YAHN@Z @ 0x180076170
 * Callers:
 *     ?GetWindowFrameMargins@CWindowData@@QEAAXPEAU_MARGINS@@@Z @ 0x180067628 (-GetWindowFrameMargins@CWindowData@@QEAAXPEAU_MARGINS@@@Z.c)
 * Callees:
 *     ceil_0 @ 0x180049866 (ceil_0.c)
 *     floor_0 @ 0x18004988A (floor_0.c)
 */

__int64 __fastcall RoundToNearestInt(double a1)
{
  double v1; // xmm0_8

  if ( a1 < 0.0 )
    v1 = ceil_0(a1 - 0.5);
  else
    v1 = floor_0(a1 + 0.5);
  return (unsigned int)(int)v1;
}
