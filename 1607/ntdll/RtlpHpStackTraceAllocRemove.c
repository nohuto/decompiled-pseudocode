/*
 * XREFs of RtlpHpStackTraceAllocRemove @ 0x1800F847C
 * Callers:
 *     RtlpHpStackTraceRemoveStack @ 0x1800F87F4 (RtlpHpStackTraceRemoveStack.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpMetadataFree @ 0x18004F71C (RtlpHpMetadataFree.c)
 */

__int64 __fastcall RtlpHpStackTraceAllocRemove(unsigned __int64 a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rsi
  int v7; // r10d
  __int64 v8; // r9
  __int64 v9; // r10
  _QWORD *v10; // rdx
  __int64 v11; // rbx
  __int64 v13; // [rsp+60h] [rbp+8h]

  v5 = 0LL;
  RtlAcquireSRWLockExclusive(a1, a2, a3, a4);
  v7 = *(_DWORD *)(a1 + 12) >> 5;
  v8 = (unsigned __int64)a2 & (-1LL << (*(_BYTE *)(a1 + 12) & 0x1F));
  if ( !v7 )
    goto LABEL_15;
  v9 = *(_QWORD *)(a1 + 16)
     + 8LL
     * ((37
       * (BYTE6(v8)
        + 37
        * (BYTE5(v8)
         + 37
         * (BYTE4(v8) + 37 * (BYTE3(v8) + 37 * (BYTE2(v8) + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v8 + 11623883)))))))
       + HIBYTE(v8)) & (unsigned int)(v7 - 1));
  while ( 1 )
  {
    v9 = *(_QWORD *)v9;
    if ( (v9 & 1) != 0 )
      break;
    if ( v8 == ((-1LL << (*(_BYTE *)(a1 + 12) & 0x1F)) & *(_QWORD *)(v9 + 8)) )
      goto LABEL_7;
  }
  v9 = 0LL;
LABEL_7:
  if ( v9 )
  {
    v13 = *(_QWORD *)(v9 + 8) & (-1LL << (*(_DWORD *)(a1 + 12) & 0x1F));
    v10 = (_QWORD *)(*(_QWORD *)(a1 + 16)
                   + 8LL
                   * ((37
                     * (BYTE6(v13)
                      + 37
                      * (BYTE5(v13)
                       + 37
                       * (BYTE4(v13)
                        + 37
                        * (BYTE3(v13) + 37 * (BYTE2(v13) + 37 * (BYTE1(v13) + 37 * ((unsigned __int8)v13 + 11623883)))))))
                     + HIBYTE(v13)) & (unsigned int)((*(_DWORD *)(a1 + 12) >> 5) - 1)));
    if ( (*(_QWORD *)v9 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v10 = (_QWORD *)(*(_QWORD *)(a1 + 16)
                     + 8LL
                     * ((37
                       * (BYTE6(v13)
                        + 37
                        * (BYTE5(v13)
                         + 37
                         * (BYTE4(v13)
                          + 37
                          * (BYTE3(v13) + 37 * (BYTE2(v13) + 37 * (BYTE1(v13) + 37 * ((unsigned __int8)v13 + 11623883)))))))
                       + HIBYTE(v13)) & (unsigned int)((*(_DWORD *)(a1 + 12) >> 5) - 1)));
    while ( (*v10 & 1) == 0 )
    {
      if ( *v10 == v9 )
      {
        *v10 = *(_QWORD *)v9;
        --*(_DWORD *)(a1 + 8);
        *(_QWORD *)v9 |= 0x8000000000000002uLL;
        break;
      }
      v10 = (_QWORD *)*v10;
    }
    v11 = *(_QWORD *)(v9 + 16);
    v5 = v9;
  }
  else
  {
LABEL_15:
    v11 = 0LL;
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  if ( v5 )
    RtlpHpMetadataFree(v5);
  return v11;
}
