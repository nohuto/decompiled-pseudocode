/*
 * XREFs of CreateEmptyRgnPublic @ 0x1C0045250
 * Callers:
 *     _GetDCEx @ 0x1C0036B60 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C0044440 (UserSetDCVisRgn.c)
 *     InitUserScreen @ 0x1C007D934 (InitUserScreen.c)
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x1C0042990 (GreCreateRectRgnIndirect.c)
 *     HmgSetOwner @ 0x1C0042E90 (HmgSetOwner.c)
 */

struct HOBJ__ *CreateEmptyRgnPublic()
{
  struct HOBJ__ *RectRgnIndirect; // rbx

  RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
  if ( RectRgnIndirect )
  {
    PsGetCurrentProcessId();
    HmgSetOwner((__int64)RectRgnIndirect, 0, 4u);
  }
  return RectRgnIndirect;
}
