/*
 * XREFs of ?Release@CWICBitmapWrapper@@UEAAKXZ @ 0x180042FD0
 * Callers:
 *     ?Release@CWICBitmapWrapper@@WBI@EAAKXZ @ 0x1800512E0 (-Release@CWICBitmapWrapper@@WBI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WCI@EAAKXZ @ 0x1800512F0 (-Release@CWICBitmapWrapper@@WCI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WBA@EAAKXZ @ 0x1800514D0 (-Release@CWICBitmapWrapper@@WBA@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WCA@EAAKXZ @ 0x1800514E0 (-Release@CWICBitmapWrapper@@WCA@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WDA@EAAKXZ @ 0x1800514F0 (-Release@CWICBitmapWrapper@@WDA@EAAKXZ.c)
 *     ?Release@CBitmapLock@@WEI@EAAKXZ @ 0x180051580 (-Release@CBitmapLock@@WEI@EAAKXZ.c)
 *     ?Release@CBitmapLock@@WFA@EAAKXZ @ 0x180051590 (-Release@CBitmapLock@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CWICBitmapWrapper::Release(CWICBitmapWrapper *this)
{
  return CMILCOMBase::InternalRelease(this);
}
