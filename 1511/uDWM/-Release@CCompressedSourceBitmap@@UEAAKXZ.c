/*
 * XREFs of ?Release@CCompressedSourceBitmap@@UEAAKXZ @ 0x180039F70
 * Callers:
 *     ?Release@CCompressedSourceBitmap@@WBA@EAAKXZ @ 0x180050E00 (-Release@CCompressedSourceBitmap@@WBA@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WBAA@EAAKXZ @ 0x180050E10 (-Release@CCompressedSourceBitmap@@WBAA@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WBAI@EAAKXZ @ 0x180050E20 (-Release@CCompressedSourceBitmap@@WBAI@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WBI@EAAKXZ @ 0x180050E30 (-Release@CCompressedSourceBitmap@@WBI@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WCA@EAAKXZ @ 0x180050E40 (-Release@CCompressedSourceBitmap@@WCA@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WCI@EAAKXZ @ 0x180050E50 (-Release@CCompressedSourceBitmap@@WCI@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WDA@EAAKXZ @ 0x180050E60 (-Release@CCompressedSourceBitmap@@WDA@EAAKXZ.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
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
