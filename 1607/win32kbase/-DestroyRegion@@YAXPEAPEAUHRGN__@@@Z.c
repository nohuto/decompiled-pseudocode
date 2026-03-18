/*
 * XREFs of ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C0056338
 * Callers:
 *     CleanupGDI @ 0x1C0055F7C (CleanupGDI.c)
 * Callees:
 *     GreDeleteObject @ 0x1C003A290 (GreDeleteObject.c)
 *     GreSetRegionOwner @ 0x1C00578B0 (GreSetRegionOwner.c)
 */

void __fastcall DestroyRegion(HRGN *a1)
{
  struct HOBJ__ *v2; // rcx

  v2 = (struct HOBJ__ *)*a1;
  if ( v2 )
  {
    GreSetRegionOwner(v2, 2147483650LL);
    GreDeleteObject((struct HOBJ__ *)*a1);
    *a1 = 0LL;
  }
}
