/*
 * XREFs of ?DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z @ 0x1C00546D8
 * Callers:
 *     CleanupGDI @ 0x1C0055F7C (CleanupGDI.c)
 * Callees:
 *     GreSetBitmapOwnerEx @ 0x1C00346C8 (GreSetBitmapOwnerEx.c)
 *     GreDeleteObject @ 0x1C003A290 (GreDeleteObject.c)
 */

void __fastcall DestroyBitmap(HBITMAP *a1)
{
  struct HOBJ__ *v2; // rcx

  v2 = (struct HOBJ__ *)*a1;
  if ( v2 )
  {
    GreSetBitmapOwnerEx((__int64)v2, 0x80000002);
    GreDeleteObject((struct HOBJ__ *)*a1);
    *a1 = 0LL;
  }
}
