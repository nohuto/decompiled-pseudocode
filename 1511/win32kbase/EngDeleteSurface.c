/*
 * XREFs of EngDeleteSurface @ 0x1C007B310
 * Callers:
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00B7130 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     bDeleteSurface @ 0x1C0037780 (bDeleteSurface.c)
 */

BOOL __stdcall EngDeleteSurface(HSURF hsurf)
{
  __int64 v1; // rdx
  BOOL result; // eax

  result = 1;
  if ( hsurf )
    return bDeleteSurface((__int64)hsurf, v1);
  return result;
}
