/*
 * XREFs of ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x1800DB41C
 * Callers:
 *     RtlComputeImportTableHash @ 0x1800DB720 (RtlComputeImportTableHash.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlAddressInSectionTable @ 0x180080BE0 (RtlAddressInSectionTable.c)
 *     ImportTablepInsertFunctionSorted @ 0x1800DB694 (ImportTablepInsertFunctionSorted.c)
 */

__int64 __fastcall InsertModuleFunctions<_IMAGE_THUNK_DATA32,unsigned long,2147483648>(
        __int64 a1,
        void *a2,
        _IMAGE_NT_HEADERS64 *a3,
        ULONG *a4)
{
  signed int *i; // rbx
  signed int v8; // r8d
  char *v9; // rax
  char *v10; // rdi
  _QWORD *Heap; // rax

  for ( i = (signed int *)RtlAddressInSectionTable(a3, a2, *a4); i; ++i )
  {
    v8 = *i;
    if ( !*i )
      break;
    if ( v8 >= 0 )
    {
      v9 = (char *)RtlAddressInSectionTable(a3, a2, v8);
      if ( !v9 )
        return 3221225611LL;
      v10 = v9 + 2;
      if ( v9 == (char *)-2LL )
        return 3221225611LL;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x10uLL);
      if ( !Heap )
        return 3221225495LL;
      *Heap = 0LL;
      Heap[1] = v10;
      ImportTablepInsertFunctionSorted(Heap, a1 + 16);
    }
  }
  return 0LL;
}
