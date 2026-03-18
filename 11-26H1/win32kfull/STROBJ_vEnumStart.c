/*
 * XREFs of STROBJ_vEnumStart @ 0x1401DEC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall STROBJ_vEnumStart(STROBJ *pstro)
{
  *(_QWORD *)&pstro[1].cGlyphs = 0LL;
}
