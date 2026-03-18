/*
 * XREFs of ?CleanupReferences@CHwBitmapBrush@@UEAAXXZ @ 0x1800AB0E0
 * Callers:
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x18002DE30 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x180177350 (-GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 */

void __fastcall CHwBitmapBrush::CleanupReferences(CHwBitmapBrush *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 88LL))(v2, 0LL);
  if ( *((_QWORD *)this + 4) )
  {
    v3 = *((_QWORD *)this + 1);
    v5 = 0LL;
    if ( (int)CD2DContext::GetCachedEffectNoRef(v3, 1LL, &v5) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v5 + 112LL))(v5, 0LL, 0LL, 1LL);
    if ( (int)CD2DContext::GetCachedEffectNoRef(*((_QWORD *)this + 1), 5LL, &v5) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v5 + 112LL))(v5, 0LL, 0LL, 1LL);
    v4 = *((_QWORD *)this + 4);
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      *((_QWORD *)this + 4) = 0LL;
    }
  }
}
