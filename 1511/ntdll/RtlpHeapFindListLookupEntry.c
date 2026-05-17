/*
 * XREFs of RtlpHeapFindListLookupEntry @ 0x1800574EC
 * Callers:
 *     RtlpFindUCREntry @ 0x18001DD5C (RtlpFindUCREntry.c)
 *     RtlpFindAndCommitPages @ 0x18001E8B0 (RtlpFindAndCommitPages.c)
 *     RtlpFindEntry @ 0x180057470 (RtlpFindEntry.c)
 * Callees:
 *     RtlpHeapListCompare @ 0x180057700 (RtlpHeapListCompare.c)
 *     RtlpLogHeapFailure @ 0x1800A4B04 (RtlpLogHeapFailure.c)
 */

_QWORD *__fastcall RtlpHeapFindListLookupEntry(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rbx
  int v8; // r13d
  __int64 v12; // rax
  __int64 v13; // rbp
  int v14; // ecx
  __int64 v15; // r9
  _QWORD *i; // rsi
  __int64 v17; // r8
  unsigned int *v18; // r9
  unsigned int v19; // edx
  int v20; // eax
  __int64 v21; // r8
  int v23; // [rsp+38h] [rbp-30h]

  v5 = *(_QWORD **)(a2 + 32);
  v6 = (unsigned int)(a4 - *(_DWORD *)(a2 + 24));
  v7 = 0LL;
  v8 = a4;
  v12 = v5[1];
  if ( v5 == (_QWORD *)v12 )
    return v5;
  if ( a3 )
  {
    v23 = *(_DWORD *)(v12 - 16 + 8);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v23 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v12 - 16 + 8);
      if ( HIBYTE(v23) != (BYTE2(v23) ^ (unsigned __int8)(BYTE1(v23) ^ v23)) )
        RtlpLogHeapFailure(3, a1, v12 - 16, 0, 0LL, 0LL);
    }
    v13 = a5;
    v14 = a5 - (unsigned __int16)v23;
  }
  else
  {
    v13 = a5;
    v14 = a5 - *(_DWORD *)(v12 + 40);
  }
  if ( v14 > 0 )
    return v5;
  LOBYTE(a4) = a3;
  if ( (int)RtlpHeapListCompare(a1, *v5, v13, a4) <= 0 )
    return (_QWORD *)*v5;
  if ( *(_QWORD *)a2 || v8 != *(_DWORD *)(a2 + 8) - 1 )
  {
    v17 = (unsigned int)v6 >> 5;
    v18 = (unsigned int *)(*(_QWORD *)(a2 + 40) + 4 * v17);
    v19 = *v18 & ~((1 << (v6 & 0x1F)) - 1);
    if ( v19 )
      goto LABEL_26;
    do
    {
      if ( (unsigned int)v17 > ((unsigned int)(*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24)) >> 5) - 1 )
        break;
      ++v18;
      LODWORD(v17) = v17 + 1;
      v19 = *v18;
    }
    while ( !*v18 );
    if ( v19 )
    {
LABEL_26:
      if ( (_WORD)v19 )
      {
        if ( (_BYTE)v19 )
          v20 = RtlpBitsClearLow[(unsigned __int8)v19];
        else
          v20 = RtlpBitsClearLow[BYTE1(v19)] + 8;
      }
      else if ( (v19 & 0xFF0000) != 0 )
      {
        v20 = RtlpBitsClearLow[BYTE2(v19)] + 16;
      }
      else
      {
        v20 = RtlpBitsClearLow[(unsigned __int64)v19 >> 24] + 24;
      }
      v21 = (unsigned int)(v20 + 32 * v17);
      if ( *(_DWORD *)(a2 + 12) )
        v21 = (unsigned int)(2 * v21);
      return *(_QWORD **)(*(_QWORD *)(a2 + 48) + 8 * v21);
    }
  }
  else
  {
    if ( *(_DWORD *)(a2 + 12) )
      v6 = (unsigned int)(2 * v6);
    for ( i = *(_QWORD **)(*(_QWORD *)(a2 + 48) + 8 * v6); v5 != i; i = (_QWORD *)*i )
    {
      LOBYTE(v15) = a3;
      if ( (int)RtlpHeapListCompare(a1, i, v13, v15) <= 0 )
        return i;
    }
  }
  return (_QWORD *)v7;
}
