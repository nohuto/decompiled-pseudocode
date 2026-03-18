/*
 * XREFs of CreateEmptyRgnPublic @ 0x1C0022340
 * Callers:
 *     UserSetDCVisRgn @ 0x1C0023820 (UserSetDCVisRgn.c)
 *     _GetDCEx @ 0x1C002EFC0 (_GetDCEx.c)
 *     InitUserScreen @ 0x1C006A65C (InitUserScreen.c)
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x1C0023BD0 (GreCreateRectRgnIndirect.c)
 *     HmgSetOwner @ 0x1C0023D60 (HmgSetOwner.c)
 */

__int64 CreateEmptyRgnPublic()
{
  __int64 RectRgnIndirect; // rbx
  __int64 v1; // r8

  RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
  if ( RectRgnIndirect )
  {
    PsGetCurrentProcessId();
    LOBYTE(v1) = 4;
    HmgSetOwner(RectRgnIndirect, 0LL, v1);
  }
  return RectRgnIndirect;
}
