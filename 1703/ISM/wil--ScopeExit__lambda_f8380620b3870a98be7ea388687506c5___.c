/*
 * XREFs of wil::ScopeExit__lambda_f8380620b3870a98be7ea388687506c5___ @ 0x18008CB6C
 * Callers:
 *     ?GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JW4GetPoseAtTimePurpose@234@PEA_JPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@@Z @ 0x18008A960 (-GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JW4GetPoseAtTimePur.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::ScopeExit__lambda_f8380620b3870a98be7ea388687506c5___(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1

  v2 = *a2;
  *(_BYTE *)(a1 + 64) = 1;
  result = a1;
  v4 = a2[1];
  *(_OWORD *)a1 = v2;
  v5 = a2[2];
  *(_OWORD *)(a1 + 16) = v4;
  v6 = a2[3];
  *(_OWORD *)(a1 + 32) = v5;
  *(_OWORD *)(a1 + 48) = v6;
  return result;
}
