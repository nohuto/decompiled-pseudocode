/*
 * XREFs of ?GetStockBlackSolidColorTextureSourceNoRef@CD3DDeviceLevel1@@QEAAJ_NPEAPEAVCHwSolidColorTextureSource@@@Z @ 0x1801741CC
 * Callers:
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800A4194 (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x18016AB90 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CHwSolidColorTextureSource@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x18017C4E4 (-Create@CHwSolidColorTextureSource@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetStockBlackSolidColorTextureSourceNoRef(
        CD3DDeviceLevel1 *this,
        char a2,
        struct CHwSolidColorTextureSource **a3)
{
  unsigned int v3; // edi
  CMILRefCountBase **v4; // rbx
  int v8; // eax
  CMILRefCountBase *v9; // rax
  __int128 v11; // [rsp+30h] [rbp-28h]

  v3 = 0;
  v4 = (CMILRefCountBase **)((char *)this + 784);
  *a3 = 0LL;
  if ( !a2 )
    v4 = (CMILRefCountBase **)((char *)this + 776);
  if ( *v4 )
    goto LABEL_10;
  Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(v4);
  v8 = CHwSolidColorTextureSource::Create(this, v4);
  v3 = v8;
  if ( v8 >= 0 )
  {
    *(_QWORD *)&v11 = 0LL;
    DWORD2(v11) = 0;
    if ( a2 )
      HIDWORD(v11) = 0;
    else
      *((float *)&v11 + 3) = FLOAT_1_0;
    v9 = *v4;
    *((_BYTE *)v9 + 112) = 0;
    *(_OWORD *)((char *)v9 + 116) = v11;
    if ( !a2 )
      *((_DWORD *)*v4 + 23) = 1;
LABEL_10:
    *a3 = *v4;
    return v3;
  }
  if ( IsOOM(v8) && IsCompBuild() )
    NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x615u);
  return v3;
}
