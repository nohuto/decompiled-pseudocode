/*
 * XREFs of ?ShouldSuggestPositionRounding@CInteractionTracker@@AEBA_NXZ @ 0x18014C138
 * Callers:
 *     ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x18014A910 (-GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInteractionTracker::ShouldSuggestPositionRounding(CInteractionTracker *this)
{
  int v1; // edx
  bool result; // al
  float *v3; // rcx
  float v4; // xmm1_4
  float v5; // xmm1_4

  v1 = *((_DWORD *)this + 51);
  result = 0;
  if ( !v1 )
    return 1;
  if ( v1 == 1 )
  {
    v3 = (float *)*((_QWORD *)this + 68);
    if ( v3 )
    {
      if ( v3[93] < 10.0 && v3[94] < 10.0 )
      {
        v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v3[96] - 0.0)) & _xmm);
        if ( v4 <= 0.0000011920929 )
        {
          v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v3[97] - 0.0)) & _xmm);
          if ( v5 <= 0.0000011920929 )
            return 1;
        }
      }
    }
  }
  return result;
}
