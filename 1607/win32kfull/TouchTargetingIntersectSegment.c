/*
 * XREFs of TouchTargetingIntersectSegment @ 0x1C0247FEC
 * Callers:
 *     ?OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z @ 0x1C0220D20 (-OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z.c)
 *     _TTUpdateRankWithSegment @ 0x1C0248FF4 (_TTUpdateRankWithSegment.c)
 * Callees:
 *     _TTIntersectLine @ 0x1C0248C80 (_TTIntersectLine.c)
 */

__int64 __fastcall TouchTargetingIntersectSegment(__int64 a1, __int64 a2, int a3, _DWORD *a4, _DWORD *a5)
{
  int v6; // ebx
  unsigned int v7; // edi
  int v8; // r9d
  int v9; // r8d
  int v10; // r10d
  int v11; // edx
  int v12; // r11d
  int v13; // r8d
  int v14; // edx
  int v15; // esi
  int v16; // r8d
  int v17; // r12d
  int v18; // edx
  int v19; // r14d
  int v20; // r8d
  int v21; // edx
  int v22; // r8d
  int v23; // eax
  int v24; // ecx
  int v25; // r14d
  int v26; // ebx
  int v28; // [rsp+30h] [rbp-10h] BYREF
  int v29; // [rsp+34h] [rbp-Ch]
  int v30; // [rsp+38h] [rbp-8h] BYREF
  int v31; // [rsp+3Ch] [rbp-4h]

  v6 = 0;
  v7 = 0;
  if ( (unsigned int)TTIntersectLine(a1, a2, a3, (unsigned int)&v28, (__int64)&v30) )
  {
    v8 = v30;
    v9 = v30;
    v10 = v28;
    if ( v28 < v30 )
      v9 = v28;
    v11 = a2;
    if ( (int)a1 < (int)a2 )
      v11 = a1;
    if ( v9 <= v11 )
    {
      v12 = a2;
      if ( (int)a1 < (int)a2 )
        v12 = a1;
    }
    else
    {
      v12 = v30;
      if ( v28 < v30 )
        v12 = v28;
    }
    *a4 = v12;
    v13 = v8;
    v14 = a2;
    if ( v10 > v8 )
      v13 = v10;
    if ( (int)a1 > (int)a2 )
      v14 = a1;
    if ( v13 >= v14 )
    {
      v8 = a2;
      if ( (int)a1 > (int)a2 )
        v8 = a1;
    }
    else if ( v10 > v8 )
    {
      v8 = v10;
    }
    *a5 = v8;
    if ( v12 <= v8 )
    {
      v15 = v31;
      v16 = v31;
      v17 = v29;
      v18 = HIDWORD(a2);
      if ( v29 < v31 )
        v16 = v29;
      if ( SHIDWORD(a1) < SHIDWORD(a2) )
        v18 = HIDWORD(a1);
      if ( v16 <= v18 )
      {
        v19 = HIDWORD(a2);
        if ( SHIDWORD(a1) < SHIDWORD(a2) )
          v19 = HIDWORD(a1);
      }
      else
      {
        v19 = v31;
        if ( v29 < v31 )
          v19 = v29;
      }
      v20 = v31;
      if ( v29 > v31 )
        v20 = v29;
      a4[1] = v19;
      v21 = HIDWORD(a2);
      if ( SHIDWORD(a1) > SHIDWORD(a2) )
        v21 = HIDWORD(a1);
      if ( v20 >= v21 )
      {
        v15 = HIDWORD(a2);
        if ( SHIDWORD(a1) > SHIDWORD(a2) )
          v15 = HIDWORD(a1);
      }
      else if ( v17 > v15 )
      {
        v15 = v17;
      }
      a5[1] = v15;
      if ( v19 <= v15 )
      {
        v7 = 1;
        if ( (int)a1 - (int)a2 <= 0 )
          v22 = ((int)a1 - (int)a2 >= 0) - 1;
        else
          v22 = 1;
        if ( HIDWORD(a1) - HIDWORD(a2) <= 0 )
          v23 = (HIDWORD(a1) - HIDWORD(a2) >= 0) - 1;
        else
          v23 = 1;
        if ( v12 - v8 <= 0 )
          v24 = (v12 - v8 >= 0) - 1;
        else
          v24 = 1;
        v25 = v19 - v15;
        if ( v25 <= 0 )
        {
          LOBYTE(v6) = v25 >= 0;
          v26 = v6 - 1;
        }
        else
        {
          v26 = 1;
        }
        if ( v22 * v23 != v24 * v26 )
        {
          *a5 = v12;
          *a4 = v8;
        }
      }
    }
  }
  return v7;
}
