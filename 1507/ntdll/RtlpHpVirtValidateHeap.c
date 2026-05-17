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

bool __fastcall RtlpHpVirtValidateHeap(void *a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned __int64 HeapByAlloc; // rbx
  int v7; // esi
  void *ProcessHeap; // rax
  char *v9; // rdx
  bool v10; // di
  __int64 v11; // r8
  __int64 v12; // r9

  if ( a1 != NtCurrentPeb()->ProcessHeap )
  {
    HeapByAlloc = (unsigned __int64)a1;
LABEL_8:
    v7 = 0;
    goto LABEL_9;
  }
  if ( a3 )
  {
    HeapByAlloc = RtlpHpVirtFindHeapByAlloc((__int64)a1, a3, 0LL);
    goto LABEL_8;
  }
  v7 = 1;
  ProcessHeap = RtlpHpVirtGetProcessHeap(1u);
  HeapByAlloc = (unsigned __int64)ProcessHeap;
  if ( !ProcessHeap || ProcessHeap == a1 )
  {
    HeapByAlloc = (unsigned __int64)a1;
    goto LABEL_8;
  }
LABEL_9:
  v10 = RtlpValidateHeapInternal(HeapByAlloc, a2, a3);
  if ( v7 )
    RtlpHpVirtHeapTableDereferenceHeap(HeapByAlloc, v9, v11, v12);
  return v10;
}
