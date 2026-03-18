/*
 * XREFs of ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C0054D68
 * Callers:
 *     CleanupGDI @ 0x1C0055F7C (CleanupGDI.c)
 * Callees:
 *     GreSetDCOwnerEx @ 0x1C0023A20 (GreSetDCOwnerEx.c)
 *     GreDeleteDC @ 0x1C005A4C0 (GreDeleteDC.c)
 */

void __fastcall DestroyDC(HDC *a1)
{
  __int64 v2; // rcx

  v2 = (__int64)*a1;
  if ( v2 )
  {
    GreSetDCOwnerEx(v2, 0x80000002, 0, 1);
    GreDeleteDC(*a1);
    *a1 = 0LL;
  }
}
