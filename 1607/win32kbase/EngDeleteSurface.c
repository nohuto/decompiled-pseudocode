/*
 * XREFs of EngDeleteSurface @ 0x1C007EF40
 * Callers:
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00C2660 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     bDeleteSurface @ 0x1C003A320 (bDeleteSurface.c)
 */

BOOL __stdcall EngDeleteSurface(HSURF hsurf)
{
  BOOL result; // eax

  result = 1;
  if ( hsurf )
    return bDeleteSurface((__int64)hsurf);
  return result;
}
