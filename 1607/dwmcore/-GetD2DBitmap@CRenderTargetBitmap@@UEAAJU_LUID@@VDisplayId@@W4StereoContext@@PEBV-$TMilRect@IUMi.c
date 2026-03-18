/*
 * XREFs of ?GetD2DBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x1801324E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N3PEAPEAUID2D1Bitmap1@@@Z @ 0x180010510 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@PEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectU.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x180131FEC (-CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetD2DBitmap(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        bool a6,
        char a7,
        struct ID2D1Bitmap1 **a8)
{
  unsigned int v9; // ebx
  int Bitmap; // eax
  int v11; // r9d
  unsigned int v13; // [rsp+20h] [rbp-28h]

  *a8 = 0LL;
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v9 = -2003292404;
    v13 = 233;
LABEL_14:
    v11 = v9;
    goto LABEL_15;
  }
  if ( *(_BYTE *)(a1 + 96) )
  {
    if ( a5 || a6 )
    {
      v9 = -2003292287;
      v13 = 249;
      goto LABEL_14;
    }
    Bitmap = CRenderTargetBitmap::CheckSingleBitmapLuidAndDisplayId(a1 - 112, a2, a3);
    v9 = Bitmap;
    if ( Bitmap < 0 )
    {
      v13 = 252;
      goto LABEL_6;
    }
    Bitmap = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Bitmap1 **))(**(_QWORD **)(a1 + 16) + 112LL))(
               *(_QWORD *)(a1 + 16),
               a8);
    v9 = Bitmap;
    if ( Bitmap < 0 )
    {
      v13 = 253;
      goto LABEL_6;
    }
  }
  else
  {
    Bitmap = CD2DBitmapCache::GetBitmap(a1 - 96, a2, a3, a5, a6, a7, a8);
    v9 = Bitmap;
    if ( Bitmap < 0 )
    {
      v13 = 243;
LABEL_6:
      v11 = Bitmap;
LABEL_15:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v13);
    }
  }
  return v9;
}
