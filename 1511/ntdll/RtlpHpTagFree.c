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

__int64 __fastcall RtlpHpTagFree(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int16 v5; // si
  __int64 v6; // rbp
  _QWORD *v7; // rbx
  __int64 result; // rax
  __int64 v9; // rtt
  _QWORD *v10; // rdx
  __int64 v11; // [rsp+50h] [rbp+8h]

  v5 = (__int16)a2;
  v6 = (unsigned __int16)a2;
  v7 = *(_QWORD **)(qword_180143898 + 8LL * (unsigned __int16)a2 - 8);
  result = v7[4];
  while ( result != a3 )
  {
    v9 = result;
    result = _InterlockedCompareExchange64(v7 + 4, result - a3, result);
    if ( v9 == result )
      return result;
  }
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpHpTagContext, a2, a3, a4);
  if ( _InterlockedExchangeAdd64(v7 + 4, -a3) != a3 )
    return RtlReleaseSRWLockExclusive(&RtlpHpTagContext);
  *(_QWORD *)(qword_180143898 + 8 * v6 - 8) = 0LL;
  v11 = v7[1] & (-1LL << (dword_18014388C & 0x1F));
  v10 = (_QWORD *)(qword_180143890
                 + 8LL
                 * ((37
                   * (BYTE6(v11)
                    + 37
                    * (BYTE5(v11)
                     + 37
                     * (BYTE4(v11)
                      + 37
                      * (BYTE3(v11) + 37 * (BYTE2(v11) + 37 * (BYTE1(v11) + 37 * ((unsigned __int8)v11 + 11623883)))))))
                   + HIBYTE(v11)) & (((unsigned int)dword_18014388C >> 5) - 1)));
  if ( (*v7 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    v10 = (_QWORD *)(qword_180143890
                   + 8LL
                   * ((37
                     * (BYTE6(v11)
                      + 37
                      * (BYTE5(v11)
                       + 37
                       * (BYTE4(v11)
                        + 37
                        * (BYTE3(v11) + 37 * (BYTE2(v11) + 37 * (BYTE1(v11) + 37 * ((unsigned __int8)v11 + 11623883)))))))
                     + HIBYTE(v11)) & (((unsigned int)dword_18014388C >> 5) - 1)));
  while ( (*v10 & 1) == 0 )
  {
    if ( (_QWORD *)*v10 == v7 )
    {
      *v10 = *v7;
      --dword_180143888;
      *v7 |= 0x8000000000000002uLL;
      break;
    }
    v10 = (_QWORD *)*v10;
  }
  --word_1801438A2;
  word_1801438A0 = v5 - 1;
  RtlReleaseSRWLockExclusive(&RtlpHpTagContext);
  return RtlpHpMetadataFree(v7);
}
