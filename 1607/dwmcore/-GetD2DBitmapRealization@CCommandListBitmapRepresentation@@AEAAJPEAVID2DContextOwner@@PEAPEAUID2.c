/*
 * XREFs of ?GetD2DBitmapRealization@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap@@@Z @ 0x18000F1FC
 * Callers:
 *     ?GetD2DCommandList@CCommandListBitmapRepresentation@@QEAAJPEAVCPolygon@@PEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18000F4E4 (-GetD2DCommandList@CCommandListBitmapRepresentation@@QEAAJPEAVCPolygon@@PEAVID2DContextOwner@@PE.c)
 *     ?CreateNewGenerator@CCommandListBitmapRepresentation@@AEAAJPEBVCComposition@@PEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180153354 (-CreateNewGenerator@CCommandListBitmapRepresentation@@AEAAJPEBVCComposition@@PEAVID2DContextOwne.c)
 * Callees:
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800101E0 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PE.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCommandListBitmapRepresentation::GetD2DBitmapRealization(
        CCommandListBitmapRepresentation *this,
        struct ID2DContextOwner *a2,
        struct ID2D1Bitmap **a3)
{
  __int64 v4; // rax
  int (*v5)(CCompositionSurfaceBitmap *__hidden, struct ID2DContextOwner *, struct ID2D1Bitmap1 **); // rax
  int D2DBitmapRealizationForContextOwner; // eax
  unsigned int v7; // ebx
  struct ID2D1Bitmap1 *v9; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v4 = *(_QWORD *)this;
  v9 = 0LL;
  v5 = *(int (**)(CCompositionSurfaceBitmap *__hidden, struct ID2DContextOwner *, struct ID2D1Bitmap1 **))(v4 + 80);
  if ( v5 == CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner )
    D2DBitmapRealizationForContextOwner = CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(
                                            this,
                                            a2,
                                            &v9);
  else
    D2DBitmapRealizationForContextOwner = ((__int64 (__fastcall *)(CCommandListBitmapRepresentation *, struct ID2DContextOwner *, struct ID2D1Bitmap1 **))v5)(
                                            this,
                                            a2,
                                            &v9);
  v7 = D2DBitmapRealizationForContextOwner;
  if ( D2DBitmapRealizationForContextOwner < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmapRealizationForContextOwner, 0x10Au);
  }
  else
  {
    if ( !v9 )
      return v7;
    (**(void (__fastcall ***)(struct ID2D1Bitmap1 *, GUID *, struct ID2D1Bitmap **))v9)(
      v9,
      &GUID_a2296057_ea42_4099_983b_539fb6505426,
      a3);
  }
  if ( v9 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v9 + 16LL))(v9);
  return v7;
}
