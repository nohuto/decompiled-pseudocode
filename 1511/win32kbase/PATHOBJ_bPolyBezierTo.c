/*
 * XREFs of PATHOBJ_bPolyBezierTo @ 0x1C00B3CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall PATHOBJ_bPolyBezierTo(PATHOBJ *ppo, POINTFIX *pptfx, ULONG cptfx)
{
  return EPATHOBJ::bPolyBezierTo((EPATHOBJ *)ppo, 0LL, (struct _POINTL *)pptfx, cptfx);
}
