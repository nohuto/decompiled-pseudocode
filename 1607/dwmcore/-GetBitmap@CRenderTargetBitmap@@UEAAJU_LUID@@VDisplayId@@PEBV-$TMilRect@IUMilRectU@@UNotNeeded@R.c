/*
 * XREFs of ?GetBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N3PEAPEAUID2D1Bitmap1@@@Z @ 0x1801321E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N3PEAPEAUID2D1Bitmap1@@@Z @ 0x180010510 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@PEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectU.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x180131FEC (-CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetBitmap(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        bool a5,
        char a6,
        struct ID2D1Bitmap1 **a7)
{
  unsigned int v8; // ebx
  int Bitmap; // eax
  int v10; // r9d
  unsigned int v12; // [rsp+20h] [rbp-28h]

  *a7 = 0LL;
  if ( !*(_QWORD *)(a1 + 112) )
  {
    v8 = -2003292404;
    v12 = 163;
LABEL_14:
    v10 = v8;
    goto LABEL_15;
  }
  if ( *(_BYTE *)(a1 + 192) )
  {
    if ( a4 || a5 )
    {
      v8 = -2003292287;
      v12 = 179;
      goto LABEL_14;
    }
    Bitmap = CRenderTargetBitmap::CheckSingleBitmapLuidAndDisplayId(a1 - 16, a2, a3);
    v8 = Bitmap;
    if ( Bitmap < 0 )
    {
      v12 = 182;
      goto LABEL_6;
    }
    Bitmap = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Bitmap1 **))(**(_QWORD **)(a1 + 112) + 112LL))(
               *(_QWORD *)(a1 + 112),
               a7);
    v8 = Bitmap;
    if ( Bitmap < 0 )
    {
      v12 = 183;
      goto LABEL_6;
    }
  }
  else
  {
    Bitmap = CD2DBitmapCache::GetBitmap(a1, a2, a3, a4, a5, a6, a7);
    v8 = Bitmap;
    if ( Bitmap < 0 )
    {
      v12 = 173;
LABEL_6:
      v10 = Bitmap;
LABEL_15:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v12);
    }
  }
  return v8;
}
