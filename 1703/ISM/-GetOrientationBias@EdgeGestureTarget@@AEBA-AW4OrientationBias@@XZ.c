/*
 * XREFs of ?GetOrientationBias@EdgeGestureTarget@@AEBA?AW4OrientationBias@@XZ @ 0x1800245F0
 * Callers:
 *     ?OnTouchSessionBegin@EdgeGestureTarget@@AEAAJAEBUTouchInfo@@@Z @ 0x180024398 (-OnTouchSessionBegin@EdgeGestureTarget@@AEAAJAEBUTouchInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EdgeGestureTarget::GetOrientationBias(__int64 a1)
{
  unsigned int v1; // r11d
  _DWORD *v2; // r10
  unsigned int v3; // edx
  unsigned int v4; // r9d
  int v5; // r8d
  int v6; // ecx
  int v7; // edx

  v1 = 0;
  if ( !*(_DWORD *)(a1 + 40) )
  {
    v2 = *(_DWORD **)(a1 + 56);
    v3 = v2[13];
    v4 = v2[14];
    v5 = (v3 < v2[11] ? 4 : 0) | 8;
    if ( v3 < v2[6] - v2[12] )
      v5 = v3 < v2[11] ? 4 : 0;
    v6 = v5 | 1;
    if ( v4 >= v2[9] )
      v6 = v5;
    v7 = v6 | 2;
    if ( v4 < v2[7] - v2[10] )
      v7 = v6;
    if ( v2[8] )
      v7 &= v2[8];
    if ( (v7 & 3) != 0 )
    {
      if ( (v7 & 0xC) == 0 )
        return 1;
    }
    else if ( (v7 & 0xC) == 0 )
    {
      return v1;
    }
    if ( (v7 & 3) == 0 )
      return 2;
  }
  return v1;
}
