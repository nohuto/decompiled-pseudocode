/*
 * XREFs of PATHOBJ_vEnumStartClipLines @ 0x1C02B4D20
 * Callers:
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02AE9A0 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     <none>
 */

void __stdcall PATHOBJ_vEnumStartClipLines(PATHOBJ *ppo, CLIPOBJ *pco, SURFOBJ *pso, LINEATTRS *pla)
{
  struct SURFACE *v7; // rax

  v7 = (struct SURFACE *)SURFOBJ_TO_SURFACE(pso);
  XCLIPOBJ::vEnumPathStart((XCLIPOBJ *)pco, ppo, v7, pla);
}
