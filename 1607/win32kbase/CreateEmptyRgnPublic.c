/*
 * XREFs of CreateEmptyRgnPublic @ 0x1C0057880
 * Callers:
 *     _GetDCEx @ 0x1C00212B0 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C0036CE0 (UserSetDCVisRgn.c)
 *     InitUserScreen @ 0x1C0057224 (InitUserScreen.c)
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x1C0034480 (GreCreateRectRgnIndirect.c)
 *     GreSetRegionOwner @ 0x1C00578B0 (GreSetRegionOwner.c)
 */

struct HOBJ__ *CreateEmptyRgnPublic()
{
  struct HOBJ__ *RectRgnIndirect; // rax
  struct HOBJ__ *v1; // rbx

  RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
  v1 = RectRgnIndirect;
  if ( RectRgnIndirect )
    GreSetRegionOwner(RectRgnIndirect, 0LL);
  return v1;
}
