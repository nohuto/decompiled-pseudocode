/*
 * XREFs of ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C006D43C
 * Callers:
 *     CleanupGDI @ 0x1C006D050 (CleanupGDI.c)
 * Callees:
 *     GreSetDCOwnerEx @ 0x1C0035D30 (GreSetDCOwnerEx.c)
 *     GreDeleteDC @ 0x1C005B5C0 (GreDeleteDC.c)
 */

void __fastcall DestroyDC(HDC *a1)
{
  HDC v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    GreSetDCOwnerEx((int)v2, 0x80000002, 0, 1);
    GreDeleteDC(*a1);
    *a1 = 0LL;
  }
}
