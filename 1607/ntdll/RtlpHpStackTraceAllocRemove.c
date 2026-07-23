/*
 * XREFs of RtlpHpStackTraceAllocRemove @ 0x1800F847C
 * Callers:
 *     RtlpHpStackTraceRemoveStack @ 0x1800F87F4 (RtlpHpStackTraceRemoveStack.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpMetadataFree @ 0x18004F70C (RtlpHpMetadataFree.c)
 */

__int64 __fastcall RtlpHpStackTraceAllocRemove(PRTL_SRWLOCK SRWLock, __int64 a2)
{
  unsigned __int64 v3; // rsi
  int v5; // r10d
  __int64 v6; // r9
  unsigned __int64 v7; // r10
  _QWORD *v8; // rdx
  __int64 v9; // rbx
  __int64 v11; // [rsp+60h] [rbp+8h]

  v3 = 0LL;
  RtlAcquireSRWLockExclusive(SRWLock);
  v5 = HIDWORD(SRWLock[1].Ptr) >> 5;
  v6 = a2 & (-1LL << (BYTE4(SRWLock[1].Ptr) & 0x1F));
  if ( !v5 )
    goto LABEL_15;
  v7 = SRWLock[2].Value
     + 8LL
     * ((37
       * (BYTE6(v6)
        + 37
        * (BYTE5(v6)
         + 37
         * (BYTE4(v6) + 37 * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883)))))))
       + HIBYTE(v6)) & (unsigned int)(v5 - 1));
  while ( 1 )
  {
    v7 = *(_QWORD *)v7;
    if ( (v7 & 1) != 0 )
      break;
    if ( v6 == ((-1LL << (BYTE4(SRWLock[1].Ptr) & 0x1F)) & *(_QWORD *)(v7 + 8)) )
      goto LABEL_7;
  }
  v7 = 0LL;
LABEL_7:
  if ( v7 )
  {
    v11 = *(_QWORD *)(v7 + 8) & (-1LL << (HIDWORD(SRWLock[1].Ptr) & 0x1F));
    v8 = (_QWORD *)(SRWLock[2].Value
                  + 8LL
                  * ((37
                    * (BYTE6(v11)
                     + 37
                     * (BYTE5(v11)
                      + 37
                      * (BYTE4(v11)
                       + 37
                       * (BYTE3(v11) + 37 * (BYTE2(v11) + 37 * (BYTE1(v11) + 37 * ((unsigned __int8)v11 + 11623883)))))))
                    + HIBYTE(v11)) & (unsigned int)((HIDWORD(SRWLock[1].Ptr) >> 5) - 1)));
    if ( (*(_QWORD *)v7 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v8 = (_QWORD *)(SRWLock[2].Value
                    + 8LL
                    * ((37
                      * (BYTE6(v11)
                       + 37
                       * (BYTE5(v11)
                        + 37
                        * (BYTE4(v11)
                         + 37
                         * (BYTE3(v11) + 37 * (BYTE2(v11) + 37 * (BYTE1(v11) + 37 * ((unsigned __int8)v11 + 11623883)))))))
                      + HIBYTE(v11)) & (unsigned int)((HIDWORD(SRWLock[1].Ptr) >> 5) - 1)));
    while ( (*v8 & 1) == 0 )
    {
      if ( *v8 == v7 )
      {
        *v8 = *(_QWORD *)v7;
        --*(_DWORD *)&SRWLock[1].0;
        *(_QWORD *)v7 |= 0x8000000000000002uLL;
        break;
      }
      v8 = (_QWORD *)*v8;
    }
    v9 = *(_QWORD *)(v7 + 16);
    v3 = v7;
  }
  else
  {
LABEL_15:
    v9 = 0LL;
  }
  RtlReleaseSRWLockExclusive(SRWLock);
  if ( v3 )
    RtlpHpMetadataFree(v3);
  return v9;
}
