/*
 * XREFs of ?RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAX_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180107958
 * Callers:
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x180074BBC (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800BC9F0 (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18005B440 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

void __fastcall CHwndRenderTarget::RenderTargetRectToDesktopRect(_QWORD *a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  __int64 v5; // rax
  const struct CMILMatrix *v6; // rdx
  __int64 v7; // r10
  _BYTE v8[64]; // [rsp+20h] [rbp-78h] BYREF
  int v9; // [rsp+60h] [rbp-38h]
  __int128 v10; // [rsp+70h] [rbp-28h] BYREF

  v9 = 0;
  v5 = a1[92];
  if ( !v5 || (v6 = (const struct CMILMatrix *)(a1 + 34), !*(_BYTE *)(v5 + 1089)) )
    v6 = (const struct CMILMatrix *)((char *)a1 + 204);
  CMILMatrix::SetToInverse((CMILMatrix *)v8, v6);
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)v8, v7, (float *)&v10);
  *a4 = v10;
}
