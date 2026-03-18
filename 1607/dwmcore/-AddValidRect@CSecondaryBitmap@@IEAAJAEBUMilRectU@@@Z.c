/*
 * XREFs of ?AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z @ 0x180011FAC
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1800123B0 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID.c)
 *     ?Update@CSecondarySysmemBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x18001F630 (-Update@CSecondarySysmemBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEA.c)
 * Callees:
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x18001200C (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18001D198 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009A9F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CSecondaryBitmap::AddValidRect(CSecondaryBitmap *this, const struct MilRectU *a2)
{
  _BYTE v4[80]; // [rsp+20h] [rbp-68h] BYREF

  CRegion::CRegion((CRegion *)v4, a2);
  LODWORD(this) = FastRegion::CRegion::Subtract((CSecondaryBitmap *)((char *)this + 8), (const struct CRegion *)v4);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v4);
  return (unsigned int)this;
}
