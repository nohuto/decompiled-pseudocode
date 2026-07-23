/*
 * XREFs of CmpSplitParentKeyName @ 0x140606DD8
 * Callers:
 *     CmpDoReDoCreateKey @ 0x1406118C0 (CmpDoReDoCreateKey.c)
 *     CmpDoReOpenTransKey @ 0x140611CD0 (CmpDoReOpenTransKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpSplitParentKeyName(__m128i *a1, __m128i *a2, __m128i *a3)
{
  __int64 result; // rax
  int v6; // edx
  __int16 v7; // cx
  bool v8; // zf
  __m128i v9; // [rsp+0h] [rbp-20h]
  __m128i v10; // [rsp+10h] [rbp-10h]

  if ( !a1->m128i_i16[0] )
  {
    result = 0LL;
    v10 = 0uLL;
LABEL_12:
    v9 = 0uLL;
    goto LABEL_13;
  }
  v10 = *a1;
  v6 = ((unsigned __int16)_mm_cvtsi128_si32(*a1) >> 1) - 1;
  v9 = *a1;
  if ( v6 < 0 )
    goto LABEL_11;
  do
  {
    if ( *(_WORD *)(v9.m128i_i64[1] + 2LL * v6) == 92 )
      break;
    --v6;
  }
  while ( v6 >= 0 );
  if ( v6 < 0 )
  {
LABEL_11:
    result = 0LL;
    goto LABEL_12;
  }
  v7 = 2 * v6;
  v9.m128i_i16[0] = 2 * v6;
  v9.m128i_i16[1] = 2 * v6;
  if ( !(2 * (_WORD)v6) )
    v9 = 0uLL;
  v8 = -2 - v7 + v10.m128i_i16[0] == 0;
  v10.m128i_i16[0] += -2 - v7;
  v10.m128i_i16[1] = v10.m128i_i16[0];
  result = a1->m128i_i64[1];
  v10.m128i_i64[1] = result + 2LL * (v6 + 1);
  if ( v8 )
  {
    result = 0LL;
    v10 = 0uLL;
  }
LABEL_13:
  *a2 = v9;
  *a3 = v10;
  return result;
}
