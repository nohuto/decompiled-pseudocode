/*
 * XREFs of ?AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@@Z @ 0x180119B28
 * Callers:
 *     ?AddNewComposeTopContent@CDesktopRenderTarget@@UEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@@Z @ 0x1800EB160 (-AddNewComposeTopContent@CDesktopRenderTarget@@UEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV-$CM.c)
 * Callees:
 *     ?Invert@CBaseMatrix@@IEAAHAEBV1@@Z @ 0x1800222D4 (-Invert@CBaseMatrix@@IEAAHAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x1800786E0 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ShapeBoundsEmpty@@YA_NPEBVCShape@@@Z @ 0x18011A198 (-ShapeBoundsEmpty@@YA_NPEBVCShape@@@Z.c)
 *     ?CopyRegion@CRegionShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18014A7A0 (-CopyRegion@CRegionShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CComposeTop::AddNewContent(__int64 a1, __int64 a2, CRegionShape *a3, const struct CBaseMatrix *a4)
{
  int v5; // esi
  int v9; // eax
  CRegionShape *v10; // rbp
  __int64 v11; // r15
  void (__fastcall ***v12)(_QWORD, __int64); // r14
  CRegionShape *v14; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0;
  v14 = 0LL;
  if ( !ShapeBoundsEmpty(a3) )
  {
    v9 = CRegionShape::CopyRegion(a3, 0LL, &v14);
    v5 = v9;
    if ( v9 >= 0 )
    {
      v11 = *(_QWORD *)(a1 + 8);
      v10 = 0LL;
      *(_QWORD *)(a1 + 16) = v14;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      *(_QWORD *)(a1 + 8) = a2;
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      *(_OWORD *)(a1 + 24) = *(_OWORD *)a4;
      *(_OWORD *)(a1 + 40) = *((_OWORD *)a4 + 1);
      *(_OWORD *)(a1 + 56) = *((_OWORD *)a4 + 2);
      *(_OWORD *)(a1 + 72) = *((_OWORD *)a4 + 3);
      CBaseMatrix::Invert((CBaseMatrix *)(a1 + 88), a4);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x48u);
      v10 = v14;
    }
    if ( v5 < 0 )
    {
      v12 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 16);
      if ( v12 )
      {
        (**v12)(*(_QWORD *)(a1 + 16), 1LL);
        *(_QWORD *)(a1 + 16) = 0LL;
      }
    }
    if ( v10 )
      CRegionShape::`vector deleting destructor'(v10, 1);
  }
  return (unsigned int)v5;
}
