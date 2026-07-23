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

void __fastcall RtlpHpVirtHeapTableDereferenceHeap(__int64 a1)
{
  unsigned __int64 Entry; // rbx
  _QWORD *v4; // rdx
  __int64 v5; // [rsp+50h] [rbp+8h]

  RtlAcquireSRWLockExclusive(&RtlpHpVirtGlobalCtx);
  Entry = RtlpHpVirtHeapTableFindEntry(*(_QWORD *)(a1 + 136), 0LL, a1);
  if ( (*(_QWORD *)(Entry + 16))-- == 1LL )
  {
    v5 = *(_QWORD *)(Entry + 8) & (-1LL << (dword_18014484C & 0x1F));
    v4 = (_QWORD *)(qword_180144850
                  + 8LL
                  * ((37
                    * (BYTE6(v5)
                     + 37
                     * (BYTE5(v5)
                      + 37
                      * (BYTE4(v5)
                       + 37 * (BYTE3(v5) + 37 * (BYTE2(v5) + 37 * (BYTE1(v5) + 37 * ((unsigned __int8)v5 + 11623883)))))))
                    + HIBYTE(v5)) & (((unsigned int)dword_18014484C >> 5) - 1)));
    if ( (*(_QWORD *)Entry & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v4 = (_QWORD *)(qword_180144850
                    + 8LL
                    * ((37
                      * (BYTE6(v5)
                       + 37
                       * (BYTE5(v5)
                        + 37
                        * (BYTE4(v5)
                         + 37
                         * (BYTE3(v5) + 37 * (BYTE2(v5) + 37 * (BYTE1(v5) + 37 * ((unsigned __int8)v5 + 11623883)))))))
                      + HIBYTE(v5)) & (((unsigned int)dword_18014484C >> 5) - 1)));
    while ( (*v4 & 1) == 0 )
    {
      if ( *v4 == Entry )
      {
        *v4 = *(_QWORD *)Entry;
        --dword_180144848;
        *(_QWORD *)Entry |= 0x8000000000000002uLL;
        break;
      }
      v4 = (_QWORD *)*v4;
    }
  }
  else
  {
    Entry = 0LL;
  }
  RtlReleaseSRWLockExclusive(&RtlpHpVirtGlobalCtx);
  if ( Entry )
  {
    RtlDestroyHeap(*(PVOID *)(Entry + 40));
    RtlpHpMetadataFree(Entry);
  }
}
