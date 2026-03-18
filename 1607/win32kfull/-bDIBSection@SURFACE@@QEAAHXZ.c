/*
 * XREFs of ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C0033D44
 * Callers:
 *     GreGetDIBColorTable @ 0x1C00F03D0 (GreGetDIBColorTable.c)
 *     GreMakeBitmapStock @ 0x1C011390C (GreMakeBitmapStock.c)
 *     GreSetDIBColorTable @ 0x1C02B41F0 (GreSetDIBColorTable.c)
 *     NtGdiGetColorSpaceforBitmap @ 0x1C02B5770 (NtGdiGetColorSpaceforBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SURFACE::bDIBSection(SURFACE *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*((_WORD *)this + 50) )
  {
    if ( *((_QWORD *)this + 24) )
      return 1LL;
  }
  return result;
}
