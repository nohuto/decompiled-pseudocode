/*
 * XREFs of ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00B4B00
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00B5330 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     EngUnlockSurface @ 0x1C0008310 (EngUnlockSurface.c)
 *     EngFreeMem @ 0x1C005C710 (EngFreeMem.c)
 */

void __fastcall MulDisableSurface(struct DHPDEV__ *a1)
{
  EngFreeMem(*((PVOID *)a1 + 7));
  EngUnlockSurface(*((SURFOBJ **)a1 + 6));
  EngDeleteSurface(*((HSURF *)a1 + 3));
}
