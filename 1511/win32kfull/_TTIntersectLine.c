/*
 * XREFs of _TTIntersectLine @ 0x1C024C950
 * Callers:
 *     TouchTargetingIntersectSegment @ 0x1C024BCBC (TouchTargetingIntersectSegment.c)
 *     TouchTargetingRankForRectDeep @ 0x1C024C3B8 (TouchTargetingRankForRectDeep.c)
 * Callees:
 *     _TTAddLineAndSegmentIntersection @ 0x1C024C77C (_TTAddLineAndSegmentIntersection.c)
 */

__int64 __fastcall TTIntersectLine(__int64 a1, unsigned __int64 a2, _DWORD *a3, _QWORD *a4, _QWORD *a5)
{
  int v7; // r8d
  unsigned __int64 v8; // r10
  int v9; // eax
  int v10; // eax
  unsigned __int64 v11; // rdx
  int v12; // eax
  int v13; // r9d
  int v14; // edi
  int *v15; // rsi
  bool v16; // zf
  __int64 result; // rax
  int v18; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v19[6]; // [rsp+48h] [rbp-30h] BYREF
  int v20; // [rsp+80h] [rbp+8h]
  int v21; // [rsp+88h] [rbp+10h]

  v21 = a2;
  v20 = a1;
  v7 = 0;
  v8 = a2;
  v18 = 0;
  if ( a1 == a2 )
    return 0LL;
  v9 = a2;
  if ( (int)a1 > (int)a2 )
    v9 = a1;
  if ( v9 < *a3 )
    return 0LL;
  v10 = a2;
  if ( (int)a1 < (int)a2 )
    v10 = a1;
  if ( v10 > a3[2] )
    return 0LL;
  v11 = HIDWORD(a2);
  v12 = HIDWORD(v8);
  if ( SHIDWORD(a1) > SHIDWORD(v8) )
    v12 = HIDWORD(a1);
  if ( v12 < a3[1] )
    return 0LL;
  if ( SHIDWORD(a1) < (int)v11 )
    LODWORD(v11) = HIDWORD(a1);
  if ( (int)v11 > a3[3] )
    return 0LL;
  v13 = a3[11];
  if ( v13 <= 0 )
    return 0LL;
  v14 = 1;
  v15 = a3 + 12;
  while ( 1 )
  {
    v16 = v7 == 2;
    if ( v7 >= 2 )
      break;
    TTAddLineAndSegmentIntersection(
      a1,
      v8,
      *v15,
      (unsigned int)v15[1],
      a3[2 * (v14 % v13) + 12],
      a3[2 * (v14 % v13) + 13],
      v19,
      &v18);
    v13 = a3[11];
    ++v14;
    v7 = v18;
    v15 += 2;
    if ( v14 - 1 >= v13 )
    {
      v16 = v18 == 2;
      break;
    }
    LODWORD(v8) = v21;
    LODWORD(a1) = v20;
  }
  if ( !v16 )
    return 0LL;
  result = 1LL;
  *a4 = v19[0];
  *a5 = v19[1];
  return result;
}
