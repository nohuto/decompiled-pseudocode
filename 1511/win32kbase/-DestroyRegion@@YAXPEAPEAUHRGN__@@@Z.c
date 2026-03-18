/*
 * XREFs of ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C0069744
 * Callers:
 *     CleanupGDI @ 0x1C0069388 (CleanupGDI.c)
 * Callees:
 *     GreDeleteObject @ 0x1C00377D0 (GreDeleteObject.c)
 *     GreSetRegionOwner @ 0x1C00697B0 (GreSetRegionOwner.c)
 */

void __fastcall DestroyRegion(HRGN *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  v2 = (__int64)*a1;
  if ( v2 )
  {
    GreSetRegionOwner(v2, 2147483650LL);
    GreDeleteObject((__int64)*a1, v3);
    *a1 = 0LL;
  }
}
