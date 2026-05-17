/*
 * XREFs of RtlComputeImportTableHash @ 0x1800D3400
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180031EE0 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeader @ 0x180032600 (RtlImageNtHeader.c)
 *     RtlAddressInSectionTable @ 0x18007C2B0 (RtlAddressInSectionTable.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A55C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A5600 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A5A00 (NtCreateSection.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x1800D3108 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_S.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0?IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x1800D31C8 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0-IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPO.c)
 *     ImportTablepHashCanonicalLists @ 0x1800D3298 (ImportTablepHashCanonicalLists.c)
 *     ImportTablepInsertFunctionSorted @ 0x1800D3380 (ImportTablepInsertFunctionSorted.c)
 *     RtlFlushSecureMemoryCache @ 0x1800E4010 (RtlFlushSecureMemoryCache.c)
 */

__int64 __fastcall RtlComputeImportTableHash(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+58h] [rbp-28h]
  __int64 v6; // [rsp+68h] [rbp-18h]
  __int64 v7; // [rsp+C8h] [rbp+48h]

  v5 = 0LL;
  v7 = 0LL;
  v6 = 0LL;
  if ( a3 == 1 )
  {
    NtCreateSection();
    v3 = -1073741816;
    if ( v7
      && (unsigned int)NtUnmapViewOfSection() == -1073741755
      && (unsigned __int8)RtlFlushSecureMemoryCache(v7, 0LL) )
    {
      NtUnmapViewOfSection();
    }
  }
  else
  {
    return (unsigned int)-1073741736;
  }
  return v3;
}
