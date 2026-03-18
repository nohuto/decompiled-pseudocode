/*
 * XREFs of ?InternalGetD2DBitmap@CCompositionSurfaceBitmap@@QEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18000FA2C
 * Callers:
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800101E0 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PE.c)
 * Callees:
 *     ?GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x1800103A0 (-GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV-$TMilRe.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180093158 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::InternalGetD2DBitmap(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        struct ID2D1Bitmap1 **a5)
{
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, __int64, _QWORD, _QWORD); // rax
  int D2DBitmap; // eax
  unsigned int v10; // ebx

  *a5 = 0LL;
  if ( CCompositionSurfaceBitmap::EnsureBitmapRealization((CCompositionSurfaceBitmap *)a1, 0) )
  {
    v7 = *(_QWORD *)(a1 + 528) + 112LL;
    v8 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 104LL);
    if ( (char *)v8 == (char *)CDxHandleBitmapRealization::GetD2DBitmap )
      D2DBitmap = CDxHandleBitmapRealization::GetD2DBitmap(v7, a2, a3, a4, 0, *(_BYTE *)(a1 + 574), 1, a5);
    else
      D2DBitmap = v8(v7, a2, a3, a4);
    v10 = D2DBitmap;
    if ( D2DBitmap < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmap, 0x57u);
  }
  else
  {
    v10 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x5Bu);
  }
  return v10;
}
