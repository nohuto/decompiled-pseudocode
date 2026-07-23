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
  __int64 Mapping; // rax
  unsigned __int16 i; // di
  bool v12; // zf
  unsigned __int16 v13; // di
  unsigned __int16 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // r9
  char v18; // r15
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // r9
  _QWORD *v21; // r8
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rcx
  char v24; // dl
  unsigned int v25; // r8d
  __int64 v26; // r11
  __int64 v27; // rcx
  __int64 v28; // r12
  _QWORD *v29; // r10
  __int64 v30; // rdx
  __int64 v31; // [rsp+20h] [rbp-10h]
  __int64 v32; // [rsp+60h] [rbp+30h]

  v7 = (_QWORD *)RtlpHpMetadataAlloc(0x30uLL);
  v8 = v7;
  if ( !v7 )
    return 0;
  memset(v7, 0, 0x30uLL);
  v9 = *a2;
  v8[4] = a4;
  v8[1] = a3;
  *((_OWORD *)v8 + 1) = v9;
  RtlAcquireSRWLockExclusive(&RtlpHpTagContext);
  Mapping = RtlpHpTagContextFindMapping(&RtlpHpTagContext, a2, a3);
  if ( Mapping )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(Mapping + 32), a4);
    v14 = *(_WORD *)(Mapping + 40);
  }
  else if ( word_1801438A2 == 1024 )
  {
    v14 = 0;
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
    v12 = i == 0xFFFF;
    v13 = i + 1;
    v14 = v13;
    if ( v12 )
      goto LABEL_11;
    if ( dword_180143888 < 2 * ((unsigned int)dword_18014388C >> 5) )
      goto LABEL_10;
    v18 = -1;
    v19 = 2 * ((unsigned __int64)(unsigned int)dword_18014388C >> 5);
    if ( v19 > 0xFFFFFFFF )
      goto LABEL_10;
    if ( (unsigned int)v19 < 4 )
      v19 = 4LL;
    v20 = RtlpHpMetadataAlloc(8LL * (unsigned int)v19);
    if ( v20 )
    {
      if ( (((_DWORD)v19 - 1) & (unsigned int)v19) != 0 )
      {
        do
        {
          ++v18;
          LODWORD(v19) = (unsigned int)v19 >> 1;
        }
        while ( (_DWORD)v19 );
        v19 = (unsigned int)(1 << v18);
      }
      v21 = (_QWORD *)v20;
      v22 = 0LL;
      if ( (unsigned int)v19 > 0x4000000 )
        v19 = 0x4000000LL;
      v23 = (8 * v19 + 7) >> 3;
      if ( v20 > v20 + 8 * v19 )
        v23 = 0LL;
      if ( v23 )
      {
        do
        {
          ++v22;
          *v21++ = (char *)&dword_180143888 + 1;
        }
        while ( v22 < v23 );
      }
      v24 = dword_18014388C;
      v25 = 0;
      v26 = -1LL << (dword_18014388C & 0x1F);
      if ( (dword_18014388C & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v28 = qword_180143890;
          while ( 1 )
          {
            v29 = *(_QWORD **)(v28 + 8LL * v25);
            if ( ((unsigned __int8)v29 & 1) != 0 )
              break;
            *(_QWORD *)(v28 + 8LL * v25) = *v29;
            v32 = v26 & v29[1];
            v30 = (37
                 * (BYTE6(v32)
                  + 37
                  * (BYTE5(v32)
                   + 37
                   * (BYTE4(v32)
                    + 37 * (BYTE3(v32) + 37 * (BYTE2(v32) + 37 * (BYTE1(v32) + 37 * ((unsigned __int8)v32 + 11623883)))))))
                 + HIBYTE(v32)) & (unsigned int)(v19 - 1);
            *v29 = *(_QWORD *)(v20 + 8 * v30);
            *(_QWORD *)(v20 + 8 * v30) = v29;
          }
          v24 = dword_18014388C;
          ++v25;
        }
        while ( v25 < (unsigned int)dword_18014388C >> 5 );
      }
      v27 = qword_180143890;
      qword_180143890 = v20;
      dword_18014388C = v24 & 0x1F | (32 * v19);
      if ( v27 )
        RtlpHpMetadataFree(v27);
      goto LABEL_10;
    }
    if ( (dword_18014388C & 0xFFFFFFE0) != 0 )
    {
LABEL_10:
      *((_WORD *)v8 + 20) = v13;
      *(_QWORD *)(qword_180143898 + 8LL * v13 - 8) = v8;
      v31 = v8[1] & (-1LL << (dword_18014388C & 0x1F));
      v15 = qword_180143890;
      v16 = (37
           * (BYTE6(v31)
            + 37
            * (BYTE5(v31)
             + 37
             * (BYTE4(v31)
              + 37 * (BYTE3(v31) + 37 * (BYTE2(v31) + 37 * (BYTE1(v31) + 37 * ((unsigned __int8)v31 + 11623883)))))))
           + HIBYTE(v31)) & (((unsigned int)dword_18014388C >> 5) - 1);
      *v8 = *(_QWORD *)(qword_180143890 + 8 * v16);
      *(_QWORD *)(v15 + 8 * v16) = v8;
      v8 = 0LL;
      ++dword_180143888;
      ++word_1801438A2;
      word_1801438A0 = v13;
      goto LABEL_11;
    }
    v14 = 0;
  }
LABEL_11:
  RtlReleaseSRWLockExclusive(&RtlpHpTagContext);
  if ( v8 )
    RtlpHpMetadataFree(v8);
  return v14;
}
