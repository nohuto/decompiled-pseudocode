/*
 * XREFs of ?GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180022EA0
 * Callers:
 *     ?GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180022EA0 (-GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x1800528C0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 * Callees:
 *     ?GetRealization@CTranslateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800229D0 (-GetRealization@CTranslateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CScaleTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180022AB0 (-GetRealization@CScaleTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180022EA0 (-GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CRotateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800232D0 (-GetRealization@CRotateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18005B70C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTransformGroup::GetRealization(
        CTransformGroup *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  __int64 v3; // rax
  unsigned int v7; // eax
  unsigned int v8; // eax
  _DWORD *v9; // rbx
  char v10; // al
  struct CMILMatrix *v11; // r8
  void (__fastcall *v12)(CScaleTransform *, const struct D2D_SIZE_F *, struct CMILMatrix *); // rax
  unsigned int i; // [rsp+30h] [rbp+8h]

  v3 = *((_QWORD *)this + 32);
  if ( v3 )
  {
    *(_OWORD *)a3 = *(_OWORD *)v3;
    *((_OWORD *)a3 + 1) = *(_OWORD *)(v3 + 16);
    *((_OWORD *)a3 + 2) = *(_OWORD *)(v3 + 32);
    *((_OWORD *)a3 + 3) = *(_OWORD *)(v3 + 48);
    *((_DWORD *)a3 + 16) = *(_DWORD *)(v3 + 64);
  }
  else
  {
    *((_WORD *)a3 + 32) = 32085;
    *(_OWORD *)a3 = _xmm;
    *((_OWORD *)a3 + 1) = _xmm;
    *((_OWORD *)a3 + 2) = _xmm;
    *((_OWORD *)a3 + 3) = _xmm;
    v7 = *((_DWORD *)this + 8) ^ (*((_DWORD *)this + 8) ^ ((*((_DWORD *)this + 8) & 0xFFFFFFFE) + 2)) & 6;
    *((_DWORD *)this + 8) = v7;
    if ( (v7 & 6) == 2 )
    {
      v8 = 0;
      for ( i = 0; v8 < *((_DWORD *)this + 60); i = v8 )
      {
        v9 = *(_DWORD **)(*((_QWORD *)this + 31) + 8LL * v8);
        v10 = v9[8] & 1;
        if ( a2 )
        {
          if ( !v10 && *((_BYTE *)v9 + 212) && (*((float *)v9 + 51) != a2->width || *((float *)v9 + 52) != a2->height) )
            v10 = 1;
          *(struct D2D_SIZE_F *)(v9 + 51) = *a2;
        }
        if ( v10 )
        {
          v11 = (struct CMILMatrix *)(v9 + 34);
          v12 = *(void (__fastcall **)(CScaleTransform *, const struct D2D_SIZE_F *, struct CMILMatrix *))(*(_QWORD *)v9 + 112LL);
          if ( v12 == CRotateTransform::GetRealization )
          {
            CRotateTransform::GetRealization((CRotateTransform *)v9, a2, v11);
          }
          else if ( v12 == CTranslateTransform::GetRealization )
          {
            CTranslateTransform::GetRealization((CTranslateTransform *)v9, a2, v11);
          }
          else if ( v12 == CScaleTransform::GetRealization )
          {
            CScaleTransform::GetRealization((CScaleTransform *)v9, a2, v11);
          }
          else if ( v12 == CTransformGroup::GetRealization )
          {
            CTransformGroup::GetRealization((CTransformGroup *)v9, a2, v11);
          }
          else
          {
            v12((CScaleTransform *)v9, a2, v11);
          }
          v9[8] &= ~1u;
        }
        CMILMatrix::Multiply(a3, (const struct CMILMatrix *)(v9 + 34));
        v8 = i + 1;
      }
    }
    *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  }
}
