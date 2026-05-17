/*
 * XREFs of RtlpHpStackTraceAllocAdd @ 0x1800F81B4
 * Callers:
 *     RtlpHpStackTraceAddStack @ 0x1800F80E4 (RtlpHpStackTraceAddStack.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpMetadataFree @ 0x18004F71C (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x180050764 (RtlpHpMetadataAlloc.c)
 *     RtlpHpStackDbAllocRoutine @ 0x1800F8020 (RtlpHpStackDbAllocRoutine.c)
 *     RtlpHpStackDbFreeRoutine @ 0x1800F8030 (RtlpHpStackDbFreeRoutine.c)
 */

__int64 __fastcall RtlpHpStackTraceAllocAdd(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  char *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // r14
  unsigned int v10; // esi
  unsigned __int64 v11; // rdi
  char v12; // r15
  unsigned __int64 v13; // rbx
  unsigned __int64 *v14; // r9
  unsigned __int64 *v15; // r8
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r11
  __int64 v20; // r12
  _QWORD *v21; // r10
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned int v24; // r8d
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v28; // [rsp+68h] [rbp+48h]
  __int64 v29; // [rsp+68h] [rbp+48h]

  v9 = RtlpHpMetadataAlloc(0x18uLL, 0);
  if ( !v9 )
    return 0;
  v9[1] = a2;
  v9[2] = a3;
  RtlAcquireSRWLockExclusive(a1, v6, v7, v8);
  v11 = a1 + 8;
  v10 = 1;
  if ( *(_DWORD *)(a1 + 8) < (unsigned int)(2 * (*(_DWORD *)(a1 + 12) >> 5)) )
    goto LABEL_24;
  v12 = -1;
  v13 = 2 * ((unsigned __int64)*(unsigned int *)(a1 + 12) >> 5);
  if ( v13 > 0xFFFFFFFF )
    goto LABEL_24;
  if ( (unsigned int)v13 < 4 )
    v13 = 4LL;
  v14 = (unsigned __int64 *)RtlpHpStackDbAllocRoutine(8LL * (unsigned int)v13);
  if ( v14 )
  {
    if ( (((_DWORD)v13 - 1) & (unsigned int)v13) != 0 )
    {
      do
      {
        ++v12;
        LODWORD(v13) = (unsigned int)v13 >> 1;
      }
      while ( (_DWORD)v13 );
      v13 = (unsigned int)(1 << v12);
    }
    v15 = v14;
    v16 = 0LL;
    if ( (unsigned int)v13 > 0x4000000 )
      v13 = 0x4000000LL;
    v17 = (8 * v13 + 7) >> 3;
    if ( v14 > &v14[v13] )
      v17 = 0LL;
    if ( v17 )
    {
      do
      {
        ++v16;
        *v15++ = v11 | 1;
      }
      while ( v16 < v17 );
    }
    v18 = 0LL;
    v19 = -1LL << (*(_BYTE *)(a1 + 12) & 0x1F);
    if ( (*(_DWORD *)(a1 + 12) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v20 = *(_QWORD *)(a1 + 16);
        while ( 1 )
        {
          v21 = *(_QWORD **)(v20 + 8 * v18);
          if ( ((unsigned __int8)v21 & 1) != 0 )
            break;
          *(_QWORD *)(v20 + 8 * v18) = *v21;
          v28 = v19 & v21[1];
          v22 = (37
               * (BYTE6(v28)
                + 37
                * (BYTE5(v28)
                 + 37
                 * (BYTE4(v28)
                  + 37 * (BYTE3(v28) + 37 * (BYTE2(v28) + 37 * (BYTE1(v28) + 37 * ((unsigned __int8)v28 + 11623883)))))))
               + HIBYTE(v28)) & (unsigned int)(v13 - 1);
          *v21 = v14[v22];
          v14[v22] = (unsigned __int64)v21;
        }
        v18 = (unsigned int)(v18 + 1);
      }
      while ( (unsigned int)v18 < *(_DWORD *)(a1 + 12) >> 5 );
    }
    *(_DWORD *)(a1 + 12) &= 0x1Fu;
    v23 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 12) |= 32 * v13;
    *(_QWORD *)(a1 + 16) = v14;
    if ( v23 )
      RtlpHpStackDbFreeRoutine(v23);
    goto LABEL_24;
  }
  if ( (*(_DWORD *)(a1 + 12) & 0xFFFFFFE0) != 0 )
  {
LABEL_24:
    v24 = *(_DWORD *)(a1 + 12);
    v29 = v9[1] & (-1LL << (v24 & 0x1F));
    v25 = *(_QWORD *)(a1 + 16);
    v26 = (37
         * (BYTE6(v29)
          + 37
          * (BYTE5(v29)
           + 37
           * (BYTE4(v29)
            + 37 * (BYTE3(v29) + 37 * (BYTE2(v29) + 37 * (BYTE1(v29) + 37 * ((unsigned __int8)v29 + 11623883)))))))
         + HIBYTE(v29)) & ((v24 >> 5) - 1);
    *v9 = *(_QWORD *)(v25 + 8 * v26);
    *(_QWORD *)(v25 + 8 * v26) = v9;
    ++*(_DWORD *)v11;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
    v9 = 0LL;
    goto LABEL_25;
  }
  v10 = 0;
LABEL_25:
  if ( v9 )
    RtlpHpMetadataFree((unsigned __int64)v9);
  return v10;
}
