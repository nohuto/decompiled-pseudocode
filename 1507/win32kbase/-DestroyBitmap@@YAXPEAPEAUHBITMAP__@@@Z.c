/*
 * XREFs of ?DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z @ 0x1C006D474
 * Callers:
 *     CleanupGDI @ 0x1C006D050 (CleanupGDI.c)
 * Callees:
 *     GreDeleteObject @ 0x1C00446F0 (GreDeleteObject.c)
 *     GreSetBitmapOwnerEx @ 0x1C00447D8 (GreSetBitmapOwnerEx.c)
 */

void __fastcall DestroyBitmap(HBITMAP *a1)
{
  struct HOBJ__ *v2; // rcx

  v2 = (struct HOBJ__ *)*a1;
  if ( v2 )
  {
    GreSetBitmapOwnerEx((__int64)v2, -2147483646);
    GreDeleteObject((struct HOBJ__ *)*a1);
    *a1 = 0LL;
  }
}
