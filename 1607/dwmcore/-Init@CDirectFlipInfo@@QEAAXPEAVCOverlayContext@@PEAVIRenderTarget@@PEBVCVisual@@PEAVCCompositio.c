/*
 * XREFs of ?Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@_NPEBVCRegion@@@Z @ 0x18012D1AC
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x1801269C0 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ??0CDirectFlipInfo@@QEAA@AEBV0@@Z @ 0x18012C7F8 (--0CDirectFlipInfo@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1801108E8 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Create@CRegionWrapper@@SAJPEAPEAV1@@Z @ 0x180187AA4 (-Create@CRegionWrapper@@SAJPEAPEAV1@@Z.c)
 */

void __fastcall CDirectFlipInfo::Init(
        CDirectFlipInfo *this,
        struct COverlayContext *a2,
        struct IRenderTarget *a3,
        const struct CVisual *a4,
        struct CCompositionSurfaceInfo *a5,
        bool a6,
        const struct FastRegion::Internal::CRgnData **a7)
{
  __int64 v8; // rcx
  __int64 v11; // rcx
  CMILCOMBase *v12; // rcx
  char *v13; // rsi
  __int64 v14; // rcx

  *((_QWORD *)this + 1) = a2;
  v8 = *((_QWORD *)this + 2);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  *((_QWORD *)this + 2) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a3 + 8LL))(a3);
  v11 = *((_QWORD *)this + 3);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
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
    FastRegion::CRegion::Copy((FastRegion::CRegion **)(*(_QWORD *)v13 + 16LL), a7);
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 14) = 1;
  *((_QWORD *)this + 8) = *((_QWORD *)a5 + 7);
}
