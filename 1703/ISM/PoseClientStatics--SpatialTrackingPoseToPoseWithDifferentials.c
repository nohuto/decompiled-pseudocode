/*
 * XREFs of PoseClientStatics::SpatialTrackingPoseToPoseWithDifferentials @ 0x180093FA4
 * Callers:
 *     ?PredictFromPoses@ConstantVelocityPosePredictionModel@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x180094450 (-PredictFromPoses@ConstantVelocityPosePredictionModel@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@.c)
 *     ?PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x1800948A0 (-PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NOD.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall PoseClientStatics::SpatialTrackingPoseToPoseWithDifferentials(_OWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // rax
  __int64 v3; // r8
  _OWORD *result; // rax
  int v5; // xmm1_4
  __int128 v6; // [rsp+0h] [rbp-40h]
  __int128 v7; // [rsp+10h] [rbp-30h]
  __int128 v8; // [rsp+20h] [rbp-20h]

  v2 = (_DWORD *)a1 + 18;
  v3 = 6LL;
  *a1 = `ST::SE3_identity<float>'::`2'::id;
  a1[1] = xmmword_1800B3280;
  a1[2] = xmmword_1800B3290;
  do
  {
    *(v2 - 6) = 0;
    *v2++ = 0;
    --v3;
  }
  while ( v3 );
  result = a1;
  LODWORD(v6) = *a2;
  DWORD1(v6) = a2[3];
  DWORD2(v6) = a2[6];
  DWORD1(v8) = a2[9];
  HIDWORD(v6) = a2[1];
  DWORD1(v7) = a2[7];
  LODWORD(v7) = a2[4];
  DWORD2(v7) = a2[2];
  DWORD2(v8) = a2[10];
  LODWORD(v8) = a2[8];
  HIDWORD(v7) = a2[5];
  v5 = a2[11];
  *a1 = v6;
  HIDWORD(v8) = v5;
  a1[1] = v7;
  a1[2] = v8;
  return result;
}
