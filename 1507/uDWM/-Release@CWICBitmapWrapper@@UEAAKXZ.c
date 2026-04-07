/*
 * XREFs of ?Release@CWICBitmapWrapper@@UEAAKXZ @ 0x18003DB90
 * Callers:
 *     ?Release@CWICBitmapWrapper@@WBI@EAAKXZ @ 0x18004A880 (-Release@CWICBitmapWrapper@@WBI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WDA@EAAKXZ @ 0x18004A890 (-Release@CWICBitmapWrapper@@WDA@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WBA@EAAKXZ @ 0x18004A8E0 (-Release@CWICBitmapWrapper@@WBA@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WCA@EAAKXZ @ 0x18004A8F0 (-Release@CWICBitmapWrapper@@WCA@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WCI@EAAKXZ @ 0x18004A900 (-Release@CWICBitmapWrapper@@WCI@EAAKXZ.c)
 *     ?Release@CBitmapLock@@WEI@EAAKXZ @ 0x18004A9A0 (-Release@CBitmapLock@@WEI@EAAKXZ.c)
 *     ?Release@CBitmapLock@@WFA@EAAKXZ @ 0x18004A9B0 (-Release@CBitmapLock@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CWICBitmapWrapper::Release(CWICBitmapWrapper *this)
{
  return CMILCOMBase::InternalRelease(this);
}
