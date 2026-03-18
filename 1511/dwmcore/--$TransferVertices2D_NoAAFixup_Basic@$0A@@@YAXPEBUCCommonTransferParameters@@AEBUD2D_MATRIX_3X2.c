/*
 * XREFs of ??$TransferVertices2D_NoAAFixup_Basic@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801193B4
 * Callers:
 *     ?TransferVertices@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@PEAV1@AEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@MI@Z @ 0x1800330E0 (-TransferVertices@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@PEAV1@AEBVCMILMatrix@@AEB.c)
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180034BF0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TransferVertices2D_NoAAFixup_Basic<0>(__int64 *a1, float *a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  float v8; // xmm2_4

  result = *((unsigned int *)a1 + 7);
  v3 = a1[2];
  v4 = *a1;
  if ( (_DWORD)result )
  {
    v5 = v4 + 4;
    v6 = v3 - v4;
    v7 = (unsigned int)result;
    do
    {
      *(float *)(v6 + v5 - 4) = (float)((float)(a2[2] * *(float *)v5) + (float)(*(float *)(v5 - 4) * *a2)) + a2[4];
      v8 = (float)((float)(a2[3] * *(float *)v5) + (float)(*(float *)(v5 - 4) * a2[1])) + a2[5];
      *(_DWORD *)(v6 + v5 + 4) = 1065353216;
      *(float *)(v6 + v5) = v8;
      result = *(unsigned int *)(v5 + 8);
      *(_DWORD *)(v6 + v5 + 8) = result;
      *(_QWORD *)(v6 + v5 + 12) = *(_QWORD *)(v5 + 12);
      *(_QWORD *)(v6 + v5 + 20) = *(_QWORD *)(v5 + 20);
      v5 += 32LL;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
