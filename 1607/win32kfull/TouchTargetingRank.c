/*
 * XREFs of TouchTargetingRank @ 0x1C02481B0
 * Callers:
 *     TouchTargetingRankForRectDeep @ 0x1C02486E8 (TouchTargetingRankForRectDeep.c)
 *     _TTUpdateRankWithSegment @ 0x1C0248FF4 (_TTUpdateRankWithSegment.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchTargetingRank(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  unsigned int v4; // r11d
  int v5; // eax
  int v6; // r11d
  int v7; // eax
  __int64 result; // rax

  v4 = abs32(a2 - a1) + abs32(HIDWORD(a2) - HIDWORD(a1));
  if ( (int)a1 <= *a3 || (int)a1 >= a3[2] )
  {
    v7 = abs32(a4 - a2);
    if ( v7 > 20 )
      LOWORD(v7) = 20;
    v6 = (unsigned __int16)v7 + v4;
  }
  else
  {
    v5 = abs32(HIDWORD(a2) - HIDWORD(a4));
    if ( v5 > 20 )
      LOWORD(v5) = 20;
    v6 = (unsigned __int16)v5 + v4;
  }
  result = 4093LL;
  if ( v6 < 4093 )
    return (unsigned __int16)v6;
  return result;
}
