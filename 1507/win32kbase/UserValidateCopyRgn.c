/*
 * XREFs of UserValidateCopyRgn @ 0x1C0010ED0
 * Callers:
 *     <none>
 * Callees:
 *     HmgValidHandle @ 0x1C0010F40 (HmgValidHandle.c)
 *     GreCombineRgn @ 0x1C0040310 (GreCombineRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C0042990 (GreCreateRectRgnIndirect.c)
 *     GreDeleteObject @ 0x1C00446F0 (GreDeleteObject.c)
 */

struct HOBJ__ *__fastcall UserValidateCopyRgn(HRGN a1, __int64 a2)
{
  struct HOBJ__ *RectRgnIndirect; // rbx

  RectRgnIndirect = 0LL;
  if ( a1 )
  {
    LOBYTE(a2) = 4;
    if ( (unsigned int)HmgValidHandle(a1, a2) )
    {
      RectRgnIndirect = (struct HOBJ__ *)GreCreateRectRgnIndirect((ERECTL *)&gZero);
      if ( !(unsigned int)GreCombineRgn((HRGN)RectRgnIndirect, a1, 0LL) )
      {
        GreDeleteObject(RectRgnIndirect);
        return 0LL;
      }
    }
  }
  return RectRgnIndirect;
}
