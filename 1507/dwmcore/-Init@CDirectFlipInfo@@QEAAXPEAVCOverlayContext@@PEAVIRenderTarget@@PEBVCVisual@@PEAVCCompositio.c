/*
 * XREFs of ?Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@_NPEBVCRegion@@@Z @ 0x180006530
 * Callers:
 *     ??0CDirectFlipInfo@@QEAA@AEBV0@@Z @ 0x18000662C (--0CDirectFlipInfo@@QEAA@AEBV0@@Z.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180006BFC (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEAV-$TMilR.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800DEA0C (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Create@CRegionWrapper@@SAJPEAPEAV1@@Z @ 0x180149EF4 (-Create@CRegionWrapper@@SAJPEAPEAV1@@Z.c)
 */

void __fastcall CDirectFlipInfo::Init(
        CDirectFlipInfo *this,
        struct COverlayContext *a2,
        struct IRenderTarget *a3,
        const struct CVisual *a4,
        struct CCompositionSurfaceInfo *a5,
        bool a6,
        const struct CRegion *a7)
{
  __int64 v7; // r15
  __int64 v11; // r14
  CMILCOMBase *v12; // rcx
  char *v13; // r14
  __int64 v14; // r15

  v7 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 1) = a2;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *((_QWORD *)this + 2) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a3 + 8LL))(a3);
  v11 = *((_QWORD *)this + 3);
  if ( v11 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 16LL))(*((_QWORD *)this + 3));
  *((_QWORD *)this + 3) = a4;
  if ( a4 )
    (*(void (__fastcall **)(const struct CVisual *))(*(_QWORD *)a4 + 8LL))(a4);
  v12 = (CMILCOMBase *)*((_QWORD *)this + 4);
  if ( v12 )
    CMILCOMBase::InternalRelease(v12);
  *((_QWORD *)this + 4) = a5;
  if ( a5 )
    CBitmapOfDeviceBitmaps::AddRef(a5);
  v13 = (char *)this + 48;
  v14 = *((_QWORD *)this + 6);
  *((_BYTE *)this + 40) = a6;
  if ( v14 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    *(_QWORD *)v13 = 0LL;
  }
  if ( a7 && (int)CRegionWrapper::Create((struct CRegionWrapper **)this + 6) >= 0 )
    FastRegion::CRegion::Copy((FastRegion::CRegion *)(*(_QWORD *)v13 + 16LL), a7);
  *((_QWORD *)this + 8) = -1LL;
  *((_DWORD *)this + 14) = 1;
  *((_QWORD *)this + 10) = *((_QWORD *)a5 + 7);
}
