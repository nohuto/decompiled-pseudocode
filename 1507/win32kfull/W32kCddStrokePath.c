/*
 * XREFs of W32kCddStrokePath @ 0x1C0120100
 * Callers:
 *     <none>
 * Callees:
 *     EngStrokePath @ 0x1C00CE630 (EngStrokePath.c)
 */

BOOL __fastcall W32kCddStrokePath(
        SURFOBJ *pso,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        LINEATTRS *plineattrs,
        MIX mix,
        __int64 a9)
{
  __int64 v13; // rbx
  BOOL result; // eax

  v13 = SURFOBJ_TO_SURFACE(pso);
  *(_QWORD *)(v13 + 568) = a9;
  result = EngStrokePath(pso, ppo, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
  *(_QWORD *)(v13 + 568) = 0LL;
  return result;
}
