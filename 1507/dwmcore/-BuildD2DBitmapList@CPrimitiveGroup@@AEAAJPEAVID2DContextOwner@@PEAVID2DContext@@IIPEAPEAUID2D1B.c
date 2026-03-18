/*
 * XREFs of ?BuildD2DBitmapList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IIPEAPEAUID2D1Bitmap@@@Z @ 0x18000C924
 * Callers:
 *     ?CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x18000C9BC (-CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2.c)
 * Callees:
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180008840 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PE.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::BuildD2DBitmapList(
        CPrimitiveGroup *this,
        struct ID2DContextOwner *a2,
        struct ID2DContext *a3,
        int a4,
        unsigned int a5,
        struct ID2D1Bitmap **a6)
{
  unsigned int v6; // ebx
  unsigned int v7; // edi
  struct ID2D1Bitmap **i; // rsi
  int D2DBitmapRealizationForContextOwner; // eax
  struct ID2D1Bitmap1 *v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = a3;
  v6 = 0;
  v7 = 0;
  if ( a5 )
  {
    for ( i = a6; ; ++i )
    {
      D2DBitmapRealizationForContextOwner = CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(
                                              (CCompositionSurfaceBitmap *)(*(_QWORD *)(*((_QWORD *)this + 18)
                                                                                      + 8LL * (v7 + a4))
                                                                          + 64LL),
                                              a2,
                                              &v14);
      v6 = D2DBitmapRealizationForContextOwner;
      if ( D2DBitmapRealizationForContextOwner < 0 )
        break;
      ++v7;
      *i = v14;
      if ( v7 >= a5 )
        return v6;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmapRealizationForContextOwner, 0x3C8u);
  }
  return v6;
}
