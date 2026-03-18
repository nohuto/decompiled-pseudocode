/*
 * XREFs of CmpFindPathByName @ 0x1403BC560
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x1403BC1C8 (CmpVirtualBranchIsReplicated.c)
 *     CmpVEExecuteParseLogic @ 0x1403BC378 (CmpVEExecuteParseLogic.c)
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     CmpVirtualPathPresent @ 0x1405E2D38 (CmpVirtualPathPresent.c)
 * Callees:
 *     CmpFindSubKeyByNameWithStatus @ 0x1403FE290 (CmpFindSubKeyByNameWithStatus.c)
 */

char __fastcall CmpFindPathByName(__int64 a1, __m128i *a2, __int64 a3, unsigned int *a4, ULONG_PTR *a5)
{
  ULONG_PTR *v5; // rbx
  unsigned __int16 v6; // r14
  unsigned __int16 v9; // di
  _WORD *v10; // rsi
  ULONG_PTR v11; // r15
  __int64 v12; // rdx
  bool v13; // zf
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  char result; // al
  unsigned int v17; // ebx
  ULONG_PTR v18; // rax
  __m128i v19; // [rsp+20h] [rbp-20h]
  unsigned __int16 v20; // [rsp+30h] [rbp-10h] BYREF
  _WORD *v21; // [rsp+38h] [rbp-8h]
  int v22; // [rsp+88h] [rbp+48h] BYREF
  unsigned int v23; // [rsp+90h] [rbp+50h] BYREF

  v5 = a5;
  v6 = 0;
  v22 = -1;
  *a4 = -1;
  *v5 = 0LL;
  if ( a3 )
  {
    *(_WORD *)a3 = 0;
    *(_QWORD *)(a3 + 8) = 0LL;
  }
  v9 = _mm_cvtsi128_si32(*a2);
  v19 = *a2;
  v19.m128i_i16[0] = v9;
  if ( v9 )
  {
    v10 = (_WORD *)v19.m128i_i64[1];
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 32);
      v12 = *(unsigned int *)(a1 + 40);
      *v5 = v11;
      *a4 = v12;
    }
    else
    {
      v11 = CmpMasterHive;
      v12 = *(unsigned int *)(*(_QWORD *)(CmpMasterHive + 64) + 36LL);
      do
      {
        if ( *v10 != 92 )
          break;
        ++v10;
        v13 = v9 == 2;
        v9 -= 2;
        v19.m128i_i16[0] = v9;
      }
      while ( !v13 );
      v19.m128i_i64[1] = (__int64)v10;
      if ( !v9 )
        goto LABEL_21;
      do
      {
        if ( *v10 == 92 )
          break;
        ++v10;
        v13 = v9 == 2;
        v9 -= 2;
        v19.m128i_i16[0] = v9;
      }
      while ( !v13 );
      v19.m128i_i64[1] = (__int64)v10;
    }
    do
    {
      if ( v9 )
      {
        do
        {
          if ( *v10 != 92 )
            break;
          ++v10;
          v13 = v9 == 2;
          v9 -= 2;
          v19.m128i_i16[0] = v9;
        }
        while ( !v13 );
        v19.m128i_i64[1] = (__int64)v10;
      }
LABEL_21:
      if ( a3 )
        *(__m128i *)a3 = v19;
      if ( !v9 )
        break;
      v15 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *, __int64))(v11 + 8))(v11, v12, &v22, 65534LL);
      if ( !v15 )
        return 0;
      v21 = v10;
      v20 = 0;
      do
      {
        if ( v10[(unsigned __int64)v6 >> 1] == 92 )
          break;
        v6 += 2;
      }
      while ( v6 < v9 );
      v20 = v6;
      if ( (*(_BYTE *)(v15 + 2) & 2) != 0 )
      {
        v17 = *(_DWORD *)(v15 + 28);
        v18 = v11;
        v11 = *(_QWORD *)(v15 + 36);
        (*(void (__fastcall **)(ULONG_PTR, int *, __int64))(v18 + 16))(v18, &v22, 2LL);
        v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v11 + 8))(v11, v17, &v22);
        result = 0;
        if ( !v15 )
          return result;
        v5 = a5;
      }
      CmpFindSubKeyByNameWithStatus(v11, v15, &v20, &v23);
      (*(void (__fastcall **)(ULONG_PTR, int *))(v11 + 16))(v11, &v22);
      v12 = v23;
      if ( v23 == -1 )
        return 0;
      v9 -= v6;
      v14 = (unsigned __int64)v6 >> 1;
      v6 = 0;
      *a4 = v23;
      *v5 = v11;
      v19.m128i_i16[0] = v9;
      v10 += v14;
      v19.m128i_i64[1] = (__int64)v10;
    }
    while ( v9 );
    return 1;
  }
  if ( a1 )
  {
    *v5 = *(_QWORD *)(a1 + 32);
    *a4 = *(_DWORD *)(a1 + 40);
    return 1;
  }
  return 0;
}
