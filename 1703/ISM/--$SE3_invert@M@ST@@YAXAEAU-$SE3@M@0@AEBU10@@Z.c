/*
 * XREFs of ??$SE3_invert@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@@Z @ 0x18009BBF8
 * Callers:
 *     InterpolatePoses @ 0x180094080 (InterpolatePoses.c)
 *     ?PredictFromPoses@ConstantVelocityPosePredictionModel@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x180094450 (-PredictFromPoses@ConstantVelocityPosePredictionModel@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@.c)
 *     ?PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x1800948A0 (-PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NOD.c)
 * Callees:
 *     ST::mult_Ax_3x3_float_ @ 0x18009C0C4 (ST--mult_Ax_3x3_float_.c)
 */

__int64 __fastcall ST::SE3_invert<float>(_DWORD *a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v5; // r11
  _DWORD *v6; // r8
  __int64 v7; // r10
  int v8; // ecx
  __int64 v9; // rsi
  __int64 v10; // rbp
  _DWORD *v11; // rbx
  _DWORD *v12; // rdi
  int v13; // xmm0_4
  __int64 result; // rax
  _DWORD *v15; // rcx

  v2 = 0LL;
  v5 = 0LL;
  v6 = a1;
  v7 = a2 - (_QWORD)a1;
  v8 = 1;
  v9 = 3LL;
  do
  {
    *v6 = *(_DWORD *)((char *)v6 + v7);
    if ( v8 < 3 )
    {
      v10 = (unsigned int)(3 - v8);
      v11 = &a1[v5 + 1 + v2];
      v12 = &a1[v5 + 3 + v2];
      do
      {
        v13 = *(_DWORD *)((char *)v11 + v7);
        *v11++ = *(_DWORD *)((char *)v12 + v7);
        *v12 = v13;
        v12 += 3;
        --v10;
      }
      while ( v10 );
    }
    ++v8;
    ++v2;
    v6 += 4;
    v5 += 3LL;
    --v9;
  }
  while ( v9 );
  result = ST::mult_Ax_3x3_float_(a1 + 9, a1, a2 + 36);
  *v15 ^= _xmm;
  v15[1] ^= _xmm;
  v15[2] ^= _xmm;
  return result;
}
