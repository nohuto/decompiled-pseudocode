/*
 * XREFs of RtlpHpTagContextAllocateTag @ 0x180059F30
 * Callers:
 *     RtlpHpAllocWithExceptionProtection @ 0x180025060 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlpHpTagContextGetTag @ 0x1800EE940 (RtlpHpTagContextGetTag.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpTagContextFindMapping @ 0x18005A2B0 (RtlpHpTagContextFindMapping.c)
 *     RtlpHpMetadataFree @ 0x18005A5C4 (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x18005A854 (RtlpHpMetadataAlloc.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlpHpTagContextAllocateTag(__int64 a1, __int128 *a2, __int64 a3, unsigned __int64 a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  __int128 v9; // xmm0
  char *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 Mapping; // rax
  unsigned __int16 i; // di
  bool v15; // zf
  unsigned __int16 v16; // di
  unsigned __int16 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // r9
  char v21; // r15
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r9
  _QWORD *v24; // r8
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // rcx
  char v27; // dl
  unsigned int v28; // r8d
  __int64 v29; // r11
  __int64 v30; // rcx
  __int64 v31; // r12
  _QWORD *v32; // r10
  __int64 v33; // rdx
  __int64 v34; // [rsp+20h] [rbp-10h]
  __int64 v35; // [rsp+60h] [rbp+30h]

  v7 = (_QWORD *)RtlpHpMetadataAlloc(48LL);
  v8 = v7;
  if ( !v7 )
    return 0;
  memset(v7, 0, 0x30uLL);
  v9 = *a2;
  v8[4] = a4;
  v8[1] = a3;
  *((_OWORD *)v8 + 1) = v9;
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpHpTagContext, v10, v11, v12);
  Mapping = RtlpHpTagContextFindMapping(&RtlpHpTagContext, a2, a3);
  if ( Mapping )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(Mapping + 32), a4);
    v17 = *(_WORD *)(Mapping + 40);
  }
  else if ( word_1801438A2 == 1024 )
  {
    v17 = 0;
  }
  else
  {
    for ( i = word_1801438A0; ; ++i )
    {
      if ( i == 1024 )
        i = 0;
      if ( !*(_QWORD *)(qword_180143898 + 8LL * i) )
        break;
    }
    v15 = i == 0xFFFF;
    v16 = i + 1;
    v17 = v16;
    if ( v15 )
      goto LABEL_11;
    if ( dword_180143888 < 2 * ((unsigned int)dword_18014388C >> 5) )
      goto LABEL_10;
    v21 = -1;
    v22 = 2 * ((unsigned __int64)(unsigned int)dword_18014388C >> 5);
    if ( v22 > 0xFFFFFFFF )
      goto LABEL_10;
    if ( (unsigned int)v22 < 4 )
      v22 = 4LL;
    v23 = RtlpHpMetadataAlloc(8LL * (unsigned int)v22);
    if ( v23 )
    {
      if ( (((_DWORD)v22 - 1) & (unsigned int)v22) != 0 )
      {
        do
        {
          ++v21;
          LODWORD(v22) = (unsigned int)v22 >> 1;
        }
        while ( (_DWORD)v22 );
        v22 = (unsigned int)(1 << v21);
      }
      v24 = (_QWORD *)v23;
      v25 = 0LL;
      if ( (unsigned int)v22 > 0x4000000 )
        v22 = 0x4000000LL;
      v26 = (8 * v22 + 7) >> 3;
      if ( v23 > v23 + 8 * v22 )
        v26 = 0LL;
      if ( v26 )
      {
        do
        {
          ++v25;
          *v24++ = (char *)&dword_180143888 + 1;
        }
        while ( v25 < v26 );
      }
      v27 = dword_18014388C;
      v28 = 0;
      v29 = -1LL << (dword_18014388C & 0x1F);
      if ( (dword_18014388C & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v31 = qword_180143890;
          while ( 1 )
          {
            v32 = *(_QWORD **)(v31 + 8LL * v28);
            if ( ((unsigned __int8)v32 & 1) != 0 )
              break;
            *(_QWORD *)(v31 + 8LL * v28) = *v32;
            v35 = v29 & v32[1];
            v33 = (37
                 * (BYTE6(v35)
                  + 37
                  * (BYTE5(v35)
                   + 37
                   * (BYTE4(v35)
                    + 37 * (BYTE3(v35) + 37 * (BYTE2(v35) + 37 * (BYTE1(v35) + 37 * ((unsigned __int8)v35 + 11623883)))))))
                 + HIBYTE(v35)) & (unsigned int)(v22 - 1);
            *v32 = *(_QWORD *)(v23 + 8 * v33);
            *(_QWORD *)(v23 + 8 * v33) = v32;
          }
          v27 = dword_18014388C;
          ++v28;
        }
        while ( v28 < (unsigned int)dword_18014388C >> 5 );
      }
      v30 = qword_180143890;
      qword_180143890 = v23;
      dword_18014388C = v27 & 0x1F | (32 * v22);
      if ( v30 )
        RtlpHpMetadataFree(v30);
      goto LABEL_10;
    }
    if ( (dword_18014388C & 0xFFFFFFE0) != 0 )
    {
LABEL_10:
      *((_WORD *)v8 + 20) = v16;
      *(_QWORD *)(qword_180143898 + 8LL * v16 - 8) = v8;
      v34 = v8[1] & (-1LL << (dword_18014388C & 0x1F));
      v18 = qword_180143890;
      v19 = (37
           * (BYTE6(v34)
            + 37
            * (BYTE5(v34)
             + 37
             * (BYTE4(v34)
              + 37 * (BYTE3(v34) + 37 * (BYTE2(v34) + 37 * (BYTE1(v34) + 37 * ((unsigned __int8)v34 + 11623883)))))))
           + HIBYTE(v34)) & (((unsigned int)dword_18014388C >> 5) - 1);
      *v8 = *(_QWORD *)(qword_180143890 + 8 * v19);
      *(_QWORD *)(v18 + 8 * v19) = v8;
      v8 = 0LL;
      ++dword_180143888;
      ++word_1801438A2;
      word_1801438A0 = v16;
      goto LABEL_11;
    }
    v17 = 0;
  }
LABEL_11:
  RtlReleaseSRWLockExclusive(&RtlpHpTagContext);
  if ( v8 )
    RtlpHpMetadataFree(v8);
  return v17;
}
