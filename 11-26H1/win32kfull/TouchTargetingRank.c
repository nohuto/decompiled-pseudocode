/*
 * XREFs of TouchTargetingRank @ 0x14026A040
 * Callers:
 *     TouchTargetingRankForRectDeep @ 0x14026E0C4 (TouchTargetingRankForRectDeep.c)
 *     ?_TTUpdateRankWithSegment@@YAXJJJJ_NPEAUtagPOINT@@PEAGUtagRECT@@3PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x140302C20 (-_TTUpdateRankWithSegment@@YAXJJJJ_NPEAUtagPOINT@@PEAGUtagRECT@@3PEBUtagTOUCHTARGETINGCONTACT@@@.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall TouchTargetingRank(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  int v4; // ebx
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // r9d
  int v9; // ecx
  __int16 result; // ax
  int v11; // ecx

  v4 = HIDWORD(a1) - HIDWORD(a2);
  if ( HIDWORD(a1) - HIDWORD(a2) < 0 )
    v4 = HIDWORD(a2) - HIDWORD(a1);
  v5 = a1 - a2;
  if ( (int)a2 - (int)a1 > 0 )
    v5 = a2 - a1;
  v6 = v5 + v4;
  if ( (int)a1 <= *a3 || (int)a1 >= a3[2] )
  {
    v8 = a4 - a2;
    v7 = -v8;
    if ( v8 > 0 )
      v7 = v8;
  }
  else
  {
    v7 = HIDWORD(a4) - HIDWORD(a2);
    if ( HIDWORD(a2) - HIDWORD(a4) > 0 )
      v7 = HIDWORD(a2) - HIDWORD(a4);
  }
  if ( v7 > 20 )
    LOWORD(v7) = 20;
  v9 = (unsigned __int16)v7;
  result = 4093;
  v11 = v6 + v9;
  if ( v11 < 4093 )
    return v11;
  return result;
}
