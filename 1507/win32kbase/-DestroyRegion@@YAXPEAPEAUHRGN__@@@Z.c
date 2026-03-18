/*
 * XREFs of ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C006D40C
 * Callers:
 *     CleanupGDI @ 0x1C006D050 (CleanupGDI.c)
 * Callees:
 *     GreSetRegionOwner @ 0x1C0011B80 (GreSetRegionOwner.c)
 *     GreDeleteObject @ 0x1C00446F0 (GreDeleteObject.c)
 */

void __fastcall DestroyRegion(HRGN *a1)
{
  struct HOBJ__ *v2; // rcx

  v2 = (struct HOBJ__ *)*a1;
  if ( v2 )
  {
    GreSetRegionOwner((__int64)v2, 0x80000002);
    GreDeleteObject((struct HOBJ__ *)*a1);
    *a1 = 0LL;
  }
}
