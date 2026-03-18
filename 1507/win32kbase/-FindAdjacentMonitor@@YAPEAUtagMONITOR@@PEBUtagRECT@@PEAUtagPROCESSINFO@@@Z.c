/*
 * XREFs of ?FindAdjacentMonitor@@YAPEAUtagMONITOR@@PEBUtagRECT@@PEAUtagPROCESSINFO@@@Z @ 0x1C0069A50
 * Callers:
 *     ?TransformOffscreenAdjacentRect@@YAHPEAUtagRECT@@00PEAUtagPROCESSINFO@@1@Z @ 0x1C0069970 (-TransformOffscreenAdjacentRect@@YAHPEAUtagRECT@@00PEAUtagPROCESSINFO@@1@Z.c)
 * Callees:
 *     ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@PEAUtagPROCESSINFO@@@Z @ 0x1C0055E68 (-ExpandedMonitorRect@@YA-AUtagRECT@@PEAUtagMONITOR@@PEAUtagPROCESSINFO@@@Z.c)
 */

struct tagMONITOR *__fastcall FindAdjacentMonitor(const struct tagRECT *a1, struct tagPROCESSINFO *a2)
{
  __int64 v2; // rsi
  int v3; // r14d
  __int64 v6; // rbx
  LONG left; // r15d
  LONG top; // ebp
  __m128i *v9; // rax
  int v10; // ecx
  __int64 v11; // rdx
  unsigned __int64 v12; // xmm0_8
  LONG v13; // r8d
  LONG right; // ecx
  LONG bottom; // r10d
  unsigned __int64 v17; // rax
  LONG v18; // ecx
  __m128i v19; // [rsp+20h] [rbp-38h]
  struct tagRECT v20; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0LL;
  v3 = 0;
  v6 = *(_QWORD *)(gpDispInfo + 96);
  if ( v6 )
  {
    left = a1->left;
    top = a1->top;
    do
    {
      v9 = (__m128i *)ExpandedMonitorRect(&v20, (struct tagMONITOR *)v6, a2);
      v10 = 0;
      v19 = *v9;
      v11 = v9->m128i_i64[0];
      v12 = _mm_srli_si128(*v9, 8).m128i_u64[0];
      if ( left < (int)v12
        && (v13 = a1->right, v13 > v19.m128i_i32[0])
        && (top == HIDWORD(v12) || a1->bottom == v19.m128i_i32[1]) )
      {
        right = v12;
        if ( v13 < (int)v12 )
          right = a1->right;
        if ( left > v19.m128i_i32[0] )
          LODWORD(v11) = left;
        v10 = right - v11;
      }
      else if ( top < SHIDWORD(v12) )
      {
        bottom = a1->bottom;
        v17 = HIDWORD(v19.m128i_i64[0]);
        if ( bottom > v19.m128i_i32[1] && (left == (_DWORD)v12 || a1->right == v19.m128i_i32[0]) )
        {
          v18 = HIDWORD(v12);
          if ( bottom < SHIDWORD(v12) )
            v18 = a1->bottom;
          if ( top > v19.m128i_i32[1] )
            LODWORD(v17) = top;
          v10 = v18 - v17;
        }
      }
      if ( v10 > v3 )
      {
        v2 = v6;
        v3 = v10;
      }
      v6 = *(_QWORD *)(v6 + 16);
    }
    while ( v6 );
  }
  return (struct tagMONITOR *)v2;
}
