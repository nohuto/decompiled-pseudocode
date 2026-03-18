/*
 * XREFs of ?GetD2DBitmap@CCachedVisualImage@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x180032F90
 * Callers:
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180064710 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitmap@@@Z @ 0x180143BD8 (-EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitma.c)
 */

__int64 __fastcall CCachedVisualImage::GetD2DBitmap(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        char a7,
        _QWORD *a8)
{
  _QWORD *v8; // rsi
  int v10; // eax
  __int64 v11; // rbx
  unsigned int v12; // edi
  int v13; // eax
  char v15; // [rsp+28h] [rbp-40h]
  char v16; // [rsp+30h] [rbp-38h]
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF
  __int64 v18; // [rsp+78h] [rbp+10h]
  unsigned int v19; // [rsp+80h] [rbp+18h]

  v19 = a3;
  v18 = a2;
  v8 = a8;
  v17 = 0LL;
  *a8 = 0LL;
  v10 = CCachedVisualImage::EnsureRenderTargetBitmap(a1 - 136, a2, a3, &v17);
  v11 = v17;
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801B8DE8, 1u, v10, 0x670u);
  }
  else
  {
    if ( !v17 )
      return v12;
    v16 = a7;
    v15 = a6;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, char, char, _QWORD *))(*(_QWORD *)(v17 + 112) + 104LL))(
            v17 + 112,
            v18,
            v19,
            a4,
            a5,
            v15,
            v16,
            v8);
    v12 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801B8DE8, 1u, v13, 0x67Eu);
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return v12;
}
