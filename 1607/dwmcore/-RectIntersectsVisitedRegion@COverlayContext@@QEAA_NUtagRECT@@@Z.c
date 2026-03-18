/*
 * XREFs of ?RectIntersectsVisitedRegion@COverlayContext@@QEAA_NUtagRECT@@@Z @ 0x1801298E0
 * Callers:
 *     ?CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180126874 (-CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV-$TMilRect_@.c)
 * Callees:
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x18001D2C4 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009A9F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18009AAB4 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

char __fastcall COverlayContext::RectIntersectsVisitedRegion(COverlayContext *this, struct tagRECT *a2)
{
  const struct FastRegion::Internal::CRgnData *v3; // rcx
  char v4; // bl
  struct FastRegion::Internal::CRgnData *v6[10]; // [rsp+20h] [rbp-68h] BYREF

  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v6, a2);
  v3 = (const struct FastRegion::Internal::CRgnData *)*((_QWORD *)this + 121);
  v4 = 0;
  if ( *(_DWORD *)v3 && *(_DWORD *)v6[0] )
    v4 = FastRegion::Internal::CRgnData::Intersects(v3, v6[0]);
  FastRegion::CRegion::FreeMemory(v6);
  return v4;
}
