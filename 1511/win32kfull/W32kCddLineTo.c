/*
 * XREFs of W32kCddLineTo @ 0x1C013CA70
 * Callers:
 *     <none>
 * Callees:
 *     EngLineTo @ 0x1C013CEF0 (EngLineTo.c)
 */

BOOL __fastcall W32kCddLineTo(
        SURFOBJ *pso,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        LONG x1,
        LONG y1,
        LONG x2,
        LONG y2,
        RECTL *prclBounds,
        MIX mix,
        __int64 a10)
{
  __int64 v14; // rbx
  BOOL result; // eax

  v14 = SURFOBJ_TO_SURFACE(pso);
  *(_QWORD *)(v14 + 568) = a10;
  result = EngLineTo(pso, pco, pbo, x1, y1, x2, y2, prclBounds, mix);
  *(_QWORD *)(v14 + 568) = 0LL;
  return result;
}
