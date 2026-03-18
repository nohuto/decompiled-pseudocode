/*
 * XREFs of EngCreateRectRgn @ 0x1C0069780
 * Callers:
 *     <none>
 * Callees:
 *     GreSetRegionOwner @ 0x1C00697B0 (GreSetRegionOwner.c)
 *     GreCreateRectRgn @ 0x1C0069800 (GreCreateRectRgn.c)
 */

HANDLE __stdcall EngCreateRectRgn(INT left, INT top, INT right, INT bottom)
{
  HANDLE result; // rax
  HANDLE v5; // rbx

  result = (HANDLE)GreCreateRectRgn(left, top, right, bottom);
  v5 = result;
  if ( result )
  {
    GreSetRegionOwner(result, 0LL);
    return v5;
  }
  return result;
}
