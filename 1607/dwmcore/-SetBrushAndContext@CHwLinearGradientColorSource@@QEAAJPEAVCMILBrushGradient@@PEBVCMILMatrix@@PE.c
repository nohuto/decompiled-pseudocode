/*
 * XREFs of ?SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCMILMatrix@@PEBUCContextState@@@Z @ 0x1800186D8
 * Callers:
 *     ?SetBrushAndContextInternal@CHwLinearGradientBrush@@IEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z @ 0x180018848 (-SetBrushAndContextInternal@CHwLinearGradientBrush@@IEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z.c)
 * Callees:
 *     ?CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJPEBUMilPoint2F@@00PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilGradientWrapMode@@HPEAVCGradientSpanInfo@@PEAVCMILMatrix@@@Z @ 0x18001835C (-CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJPEBUMilPoint2F@@00PEBV-$CMatrix@UB.c)
 *     ?SetFilterAndWrapModes@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@W4D3D11_TEXTURE_ADDRESS_MODE@@1PEBUD2DVector2@@@Z @ 0x180018818 (-SetFilterAndWrapModes@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@W4D3D11_T.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180025320 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwLinearGradientColorSource::SetBrushAndContext(
        CHwLinearGradientColorSource *this,
        struct CMILBrushGradient *a2,
        const struct CMILMatrix *a3,
        const struct CContextState *a4)
{
  _DWORD *v4; // rdi
  unsigned int v6; // eax
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rdx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 v14; // rax
  int v15; // xmm0_4
  int v16; // xmm1_4
  __int64 v18; // [rsp+30h] [rbp-91h]
  __int128 v19; // [rsp+48h] [rbp-79h] BYREF
  float v20[4]; // [rsp+58h] [rbp-69h] BYREF
  __int128 v21; // [rsp+68h] [rbp-59h]
  __int128 v22; // [rsp+78h] [rbp-49h]
  __int128 v23; // [rsp+98h] [rbp-29h]
  _OWORD v24[4]; // [rsp+B8h] [rbp-9h] BYREF
  int v25; // [rsp+F8h] [rbp+37h]

  v25 = 0;
  v4 = (_DWORD *)((char *)this + 112);
  *((_QWORD *)this + 27) = a2;
  v6 = *((_DWORD *)a2 + 56);
  v19 = *(_OWORD *)((char *)a2 + 132);
  *(_QWORD *)v20 = *(_QWORD *)((char *)a2 + 148);
  v9 = CGradientTextureGenerator::CalculateTextureSizeAndMapping(
         (float *)&v19,
         (unsigned int *)&v19 + 2,
         v20,
         a3,
         v6,
         v18,
         (CHwLinearGradientColorSource *)((char *)this + 112),
         (struct CMILMatrix *)v24);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x81u);
  }
  else
  {
    *((_DWORD *)this + 26) = *v4;
    CMILMatrix::Multiply(a3, (const struct CMILMatrix *)v24, (CHwLinearGradientColorSource *)((char *)this + 228));
    if ( *((_BYTE *)a4 + 68) )
    {
      v12 = *(_OWORD *)((char *)this + 228);
      v22 = *(_OWORD *)((char *)this + 244);
      v13 = *(_OWORD *)((char *)this + 276);
    }
    else
    {
      v12 = v24[0];
      v22 = v24[1];
      v13 = v24[3];
    }
    *((_DWORD *)this + 12) = 0;
    *((_DWORD *)this + 14) = 0;
    *((_DWORD *)this + 16) = 0;
    v14 = *((_QWORD *)this + 27);
    v21 = v12;
    *((_DWORD *)this + 11) = v12;
    v23 = v13;
    v15 = v13;
    v16 = v22;
    *((_DWORD *)this + 15) = v15;
    *((_DWORD *)this + 13) = v16;
    CHwTexturedColorSource::SetFilterAndWrapModes(this, v11, *(_DWORD *)(v14 + 224) != 0 ? 1 : 3);
    *((_DWORD *)this + 24) = 1;
    *((_DWORD *)this + 25) = 1;
  }
  return v10;
}
