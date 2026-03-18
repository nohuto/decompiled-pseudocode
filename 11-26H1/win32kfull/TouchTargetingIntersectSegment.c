/*
 * XREFs of TouchTargetingIntersectSegment @ 0x140302F40
 * Callers:
 *     ?OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z @ 0x1402C2768 (-OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z.c)
 *     ?_TTUpdateRankWithSegment@@YAXJJJJ_NPEAUtagPOINT@@PEAGUtagRECT@@3PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x140302C20 (-_TTUpdateRankWithSegment@@YAXJJJJ_NPEAUtagPOINT@@PEAGUtagRECT@@3PEBUtagTOUCHTARGETINGCONTACT@@@.c)
 * Callees:
 *     ?_TTIntersectLine@@YAHUtagPOINT@@0PEBUtagTOUCHTARGETINGCONTACT@@PEAU1@2@Z @ 0x140302A88 (-_TTIntersectLine@@YAHUtagPOINT@@0PEBUtagTOUCHTARGETINGCONTACT@@PEAU1@2@Z.c)
 */

__int64 __fastcall TouchTargetingIntersectSegment(
        struct tagPOINT a1,
        struct tagPOINT a2,
        const struct tagTOUCHTARGETINGCONTACT *a3,
        LONG *a4,
        LONG *a5)
{
  int v6; // esi
  unsigned int v7; // ebp
  LONG x; // edi
  LONG v9; // ebx
  LONG v10; // edx
  LONG v11; // eax
  LONG v12; // r8d
  LONG v13; // ecx
  LONG v14; // r10d
  LONG v15; // ecx
  LONG v16; // eax
  LONG v17; // r9d
  LONG v18; // ecx
  LONG v19; // r15d
  LONG v20; // eax
  LONG v21; // r11d
  LONG v22; // ecx
  LONG v23; // eax
  int v24; // ebx
  int v25; // edi
  int v26; // eax
  int v27; // ecx
  int v28; // r11d
  int v29; // esi
  struct tagPOINT v31; // [rsp+30h] [rbp-48h] BYREF
  struct tagPOINT v32; // [rsp+38h] [rbp-40h] BYREF
  LONG v33; // [rsp+84h] [rbp+Ch]
  LONG y; // [rsp+8Ch] [rbp+14h]

  y = a2.y;
  v33 = a1.y;
  v6 = 0;
  v7 = 0;
  x = a2.x;
  v9 = a1.x;
  if ( (unsigned int)_TTIntersectLine(a1, a2, a3, &v31, &v32) )
  {
    v10 = v32.x;
    v11 = x;
    v12 = v31.x;
    v13 = v32.x;
    if ( v31.x < v32.x )
      v13 = v31.x;
    if ( v9 < x )
      v11 = v9;
    if ( v13 <= v11 )
    {
      v14 = x;
      if ( v9 < x )
        v14 = v9;
    }
    else
    {
      v14 = v32.x;
      if ( v31.x < v32.x )
        v14 = v31.x;
    }
    *a4 = v14;
    v15 = v10;
    v16 = x;
    if ( v12 > v10 )
      v15 = v12;
    if ( v9 > x )
      v16 = v9;
    if ( v15 >= v16 )
    {
      v10 = x;
      if ( v9 > x )
        v10 = v9;
    }
    else if ( v12 > v10 )
    {
      v10 = v12;
    }
    *a5 = v10;
    if ( v14 <= v10 )
    {
      v17 = v32.y;
      v18 = v32.y;
      v19 = v31.y;
      v20 = y;
      if ( v31.y < v32.y )
        v18 = v31.y;
      if ( v33 < y )
        v20 = v33;
      if ( v18 <= v20 )
      {
        v21 = y;
        if ( v33 < y )
          v21 = v33;
      }
      else
      {
        v21 = v32.y;
        if ( v31.y < v32.y )
          v21 = v31.y;
      }
      a4[1] = v21;
      v22 = v17;
      v23 = y;
      if ( v19 > v17 )
        v22 = v19;
      if ( v33 > y )
        v23 = v33;
      if ( v22 >= v23 )
      {
        v17 = y;
        if ( v33 > y )
          v17 = v33;
      }
      else if ( v19 > v17 )
      {
        v17 = v19;
      }
      a5[1] = v17;
      if ( v21 <= v17 )
      {
        v24 = v9 - x;
        v7 = 1;
        if ( v24 <= 0 )
          v25 = (v24 >= 0) - 1;
        else
          v25 = 1;
        if ( v33 - y <= 0 )
          v26 = (v33 - y >= 0) - 1;
        else
          v26 = 1;
        if ( v14 - v10 <= 0 )
          v27 = (v14 - v10 >= 0) - 1;
        else
          v27 = 1;
        v28 = v21 - v17;
        if ( v28 <= 0 )
        {
          LOBYTE(v6) = v28 >= 0;
          v29 = v6 - 1;
        }
        else
        {
          v29 = 1;
        }
        if ( v25 * v26 != v27 * v29 )
        {
          *a4 = v10;
          *a5 = v14;
        }
      }
    }
  }
  return v7;
}
