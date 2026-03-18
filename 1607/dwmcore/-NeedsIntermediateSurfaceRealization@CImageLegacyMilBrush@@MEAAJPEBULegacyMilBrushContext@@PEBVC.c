/*
 * XREFs of ?NeedsIntermediateSurfaceRealization@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@1PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAH4@Z @ 0x180032520
 * Callers:
 *     ?GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x180024750 (-GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBru.c)
 * Callees:
 *     ?GetBitmapCurrentValue@@YAJPEAVCImageSource@@PEBUBitmapSourceInfo@@PEAPEAVIBitmapSource@@@Z @ 0x180031814 (-GetBitmapCurrentValue@@YAJPEAVCImageSource@@PEBUBitmapSourceInfo@@PEAPEAVIBitmapSource@@@Z.c)
 *     ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x180033D40 (-IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?IsProtectedContent@CCachedVisualImage@@UEBA_NXZ @ 0x180033DC0 (-IsProtectedContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
  _DWORD *v9; // rsi
  _DWORD *v11; // r14
  struct CImageSource *v12; // rcx
  int BitmapCurrentValue; // eax
  unsigned int v14; // edi
  __int64 v15; // rcx
  CCachedVisualImage *v16; // rcx
  __int64 (*v17)(void); // rax
  char IsProtectedContent; // al
  CCachedVisualImage *v19; // rcx
  __int64 (*v20)(void); // rax
  char IsMonitorSpecificContent; // al
  struct IBitmapSource *v22; // rcx
  __int64 v24; // [rsp+30h] [rbp-28h] BYREF
  int v25; // [rsp+38h] [rbp-20h]
  int v26; // [rsp+3Ch] [rbp-1Ch]
  __int64 v27; // [rsp+48h] [rbp-10h]
  struct IBitmapSource *v28; // [rsp+60h] [rbp+8h] BYREF

  v8 = *(_QWORD *)(a2 + 256);
  v9 = a7;
  v11 = a8;
  v28 = 0LL;
  v24 = v8;
  LODWORD(v8) = *(_DWORD *)(a2 + 264);
  v26 = 0;
  v25 = v8;
  *a7 = 0;
  *v11 = 0;
  v12 = *(struct CImageSource **)(a1 + 592);
  v27 = 0LL;
  BitmapCurrentValue = GetBitmapCurrentValue(v12, (const struct BitmapSourceInfo *)&v24, &v28);
  v14 = BitmapCurrentValue;
  if ( BitmapCurrentValue < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapCurrentValue, 0x16Bu);
    goto LABEL_18;
  }
  v15 = *(_QWORD *)(a1 + 592);
  if ( v15 )
  {
    v16 = (CCachedVisualImage *)(v15 + 8);
    v17 = *(__int64 (**)(void))(*(_QWORD *)v16 + 32LL);
    if ( (char *)v17 == (char *)CCachedVisualImage::IsProtectedContent )
      IsProtectedContent = CCachedVisualImage::IsProtectedContent(v16);
    else
      IsProtectedContent = v17();
    v19 = (CCachedVisualImage *)(*(_QWORD *)(a1 + 592) + 8LL);
    *(_BYTE *)(a1 + 444) = IsProtectedContent;
    v20 = *(__int64 (**)(void))(*(_QWORD *)v19 + 24LL);
    if ( (char *)v20 == (char *)CCachedVisualImage::IsMonitorSpecificContent )
      IsMonitorSpecificContent = CCachedVisualImage::IsMonitorSpecificContent(v19);
    else
      IsMonitorSpecificContent = v20();
    *(_BYTE *)(a1 + 445) = IsMonitorSpecificContent;
  }
  else
  {
    *(_WORD *)(a1 + 444) = 0;
  }
  v22 = v28;
  if ( !v28 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 592) + 8LL) + 104LL))(*(_QWORD *)(a1 + 592) + 8LL) )
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
