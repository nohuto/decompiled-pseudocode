/*
 * XREFs of ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x18018F2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x1800103A0 (-GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV-$TMilRe.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180164480 (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x18018EFE4 (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::GetD2DBitmap(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7,
        struct ID2D1Bitmap1 **a8)
{
  struct ID2D1Bitmap1 **v8; // rsi
  CDxHandleAdvancedDirectFlipBitmapRealization *v10; // rcx
  int D2DBitmap; // eax
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // eax
  int D2DBitmapFromBitmapSource; // eax
  _DWORD v17[4]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v18; // [rsp+50h] [rbp-30h]
  __int64 v19; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v20; // [rsp+60h] [rbp-20h]
  int v21; // [rsp+64h] [rbp-1Ch]
  int v22; // [rsp+68h] [rbp-18h]
  __int64 v23; // [rsp+70h] [rbp-10h]
  struct IBitmapSource *v24; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+28h]
  unsigned int v26; // [rsp+B0h] [rbp+30h]

  v26 = a3;
  v25 = a2;
  v8 = a8;
  v24 = 0LL;
  v10 = (CDxHandleAdvancedDirectFlipBitmapRealization *)(a1 - 112);
  *a8 = 0LL;
  if ( *((_QWORD *)v10 + 55) || *((_QWORD *)v10 + 56) )
  {
    v13 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoredContent(v10);
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x5Bu);
    }
    else
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD, struct IBitmapSource **))(**(_QWORD **)(a1 + 328) + 184LL))(
              *(_QWORD *)(a1 + 328),
              &v24);
      v12 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x5Du);
      }
      else
      {
        v18 = 0LL;
        v21 = 0;
        v23 = 0LL;
        v17[2] = 1;
        v19 = v25;
        v22 = 1;
        v20 = v26;
        v17[0] = 87;
        v17[1] = 3;
        D2DBitmapFromBitmapSource = GetD2DBitmapFromBitmapSource(
                                      v24,
                                      (const struct PixelFormatInfo *)v17,
                                      (const struct BitmapSourceInfo *)&v19,
                                      (const struct _GUID *)(a1 - 80),
                                      v8);
        v12 = D2DBitmapFromBitmapSource;
        if ( D2DBitmapFromBitmapSource < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmapFromBitmapSource, 0x71u);
      }
    }
  }
  else
  {
    D2DBitmap = CDxHandleBitmapRealization::GetD2DBitmap(a1, a2, a3, a4, a5, a6, a7, v8);
    v12 = D2DBitmap;
    if ( D2DBitmap < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmap, 0x7Bu);
  }
  if ( v24 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v24 + 16LL))(v24);
  return v12;
}
