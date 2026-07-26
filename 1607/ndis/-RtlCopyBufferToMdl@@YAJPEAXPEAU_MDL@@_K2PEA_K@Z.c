/*
 * XREFs of ?RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z @ 0x1C004B048
 * Callers:
 *     NdisMFreeNetBufferSGList @ 0x1C000DE70 (NdisMFreeNetBufferSGList.c)
 * Callees:
 *     memmove @ 0x1C00271C0 (memmove.c)
 */

__int64 __fastcall RtlCopyBufferToMdl(
        char *Src,
        PMDL MemoryDescriptorList,
        unsigned __int64 a3,
        size_t a4,
        unsigned __int64 *a5)
{
  PMDL v7; // rbx
  unsigned __int64 ByteCount; // rax
  size_t v10; // rbp
  __int64 v11; // rsi
  char *MappedSystemVa; // rax
  size_t v13; // rsi
  char *v14; // rcx

  v7 = MemoryDescriptorList;
  for ( *a5 = 0LL; v7; a3 -= ByteCount )
  {
    ByteCount = v7->ByteCount;
    if ( a3 < ByteCount )
      break;
    v7 = v7->Next;
  }
  v10 = a4;
  while ( 1 )
  {
    if ( !v7 || !v10 )
    {
      *a5 = a4 - v10;
      return 0LL;
    }
    v11 = v7->ByteCount;
    if ( v7->ByteCount )
      break;
LABEL_14:
    v7 = v7->Next;
  }
  if ( (v7->MdlFlags & 5) != 0 )
    MappedSystemVa = (char *)v7->MappedSystemVa;
  else
    MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(v7, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
  if ( MappedSystemVa )
  {
    v13 = v11 - a3;
    v14 = &MappedSystemVa[a3];
    a3 = 0LL;
    if ( v10 < v13 )
      v13 = v10;
    memmove(v14, Src, v13);
    Src += v13;
    v10 -= v13;
    goto LABEL_14;
  }
  return 3221225626LL;
}
