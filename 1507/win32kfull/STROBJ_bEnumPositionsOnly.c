/*
 * XREFs of STROBJ_bEnumPositionsOnly @ 0x1C02B7380
 * Callers:
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02A9F14 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall STROBJ_bEnumPositionsOnly(STROBJ *pstro, ULONG *pc, PGLYPHPOS *ppgpos)
{
  if ( (pstro[1].rclBkGround.top & 0x1400) != 0 )
    return STROBJ_bEnumPositionsOnlyLinked((struct ESTROBJ *)pstro, pc, ppgpos);
  *pc = pstro->cGlyphs;
  *ppgpos = *(PGLYPHPOS *)&pstro[1].rclBkGround.bottom;
  return 0;
}
