/*
 * XREFs of ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x18014EE60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x180007A80 (-GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV-$TMilRe.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18012520C (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ @ 0x18014EB48 (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::GetD2DBitmap(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7,
        struct ID2D1Bitmap1 **a8)
{
  struct ID2D1Bitmap1 **v8; // r14
  CDxHandleAdvancedDirectFlipBitmapRealization *v10; // rcx
  int D2DBitmap; // eax
  unsigned int v12; // edi
  int v13; // eax
  int v14; // eax
  int D2DBitmapFromBitmapSource; // eax
  _DWORD v17[4]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v18; // [rsp+50h] [rbp-30h]
  __int64 v19; // [rsp+58h] [rbp-28h] BYREF
  int v20; // [rsp+60h] [rbp-20h]
  int v21; // [rsp+64h] [rbp-1Ch]
  int v22; // [rsp+68h] [rbp-18h]
  __int64 v23; // [rsp+70h] [rbp-10h]
  struct IBitmapSource *v24; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+38h]
  int v26; // [rsp+C0h] [rbp+40h]

  v26 = a3;
  v25 = a2;
  v8 = a8;
  v24 = 0LL;
  v10 = (CDxHandleAdvancedDirectFlipBitmapRealization *)(a1 - 112);
  *a8 = 0LL;
  if ( *((_QWORD *)v10 + 60) || *((_QWORD *)v10 + 61) )
  {
    v13 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoredContent(v10);
    v12 = v13;
    if ( v13 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD, struct IBitmapSource **))(**(_QWORD **)(a1 + 368) + 176LL))(
              *(_QWORD *)(a1 + 368),
              &v24);
      v12 = v14;
      if ( v14 >= 0 )
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
          MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmapFromBitmapSource, 0x60u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x4Cu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x4Au);
    }
  }
  else
  {
    D2DBitmap = CDxHandleBitmapRealization::GetD2DBitmap(a1, a2, a3, a4, a5, a6, a7, v8);
    v12 = D2DBitmap;
    if ( D2DBitmap < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmap, 0x6Au);
  }
  if ( v24 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v24 + 16LL))(v24);
  return v12;
}
