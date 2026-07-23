/*
 * XREFs of RtlpHpVirtUnlockHeap @ 0x1800EBCBC
 * Callers:
 *     RtlUnlockHeap @ 0x180033370 (RtlUnlockHeap.c)
 * Callees:
 *     RtlpUnlockHeapInternal @ 0x180044C7C (RtlpUnlockHeapInternal.c)
 *     RtlpHpVirtGetProcessHeap @ 0x1800EAC9C (RtlpHpVirtGetProcessHeap.c)
 *     RtlpHpVirtHeapTableDereferenceHeap @ 0x1800EAD60 (RtlpHpVirtHeapTableDereferenceHeap.c)
 */

__int64 __fastcall RtlpHpVirtUnlockHeap(void *a1)
{
  void *ProcessHeap; // rbx
  int v3; // ecx
  __int64 result; // rax

  if ( a1 == NtCurrentPeb()->ProcessHeap )
    ProcessHeap = RtlpHpVirtGetProcessHeap(3u);
  else
    ProcessHeap = a1;
  v3 = (unsigned __int8)RtlpUnlockHeapInternal((__int64)ProcessHeap);
  result = 0LL;
  if ( v3 )
  {
    if ( ProcessHeap != a1 )
      RtlpHpVirtHeapTableDereferenceHeap((__int64)ProcessHeap);
    return 1LL;
  }
  return result;
}
