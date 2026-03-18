/*
 * XREFs of ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00C2660
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00C2E90 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     EngFreeMem @ 0x1C006A170 (EngFreeMem.c)
 *     EngUnlockSurface @ 0x1C0074B90 (EngUnlockSurface.c)
 */

void __fastcall MulDisableSurface(struct DHPDEV__ *a1)
{
  EngFreeMem(*((PVOID *)a1 + 7));
  EngUnlockSurface(*((SURFOBJ **)a1 + 6));
  EngDeleteSurface(*((HSURF *)a1 + 3));
}
