/*
 * XREFs of CmpFindPathByNameEx @ 0x1401DFBAC
 * Callers:
 *     CmpVEExecuteParseLogic @ 0x1404071F8 (CmpVEExecuteParseLogic.c)
 *     CmpVirtualBranchIsReplicated @ 0x140407698 (CmpVirtualBranchIsReplicated.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 *     CmpFindPathByName @ 0x14055628C (CmpFindPathByName.c)
 *     CmpVirtualPathPresent @ 0x1406591BC (CmpVirtualPathPresent.c)
 * Callees:
 *     CmpFindSubKeyByName @ 0x140590DF0 (CmpFindSubKeyByName.c)
 */

char __fastcall CmpFindPathByNameEx(__int64 a1, __m128i *a2, __int64 a3, int a4, unsigned int *a5, __int64 *a6)
{
  unsigned int *v6; // r13
  __int64 *v8; // r8
  unsigned __int16 v9; // si
  unsigned __int16 v10; // bx
  char result; // al
  _WORD *v12; // rdi
  __int64 v13; // r14
  unsigned int SubKeyByName; // r15d
  bool v15; // zf
  __int64 v16; // rdx
  unsigned int v17; // r15d
  __int64 v18; // rax
  __int64 *v19; // rax
  unsigned __int64 v20; // rax
  __m128i v21; // [rsp+20h] [rbp-20h]
  unsigned __int16 v22; // [rsp+30h] [rbp-10h] BYREF
  _WORD *v23; // [rsp+38h] [rbp-8h]
  int v24; // [rsp+88h] [rbp+48h] BYREF
  int v25; // [rsp+98h] [rbp+58h]

  v25 = a4;
  v6 = a5;
  v24 = -1;
  v8 = a6;
  v9 = 0;
  *a5 = -1;
  *v8 = 0LL;
  if ( a3 )
  {
    *(_WORD *)a3 = 0;
    *(_QWORD *)(a3 + 8) = 0LL;
  }
  v10 = _mm_cvtsi128_si32(*a2);
  v21 = *a2;
  v21.m128i_i16[0] = v10;
  if ( v10 )
  {
    v12 = (_WORD *)v21.m128i_i64[1];
    if ( a1 )
    {
      v13 = *(_QWORD *)(a1 + 32);
      SubKeyByName = *(_DWORD *)(a1 + 40);
      *v8 = v13;
      *v6 = SubKeyByName;
    }
    else
    {
      v13 = CmpMasterHive;
      SubKeyByName = *(_DWORD *)(*(_QWORD *)(CmpMasterHive + 64) + 36LL);
      do
      {
        if ( *v12 != 92 )
          break;
        ++v12;
        v15 = v10 == 2;
        v10 -= 2;
        v21.m128i_i16[0] = v10;
      }
      while ( !v15 );
      v21.m128i_i64[1] = (__int64)v12;
      if ( !v10 )
        goto LABEL_22;
      do
      {
        if ( *v12 == 92 )
          break;
        ++v12;
        v15 = v10 == 2;
        v10 -= 2;
        v21.m128i_i16[0] = v10;
      }
      while ( !v15 );
      v21.m128i_i64[1] = (__int64)v12;
    }
    do
    {
      if ( v10 )
      {
        do
        {
          if ( *v12 != 92 )
            break;
          ++v12;
          v15 = v10 == 2;
          v10 -= 2;
          v21.m128i_i16[0] = v10;
        }
        while ( !v15 );
        v21.m128i_i64[1] = (__int64)v12;
      }
LABEL_22:
      if ( a3 )
        *(__m128i *)a3 = v21;
      if ( !v10 )
        break;
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *, __int64))(v13 + 8))(v13, SubKeyByName, &v24, 65534LL);
      if ( !v16 )
        return 0;
      v23 = v12;
      v22 = 0;
      do
      {
        if ( v12[(unsigned __int64)v9 >> 1] == 92 )
          break;
        v9 += 2;
      }
      while ( v9 < v10 );
      v22 = v9;
      if ( (*(_BYTE *)(v16 + 2) & 2) != 0 )
      {
        v17 = *(_DWORD *)(v16 + 28);
        v18 = v13;
        v13 = *(_QWORD *)(v16 + 36);
        (*(void (__fastcall **)(__int64, int *, __int64))(v18 + 16))(v18, &v24, 2LL);
        if ( v13 != CmpMasterHive && v25 && (*(_DWORD *)(v13 + 5360) & v25) == 0 )
          return 0;
        v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v13 + 8))(v13, v17, &v24);
        result = 0;
        if ( !v16 )
          return result;
      }
      SubKeyByName = CmpFindSubKeyByName(v13, v16, &v22);
      (*(void (__fastcall **)(__int64, int *))(v13 + 16))(v13, &v24);
      if ( SubKeyByName == -1 )
        return 0;
      v19 = a6;
      v10 -= v9;
      *v6 = SubKeyByName;
      v21.m128i_i16[0] = v10;
      *v19 = v13;
      v20 = v9;
      v9 = 0;
      v12 += v20 >> 1;
      v21.m128i_i64[1] = (__int64)v12;
    }
    while ( v10 );
  }
  else
  {
    if ( !a1 )
      return 0;
    *v8 = *(_QWORD *)(a1 + 32);
    *v6 = *(_DWORD *)(a1 + 40);
  }
  return 1;
}
