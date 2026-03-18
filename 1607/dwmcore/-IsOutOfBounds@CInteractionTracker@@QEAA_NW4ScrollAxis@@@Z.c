/*
 * XREFs of ?IsOutOfBounds@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z @ 0x18014ADA0
 * Callers:
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ @ 0x18014AE14 (-IsOutOfBounds@CInteractionTracker@@QEAA_NXZ.c)
 *     ?MustRecomputeValue@CScrollAnimation@@UEBA_NXZ @ 0x18015E2C0 (-MustRecomputeValue@CScrollAnimation@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionTracker::IsOutOfBounds(float *a1, int a2)
{
  __int64 result; // rax
  int v3; // edx
  float v4; // xmm1_4
  bool v5; // cc
  float v6; // xmm1_4
  float v7; // xmm0_4

  result = 0LL;
  if ( !a2 )
  {
    v6 = a1[32];
    if ( v6 > a1[38] )
      return 1LL;
    v7 = a1[35];
    goto LABEL_10;
  }
  v3 = a2 - 1;
  if ( !v3 )
  {
    v6 = a1[33];
    if ( v6 > a1[39] )
      return 1LL;
    v7 = a1[36];
LABEL_10:
    v5 = v7 <= v6;
LABEL_11:
    if ( v5 )
      return result;
    return 1LL;
  }
  if ( v3 != 1 )
    return result;
  v4 = a1[44];
  if ( a1[45] <= v4 )
  {
    v5 = v4 <= a1[46];
    goto LABEL_11;
  }
  return 1LL;
}
