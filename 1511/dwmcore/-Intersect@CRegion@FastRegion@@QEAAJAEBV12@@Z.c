/*
 * XREFs of ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800193EC
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180007808 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?IsValid@CSecondaryBitmap@@UEAA_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180018E90 (-IsValid@CSecondaryBitmap@@UEAA_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@.c)
 * Callees:
 *     ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180019658 (-Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeIntersect@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x1800198AC (-EstimateSizeIntersect@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z @ 0x18006D450 (-SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x18006D4D0 (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x18006D9FC (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall FastRegion::CRegion::Intersect(
        const struct FastRegion::Internal::CRgnData **this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  const struct FastRegion::Internal::CRgnData *v4; // rdx
  const struct FastRegion::Internal::CRgnData *v5; // rcx
  int v6; // eax
  int v7; // edi
  int v9; // [rsp+20h] [rbp-128h] BYREF
  FastRegion::Internal::CRgnData *v10; // [rsp+28h] [rbp-120h]
  char v11; // [rsp+30h] [rbp-118h] BYREF

  v4 = *a2;
  if ( !*(_DWORD *)v4 )
  {
    *(_DWORD *)*this = 0;
    return 0LL;
  }
  v5 = *this;
  if ( !*(_DWORD *)v5 )
    return 0LL;
  v6 = FastRegion::Internal::CRgnData::EstimateSizeIntersect(v5, v4);
  v9 = 0;
  v10 = (FastRegion::Internal::CRgnData *)&v11;
  v7 = FastRegion::Internal::CWorkBuffer::SetupBuffer((FastRegion::Internal::CWorkBuffer *)&v9, v6);
  if ( v7 >= 0 )
  {
    FastRegion::Internal::CRgnData::Intersect(v10, *this, *a2);
    v7 = FastRegion::CRegion::SaveResult((FastRegion::CRegion *)this, (struct FastRegion::Internal::CWorkBuffer *)&v9);
  }
  FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v9);
  return (unsigned int)v7;
}
