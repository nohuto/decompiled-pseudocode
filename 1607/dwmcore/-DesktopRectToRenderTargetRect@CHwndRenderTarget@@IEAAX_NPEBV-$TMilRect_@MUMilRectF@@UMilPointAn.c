/*
 * XREFs of ?DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAX_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800091F4
 * Callers:
 *     ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x180009330 (-GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x180074BBC (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801079E8 (-NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800BF5DE (ceilf_0.c)
 *     floorf_0 @ 0x1800BF60E (floorf_0.c)
 */

__int64 __fastcall CHwndRenderTarget::DesktopRectToRenderTargetRect(__int64 a1, char a2, __int64 a3, _OWORD *a4)
{
  __int64 v5; // rcx
  __int64 result; // rax
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm3_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  __int64 v19; // rax
  __int128 X; // [rsp+20h] [rbp-38h] BYREF

  if ( a2 && (v19 = *(_QWORD *)(a1 + 736)) != 0 && *(_BYTE *)(v19 + 1089) )
    v5 = a1 + 272;
  else
    v5 = a1 + 204;
  result = CMILMatrix::Transform2DBoundsHelper<0>(v5, a3, &X);
  v7 = *(float *)&X;
  v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&X) & _xmm);
  if ( v8 < 8388608.0 )
  {
    v9 = floorf_0(*(float *)&X);
    result = (unsigned int)(int)v9;
    v7 = (float)(int)v9;
  }
  *(float *)&X = v7;
  v10 = *((float *)&X + 1);
  v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&X + 1)) & _xmm);
  if ( v11 < 8388608.0 )
  {
    v12 = floorf_0(*((float *)&X + 1));
    result = (unsigned int)(int)v12;
    v10 = (float)(int)v12;
  }
  v13 = *((float *)&X + 2);
  *((float *)&X + 1) = v10;
  v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&X + 2)) & _xmm);
  if ( v14 < 8388608.0 )
  {
    v15 = ceilf_0(*((float *)&X + 2));
    result = (unsigned int)(int)v15;
    v13 = (float)(int)v15;
  }
  v16 = *((float *)&X + 3);
  *((float *)&X + 2) = v13;
  v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&X + 3)) & _xmm);
  if ( v17 < 8388608.0 )
  {
    v18 = ceilf_0(*((float *)&X + 3));
    result = (unsigned int)(int)v18;
    v16 = (float)(int)v18;
  }
  *((float *)&X + 3) = v16;
  *a4 = X;
  return result;
}
