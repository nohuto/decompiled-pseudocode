/*
 * XREFs of ?GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180066850
 * Callers:
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004B150 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180066850 (-GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetRealization@CScaleTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180066080 (-GetRealization@CScaleTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180066850 (-GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CRotateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180066D90 (-GetRealization@CRotateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?GetRealization@CTranslateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180086050 (-GetRealization@CTranslateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 */

void __fastcall CTransformGroup::GetRealization(
        CTransformGroup *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  _OWORD *v3; // rax
  unsigned int v4; // edi
  unsigned int v7; // eax
  _DWORD *v8; // rsi
  void (__fastcall *v9)(CScaleTransform *, const struct D2D_SIZE_F *, struct CMILMatrix *); // rax
  const struct D2D_SIZE_F *v10; // [rsp+48h] [rbp+10h]

  v10 = a2;
  v3 = (_OWORD *)*((_QWORD *)this + 20);
  v4 = 0;
  if ( v3 )
  {
    *(_OWORD *)a3 = *v3;
    *((_OWORD *)a3 + 1) = v3[1];
    *((_OWORD *)a3 + 2) = v3[2];
    *((_OWORD *)a3 + 3) = v3[3];
  }
  else
  {
    *(_QWORD *)((char *)a3 + 52) = 0LL;
    *((_DWORD *)a3 + 15) = 1065353216;
    *((_DWORD *)a3 + 10) = 1065353216;
    *((_DWORD *)a3 + 5) = 1065353216;
    *(_DWORD *)a3 = 1065353216;
    *(_QWORD *)((char *)a3 + 44) = 0LL;
    *((_QWORD *)a3 + 4) = 0LL;
    *((_QWORD *)a3 + 3) = 0LL;
    *(_QWORD *)((char *)a3 + 12) = 0LL;
    *(_QWORD *)((char *)a3 + 4) = 0LL;
    v7 = *((_DWORD *)this + 8) ^ (*((_DWORD *)this + 8) ^ ((*((_DWORD *)this + 8) & 0xFFFFFFFE) + 2)) & 6;
    *((_DWORD *)this + 8) = v7;
    if ( (v7 & 6) == 2 && *((_DWORD *)this + 36) )
    {
      do
      {
        v8 = *(_DWORD **)(*((_QWORD *)this + 19) + 8LL * v4);
        if ( (v8[8] & 1) != 0 )
        {
          v9 = *(void (__fastcall **)(CScaleTransform *, const struct D2D_SIZE_F *, struct CMILMatrix *))(*(_QWORD *)v8 + 104LL);
          if ( (char *)v9 == (char *)CRotateTransform::GetRealization )
          {
            CRotateTransform::GetRealization((CRotateTransform *)v8, a2, (struct CMILMatrix *)(v8 + 14));
          }
          else if ( v9 == CTranslateTransform::GetRealization )
          {
            CTranslateTransform::GetRealization((CTranslateTransform *)v8, a2, (struct CMILMatrix *)(v8 + 14));
          }
          else if ( v9 == CTransformGroup::GetRealization )
          {
            CTransformGroup::GetRealization((CTransformGroup *)v8, a2, (struct CMILMatrix *)(v8 + 14));
          }
          else if ( v9 == CScaleTransform::GetRealization )
          {
            CScaleTransform::GetRealization((CScaleTransform *)v8, a2, (struct CMILMatrix *)(v8 + 14));
          }
          else
          {
            v9((CScaleTransform *)v8, v10, (struct CMILMatrix *)(v8 + 14));
          }
          v8[8] &= ~1u;
        }
        D2DMatrixMultiply(a3, a3, (const struct D2DMatrix *)(v8 + 14));
        a2 = v10;
        ++v4;
      }
      while ( v4 < *((_DWORD *)this + 36) );
    }
    *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  }
}
