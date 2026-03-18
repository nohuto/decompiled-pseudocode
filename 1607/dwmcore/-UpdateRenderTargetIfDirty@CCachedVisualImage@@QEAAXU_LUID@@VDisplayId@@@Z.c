/*
 * XREFs of ?UpdateRenderTargetIfDirty@CCachedVisualImage@@QEAAXU_LUID@@VDisplayId@@@Z @ 0x18001B788
 * Callers:
 *     ?UpdateNodeCVIRenderTarget@CDrawingContext@@QEAAXPEBVCVisualTree@@PEAVCVisual@@PEAVCCachedVisualImage@@_NAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x180003688 (-UpdateNodeCVIRenderTarget@CDrawingContext@@QEAAXPEBVCVisualTree@@PEAVCVisual@@PEAVCCachedVisual.c)
 * Callees:
 *     ?FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayId@@@Z @ 0x18001B810 (-FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayI.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180033DD0 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall CCachedVisualImage::UpdateRenderTargetIfDirty(__int64 a1, __int64 a2, int a3)
{
  __int64 ExistingRenderTarget; // rax
  __int64 v6; // [rsp+20h] [rbp-20h] BYREF
  int v7; // [rsp+28h] [rbp-18h]
  int v8; // [rsp+2Ch] [rbp-14h]
  int v9; // [rsp+30h] [rbp-10h]
  __int64 v10; // [rsp+38h] [rbp-8h]
  struct IBitmapSource *v13; // [rsp+68h] [rbp+28h] BYREF

  ExistingRenderTarget = CCachedVisualImage::FindExistingRenderTarget();
  if ( !ExistingRenderTarget || *(_BYTE *)(ExistingRenderTarget + 40) )
  {
    v13 = 0LL;
    v8 = 0;
    v9 = 0;
    v10 = 0LL;
    v6 = a2;
    v7 = a3;
    LODWORD(ExistingRenderTarget) = CCachedVisualImage::GetBitmapSource(
                                      (CCachedVisualImage *)(a1 + 8),
                                      &v13,
                                      (const struct BitmapSourceInfo *)&v6);
    if ( (int)ExistingRenderTarget >= 0 && v13 )
      LODWORD(ExistingRenderTarget) = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return ExistingRenderTarget;
}
