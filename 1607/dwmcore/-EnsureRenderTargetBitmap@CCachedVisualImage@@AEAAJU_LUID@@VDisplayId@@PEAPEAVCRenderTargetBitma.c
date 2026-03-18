/*
 * XREFs of ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitmap@@@Z @ 0x180143BD8
 * Callers:
 *     ?GetD2DBitmap@CCachedVisualImage@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x180032F90 (-GetD2DBitmap@CCachedVisualImage@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV-$TMilRect@IUMil.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180033DD0 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?GetBitmapShaderResourceViewNoRef@CCachedVisualImage@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180143E40 (-GetBitmapShaderResourceViewNoRef@CCachedVisualImage@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@.c)
 * Callees:
 *     ?FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayId@@@Z @ 0x18001B810 (-FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayI.c)
 *     ?HasContent@CCachedVisualImage@@UEBA_NXZ @ 0x18001B870 (-HasContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z @ 0x180032ED0 (-GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z.c)
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18003322C (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIV-$TMilRect_@MUMilR.c)
 *     ?RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ @ 0x180033738 (-RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800980B4 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::EnsureRenderTargetBitmap(__m128i *a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v7; // r14d
  __int64 v8; // rsi
  __int64 ExistingRenderTarget; // rax
  unsigned int v10; // r12d
  __m128i v11; // xmm6
  const __m128i *v12; // rsi
  int v13; // eax
  unsigned int v15; // [rsp+20h] [rbp-60h]
  unsigned int v16; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v17; // [rsp+44h] [rbp-3Ch] BYREF
  __int64 v18; // [rsp+48h] [rbp-38h] BYREF
  __m128i v19; // [rsp+50h] [rbp-30h] BYREF

  *a4 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v18 = 0LL;
  if ( a1[12].m128i_i32[2] )
  {
    v7 = -2147467263;
    v15 = 1250;
LABEL_3:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v15);
    return v7;
  }
  if ( a1[23].m128i_i8[3] )
  {
    ExistingRenderTarget = CCachedVisualImage::FindExistingRenderTarget((__int64)a1);
    if ( ExistingRenderTarget || a1[16].m128i_i32[0] && (ExistingRenderTarget = a1[14].m128i_i64[1]) != 0 )
      v8 = *(_QWORD *)(ExistingRenderTarget + 8);
LABEL_22:
    *a4 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    return v7;
  }
  CCachedVisualImage::GetCurrentSize((CCachedVisualImage *)a1, &v16, &v17);
  if ( !(unsigned __int8)CCachedVisualImage::HasContent((CCachedVisualImage *)&a1->m128i_u64[1])
    || !v16
    || (v10 = v17) == 0 )
  {
    CCachedVisualImage::RemoveAllTargets((CCachedVisualImage *)a1);
    return v7;
  }
  if ( a1[23].m128i_i8[4] )
  {
    v19.m128i_i64[0] = 0LL;
    *(float *)&v19.m128i_i32[3] = (float)(int)v17;
    *(float *)&v19.m128i_i32[2] = (float)(int)v16;
    v11 = v19;
  }
  else
  {
    v11 = _mm_loadu_si128(a1 + 9);
    v12 = (const __m128i *)a1[10].m128i_i64[0];
    v19 = v11;
    if ( v12 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(const __m128i *, __int64))(v12->m128i_i64[0] + 48))(v12, 50LL) )
      {
        v7 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x68u);
        v15 = 1287;
        goto LABEL_3;
      }
      v11 = _mm_loadu_si128(v12 + 7);
      v19 = v11;
    }
  }
  if ( !IsRectEmptyOrInvalid((float *)v19.m128i_i32) )
  {
    v19 = v11;
    v13 = CCachedVisualImage::EnsureRenderTargetBitmapInfo(
            (struct CCachedVisualImage *)a1,
            a2,
            a3,
            v16,
            v10,
            (struct MilRectF *)&v19,
            &v18);
    v7 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x51Bu);
      return v7;
    }
    v8 = *(_QWORD *)(v18 + 8);
    goto LABEL_22;
  }
  return v7;
}
