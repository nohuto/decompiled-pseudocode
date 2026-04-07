/*
 * XREFs of ?Release@CCompressedSourceBitmap@@UEAAKXZ @ 0x18003AF40
 * Callers:
 *     ?Release@CCompressedSourceBitmap@@WBA@EAAKXZ @ 0x180051420 (-Release@CCompressedSourceBitmap@@WBA@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WBAA@EAAKXZ @ 0x180051430 (-Release@CCompressedSourceBitmap@@WBAA@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WBAI@EAAKXZ @ 0x180051440 (-Release@CCompressedSourceBitmap@@WBAI@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WBI@EAAKXZ @ 0x180051450 (-Release@CCompressedSourceBitmap@@WBI@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WCA@EAAKXZ @ 0x180051460 (-Release@CCompressedSourceBitmap@@WCA@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WCI@EAAKXZ @ 0x180051470 (-Release@CCompressedSourceBitmap@@WCI@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WDA@EAAKXZ @ 0x180051480 (-Release@CCompressedSourceBitmap@@WDA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompressedSourceBitmap::Release(CCompressedSourceBitmap *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    (*(void (__fastcall **)(CCompressedSourceBitmap *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  }
  return v1;
}
