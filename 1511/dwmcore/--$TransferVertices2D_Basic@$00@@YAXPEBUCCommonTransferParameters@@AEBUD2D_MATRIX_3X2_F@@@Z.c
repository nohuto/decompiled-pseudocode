/*
 * XREFs of ??$TransferVertices2D_Basic@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801190EC
 * Callers:
 *     ?TransferVertices@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@PEAV1@AEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@MI@Z @ 0x1800330E0 (-TransferVertices@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@PEAV1@AEBVCMILMatrix@@AEB.c)
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180034BF0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?TransformAndFillPosXYUV2@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@AEBUD2D_MATRIX_3X2_F@@PEAV1@PEAUD2D_POINT_2F@@@Z @ 0x180015964 (-TransformAndFillPosXYUV2@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@AEBUD2D_MATRIX_3X.c)
 */

__int64 __fastcall TransferVertices2D_Basic<1>(float *a1, const struct D2D_MATRIX_3X2_F *a2)
{
  __int64 result; // rax
  const struct CVertexAAFixupData *v4; // rdi
  __int64 v5; // rbx
  float v6; // xmm6_4
  __int64 v7; // r12
  _DWORD *v8; // r15
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rbx
  struct D2D_POINT_2F v12; // [rsp+30h] [rbp-48h] BYREF

  result = *(_QWORD *)a1;
  v4 = (const struct CVertexAAFixupData *)*((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  v6 = a1[6];
  if ( *((_DWORD *)a1 + 7) )
  {
    v7 = *((unsigned int *)a1 + 7);
    v8 = (_DWORD *)(result + 12);
    v9 = v5 - (_QWORD)v4;
    v10 = result - (_QWORD)v4;
    v11 = v5 - result;
    do
    {
      TransformAndFillPosXYUV2(
        (const struct CVertexAAFixupData *)((char *)v4 + v10),
        v4,
        a2,
        (const struct CVertexAAFixupData *)((char *)v4 + v9),
        &v12);
      *(_DWORD *)((char *)v8 + v11 - 4) = 1065353216;
      v4 = (const struct CVertexAAFixupData *)((char *)v4 + 32);
      result = (unsigned int)(int)(float)((float)(unsigned __int8)*v8 * v6);
      *(_DWORD *)((char *)v8 + v11) = result | (((int)(float)((float)(unsigned __int8)BYTE1(*v8) * v6) | (((int)(float)((float)(unsigned __int8)BYTE2(*v8) * v6) | ((int)(float)((float)HIBYTE(*v8) * v6) << 8)) << 8)) << 8);
      v8 += 8;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
