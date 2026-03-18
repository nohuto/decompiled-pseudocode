/*
 * XREFs of ?RectIntersectsVisitedRegion@COverlayContext@@QEAA_NUtagRECT@@@Z @ 0x1801117DC
 * Callers:
 *     ?CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801100CC (-CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV-$TMilRect_@.c)
 * Callees:
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x18001955C (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18006D9C4 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18006DF1C (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

char __fastcall COverlayContext::RectIntersectsVisitedRegion(COverlayContext *this, struct tagRECT *a2)
{
  const struct FastRegion::Internal::CRgnData *v3; // rcx
  char v4; // bl
  struct FastRegion::Internal::CRgnData *v6[10]; // [rsp+20h] [rbp-68h] BYREF

  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v6, a2);
  v3 = (const struct FastRegion::Internal::CRgnData *)*((_QWORD *)this + 90);
  v4 = 0;
  if ( *(_DWORD *)v3 && *(_DWORD *)v6[0] )
    v4 = FastRegion::Internal::CRgnData::Intersects(v3, v6[0]);
  FastRegion::CRegion::FreeMemory((void **)v6);
  return v4;
}
