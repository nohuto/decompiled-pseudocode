/*
 * XREFs of RtlpHpTagFree @ 0x180050324
 * Callers:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x180025060 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlpHpTagAllocateHeap @ 0x18004FC48 (RtlpHpTagAllocateHeap.c)
 *     RtlpHpSegHeapDestroy @ 0x180050600 (RtlpHpSegHeapDestroy.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpMetadataFree @ 0x18005A5C4 (RtlpHpMetadataFree.c)
 */

void __fastcall RtlpHpTagFree(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v5; // rbp
  _QWORD *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  _QWORD *v9; // rdx
  __int64 v10; // [rsp+50h] [rbp+8h]

  v5 = a2;
  v6 = *(_QWORD **)(qword_180143898 + 8LL * a2 - 8);
  v7 = v6[4];
  while ( v7 != a3 )
  {
    v8 = v7;
    v7 = _InterlockedCompareExchange64(v6 + 4, v7 - a3, v7);
    if ( v8 == v7 )
      return;
  }
  RtlAcquireSRWLockExclusive(&RtlpHpTagContext);
  if ( _InterlockedExchangeAdd64(v6 + 4, -a3) == a3 )
  {
    *(_QWORD *)(qword_180143898 + 8 * v5 - 8) = 0LL;
    v10 = v6[1] & (-1LL << (dword_18014388C & 0x1F));
    v9 = (_QWORD *)(qword_180143890
                  + 8LL
                  * ((37
                    * (BYTE6(v10)
                     + 37
                     * (BYTE5(v10)
                      + 37
                      * (BYTE4(v10)
                       + 37
                       * (BYTE3(v10) + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))
                    + HIBYTE(v10)) & (((unsigned int)dword_18014388C >> 5) - 1)));
    if ( (*v6 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v9 = (_QWORD *)(qword_180143890
                    + 8LL
                    * ((37
                      * (BYTE6(v10)
                       + 37
                       * (BYTE5(v10)
                        + 37
                        * (BYTE4(v10)
                         + 37
                         * (BYTE3(v10) + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))
                      + HIBYTE(v10)) & (((unsigned int)dword_18014388C >> 5) - 1)));
    while ( (*v9 & 1) == 0 )
    {
      if ( (_QWORD *)*v9 == v6 )
      {
        *v9 = *v6;
        --dword_180143888;
        *v6 |= 0x8000000000000002uLL;
        break;
      }
      v9 = (_QWORD *)*v9;
    }
    --word_1801438A2;
    word_1801438A0 = a2 - 1;
    RtlReleaseSRWLockExclusive(&RtlpHpTagContext);
    RtlpHpMetadataFree(v6);
  }
  else
  {
    RtlReleaseSRWLockExclusive(&RtlpHpTagContext);
  }
}
