/*
 * XREFs of ?AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@@Z @ 0x180152E40
 * Callers:
 *     ?AddNewComposeTopContent@CDesktopRenderTarget@@UEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@@Z @ 0x18011D040 (-AddNewComposeTopContent@CDesktopRenderTarget@@UEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV-$CM.c)
 * Callees:
 *     ?Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z @ 0x18001D7AC (-Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18002C1F0 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18005B440 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ShapeBoundsEmpty@@YA_NPEBVCShape@@@Z @ 0x180153260 (-ShapeBoundsEmpty@@YA_NPEBVCShape@@@Z.c)
 */

__int64 __fastcall CComposeTop::AddNewContent(__int64 a1, __int64 a2, struct ID2D1RegionGeometry **a3, __int64 a4)
{
  int v5; // edi
  int v9; // eax
  CRegionShape *v10; // rsi
  __int64 v11; // rcx
  void (__fastcall ***v12)(_QWORD, __int64); // rcx
  struct CRegionShape *v14; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0;
  v14 = 0LL;
  if ( !ShapeBoundsEmpty((const struct CShape *)a3) )
  {
    v9 = CRegionShape::Create(a3[1], &v14);
    v5 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x45u);
      v10 = v14;
    }
    else
    {
      v10 = 0LL;
      *(_QWORD *)(a1 + 16) = v14;
      v11 = *(_QWORD *)(a1 + 8);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      *(_QWORD *)(a1 + 8) = a2;
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      *(_OWORD *)(a1 + 24) = *(_OWORD *)a4;
      *(_OWORD *)(a1 + 40) = *(_OWORD *)(a4 + 16);
      *(_OWORD *)(a1 + 56) = *(_OWORD *)(a4 + 32);
      *(_OWORD *)(a1 + 72) = *(_OWORD *)(a4 + 48);
      *(_DWORD *)(a1 + 88) = *(_DWORD *)(a4 + 64);
      CMILMatrix::SetToInverse((CMILMatrix *)(a1 + 92), (const struct CMILMatrix *)a4);
    }
    if ( v5 < 0 )
    {
      v12 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 16);
      if ( v12 )
      {
        (**v12)(v12, 1LL);
        *(_QWORD *)(a1 + 16) = 0LL;
      }
    }
    if ( v10 )
      CRegionShape::`vector deleting destructor'(v10, 1);
  }
  return (unsigned int)v5;
}
