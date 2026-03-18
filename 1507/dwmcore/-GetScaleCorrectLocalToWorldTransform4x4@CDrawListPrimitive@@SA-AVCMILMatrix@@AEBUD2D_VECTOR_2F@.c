/*
 * XREFs of ?GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@SA?AVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV2@@Z @ 0x18000F694
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001D530 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x18003E010 (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawListPrimitive::GetScaleCorrectLocalToWorldTransform4x4(__int64 a1, float *a2, __int64 a3)
{
  float *v3; // rax
  float v4; // xmm2_4
  float v5; // xmm3_4
  __int64 v6; // rdx
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm2_4

  v3 = (float *)(a1 + 16);
  v4 = 1.0 / *a2;
  v5 = 1.0 / a2[1];
  v6 = 4LL;
  v7 = v4 * *(float *)(a3 + 4);
  *(float *)a1 = v4 * *(float *)a3;
  v8 = v4 * *(float *)(a3 + 8);
  v9 = v4 * *(float *)(a3 + 12);
  *(float *)(a1 + 8) = v8;
  *(float *)(a1 + 4) = v7;
  *(float *)(a1 + 12) = v9;
  do
  {
    *v3 = v5 * *(float *)((char *)v3 + a3 - a1);
    ++v3;
    --v6;
  }
  while ( v6 );
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a3 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a3 + 36);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a3 + 40);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a3 + 44);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a3 + 48);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a3 + 52);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a3 + 56);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a3 + 60);
  return a1;
}
