/*
 * XREFs of ?GetRealization@CTransformGroup@@MEAAXPEAVCMILMatrix@@@Z @ 0x18001A2D0
 * Callers:
 *     ?GetRealization@CTransformGroup@@MEAAXPEAVCMILMatrix@@@Z @ 0x18001A2D0 (-GetRealization@CTransformGroup@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x180034EC0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 * Callees:
 *     ?GetRealization@CTranslateTransform@@MEAAXPEAVCMILMatrix@@@Z @ 0x180017FB0 (-GetRealization@CTranslateTransform@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CTransformGroup@@MEAAXPEAVCMILMatrix@@@Z @ 0x18001A2D0 (-GetRealization@CTransformGroup@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CRotateTransform@@MEAAXPEAVCMILMatrix@@@Z @ 0x18001A520 (-GetRealization@CRotateTransform@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CTransformGroup::GetRealization(CTransformGroup *this, struct CMILMatrix *a2)
{
  __int64 v2; // rdi
  unsigned int v5; // eax
  _DWORD *v6; // rbx
  void (*v7)(CRotateTransform *__hidden, struct CMILMatrix *); // rax

  v2 = 0LL;
  *((_DWORD *)a2 + 15) = 1065353216;
  *((_DWORD *)a2 + 10) = 1065353216;
  *((_DWORD *)a2 + 5) = 1065353216;
  *(_DWORD *)a2 = 1065353216;
  *(_QWORD *)((char *)a2 + 52) = 0LL;
  *(_QWORD *)((char *)a2 + 44) = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *(_QWORD *)((char *)a2 + 12) = 0LL;
  *(_QWORD *)((char *)a2 + 4) = 0LL;
  v5 = *((_DWORD *)this + 8) ^ (*((_DWORD *)this + 8) ^ ((*((_DWORD *)this + 8) & 0xFFFFFFFE) + 2)) & 6;
  *((_DWORD *)this + 8) = v5;
  if ( (v5 & 6) == 2 && *((_DWORD *)this + 32) )
  {
    do
    {
      v6 = *(_DWORD **)(*((_QWORD *)this + 17) + 8 * v2);
      if ( (v6[8] & 1) != 0 )
      {
        v7 = *(void (**)(CRotateTransform *__hidden, struct CMILMatrix *))(*(_QWORD *)v6 + 96LL);
        if ( v7 == CRotateTransform::GetRealization )
        {
          CRotateTransform::GetRealization((CRotateTransform *)v6, (struct CMILMatrix *)(v6 + 10));
        }
        else if ( (char *)v7 == (char *)CTranslateTransform::GetRealization )
        {
          CTranslateTransform::GetRealization((CTranslateTransform *)v6, (struct CMILMatrix *)(v6 + 10));
        }
        else if ( (char *)v7 == (char *)CTransformGroup::GetRealization )
        {
          CTransformGroup::GetRealization((CTransformGroup *)v6, (struct CMILMatrix *)(v6 + 10));
        }
        else
        {
          ((void (__fastcall *)(_DWORD *, _DWORD *))v7)(v6, v6 + 10);
        }
        v6[8] &= ~1u;
      }
      D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)(v6 + 10));
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *((_DWORD *)this + 32) );
  }
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
}
