/*
 * XREFs of RtlpHpVirtHeapTableDereferenceHeap @ 0x1800EAD60
 * Callers:
 *     RtlpHpVirtFreeHeap @ 0x1800EAC08 (RtlpHpVirtFreeHeap.c)
 *     RtlpHpVirtQueryHeaps @ 0x1800EB6B4 (RtlpHpVirtQueryHeaps.c)
 *     RtlpHpVirtUnlockHeap @ 0x1800EBCBC (RtlpHpVirtUnlockHeap.c)
 *     RtlpHpVirtValidateHeap @ 0x1800EBD20 (RtlpHpVirtValidateHeap.c)
 * Callees:
 *     RtlDestroyHeap @ 0x180004920 (RtlDestroyHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpMetadataFree @ 0x1800586CC (RtlpHpMetadataFree.c)
 *     RtlpHpVirtHeapTableFindEntry @ 0x1800EAEDC (RtlpHpVirtHeapTableFindEntry.c)
 */

signed __int64 __fastcall RtlpHpVirtHeapTableDereferenceHeap(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  _QWORD *Entry; // rbx
  _QWORD *v7; // rdx
  signed __int64 result; // rax
  __int64 v9; // [rsp+50h] [rbp+8h]

  RtlAcquireSRWLockExclusive(&RtlpHpVirtGlobalCtx, a2, a3, a4);
  Entry = (_QWORD *)RtlpHpVirtHeapTableFindEntry(*(_QWORD *)(a1 + 136), 0LL, a1);
  if ( Entry[2]-- == 1LL )
  {
    v9 = Entry[1] & (-1LL << (dword_18014484C & 0x1F));
    v7 = (_QWORD *)(qword_180144850
                  + 8LL
                  * ((37
                    * (BYTE6(v9)
                     + 37
                     * (BYTE5(v9)
                      + 37
                      * (BYTE4(v9)
                       + 37 * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883)))))))
                    + HIBYTE(v9)) & (((unsigned int)dword_18014484C >> 5) - 1)));
    if ( (*Entry & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v7 = (_QWORD *)(qword_180144850
                    + 8LL
                    * ((37
                      * (BYTE6(v9)
                       + 37
                       * (BYTE5(v9)
                        + 37
                        * (BYTE4(v9)
                         + 37
                         * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883)))))))
                      + HIBYTE(v9)) & (((unsigned int)dword_18014484C >> 5) - 1)));
    while ( (*v7 & 1) == 0 )
    {
      if ( (_QWORD *)*v7 == Entry )
      {
        *v7 = *Entry;
        --dword_180144848;
        *Entry |= 0x8000000000000002uLL;
        break;
      }
      v7 = (_QWORD *)*v7;
    }
  }
  else
  {
    Entry = 0LL;
  }
  result = RtlReleaseSRWLockExclusive(&RtlpHpVirtGlobalCtx);
  if ( Entry )
  {
    RtlDestroyHeap(Entry[5]);
    return RtlpHpMetadataFree((unsigned __int64)Entry);
  }
  return result;
}
