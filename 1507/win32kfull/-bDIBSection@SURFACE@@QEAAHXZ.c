/*
 * XREFs of ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C009CD94
 * Callers:
 *     GreGetDIBColorTable @ 0x1C00ED910 (GreGetDIBColorTable.c)
 *     GreMakeBitmapStock @ 0x1C01494EC (GreMakeBitmapStock.c)
 *     GreSetDIBColorTable @ 0x1C02B20C0 (GreSetDIBColorTable.c)
 *     NtGdiGetColorSpaceforBitmap @ 0x1C02B35F0 (NtGdiGetColorSpaceforBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SURFACE::bDIBSection(SURFACE *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*((_WORD *)this + 50) )
  {
    if ( *((_QWORD *)this + 23) )
      return 1LL;
  }
  return result;
}
