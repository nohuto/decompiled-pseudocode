/*
 * XREFs of RtlpInitializeAssemblyStorageMap @ 0x1800434C8
 * Callers:
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180041CF8 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlCreateActivationContext @ 0x180043360 (RtlCreateActivationContext.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     DbgPrintEx @ 0x1800492F0 (DbgPrintEx.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlpInitializeAssemblyStorageMap(int *a1, unsigned int a2, void *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  PVOID Heap; // rbp
  int v7; // r14d

  v3 = 0;
  v4 = a2;
  Heap = a3;
  v7 = 0;
  if ( !a1 || !a2 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() bad parameters:\nSXS:    Map        : 0x%p\nSXS:    EntryCount : 0x%lx\n",
      "RtlpInitializeAssemblyStorageMap",
      a1,
      a2);
    return (unsigned int)-1073741811;
  }
  if ( !a3 )
  {
    if ( !is_mul_ok(a2, 8uLL) )
      return (unsigned int)-1073741675;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * a2);
    if ( !Heap )
      return (unsigned int)-1073741801;
    v7 = 1;
  }
  if ( (_DWORD)v4 )
    memset(Heap, 0, 8 * v4);
  *a1 = v7;
  a1[1] = v4;
  *((_QWORD *)a1 + 1) = Heap;
  return v3;
}
