/*
 * XREFs of ?SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCBaseMatrix@@PEBUCContextState@@@Z @ 0x180013024
 * Callers:
 *     ?SetBrushAndContextInternal@CHwLinearGradientBrush@@IEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z @ 0x180012C44 (-SetBrushAndContextInternal@CHwLinearGradientBrush@@IEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z.c)
 * Callees:
 *     ?SetFilterAndWrapModes@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@W4D3D11_TEXTURE_ADDRESS_MODE@@1PEBUD2DVector2@@@Z @ 0x180013190 (-SetFilterAndWrapModes@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@W4D3D11_T.c)
 *     ?CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJPEBUMilPoint2F@@00PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilGradientWrapMode@@HPEAVCGradientSpanInfo@@PEAVCMILMatrix@@@Z @ 0x180013314 (-CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJPEBUMilPoint2F@@00PEBV-$CMatrix@UB.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
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
  __int64 v14; // rdx
  __int128 *v15; // r9
  int v16; // r10d
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rax
  int v20; // xmm0_4
  int v21; // xmm1_4
  __int128 v23; // [rsp+40h] [rbp-79h] BYREF
  __int64 v24; // [rsp+50h] [rbp-69h] BYREF
  __int128 v25; // [rsp+60h] [rbp-59h] BYREF
  __int128 v26; // [rsp+70h] [rbp-49h]
  __int128 v27; // [rsp+80h] [rbp-39h]
  __int128 v28; // [rsp+90h] [rbp-29h]
  _OWORD v29[4]; // [rsp+A0h] [rbp-19h] BYREF

  *((_QWORD *)this + 27) = a2;
  v4 = (_DWORD *)((char *)this + 112);
  v5 = *((_DWORD *)a2 + 56);
  v23 = *(_OWORD *)((char *)a2 + 132);
  v24 = *(_QWORD *)((char *)a2 + 148);
  v9 = CGradientTextureGenerator::CalculateTextureSizeAndMapping(&v23, (char *)&v23 + 8, &v24, a3, v5);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x81u);
  }
  else
  {
    *((_DWORD *)this + 26) = *v4;
    v11 = *((_OWORD *)a3 + 1);
    v25 = *(_OWORD *)a3;
    v12 = *((_OWORD *)a3 + 2);
    v26 = v11;
    v13 = *((_OWORD *)a3 + 3);
    v27 = v12;
    v28 = v13;
    D2DMatrixMultiply(
      (CHwLinearGradientColorSource *)((char *)this + 228),
      (const struct D2DMatrix *)&v25,
      (const struct D2DMatrix *)v29);
    if ( *((_BYTE *)a4 + 64) == (_BYTE)v16 )
    {
      v17 = v29[0];
      v26 = v29[1];
      v18 = v29[3];
    }
    else
    {
      v17 = *v15;
      v26 = v15[1];
      v18 = v15[3];
    }
    v19 = *((_QWORD *)this + 27);
    v25 = v17;
    *((_DWORD *)this + 11) = v17;
    v28 = v18;
    v20 = v18;
    v21 = v26;
    *((_DWORD *)this + 15) = v20;
    *((_DWORD *)this + 13) = v21;
    *((_DWORD *)this + 12) = v16;
    *((_DWORD *)this + 14) = v16;
    *((_DWORD *)this + 16) = v16;
    CHwTexturedColorSource::SetFilterAndWrapModes(this, v14, *(_DWORD *)(v19 + 224) != 0 ? 1 : 3);
    *((_DWORD *)this + 24) = 1;
    *((_DWORD *)this + 25) = 1;
  }
  return v10;
}
