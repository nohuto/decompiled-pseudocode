/*
 * XREFs of ?RtlCopyMdlToMdl@@YAJPEAU_MDL@@_K011PEA_K@Z @ 0x1C0045B60
 * Callers:
 *     NdisCopyFromNetBufferToNetBuffer @ 0x1C0047620 (NdisCopyFromNetBufferToNetBuffer.c)
 * Callees:
 *     memmove @ 0x1C0023700 (memmove.c)
 */

__int64 __fastcall RtlCopyMdlToMdl(
        PMDL MemoryDescriptorList,
        unsigned __int64 a2,
        struct _MDL *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  PMDL i; // rdi
  unsigned __int64 ByteCount; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rbp
  char *MappedSystemVa; // r12
  char *v16; // r12
  unsigned __int64 v17; // rcx
  char *v18; // r15
  char *v19; // rax
  char *v20; // r15
  size_t v21; // r14
  unsigned __int64 v22; // rax
  char *v23; // rax
  unsigned __int64 v24; // [rsp+60h] [rbp+8h]
  unsigned __int64 v25; // [rsp+80h] [rbp+28h]

  for ( i = MemoryDescriptorList; i; a2 -= ByteCount )
  {
    ByteCount = i->ByteCount;
    if ( a2 < ByteCount )
      break;
    i = i->Next;
  }
  while ( a3 )
  {
    v11 = a3->ByteCount;
    if ( a4 < v11 )
      break;
    a3 = a3->Next;
    a4 -= v11;
  }
  v12 = a5;
  if ( a5 && i && a3 )
  {
    v13 = i->ByteCount - a2;
    v24 = a5;
    if ( v13 > a5 )
      v13 = a5;
    if ( (i->MdlFlags & 5) != 0 )
      MappedSystemVa = (char *)i->MappedSystemVa;
    else
      MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(i, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
    if ( !MappedSystemVa )
      return 3221225626LL;
    v16 = &MappedSystemVa[a2];
    v17 = a3->ByteCount - a4;
    v25 = v17;
    if ( (a3->MdlFlags & 5) != 0 )
    {
      v18 = (char *)a3->MappedSystemVa;
    }
    else
    {
      v19 = (char *)MmMapLockedPagesSpecifyCache(a3, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
      v17 = v25;
      v18 = v19;
    }
    if ( !v18 )
      return 3221225626LL;
    v20 = &v18[a4];
    while ( 1 )
    {
LABEL_23:
      v21 = v13;
      if ( v17 < v13 )
        v21 = v17;
      memmove(v20, v16, v21);
      if ( v24 == v21 )
        break;
      v22 = v24 - v21;
      v24 -= v21;
      if ( v25 == v21 )
      {
        while ( 1 )
        {
          a3 = a3->Next;
          if ( !a3 )
            goto LABEL_46;
          v17 = a3->ByteCount;
          v25 = v17;
          if ( a3->ByteCount )
          {
            if ( (a3->MdlFlags & 5) != 0 )
            {
              v20 = (char *)a3->MappedSystemVa;
            }
            else
            {
              v23 = (char *)MmMapLockedPagesSpecifyCache(a3, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
              v17 = v25;
              v20 = v23;
            }
            if ( v20 )
            {
              v22 = v24;
              goto LABEL_35;
            }
            return 3221225626LL;
          }
        }
      }
      v20 += v21;
      v17 = v25 - v21;
      v25 -= v21;
LABEL_35:
      if ( v13 == v21 )
      {
        while ( 1 )
        {
          i = i->Next;
          if ( !i )
            break;
          v13 = i->ByteCount;
          if ( i->ByteCount )
          {
            if ( v13 > v22 )
              v13 = v22;
            if ( (i->MdlFlags & 5) != 0 )
              v16 = (char *)i->MappedSystemVa;
            else
              v16 = (char *)MmMapLockedPagesSpecifyCache(i, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
            if ( v16 )
            {
              v17 = v25;
              goto LABEL_23;
            }
            return 3221225626LL;
          }
        }
LABEL_46:
        v12 -= v22;
        break;
      }
      v16 += v21;
      v13 -= v21;
    }
    *a6 = v12;
  }
  else
  {
    *a6 = 0LL;
  }
  return 0LL;
}
