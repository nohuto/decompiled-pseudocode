/*
 * XREFs of ?DrawMesh2D@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x180137430
 * Callers:
 *     <none>
 * Callees:
 *     ?AddBounds@CSwRenderTargetGetBounds@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCAliasedClip@@@Z @ 0x180043EB8 (-AddBounds@CSwRenderTargetGetBounds@@AEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::DrawMesh2D(
        CSwRenderTargetGetBounds *this,
        struct ID2DContext *a2,
        const struct ID2DContextOwner *a3,
        struct CContextState *a4,
        struct CGeometry2D *a5)
{
  _BYTE v7[16]; // [rsp+20h] [rbp-38h] BYREF

  (*(void (__fastcall **)(struct CGeometry2D *, _BYTE *, const struct ID2DContextOwner *))(*(_QWORD *)a5 + 112LL))(
    a5,
    v7,
    a3);
  CSwRenderTargetGetBounds::AddBounds((__int64)this - 16, (__int64)v7);
  return 0LL;
}
