/*
 * XREFs of ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18003322C
 * Callers:
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitmap@@@Z @ 0x180143BD8 (-EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitma.c)
 * Callees:
 *     ?FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayId@@@Z @ 0x18001B810 (-FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayI.c)
 *     ?CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x180033320 (-CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV-$TMilRect_@MUMilRectF.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x18003366C (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_N@Z @ 0x180144498 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_N@Z.c)
 */

__int64 __fastcall CCachedVisualImage::EnsureRenderTargetBitmapInfo(
        struct CCachedVisualImage *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        struct MilRectF *a6,
        __int64 *a7)
{
  unsigned int v8; // edi
  __int64 v9; // r9
  __int64 v10; // rsi
  int v11; // eax
  int NewRenderTarget; // eax
  __int64 v14[11]; // [rsp+40h] [rbp-58h] BYREF

  v8 = 0;
  CCachedVisualImage::RemoveInvalidTargets(a1, a4, a5);
  v14[0] = CCachedVisualImage::FindExistingRenderTarget((__int64)a1);
  v10 = v14[0];
  if ( v14[0] )
    goto LABEL_2;
  NewRenderTarget = CCachedVisualImage::CreateNewRenderTarget(a1, a5, a6, (__int64)v14);
  if ( NewRenderTarget == -2003292287 )
    return v8;
  v8 = NewRenderTarget;
  if ( NewRenderTarget < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, NewRenderTarget, 0x49Eu);
    return v8;
  }
  v10 = v14[0];
  if ( v14[0] )
  {
LABEL_2:
    LOBYTE(v9) = *(_BYTE *)(*((_QWORD *)a1 + 4) + 1240LL);
    v11 = CCachedVisualImage::RenderTargetBitmapInfo::Update(v10, a6, a3, v9);
    v8 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x4B7u);
      return v8;
    }
  }
  *a7 = v10;
  return v8;
}
