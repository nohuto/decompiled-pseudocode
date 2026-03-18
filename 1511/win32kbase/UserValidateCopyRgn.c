/*
 * XREFs of UserValidateCopyRgn @ 0x1C0073690
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x1C0023BD0 (GreCreateRectRgnIndirect.c)
 *     GreCombineRgn @ 0x1C0026E40 (GreCombineRgn.c)
 *     GreDeleteObject @ 0x1C00377D0 (GreDeleteObject.c)
 *     HmgValidHandle @ 0x1C0073700 (HmgValidHandle.c)
 */

HRGN __fastcall UserValidateCopyRgn(HRGN a1, __int64 a2)
{
  HRGN RectRgnIndirect; // rbx
  __int64 v4; // rdx

  RectRgnIndirect = 0LL;
  if ( a1 )
  {
    LOBYTE(a2) = 4;
    if ( (unsigned int)HmgValidHandle(a1, a2) )
    {
      RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
      if ( !(unsigned int)GreCombineRgn(RectRgnIndirect, a1, 0LL, 5) )
      {
        GreDeleteObject((__int64)RectRgnIndirect, v4);
        return 0LL;
      }
    }
  }
  return RectRgnIndirect;
}
