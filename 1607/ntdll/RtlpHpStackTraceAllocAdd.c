/*
 * XREFs of RtlpHpStackTraceAllocAdd @ 0x1800F81B4
 * Callers:
 *     RtlpHpStackTraceAddStack @ 0x1800F80E4 (RtlpHpStackTraceAddStack.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpMetadataFree @ 0x18004F70C (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x180050754 (RtlpHpMetadataAlloc.c)
 *     RtlpHpStackDbAllocRoutine @ 0x1800F8020 (RtlpHpStackDbAllocRoutine.c)
 *     RtlpHpStackDbFreeRoutine @ 0x1800F8030 (RtlpHpStackDbFreeRoutine.c)
 */

__int64 __fastcall RtlpHpStackTraceAllocAdd(PRTL_SRWLOCK SRWLock, __int64 a2, __int64 a3)
{
  _QWORD *v6; // r14
  unsigned int v7; // esi
  unsigned __int64 v8; // rdi
  char v9; // r15
  unsigned __int64 v10; // rbx
  unsigned __int64 *v11; // r9
  unsigned __int64 *v12; // r8
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r11
  unsigned __int64 Value; // r12
  _QWORD *v18; // r10
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned int Ptr_high; // r8d
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v25; // [rsp+68h] [rbp+48h]
  __int64 v26; // [rsp+68h] [rbp+48h]

  v6 = RtlpHpMetadataAlloc(0x18uLL, 0);
  if ( !v6 )
    return 0;
  v6[1] = a2;
  v6[2] = a3;
  RtlAcquireSRWLockExclusive(SRWLock);
  v8 = (unsigned __int64)&SRWLock[1];
  v7 = 1;
  if ( *(_DWORD *)&SRWLock[1].0 < (unsigned int)(2 * (HIDWORD(SRWLock[1].Ptr) >> 5)) )
    goto LABEL_24;
  v9 = -1;
  v10 = 2 * ((unsigned __int64)HIDWORD(SRWLock[1].Ptr) >> 5);
  if ( v10 > 0xFFFFFFFF )
    goto LABEL_24;
  if ( (unsigned int)v10 < 4 )
    v10 = 4LL;
  v11 = (unsigned __int64 *)RtlpHpStackDbAllocRoutine(8LL * (unsigned int)v10);
  if ( v11 )
  {
    if ( (((_DWORD)v10 - 1) & (unsigned int)v10) != 0 )
    {
      do
      {
        ++v9;
        LODWORD(v10) = (unsigned int)v10 >> 1;
      }
      while ( (_DWORD)v10 );
      v10 = (unsigned int)(1 << v9);
    }
    v12 = v11;
    v13 = 0LL;
    if ( (unsigned int)v10 > 0x4000000 )
      v10 = 0x4000000LL;
    v14 = (8 * v10 + 7) >> 3;
    if ( v11 > &v11[v10] )
      v14 = 0LL;
    if ( v14 )
    {
      do
      {
        ++v13;
        *v12++ = v8 | 1;
      }
      while ( v13 < v14 );
    }
    v15 = 0LL;
    v16 = -1LL << (BYTE4(SRWLock[1].Ptr) & 0x1F);
    if ( (HIDWORD(SRWLock[1].Ptr) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        Value = SRWLock[2].Value;
        while ( 1 )
        {
          v18 = *(_QWORD **)(Value + 8 * v15);
          if ( ((unsigned __int8)v18 & 1) != 0 )
            break;
          *(_QWORD *)(Value + 8 * v15) = *v18;
          v25 = v16 & v18[1];
          v19 = (37
               * (BYTE6(v25)
                + 37
                * (BYTE5(v25)
                 + 37
                 * (BYTE4(v25)
                  + 37 * (BYTE3(v25) + 37 * (BYTE2(v25) + 37 * (BYTE1(v25) + 37 * ((unsigned __int8)v25 + 11623883)))))))
               + HIBYTE(v25)) & (unsigned int)(v10 - 1);
          *v18 = v11[v19];
          v11[v19] = (unsigned __int64)v18;
        }
        v15 = (unsigned int)(v15 + 1);
      }
      while ( (unsigned int)v15 < HIDWORD(SRWLock[1].Ptr) >> 5 );
    }
    HIDWORD(SRWLock[1].Ptr) &= 0x1Fu;
    v20 = SRWLock[2].Value;
    HIDWORD(SRWLock[1].Ptr) |= 32 * v10;
    SRWLock[2].Value = (unsigned __int64)v11;
    if ( v20 )
      RtlpHpStackDbFreeRoutine(v20);
    goto LABEL_24;
  }
  if ( (HIDWORD(SRWLock[1].Ptr) & 0xFFFFFFE0) != 0 )
  {
LABEL_24:
    Ptr_high = HIDWORD(SRWLock[1].Ptr);
    v26 = v6[1] & (-1LL << (Ptr_high & 0x1F));
    v22 = SRWLock[2].Value;
    v23 = (37
         * (BYTE6(v26)
          + 37
          * (BYTE5(v26)
           + 37
           * (BYTE4(v26)
            + 37 * (BYTE3(v26) + 37 * (BYTE2(v26) + 37 * (BYTE1(v26) + 37 * ((unsigned __int8)v26 + 11623883)))))))
         + HIBYTE(v26)) & ((Ptr_high >> 5) - 1);
    *v6 = *(_QWORD *)(v22 + 8 * v23);
    *(_QWORD *)(v22 + 8 * v23) = v6;
    ++*(_DWORD *)v8;
    RtlReleaseSRWLockExclusive(SRWLock);
    v6 = 0LL;
    goto LABEL_25;
  }
  v7 = 0;
LABEL_25:
  if ( v6 )
    RtlpHpMetadataFree((unsigned __int64)v6);
  return v7;
}
