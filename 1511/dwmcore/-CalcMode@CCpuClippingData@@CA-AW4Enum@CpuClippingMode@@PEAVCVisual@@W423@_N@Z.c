/*
 * XREFs of ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z @ 0x1800674F4
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x180035E70 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Is2DAffineOrNaN@CBaseMatrix@@QEBAHH@Z @ 0x1800474D0 (-Is2DAffineOrNaN@CBaseMatrix@@QEBAHH@Z.c)
 *     ?GetRectCount@CRegionShape@@QEBAIXZ @ 0x18004E114 (-GetRectCount@CRegionShape@@QEBAIXZ.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004E730 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x1800644A8 (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800677D4 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsInvertableDeterminant@CBaseMatrix@@SA_NM@Z @ 0x18013A524 (-IsInvertableDeterminant@CBaseMatrix@@SA_NM@Z.c)
 */

__int64 __fastcall CCpuClippingData::CalcMode(__int64 a1, int a2, char a3)
{
  __int64 result; // rax
  __int64 v7; // rbx
  const struct D2DMatrix **v8; // rcx
  unsigned int v9; // r12d
  float v10; // xmm2_4
  float *v11; // r14
  bool (__fastcall *v12)(__int64, int); // rdi
  bool v13; // al
  CTransform3D *v14; // rbx
  bool (__fastcall *v15)(__int64, int); // rdi
  bool v16; // al
  CBaseMatrix *Matrix; // rax
  float *v18; // rax
  int ShapeDataNoRef; // eax
  CRegionShape *v20; // rdi
  int v21; // eax
  CRegionShape *v22; // [rsp+78h] [rbp+20h] BYREF

  result = 5LL;
  if ( a2 == 5 || !CCommonRegistryData::m_fEnableCpuClipping )
    return result;
  if ( a2 == 4 )
    return 4LL;
  v7 = *(_QWORD *)(a1 + 392);
  if ( !v7 )
    goto LABEL_5;
  v12 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v7 + 48LL);
  if ( v12 == CEffectGroup::IsOfType )
    v13 = CEffectGroup::IsOfType(*(_QWORD *)(a1 + 392), 24);
  else
    v13 = v12(*(_QWORD *)(a1 + 392), 24);
  v14 = *(CTransform3D **)(a1 + 392);
  if ( !v13 )
  {
    v15 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v14 + 48LL);
    if ( v15 == CEffectGroup::IsOfType )
      v16 = CEffectGroup::IsOfType(*(_QWORD *)(a1 + 392), 8);
    else
      v16 = v15(*(_QWORD *)(a1 + 392), 8);
    if ( !v16 )
      goto LABEL_5;
    v14 = *(CTransform3D **)(*(_QWORD *)(a1 + 392) + 72LL);
  }
  if ( v14 )
  {
    Matrix = CTransform3D::GetMatrix(v14, (const struct D2D_SIZE_F *)(a1 + 132));
    if ( !(unsigned int)CBaseMatrix::Is2DAffineOrNaN(Matrix) )
      return 4LL;
    v18 = (float *)CTransform3D::GetMatrix(v14, (const struct D2D_SIZE_F *)(a1 + 132));
    if ( !CBaseMatrix::IsInvertableDeterminant((float)(v18[5] * *v18) - (float)(v18[4] * v18[1])) )
      return 4LL;
  }
LABEL_5:
  if ( a2 != 2 )
  {
    v8 = *(const struct D2DMatrix ***)(a1 + 352);
    if ( !v8 )
      goto LABEL_7;
    v22 = 0LL;
    ShapeDataNoRef = CGeometry::GetShapeDataNoRef(v8, (const struct D2D_SIZE_F *)(a1 + 132), &v22);
    if ( ShapeDataNoRef < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataNoRef, 0x141u);
    }
    else
    {
      v20 = v22;
      v21 = (*(__int64 (__fastcall **)(CRegionShape *))(*(_QWORD *)v22 + 8LL))(v22);
      if ( !v21 || v21 == 2 && (unsigned int)CRegionShape::GetRectCount(v20) <= 1 )
        goto LABEL_7;
    }
  }
  a3 = 1;
LABEL_7:
  v9 = 3;
  if ( !*(_QWORD *)(a1 + 352) || a3 )
    v9 = 4;
  if ( a2 == 3 )
    return v9;
  v10 = *(float *)(a1 + 96);
  if ( (*(float *)(a1 + 108) != 0.0 || *(float *)(a1 + 112) != 0.0 || v10 != 0.0) && v10 != 0.0 )
    return v9;
  v11 = *(float **)(a1 + 336);
  if ( !v11 )
    goto LABEL_20;
  if ( ((_BYTE)v11[8] & 1) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, _DWORD *))(*(_QWORD *)v11 + 104LL))(
      *(_QWORD *)(a1 + 336),
      a1 + 132,
      (_DWORD *)v11 + 14);
    *((_DWORD *)v11 + 8) &= ~1u;
  }
  if ( !(unsigned int)CBaseMatrix::Is2DAffineOrNaN((CBaseMatrix *)(v11 + 14)) )
    return v9;
  if ( ((_BYTE)v11[8] & 1) != 0 )
  {
    (*(void (__fastcall **)(float *, __int64, _DWORD *))(*(_QWORD *)v11 + 104LL))(v11, a1 + 132, (_DWORD *)v11 + 14);
    *((_DWORD *)v11 + 8) &= ~1u;
  }
  if ( !CBaseMatrix::IsInvertableDeterminant((float)(v11[19] * v11[14]) - (float)(v11[18] * v11[15])) )
    return v9;
LABEL_20:
  if ( a2 == 2 )
    return 2LL;
  return (unsigned int)(a3 != 0) + 1;
}
