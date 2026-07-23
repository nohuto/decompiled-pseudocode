/*
 * XREFs of RtlpHpVirtValidateHeap @ 0x1800EBD20
 * Callers:
 *     RtlValidateHeap @ 0x180038730 (RtlValidateHeap.c)
 * Callees:
 *     RtlpValidateHeapInternal @ 0x180038748 (RtlpValidateHeapInternal.c)
 *     RtlpHpVirtFindHeapByAlloc @ 0x1800EAB58 (RtlpHpVirtFindHeapByAlloc.c)
 *     RtlpHpVirtGetProcessHeap @ 0x1800EAC9C (RtlpHpVirtGetProcessHeap.c)
 *     RtlpHpVirtHeapTableDereferenceHeap @ 0x1800EAD60 (RtlpHpVirtHeapTableDereferenceHeap.c)
 */

bool __fastcall RtlpHpVirtValidateHeap(PRTL_CRITICAL_SECTION *a1, unsigned int a2, unsigned __int64 a3)
{
  PRTL_CRITICAL_SECTION *HeapByAlloc; // rbx
  int v7; // esi
  PRTL_CRITICAL_SECTION *ProcessHeap; // rax
  bool v9; // di

  if ( a1 != NtCurrentPeb()->ProcessHeap )
  {
    HeapByAlloc = a1;
LABEL_8:
    v7 = 0;
    goto LABEL_9;
  }
  if ( a3 )
  {
    HeapByAlloc = (PRTL_CRITICAL_SECTION *)RtlpHpVirtFindHeapByAlloc((__int64)a1, a3, 0LL);
    goto LABEL_8;
  }
  v7 = 1;
  ProcessHeap = (PRTL_CRITICAL_SECTION *)RtlpHpVirtGetProcessHeap(1u);
  HeapByAlloc = ProcessHeap;
  if ( !ProcessHeap || ProcessHeap == a1 )
  {
    HeapByAlloc = a1;
    goto LABEL_8;
  }
LABEL_9:
  v9 = RtlpValidateHeapInternal(HeapByAlloc, (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)a2, a3);
  if ( v7 )
    RtlpHpVirtHeapTableDereferenceHeap((__int64)HeapByAlloc);
  return v9;
}
