/*
 * XREFs of ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C0038D44
 * Callers:
 *     GreGetDIBColorTable @ 0x1C00F3F30 (GreGetDIBColorTable.c)
 *     GreMakeBitmapStock @ 0x1C00F429C (GreMakeBitmapStock.c)
 *     GreSetDIBColorTable @ 0x1C02B1350 (GreSetDIBColorTable.c)
 *     NtGdiGetColorSpaceforBitmap @ 0x1C02B2740 (NtGdiGetColorSpaceforBitmap.c)
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
