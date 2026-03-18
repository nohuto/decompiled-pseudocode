/*
 * XREFs of TouchTargetingSnapToSegment @ 0x140303230
 * Callers:
 *     TouchTargetingRankForRectDeep @ 0x14026E0C4 (TouchTargetingRankForRectDeep.c)
 *     ?_TTUpdateRankWithSegment@@YAXJJJJ_NPEAUtagPOINT@@PEAGUtagRECT@@3PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x140302C20 (-_TTUpdateRankWithSegment@@YAXJJJJ_NPEAUtagPOINT@@PEAGUtagRECT@@3PEBUtagTOUCHTARGETINGCONTACT@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchTargetingSnapToSegment(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v5; // r15d
  int v6; // r14d
  int v7; // edi
  int v8; // esi
  int v9; // ebp
  int v10; // r10d
  unsigned int v11; // r11d
  int v12; // r9d
  __int64 v13; // r9

  v5 = HIDWORD(a2) - HIDWORD(a1);
  v6 = a2 - a1;
  v7 = a3 - a1;
  v8 = HIDWORD(a3) - HIDWORD(a1);
  v9 = v6 * v6 + v5 * v5;
  v10 = v7 * v7 + v8 * v8;
  v11 = 1;
  v12 = (HIDWORD(a3) - HIDWORD(a2)) * (HIDWORD(a3) - HIDWORD(a2)) + (a3 - a2) * (a3 - a2);
  if ( v12 < v10 + v9 )
  {
    if ( v10 < v12 + v9 )
    {
      v13 = v5 * v7 - (__int64)(v6 * v8);
      *a4 = (v9 * (__int64)(int)a3 - v13 * v5) / v9;
      a4[1] = (v13 * v6 + v9 * (__int64)SHIDWORD(a3)) / v9;
      return v11;
    }
    *(_QWORD *)a4 = a2;
  }
  else
  {
    *(_QWORD *)a4 = a1;
  }
  return 0;
}
