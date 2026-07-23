/*
 * XREFs of RtlpHpTagContextAllocateTag @ 0x180050BF4
 * Callers:
 *     RtlpHpAllocWithExceptionProtection @ 0x1800227B0 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlpHpTagContextGetTag @ 0x1800F7674 (RtlpHpTagContextGetTag.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpMetadataFree @ 0x18004F70C (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x180050754 (RtlpHpMetadataAlloc.c)
 *     RtlpHpTagContextFindMapping @ 0x180050DCC (RtlpHpTagContextFindMapping.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpHpTagContextAllocateTag(__int64 a1, __int128 *a2, __int64 a3, unsigned __int64 a4)
{
  void *v7; // rax
  unsigned __int64 v8; // rbx
  __int128 v9; // xmm0
  __int64 Mapping; // rax
  unsigned __int16 i; // r9
  bool v12; // zf
  unsigned __int16 v13; // r9
  unsigned __int16 v14; // di
  __int64 v15; // rcx
  __int64 v16; // rdx
  signed __int64 *v17; // roff
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  __int64 v21; // [rsp+40h] [rbp+8h]

  v7 = RtlpHpMetadataAlloc(0x30uLL, 0);
  v8 = (unsigned __int64)v7;
  if ( v7 )
  {
    memset(v7, 0, 0x30uLL);
    v9 = *a2;
    *(_QWORD *)(v8 + 32) = a4;
    *(_QWORD *)(v8 + 8) = a3;
    *(_OWORD *)(v8 + 16) = v9;
    RtlAcquireSRWLockExclusive(&RtlpHpTagContext);
    Mapping = RtlpHpTagContextFindMapping(&RtlpHpTagContext, a2, a3);
    if ( Mapping )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(Mapping + 32), a4);
      v14 = *(_WORD *)(Mapping + 40);
    }
    else if ( word_180150942 == 1024 )
    {
      v14 = 0;
    }
    else
    {
      for ( i = word_180150940; ; ++i )
      {
        if ( i == 1024 )
          i = 0;
        if ( !*(_QWORD *)(qword_180150938 + 8LL * i) )
          break;
      }
      v12 = i == 0xFFFF;
      v13 = i + 1;
      v14 = v13;
      if ( !v12 )
      {
        *(_WORD *)(v8 + 40) = v13;
        *(_QWORD *)(qword_180150938 + 8LL * (v13 - 1)) = v8;
        v21 = *(_QWORD *)(v8 + 8) & (-1LL << (dword_18015092C & 0x1F));
        v15 = qword_180150930;
        v16 = (37
             * (BYTE6(v21)
              + 37
              * (BYTE5(v21)
               + 37
               * (BYTE4(v21)
                + 37 * (BYTE3(v21) + 37 * (BYTE2(v21) + 37 * (BYTE1(v21) + 37 * ((unsigned __int8)v21 + 11623883)))))))
             + HIBYTE(v21)) & (((unsigned int)dword_18015092C >> 5) - 1);
        v17 = (signed __int64 *)(qword_180150930 + 8 * v16);
        _m_prefetchw(v17);
        v18 = *v17;
        do
        {
          *(_QWORD *)v8 = v18;
          v19 = v18;
          v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 8 * v16), v8, v18);
        }
        while ( v19 != v18 );
        ++dword_180150928;
        v8 = 0LL;
        ++word_180150942;
        word_180150940 = v13;
      }
    }
    RtlReleaseSRWLockExclusive(&RtlpHpTagContext);
    if ( v8 )
      RtlpHpMetadataFree(v8);
  }
  else
  {
    return 0;
  }
  return v14;
}
