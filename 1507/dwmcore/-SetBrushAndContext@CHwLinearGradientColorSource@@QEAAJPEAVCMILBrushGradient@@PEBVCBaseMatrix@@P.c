/*
 * XREFs of ?SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCBaseMatrix@@PEBUCContextState@@@Z @ 0x1801434F8
 * Callers:
 *     ?SetBrushAndContextInternal@CHwLinearGradientBrush@@IEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z @ 0x180142EFC (-SetBrushAndContextInternal@CHwLinearGradientBrush@@IEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?SetFilterAndWrapModes@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@W4D3D11_TEXTURE_ADDRESS_MODE@@1PEBUD2DVector2@@@Z @ 0x180138FE4 (-SetFilterAndWrapModes@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@W4D3D11_T.c)
 *     ?CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJPEBUMilPoint2F@@00PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilGradientWrapMode@@HPEAVCGradientSpanInfo@@PEAVCMILMatrix@@@Z @ 0x180159ED4 (-CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJPEBUMilPoint2F@@00PEBV-$CMatrix@UB.c)
 */

__int64 __fastcall CHwLinearGradientColorSource::SetBrushAndContext(
        CHwLinearGradientColorSource *this,
        struct CMILBrushGradient *a2,
        const struct CBaseMatrix *a3,
        const struct CContextState *a4)
{
  _DWORD *v4; // r14
  int v5; // eax
  int v9; // eax
  unsigned int v10; // esi
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 *v14; // r9
  int v15; // r10d
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  int v18; // xmm0_4
  int v19; // xmm1_4
  __int128 v21; // [rsp+40h] [rbp-79h] BYREF
  __int64 v22; // [rsp+50h] [rbp-69h] BYREF
  __int128 v23; // [rsp+60h] [rbp-59h] BYREF
  __int128 v24; // [rsp+70h] [rbp-49h]
  __int128 v25; // [rsp+80h] [rbp-39h]
  __int128 v26; // [rsp+90h] [rbp-29h]
  _OWORD v27[4]; // [rsp+A0h] [rbp-19h] BYREF

  *((_QWORD *)this + 27) = a2;
  v4 = (_DWORD *)((char *)this + 112);
  v5 = *((_DWORD *)a2 + 56);
  v21 = *(_OWORD *)((char *)a2 + 132);
  v22 = *(_QWORD *)((char *)a2 + 148);
  v9 = CGradientTextureGenerator::CalculateTextureSizeAndMapping(&v21, (char *)&v21 + 8, &v22, a3, v5);
  v10 = v9;
  if ( v9 >= 0 )
  {
    *((_DWORD *)this + 26) = *v4;
    v11 = *((_OWORD *)a3 + 1);
    v23 = *(_OWORD *)a3;
    v12 = *((_OWORD *)a3 + 2);
    v24 = v11;
    v13 = *((_OWORD *)a3 + 3);
    v25 = v12;
    v26 = v13;
    D2DMatrixMultiply(
      (CHwLinearGradientColorSource *)((char *)this + 228),
      (const struct D2DMatrix *)&v23,
      (const struct D2DMatrix *)v27);
    if ( *((_BYTE *)a4 + 64) == (_BYTE)v15 )
    {
      v16 = v27[0];
      v24 = v27[1];
      v17 = v27[3];
    }
    else
    {
      v16 = *v14;
      v24 = v14[1];
      v17 = v14[3];
    }
    v23 = v16;
    *((_DWORD *)this + 11) = v16;
    v26 = v17;
    v18 = v17;
    v19 = v24;
    *((_DWORD *)this + 15) = v18;
    *((_DWORD *)this + 13) = v19;
    *((_DWORD *)this + 12) = v15;
    *((_DWORD *)this + 14) = v15;
    *((_DWORD *)this + 16) = v15;
    CHwTexturedColorSource::SetFilterAndWrapModes((__int64)this);
    *((_DWORD *)this + 24) = 1;
    *((_DWORD *)this + 25) = 1;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x81u);
  }
  return v10;
}
