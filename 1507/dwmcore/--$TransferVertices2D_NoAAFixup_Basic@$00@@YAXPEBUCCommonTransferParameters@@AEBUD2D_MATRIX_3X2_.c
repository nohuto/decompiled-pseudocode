/*
 * XREFs of ??$TransferVertices2D_NoAAFixup_Basic@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180100258
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001D530 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x18003E010 (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TransferVertices2D_NoAAFixup_Basic<1>(float *a1, float *a2)
{
  __int64 result; // rax
  float v4; // xmm4_4
  __int64 v5; // r10
  __int64 v6; // rdx
  __int64 v7; // r8
  float v8; // xmm2_4
  unsigned int v9; // ecx

  result = *(_QWORD *)a1;
  v4 = a1[6];
  if ( *((_DWORD *)a1 + 7) )
  {
    v5 = *((unsigned int *)a1 + 7);
    v6 = result + 4;
    v7 = *((_QWORD *)a1 + 2) - result;
    do
    {
      *(float *)(v7 + v6 - 4) = (float)((float)(*(float *)v6 * a2[2]) + (float)(*(float *)(v6 - 4) * *a2)) + a2[4];
      v8 = (float)((float)(*(float *)v6 * a2[3]) + (float)(*(float *)(v6 - 4) * a2[1])) + a2[5];
      *(_DWORD *)(v7 + v6 + 4) = 1065353216;
      *(float *)(v7 + v6) = v8;
      v9 = *(_DWORD *)(v6 + 8);
      result = (unsigned int)(int)(float)((float)(unsigned __int8)v9 * v4);
      *(_DWORD *)(v7 + v6 + 8) = result | (((int)(float)((float)BYTE1(v9) * v4) | (((int)(float)((float)BYTE2(v9) * v4) | ((int)(float)((float)HIBYTE(v9) * v4) << 8)) << 8)) << 8);
      *(_QWORD *)(v7 + v6 + 12) = *(_QWORD *)(v6 + 12);
      *(_QWORD *)(v7 + v6 + 20) = *(_QWORD *)(v6 + 20);
      v6 += 32LL;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
