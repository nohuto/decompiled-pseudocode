/*
 * XREFs of ?DrawMesh2D@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x180178870
 * Callers:
 *     <none>
 * Callees:
 *     ?AddBounds@CSwRenderTargetGetBounds@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCAliasedClip@@@Z @ 0x18008FE18 (-AddBounds@CSwRenderTargetGetBounds@@AEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::DrawMesh2D(
        CSwRenderTargetGetBounds *this,
        struct ID2DContext *a2,
        const struct ID2DContextOwner *a3,
        struct CContextState *a4,
        struct CGeometry2D *a5)
{
  float v7[4]; // [rsp+20h] [rbp-28h] BYREF

  (*(void (__fastcall **)(struct CGeometry2D *, float *, const struct ID2DContextOwner *))(*(_QWORD *)a5 + 128LL))(
    a5,
    v7,
    a3);
  CSwRenderTargetGetBounds::AddBounds((__int64)this - 16, v7);
  return 0LL;
}
