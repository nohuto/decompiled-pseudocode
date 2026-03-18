/*
 * XREFs of ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@@Z @ 0x180017A14
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEAVCVisual@@PEBV1@W4Enum@CpuClippingMode@@@Z @ 0x180059B30 (-Update@CCpuClippingData@@QEAAJPEAVCVisual@@PEBV1@W4Enum@CpuClippingMode@@@Z.c)
 * Callees:
 *     ?IsInvertableDeterminant@CBaseMatrix@@SA_NM@Z @ 0x18000E600 (-IsInvertableDeterminant@CBaseMatrix@@SA_NM@Z.c)
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18001793C (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@XZ @ 0x18001AEB0 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@XZ.c)
 *     ?Is2DAffineOrNaN@CBaseMatrix@@QEBAHH@Z @ 0x180022580 (-Is2DAffineOrNaN@CBaseMatrix@@QEBAHH@Z.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18003C7E0 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetRectCount@CRegionShape@@QEBAIXZ @ 0x180078558 (-GetRectCount@CRegionShape@@QEBAIXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCpuClippingData::CalcMode(__int64 a1, int a2)
{
  __int64 v4; // rbx
  CGeometry *v5; // rcx
  unsigned int v6; // ebp
  _QWORD *v7; // rax
  float v9; // xmm1_4
  __int64 v10; // rsi
  float v11; // xmm1_4
  __int64 (__fastcall *v13)(_QWORD, __int64); // rbp
  char v14; // al
  CTransform3D *v15; // rbx
  __int64 (__fastcall *v16)(_QWORD, __int64); // rbp
  char v17; // al
  CBaseMatrix *Matrix; // rax
  int v19; // edx
  float *v20; // rax
  int ShapeDataNoRef; // eax
  CRegionShape *v22; // r14
  int v23; // eax
  CRegionShape *v24; // [rsp+80h] [rbp+18h] BYREF

  if ( a2 == 4 || !CCommonRegistryData::m_fEnableCpuClipping )
    return 4LL;
  if ( a2 == 3 )
    return 3LL;
  v4 = *(_QWORD *)(a1 + 408);
  if ( !v4 )
    goto LABEL_5;
  v13 = *(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v4 + 48LL);
  if ( v13 == CEffectGroup::IsOfType )
    v14 = CEffectGroup::IsOfType(*(_QWORD *)(a1 + 408), 24LL);
  else
    v14 = v13(*(_QWORD *)(a1 + 408), 24LL);
  v15 = *(CTransform3D **)(a1 + 408);
  if ( !v14 )
  {
    v16 = *(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v15 + 48LL);
    if ( v16 == CEffectGroup::IsOfType )
      v17 = CEffectGroup::IsOfType(*(_QWORD *)(a1 + 408), 8LL);
    else
      v17 = v16(*(_QWORD *)(a1 + 408), 8LL);
    if ( !v17 )
      goto LABEL_5;
    v15 = *(CTransform3D **)(*(_QWORD *)(a1 + 408) + 56LL);
  }
  if ( v15 )
  {
    Matrix = CTransform3D::GetMatrix(v15);
    if ( !(unsigned int)CBaseMatrix::Is2DAffineOrNaN(Matrix, v19) )
      return 3LL;
    v20 = (float *)CTransform3D::GetMatrix(v15);
    if ( !CBaseMatrix::IsInvertableDeterminant((float)(v20[5] * *v20) - (float)(v20[4] * v20[1])) )
      return 3LL;
  }
LABEL_5:
  v5 = *(CGeometry **)(a1 + 368);
  if ( v5 )
  {
    v24 = 0LL;
    ShapeDataNoRef = CGeometry::GetShapeDataNoRef(v5, (const struct D2D_SIZE_F *)(a1 + 148), &v24);
    if ( ShapeDataNoRef >= 0 )
    {
      v22 = v24;
      v23 = (*(__int64 (__fastcall **)(CRegionShape *))(*(_QWORD *)v24 + 8LL))(v24);
      if ( !v23 || v23 == 2 && CRegionShape::GetRectCount(v22) <= 1 )
        goto LABEL_6;
      return 3LL;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataNoRef, 0xD7u);
    return 4LL;
  }
LABEL_6:
  v6 = 2;
  if ( !*(_QWORD *)(a1 + 368) )
    v6 = 3;
  if ( a2 == 2 )
    return v6;
  v7 = *(_QWORD **)(a1 + 360);
  if ( v7 ? *v7 : 0LL )
    return v6;
  v9 = *(float *)(a1 + 112);
  if ( (*(float *)(a1 + 124) != 0.0 || *(float *)(a1 + 128) != 0.0 || v9 != 0.0) && v9 != 0.0 )
    return v6;
  v10 = *(_QWORD *)(a1 + 352);
  if ( !v10 )
    return 1LL;
  if ( (*(_BYTE *)(v10 + 32) & 1) != 0 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 96LL))(v10, v10 + 40);
    *(_DWORD *)(v10 + 32) &= ~1u;
  }
  if ( !(unsigned int)CBaseMatrix::Is2DAffineOrNaN((CBaseMatrix *)(v10 + 40), a2) )
    return v6;
  if ( (*(_BYTE *)(v10 + 32) & 1) != 0 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 96LL))(v10, v10 + 40);
    *(_DWORD *)(v10 + 32) &= ~1u;
  }
  v11 = (float)(*(float *)(v10 + 60) * *(float *)(v10 + 40)) - (float)(*(float *)(v10 + 56) * *(float *)(v10 + 44));
  if ( v11 != 0.0 && _finite((float)(1.0 / v11)) )
    return 1LL;
  else
    return v6;
}
