/*
 * XREFs of ?PaddingsIntersectWithDestRect@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z @ 0x180129770
 * Callers:
 *     ?CheckPaddingCorrectness@COverlayContext@@CA_NAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEAUOverlayPlaneInfo@1@@Z @ 0x180127BA4 (-CheckPaddingCorrectness@COverlayContext@@CA_NAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayContex.c)
 * Callees:
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18001D198 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x18001D2C4 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009A9F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18009AAB4 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

bool __fastcall COverlayContext::PaddingsIntersectWithDestRect(
        struct COverlayContext::OverlayPlaneInfo *a1,
        struct COverlayContext::OverlayPlaneInfo *a2)
{
  char v4; // di
  struct FastRegion::Internal::CRgnData *v6[10]; // [rsp+20h] [rbp-B8h] BYREF
  struct FastRegion::Internal::CRgnData *v7[10]; // [rsp+70h] [rbp-68h] BYREF

  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v7, (const struct tagRECT *)((char *)a1 + 76));
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v6, (const struct tagRECT *)((char *)a1 + 60));
  FastRegion::CRegion::Subtract(v7, v6);
  FastRegion::CRegion::FreeMemory(v6);
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v6, (const struct tagRECT *)((char *)a2 + 60));
  if ( *(_DWORD *)v7[0] && *(_DWORD *)v6[0] )
    v4 = FastRegion::Internal::CRgnData::Intersects(v7[0], v6[0]);
  else
    v4 = 0;
  FastRegion::CRegion::FreeMemory(v6);
  FastRegion::CRegion::FreeMemory(v7);
  return v4 != 0;
}
