/*
 * XREFs of ??$TransferVertices2D_Basic@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180119208
 * Callers:
 *     ?TransferVertices@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@PEAV1@AEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@MI@Z @ 0x1800330E0 (-TransferVertices@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@PEAV1@AEBVCMILMatrix@@AEB.c)
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180034BF0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?TransformAndFillPosXYUV2@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@AEBUD2D_MATRIX_3X2_F@@PEAV1@PEAUD2D_POINT_2F@@@Z @ 0x180015964 (-TransformAndFillPosXYUV2@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@AEBUD2D_MATRIX_3X.c)
 */

__int64 __fastcall TransferVertices2D_Basic<0>(__int64 *a1, const struct D2D_MATRIX_3X2_F *a2)
{
  __int64 result; // rax
  const struct CVertexAAFixupData *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // r12
  unsigned int *v7; // rsi
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rdi
  struct D2D_POINT_2F v11; // [rsp+30h] [rbp-38h] BYREF

  result = *a1;
  v4 = (const struct CVertexAAFixupData *)a1[1];
  v5 = a1[2];
  if ( *((_DWORD *)a1 + 7) )
  {
    v6 = *((unsigned int *)a1 + 7);
    v7 = (unsigned int *)(result + 12);
    v8 = v5 - (_QWORD)v4;
    v9 = result - (_QWORD)v4;
    v10 = v5 - result;
    do
    {
      TransformAndFillPosXYUV2(
        (const struct CVertexAAFixupData *)((char *)v4 + v9),
        v4,
        a2,
        (const struct CVertexAAFixupData *)((char *)v4 + v8),
        &v11);
      *(unsigned int *)((char *)v7 + v10 - 4) = 1065353216;
      v4 = (const struct CVertexAAFixupData *)((char *)v4 + 32);
      result = *v7;
      *(unsigned int *)((char *)v7 + v10) = result;
      v7 += 8;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
