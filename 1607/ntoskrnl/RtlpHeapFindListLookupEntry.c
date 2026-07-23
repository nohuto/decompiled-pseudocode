/*
 * XREFs of RtlpHeapFindListLookupEntry @ 0x140094344
 * Callers:
 *     RtlpFindEntry @ 0x1400942D0 (RtlpFindEntry.c)
 *     RtlpFindUCREntry @ 0x140094870 (RtlpFindUCREntry.c)
 * Callees:
 *     RtlpHeapListCompare @ 0x140094520 (RtlpHeapListCompare.c)
 */

_QWORD *__fastcall RtlpHeapFindListLookupEntry(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // rdi
  __int64 v6; // r14
  __int64 v8; // rbx
  int v9; // r13d
  _QWORD *v12; // rdx
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v15; // r8
  unsigned int *v16; // r9
  unsigned int v17; // edx
  int v18; // eax
  __int64 v19; // r8
  _QWORD *i; // rsi

  v5 = *(_QWORD **)(a2 + 32);
  v6 = (unsigned int)(a4 - *(_DWORD *)(a2 + 24));
  v8 = 0LL;
  v9 = a4;
  v12 = (_QWORD *)v5[1];
  if ( v5 == v12 )
    return v5;
  LOBYTE(a4) = a3;
  if ( (int)RtlpHeapListCompare(a1, v12, a5, a4) > 0 )
    return v5;
  LOBYTE(v13) = a3;
  if ( (int)RtlpHeapListCompare(a1, *v5, a5, v13) <= 0 )
    return (_QWORD *)*v5;
  if ( !*(_QWORD *)a2 && v9 == *(_DWORD *)(a2 + 8) - 1 )
  {
    if ( *(_DWORD *)(a2 + 12) )
      v6 = (unsigned int)(2 * v6);
    for ( i = *(_QWORD **)(*(_QWORD *)(a2 + 48) + 8 * v6); v5 != i; i = (_QWORD *)*i )
    {
      LOBYTE(v14) = a3;
      if ( (int)RtlpHeapListCompare(a1, i, a5, v14) <= 0 )
        return i;
    }
  }
  else
  {
    v15 = (unsigned int)v6 >> 5;
    v16 = (unsigned int *)(*(_QWORD *)(a2 + 40) + 4 * v15);
    v17 = *v16 & ~((1 << (v6 & 0x1F)) - 1);
    if ( v17 )
      goto LABEL_7;
    do
    {
      if ( (unsigned int)v15 > ((unsigned int)(*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24)) >> 5) - 1 )
        break;
      ++v16;
      LODWORD(v15) = v15 + 1;
      v17 = *v16;
    }
    while ( !*v16 );
    if ( v17 )
    {
LABEL_7:
      if ( (_WORD)v17 )
      {
        if ( (_BYTE)v17 )
          v18 = RtlpBitsClearLow[(unsigned __int8)v17];
        else
          v18 = RtlpBitsClearLow[BYTE1(v17)] + 8;
      }
      else if ( (v17 & 0xFF0000) != 0 )
      {
        v18 = RtlpBitsClearLow[BYTE2(v17)] + 16;
      }
      else
      {
        v18 = RtlpBitsClearLow[(unsigned __int64)v17 >> 24] + 24;
      }
      v19 = (unsigned int)(v18 + 32 * v15);
      if ( *(_DWORD *)(a2 + 12) )
        v19 = (unsigned int)(2 * v19);
      return *(_QWORD **)(*(_QWORD *)(a2 + 48) + 8 * v19);
    }
  }
  return (_QWORD *)v8;
}
