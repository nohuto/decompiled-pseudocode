/*
 * XREFs of ?GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x1800103A0
 * Callers:
 *     ?InternalGetD2DBitmap@CCompositionSurfaceBitmap@@QEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18000FA2C (-InternalGetD2DBitmap@CCompositionSurfaceBitmap@@QEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPE.c)
 *     ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x18018F2F0 (-GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoCon.c)
 * Callees:
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N3PEAPEAUID2D1Bitmap1@@@Z @ 0x180010510 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@PEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectU.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180054A70 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?HDRConvertToDecodeBitmap@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18018FCDC (-HDRConvertToDecodeBitmap@CDxHandleBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::GetD2DBitmap(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        bool a6,
        char a7,
        struct ID2D1Bitmap1 **a8)
{
  CDxHandleBitmapRealization *v8; // rdi
  __int64 (__fastcall *v10)(CDxHandleBitmapRealization *__hidden); // rax
  CDxHandleBitmapRealization *v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int Bitmap; // eax
  int v17; // r9d
  unsigned int v18; // [rsp+20h] [rbp-38h]

  v8 = (CDxHandleBitmapRealization *)(a1 - 112);
  *a8 = 0LL;
  v10 = *(__int64 (__fastcall **)(CDxHandleBitmapRealization *__hidden))(*(_QWORD *)(a1 - 112) + 112LL);
  v11 = (CDxHandleBitmapRealization *)(a1 - 112);
  if ( v10 == CDxHandleBitmapRealization::EnsureD2DBitmap )
    v12 = CDxHandleBitmapRealization::EnsureD2DBitmap(v11);
  else
    v12 = v10(v11);
  v13 = v12;
  if ( v12 < 0 )
  {
    v18 = 216;
    v17 = v12;
    goto LABEL_18;
  }
  v14 = *(_DWORD *)(a1 + 60);
  if ( v14 == 3 || v14 == 12 || v14 == 14 || v14 == 17 )
  {
    Bitmap = CDxHandleBitmapRealization::HDRConvertToDecodeBitmap(v8);
    v13 = Bitmap;
    if ( Bitmap < 0 )
    {
      v18 = 231;
    }
    else
    {
      Bitmap = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, bool, char, struct ID2D1Bitmap1 **))(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL) + 56LL))(
                 *(_QWORD *)(a1 + 248) + 16LL,
                 a2,
                 a3,
                 a5,
                 a6,
                 a7,
                 a8);
      v13 = Bitmap;
      if ( Bitmap >= 0 )
        return v13;
      v18 = 238;
    }
    goto LABEL_13;
  }
  Bitmap = CD2DBitmapCache::GetBitmap((int)a1 - 96, a2, a3, a5, a6, a7, a8);
  v13 = Bitmap;
  if ( Bitmap < 0 )
  {
    v18 = 225;
LABEL_13:
    v17 = Bitmap;
LABEL_18:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, v18);
  }
  return v13;
}
