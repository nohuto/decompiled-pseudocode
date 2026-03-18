/*
 * XREFs of PATHOBJ_vEnumStartClipLines @ 0x1C02B5860
 * Callers:
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02AF700 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     <none>
 */

void __stdcall PATHOBJ_vEnumStartClipLines(PATHOBJ *ppo, CLIPOBJ *pco, SURFOBJ *pso, LINEATTRS *pla)
{
  struct SURFACE *v7; // rax

  v7 = (struct SURFACE *)SURFOBJ_TO_SURFACE(pso);
  XCLIPOBJ::vEnumPathStart((XCLIPOBJ *)pco, ppo, v7, pla);
}
