/*
 * XREFs of ?CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x180052C28
 * Callers:
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180053790 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x180051B14 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?GetAlphaModeInternal@CCachedVisualImage@@AEBA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800529F0 (-GetAlphaModeInternal@CCachedVisualImage@@AEBA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x180053A64 (-ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ.c)
 *     ?Construct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXAEBUMilRectF@@PEAV2@PEAVIRenderTargetBitmap@@@Z @ 0x1800542F0 (-Construct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXAEBUMilRectF@@PEAV2@PEAVIRenderTarget.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@4PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800558C0 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCachedVisualImage::CreateNewRenderTarget(
        struct CCachedVisualImage *a1,
        struct _LUID a2,
        int a3,
        int a4,
        int a5,
        struct MilRectF *a6,
        CCachedVisualImage::RenderTargetBitmapInfo **a7)
{
  unsigned int v7; // edi
  char v10; // al
  struct _GUID *v11; // rcx
  int RenderTargetBitmap; // eax
  int v13; // eax
  struct IRenderTargetBitmap *v15; // [rsp+78h] [rbp-1h] BYREF
  int v16[2]; // [rsp+80h] [rbp+7h] BYREF
  int v17; // [rsp+88h] [rbp+Fh]
  _DWORD v18[4]; // [rsp+90h] [rbp+17h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+27h]

  v7 = 0;
  v15 = 0LL;
  *a7 = 0LL;
  if ( a4 && a5 )
  {
    CCachedVisualImage::ChoosePixelFormat(a1);
    v18[0] = *((_DWORD *)a1 + 31);
    v19 = 0LL;
    v18[1] = CCachedVisualImage::GetAlphaModeInternal(a1);
    v18[2] = *((_DWORD *)a1 + 33);
    v10 = CComposition::s_cHwProtectedEntities && !CComposition::s_bHwProtectionTempDisabled;
    v11 = (struct _GUID *)(*((_QWORD *)a1 + 4) + 252LL);
    *(_QWORD *)v16 = "DWM Cached Visual Image";
    v17 = 23;
    RenderTargetBitmap = CD3DDeviceManager::CreateRenderTargetBitmap(
                           (int)&qword_180195D88,
                           (int)v16,
                           a4,
                           a5,
                           1LL,
                           0,
                           (__int64)v18,
                           1,
                           v11,
                           a2,
                           a3,
                           v10,
                           (__int64)&v15);
    v7 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmap, 0x48Eu);
    }
    else
    {
      v13 = DynArrayImpl<1>::AddMultiple((__int64)a1 + 144, 0x30u, 1, a7);
      v7 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x492u);
      else
        CCachedVisualImage::RenderTargetBitmapInfo::Construct(*a7, a6, a1, v15);
    }
    if ( v15 )
      (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return v7;
}
