/*
 * XREFs of RtlpHeapFindListLookupEntry @ 0x18004B1E0
 * Callers:
 *     RtlpFindAndCommitPages @ 0x1800283F0 (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x18004ADF0 (RtlpInsertFreeBlock.c)
 *     RtlpFindEntry @ 0x18004BE78 (RtlpFindEntry.c)
 *     RtlpFindUCREntry @ 0x18004D120 (RtlpFindUCREntry.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 */

__int64 *__fastcall RtlpHeapFindListLookupEntry(__int64 a1, __int64 a2, char a3, int a4, __int64 a5)
{
  __int64 *v5; // rsi
  __int64 v6; // r15
  __int64 v11; // rax
  int v12; // r14d
  int v13; // ecx
  __int64 v14; // rax
  int v15; // ecx
  __int64 *v16; // rbx
  int v17; // ecx
  __int64 v19; // rax
  __int64 v20; // r8
  unsigned int v21; // edx
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // r8
  int v25; // [rsp+38h] [rbp-40h]
  int v26; // [rsp+48h] [rbp-30h]
  int v27; // [rsp+58h] [rbp-20h]

  v5 = *(__int64 **)(a2 + 32);
  v6 = (unsigned int)(a4 - *(_DWORD *)(a2 + 24));
  v11 = v5[1];
  if ( v5 == (__int64 *)v11 )
    return *(__int64 **)(a2 + 32);
  if ( a3 )
  {
    v25 = *(_DWORD *)(v11 - 8);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v25 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v11 - 8);
      if ( HIBYTE(v25) != (BYTE2(v25) ^ (unsigned __int8)(BYTE1(v25) ^ v25)) )
        RtlpLogHeapFailure(3, a1, v11 - 16, 0, 0LL, 0LL);
    }
    v12 = a5;
    v13 = a5 - (unsigned __int16)v25;
  }
  else
  {
    v12 = a5;
    v13 = a5 - *(_DWORD *)(v11 + 40);
  }
  if ( v13 > 0 )
    return v5;
  v14 = *v5;
  if ( a3 )
  {
    v26 = *(_DWORD *)(v14 - 8);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v26 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v14 - 8);
      if ( HIBYTE(v26) != (BYTE2(v26) ^ (unsigned __int8)(BYTE1(v26) ^ v26)) )
        RtlpLogHeapFailure(3, a1, v14 - 16, 0, 0LL, 0LL);
    }
    v15 = v12 - (unsigned __int16)v26;
  }
  else
  {
    v15 = v12 - *(_DWORD *)(v14 + 40);
  }
  if ( v15 <= 0 )
    return (__int64 *)*v5;
  if ( *(_QWORD *)a2 || a4 != *(_DWORD *)(a2 + 8) - 1 )
  {
    v19 = *(_QWORD *)(a2 + 40);
    v20 = (unsigned int)v6 >> 5;
    v21 = *(_DWORD *)(v19 + 4 * v20) & ~((1 << (v6 & 0x1F)) - 1);
    v22 = v19 + 4 * v20;
    if ( v21 )
    {
LABEL_32:
      if ( (_WORD)v21 )
      {
        if ( (_BYTE)v21 )
          v23 = RtlpBitsClearLow[(unsigned __int8)v21];
        else
          v23 = RtlpBitsClearLow[BYTE1(v21)] + 8;
      }
      else if ( (v21 & 0xFF0000) != 0 )
      {
        v23 = RtlpBitsClearLow[BYTE2(v21)] + 16;
      }
      else
      {
        v23 = RtlpBitsClearLow[(unsigned __int64)v21 >> 24] + 24;
      }
      v24 = (unsigned int)(v23 + 32 * v20);
      if ( *(_DWORD *)(a2 + 12) )
        v24 = (unsigned int)(2 * v24);
      return *(__int64 **)(*(_QWORD *)(a2 + 48) + 8 * v24);
    }
    while ( (unsigned int)v20 <= ((unsigned int)(*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24)) >> 5) - 1 )
    {
      v21 = *(_DWORD *)(v22 + 4);
      v22 += 4LL;
      LODWORD(v20) = v20 + 1;
      if ( v21 )
        goto LABEL_32;
    }
    return 0LL;
  }
  if ( *(_DWORD *)(a2 + 12) )
    v6 = (unsigned int)(2 * v6);
  v16 = *(__int64 **)(*(_QWORD *)(a2 + 48) + 8 * v6);
  if ( v5 == v16 )
    return 0LL;
  while ( 1 )
  {
    if ( a3 )
    {
      v27 = *((_DWORD *)v16 - 2);
      if ( *(_DWORD *)(a1 + 124) )
      {
        v27 = *(_DWORD *)(a1 + 136) ^ *((_DWORD *)v16 - 2);
        if ( HIBYTE(v27) != ((unsigned __int8)v27 ^ (unsigned __int8)(BYTE1(v27) ^ BYTE2(v27))) )
          RtlpLogHeapFailure(3, a1, (_DWORD)v16 - 16, 0, 0LL, 0LL);
      }
      v17 = v12 - (unsigned __int16)v27;
    }
    else
    {
      v17 = v12 - *((_DWORD *)v16 + 10);
    }
    if ( v17 <= 0 )
      break;
    v16 = (__int64 *)*v16;
    if ( v5 == v16 )
      return 0LL;
  }
  return v16;
}
