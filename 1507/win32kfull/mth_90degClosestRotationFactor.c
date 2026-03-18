/*
 * XREFs of mth_90degClosestRotationFactor @ 0x1C02D8514
 * Callers:
 *     scl_InitializeScaling @ 0x1C00AB384 (scl_InitializeScaling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall mth_90degClosestRotationFactor(int *a1)
{
  int v1; // edx
  bool v2; // zf
  int v3; // r8d
  bool v4; // sf
  bool v6; // sf
  int v7; // eax
  bool v8; // cc
  bool v9; // sf
  bool v10; // zf
  int v11; // eax
  bool v12; // cc
  bool v13; // zf
  int v14; // eax
  bool v15; // zf

  v1 = *a1;
  v2 = *a1 == 0;
  if ( *a1 > 0 )
  {
    v3 = a1[1];
    v4 = v3 < 0;
    if ( !v3 )
    {
      if ( a1[3] > 0 && a1[4] > 0 )
        return 0LL;
      v4 = 0;
    }
    if ( v4 && !a1[3] && a1[4] > 0 )
      return 0LL;
    v2 = v1 == 0;
  }
  if ( v2 && a1[1] > 0 && a1[3] < 0 && a1[4] > 0 )
    return 1LL;
  v6 = v1 < 0;
  if ( v1 > 0 )
  {
    if ( a1[1] > 0 && a1[3] < 0 && !a1[4] )
      return 1LL;
    v6 = v1 < 0;
  }
  if ( v6 )
  {
    v7 = a1[1];
    v8 = v7 <= 0;
    if ( !v7 )
    {
      if ( a1[3] < 0 && a1[4] < 0 )
        return 2LL;
      v8 = 1;
    }
    if ( !v8 && !a1[3] && a1[4] < 0 )
      return 2LL;
  }
  v9 = v1 < 0;
  if ( !v1 )
  {
    if ( a1[1] < 0 && a1[3] > 0 && a1[4] < 0 )
      return 3LL;
    v9 = 0;
  }
  if ( v9 && a1[1] < 0 && a1[3] > 0 && !a1[4] )
    return 3LL;
  v10 = v1 == 0;
  if ( v1 > 0 )
  {
    v11 = a1[1];
    v12 = v11 <= 0;
    if ( !v11 )
    {
      if ( a1[3] > 0 && a1[4] < 0 )
        return 4LL;
      v12 = 1;
    }
    if ( !v12 && !a1[3] && a1[4] < 0 )
      return 4LL;
    v10 = v1 == 0;
  }
  if ( v10 && a1[1] > 0 && a1[3] > 0 && a1[4] > 0 )
    return 5LL;
  v13 = v1 == 0;
  if ( v1 < 0 )
  {
    v14 = a1[1];
    v15 = v14 == 0;
    if ( v14 > 0 )
    {
      if ( a1[3] > 0 && !a1[4] )
        return 5LL;
      v15 = v14 == 0;
    }
    if ( v15 && a1[3] < 0 && a1[4] > 0 || v14 < 0 && !a1[3] && a1[4] > 0 )
      return 6LL;
    v13 = v1 == 0;
  }
  if ( (!v13 || a1[1] >= 0 || a1[3] >= 0 || a1[4] >= 0) && (v1 <= 0 || a1[1] >= 0 || a1[3] >= 0 || a1[4]) )
    return 8LL;
  else
    return 7LL;
}
