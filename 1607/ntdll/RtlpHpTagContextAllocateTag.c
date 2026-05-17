/*
 * XREFs of RtlpHpTagContextAllocateTag @ 0x180050C04
 * Callers:
 *     RtlpHpAllocWithExceptionProtection @ 0x1800227C0 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlpHpTagContextGetTag @ 0x1800F7674 (RtlpHpTagContextGetTag.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpMetadataFree @ 0x18004F71C (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x180050764 (RtlpHpMetadataAlloc.c)
 *     RtlpHpTagContextFindMapping @ 0x180050DDC (RtlpHpTagContextFindMapping.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpHpTagContextAllocateTag(__int64 a1, __int128 *a2, __int64 a3, unsigned __int64 a4)
{
  void *v7; // rax
  unsigned __int64 v8; // rbx
  __int128 v9; // xmm0
  char *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 Mapping; // rax
  unsigned __int16 i; // r9
  bool v15; // zf
  unsigned __int16 v16; // r9
  unsigned __int16 v17; // di
  __int64 v18; // rcx
  __int64 v19; // rdx
  signed __int64 *v20; // roff
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  __int64 v24; // [rsp+40h] [rbp+8h]

  v7 = RtlpHpMetadataAlloc(0x30uLL, 0);
  v8 = (unsigned __int64)v7;
  if ( v7 )
  {
    memset(v7, 0, 0x30uLL);
    v9 = *a2;
    *(_QWORD *)(v8 + 32) = a4;
    *(_QWORD *)(v8 + 8) = a3;
    *(_OWORD *)(v8 + 16) = v9;
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpHpTagContext, v10, v11, v12);
    Mapping = RtlpHpTagContextFindMapping(&RtlpHpTagContext, a2, a3);
    if ( Mapping )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(Mapping + 32), a4);
      v17 = *(_WORD *)(Mapping + 40);
    }
    else if ( word_180150942 == 1024 )
    {
      v17 = 0;
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
      v15 = i == 0xFFFF;
      v16 = i + 1;
      v17 = v16;
      if ( !v15 )
      {
        *(_WORD *)(v8 + 40) = v16;
        *(_QWORD *)(qword_180150938 + 8LL * (v16 - 1)) = v8;
        v24 = *(_QWORD *)(v8 + 8) & (-1LL << (dword_18015092C & 0x1F));
        v18 = qword_180150930;
        v19 = (37
             * (BYTE6(v24)
              + 37
              * (BYTE5(v24)
               + 37
               * (BYTE4(v24)
                + 37 * (BYTE3(v24) + 37 * (BYTE2(v24) + 37 * (BYTE1(v24) + 37 * ((unsigned __int8)v24 + 11623883)))))))
             + HIBYTE(v24)) & (((unsigned int)dword_18015092C >> 5) - 1);
        v20 = (signed __int64 *)(qword_180150930 + 8 * v19);
        _m_prefetchw(v20);
        v21 = *v20;
        do
        {
          *(_QWORD *)v8 = v21;
          v22 = v21;
          v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 8 * v19), v8, v21);
        }
        while ( v22 != v21 );
        ++dword_180150928;
        v8 = 0LL;
        ++word_180150942;
        word_180150940 = v16;
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
  return v17;
}
