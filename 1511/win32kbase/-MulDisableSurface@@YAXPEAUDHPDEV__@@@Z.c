/*
 * XREFs of ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00B7130
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00B7960 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     EngFreeMem @ 0x1C0059DF0 (EngFreeMem.c)
 *     EngUnlockSurface @ 0x1C005EAD0 (EngUnlockSurface.c)
 */

void __fastcall MulDisableSurface(struct DHPDEV__ *a1)
{
  EngFreeMem(*((PVOID *)a1 + 7));
  EngUnlockSurface(*((SURFOBJ **)a1 + 6));
  EngDeleteSurface(*((HSURF *)a1 + 3));
}
