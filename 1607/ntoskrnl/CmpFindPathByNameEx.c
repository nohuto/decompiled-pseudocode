/*
 * XREFs of CmpFindPathByNameEx @ 0x1406010C8
 * Callers:
 *     CmpVEExecuteRealStoreParseLogic @ 0x1403E1228 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVirtualBranchIsReplicated @ 0x1403E14A8 (CmpVirtualBranchIsReplicated.c)
 *     CmpVEExecuteOpenLogic @ 0x14043F180 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140601B14 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpVirtualPathPresent @ 0x140601DC0 (CmpVirtualPathPresent.c)
 * Callees:
 *     CmpFindSubKeyByNameWithStatus @ 0x1404F54C0 (CmpFindSubKeyByNameWithStatus.c)
 */

char __fastcall CmpFindPathByNameEx(__int64 a1, __m128i *a2, __int64 a3, int a4, _DWORD *a5, __int64 *a6)
{
  _DWORD *v6; // r13
  unsigned __int16 v7; // si
  __int64 *v8; // r12
  char result; // al
  unsigned __int16 v11; // bx
  _WORD *v12; // rdi
  __int64 v13; // r14
  __int64 v14; // rdx
  bool v15; // zf
  __int64 v16; // rdx
  unsigned int v17; // r12d
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __m128i v20; // [rsp+20h] [rbp-20h]
  __m128i v21; // [rsp+30h] [rbp-10h] BYREF
  int v22; // [rsp+88h] [rbp+48h] BYREF
  int v23; // [rsp+8Ch] [rbp+4Ch]
  int v24; // [rsp+98h] [rbp+58h]

  v24 = a4;
  v6 = a5;
  v7 = 0;
  v8 = a6;
  v23 = 0;
  result = 0;
  v22 = -1;
  *a5 = -1;
  *v8 = 0LL;
  if ( a3 )
  {
    *(_WORD *)a3 = 0;
    *(_QWORD *)(a3 + 8) = 0LL;
  }
  v11 = _mm_cvtsi128_si32(*a2);
  v20 = *a2;
  v20.m128i_i16[0] = v11;
  if ( v11 )
  {
    v12 = (_WORD *)v20.m128i_i64[1];
    if ( a1 )
    {
      v13 = *(_QWORD *)(a1 + 24);
      v14 = *(unsigned int *)(a1 + 32);
      *v8 = v13;
      *v6 = v14;
    }
    else
    {
      v13 = CmpMasterHive;
      v14 = *(unsigned int *)(*(_QWORD *)(CmpMasterHive + 64) + 36LL);
      do
      {
        if ( *v12 != 92 )
          break;
        ++v12;
        v15 = v11 == 2;
        v11 -= 2;
        v20.m128i_i16[0] = v11;
      }
      while ( !v15 );
      v20.m128i_i64[1] = (__int64)v12;
      if ( !v11 )
        goto LABEL_21;
      do
      {
        if ( *v12 == 92 )
          break;
        ++v12;
        v15 = v11 == 2;
        v11 -= 2;
        v20.m128i_i16[0] = v11;
      }
      while ( !v15 );
      v20.m128i_i64[1] = (__int64)v12;
    }
    do
    {
      if ( v11 )
      {
        do
        {
          if ( *v12 != 92 )
            break;
          ++v12;
          v15 = v11 == 2;
          v11 -= 2;
          v20.m128i_i16[0] = v11;
        }
        while ( !v15 );
        v20.m128i_i64[1] = (__int64)v12;
      }
LABEL_21:
      if ( a3 )
        *(__m128i *)a3 = v20;
      if ( !v11 )
        break;
      v16 = (*(__int64 (__fastcall **)(__int64, __int64, int *, __int64))(v13 + 8))(v13, v14, &v22, 65534LL);
      if ( !v16 )
        return 0;
      v21.m128i_i64[1] = (__int64)v12;
      v21.m128i_i16[0] = 0;
      do
      {
        if ( v12[(unsigned __int64)v7 >> 1] == 92 )
          break;
        v7 += 2;
      }
      while ( v7 < v11 );
      v21.m128i_i16[0] = v7;
      if ( (*(_BYTE *)(v16 + 2) & 2) != 0 )
      {
        v17 = *(_DWORD *)(v16 + 28);
        v18 = v13;
        v13 = *(_QWORD *)(v16 + 36);
        (*(void (__fastcall **)(__int64, int *, __int64))(v18 + 16))(v18, &v22, 2LL);
        if ( v13 != CmpMasterHive && v24 && (*(_DWORD *)(v13 + 5360) & v24) == 0 )
          return 0;
        v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v13 + 8))(v13, v17, &v22);
        result = 0;
        if ( !v16 )
          return result;
        v8 = a6;
      }
      CmpFindSubKeyByNameWithStatus(v13, v16, &v21, (unsigned int *)&a5);
      (*(void (__fastcall **)(__int64, int *))(v13 + 16))(v13, &v22);
      v14 = (unsigned int)a5;
      if ( (_DWORD)a5 == -1 )
        return 0;
      v11 -= v7;
      v19 = (unsigned __int64)v7 >> 1;
      v7 = 0;
      *v6 = (_DWORD)a5;
      *v8 = v13;
      v20.m128i_i16[0] = v11;
      v12 += v19;
      v20.m128i_i64[1] = (__int64)v12;
    }
    while ( v11 );
  }
  else
  {
    if ( !a1 )
      return result;
    *v8 = *(_QWORD *)(a1 + 24);
    *v6 = *(_DWORD *)(a1 + 32);
  }
  return 1;
}
