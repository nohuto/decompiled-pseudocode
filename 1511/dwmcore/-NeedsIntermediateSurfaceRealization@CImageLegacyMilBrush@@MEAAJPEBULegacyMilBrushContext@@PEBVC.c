/*
 * XREFs of ?NeedsIntermediateSurfaceRealization@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@1PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAH4@Z @ 0x180059F90
 * Callers:
 *     ?GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18005CEA0 (-GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBru.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x18005B7C0 (-IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?IsProtectedContent@CCachedVisualImage@@UEBA_NXZ @ 0x18005B840 (-IsProtectedContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?GetBitmapCurrentValue@@YAJPEAVCImageSource@@PEBUBitmapSourceInfo@@PEAPEAVIBitmapSource@@@Z @ 0x18005CB18 (-GetBitmapCurrentValue@@YAJPEAVCImageSource@@PEBUBitmapSourceInfo@@PEAPEAVIBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CImageLegacyMilBrush::NeedsIntermediateSurfaceRealization(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8)
{
  __int64 v8; // rax
  _DWORD *v9; // r14
  _DWORD *v11; // r15
  struct CImageSource *v12; // rcx
  int BitmapCurrentValue; // eax
  unsigned int v14; // ebp
  __int64 v15; // rax
  CCachedVisualImage *v16; // rdi
  bool (__fastcall *v17)(CCachedVisualImage *__hidden); // rsi
  bool IsProtectedContent; // al
  __int64 v19; // rdi
  bool (__fastcall *v20)(CCachedVisualImage *__hidden); // rsi
  bool IsMonitorSpecificContent; // al
  struct IBitmapSource *v22; // rdi
  __int64 v24; // [rsp+30h] [rbp-38h] BYREF
  int v25; // [rsp+38h] [rbp-30h]
  int v26; // [rsp+3Ch] [rbp-2Ch]
  __int64 v27; // [rsp+48h] [rbp-20h]
  struct IBitmapSource *v28; // [rsp+70h] [rbp+8h] BYREF

  v8 = *(_QWORD *)(a2 + 248);
  v9 = a7;
  v11 = a8;
  v28 = 0LL;
  v24 = v8;
  LODWORD(v8) = *(_DWORD *)(a2 + 256);
  v26 = 0;
  v25 = v8;
  *a7 = 0;
  *v11 = 0;
  v12 = *(struct CImageSource **)(a1 + 512);
  v27 = 0LL;
  BitmapCurrentValue = GetBitmapCurrentValue(v12, (const struct BitmapSourceInfo *)&v24, &v28);
  v14 = BitmapCurrentValue;
  if ( BitmapCurrentValue < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapCurrentValue, 0x16Bu);
    goto LABEL_18;
  }
  v15 = *(_QWORD *)(a1 + 512);
  if ( v15 )
  {
    v16 = (CCachedVisualImage *)(v15 + 8);
    v17 = *(bool (__fastcall **)(CCachedVisualImage *__hidden))(*(_QWORD *)(v15 + 8) + 32LL);
    if ( v17 == CCachedVisualImage::IsProtectedContent )
      IsProtectedContent = CCachedVisualImage::IsProtectedContent(v16);
    else
      IsProtectedContent = v17(v16);
    v19 = *(_QWORD *)(a1 + 512);
    *(_BYTE *)(a1 + 364) = IsProtectedContent;
    v20 = *(bool (__fastcall **)(CCachedVisualImage *__hidden))(*(_QWORD *)(v19 + 8) + 24LL);
    if ( v20 == CCachedVisualImage::IsMonitorSpecificContent )
      IsMonitorSpecificContent = CCachedVisualImage::IsMonitorSpecificContent((CCachedVisualImage *)(v19 + 8));
    else
      IsMonitorSpecificContent = v20((CCachedVisualImage *)(v19 + 8));
    *(_BYTE *)(a1 + 365) = IsMonitorSpecificContent;
  }
  else
  {
    *(_WORD *)(a1 + 364) = 0;
  }
  v22 = v28;
  if ( !v28 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 512) + 8LL) + 104LL))(*(_QWORD *)(a1 + 512) + 8LL) )
      *v9 = 1;
    else
      *v11 = 1;
LABEL_18:
    v22 = v28;
    if ( !v28 )
      return v14;
  }
  (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v22 + 16LL))(v22);
  return v14;
}
