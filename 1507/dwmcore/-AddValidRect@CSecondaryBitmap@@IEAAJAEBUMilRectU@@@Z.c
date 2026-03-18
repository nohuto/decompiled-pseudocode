/*
 * XREFs of ?AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z @ 0x180150320
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x180151730 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID.c)
 *     ?Update@CSecondarySysmemBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x180153250 (-Update@CSecondarySysmemBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEA.c)
 * Callees:
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800881A0 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800884B4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x18014E7BC (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 */

__int64 __fastcall CSecondaryBitmap::AddValidRect(
        const struct FastRegion::Internal::CRgnData **this,
        struct tagRECT *a2)
{
  void *v4[10]; // [rsp+20h] [rbp-68h] BYREF

  CRegion::CRegion((CRegion *)v4, a2);
  LODWORD(this) = FastRegion::CRegion::Subtract(this + 1, (const struct FastRegion::Internal::CRgnData **)v4);
  FastRegion::CRegion::FreeMemory(v4);
  return (unsigned int)this;
}
