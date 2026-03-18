/*
 * XREFs of TouchTargetingSnapToSegment @ 0x1C024C6E0
 * Callers:
 *     TouchTargetingRankForRectDeep @ 0x1C024C428 (TouchTargetingRankForRectDeep.c)
 *     _TTUpdateRankWithSegment @ 0x1C024CD34 (_TTUpdateRankWithSegment.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchTargetingSnapToSegment(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v4; // r13d
  int v5; // r12d
  unsigned int v6; // r10d
  int v7; // esi
  int v8; // r15d
  int v9; // r14d
  __int64 v10; // rbx

  v4 = HIDWORD(a2) - HIDWORD(a1);
  v5 = a2 - a1;
  v6 = 1;
  v7 = v5 * v5 + (HIDWORD(a2) - HIDWORD(a1)) * (HIDWORD(a2) - HIDWORD(a1));
  v8 = (HIDWORD(a3) - HIDWORD(a1)) * (HIDWORD(a3) - HIDWORD(a1)) + (a3 - a1) * (a3 - a1);
  v9 = (HIDWORD(a3) - HIDWORD(a2)) * (HIDWORD(a3) - HIDWORD(a2)) + (a3 - a2) * (a3 - a2);
  if ( v9 < v8 + v7 )
  {
    if ( v8 < v9 + v7 )
    {
      v10 = v4 * ((int)a3 - (int)a1) - (__int64)(((int)a2 - (int)a1) * (HIDWORD(a3) - HIDWORD(a1)));
      *a4 = (v7 * (int)a3 - v10 * v4) / v7;
      a4[1] = (v7 * HIDWORD(a3) + v10 * v5) / v7;
      return v6;
    }
    *(_QWORD *)a4 = a2;
  }
  else
  {
    *(_QWORD *)a4 = a1;
  }
  return 0;
}
