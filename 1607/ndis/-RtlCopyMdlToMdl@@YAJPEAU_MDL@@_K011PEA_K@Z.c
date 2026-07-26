/*
 * XREFs of ?RtlCopyMdlToMdl@@YAJPEAU_MDL@@_K011PEA_K@Z @ 0x1C00107A8
 * Callers:
 *     NdisCopyFromNetBufferToNetBuffer @ 0x1C004CD20 (NdisCopyFromNetBufferToNetBuffer.c)
 * Callees:
 *     memmove @ 0x1C00271C0 (memmove.c)
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
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbp
  char *MappedSystemVa; // r12
  char *v14; // r12
  unsigned __int64 v15; // rcx
  char *v16; // r15
  char *v17; // r15
  size_t v19; // r14
  unsigned __int64 v20; // rax
  unsigned __int64 ByteCount; // rax
  char *v22; // rax
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
  v10 = a5;
  if ( a5 && i && a3 )
  {
    v12 = i->ByteCount - a2;
    v24 = a5;
    if ( v12 > a5 )
      v12 = a5;
    if ( (i->MdlFlags & 5) != 0 )
      MappedSystemVa = (char *)i->MappedSystemVa;
    else
      MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(i, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
    if ( !MappedSystemVa )
      return 3221225626LL;
    v14 = &MappedSystemVa[a2];
    v15 = a3->ByteCount - a4;
    v25 = v15;
    if ( (a3->MdlFlags & 5) != 0 )
    {
      v16 = (char *)a3->MappedSystemVa;
    }
    else
    {
      v22 = (char *)MmMapLockedPagesSpecifyCache(a3, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
      v15 = v25;
      v16 = v22;
    }
    if ( !v16 )
      return 3221225626LL;
    v17 = &v16[a4];
    while ( 1 )
    {
LABEL_23:
      v19 = v12;
      if ( v15 < v12 )
        v19 = v15;
      memmove(v17, v14, v19);
      if ( v24 == v19 )
        break;
      v20 = v24 - v19;
      v24 -= v19;
      if ( v25 == v19 )
      {
        while ( 1 )
        {
          a3 = a3->Next;
          if ( !a3 )
            goto LABEL_30;
          v15 = a3->ByteCount;
          v25 = v15;
          if ( a3->ByteCount )
          {
            if ( (a3->MdlFlags & 5) != 0 )
            {
              v17 = (char *)a3->MappedSystemVa;
            }
            else
            {
              v23 = (char *)MmMapLockedPagesSpecifyCache(a3, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
              v15 = v25;
              v17 = v23;
            }
            if ( v17 )
            {
              v20 = v24;
              goto LABEL_34;
            }
            return 3221225626LL;
          }
        }
      }
      v17 += v19;
      v15 = v25 - v19;
      v25 -= v19;
LABEL_34:
      if ( v12 == v19 )
      {
        while ( 1 )
        {
          i = i->Next;
          if ( !i )
            break;
          v12 = i->ByteCount;
          if ( i->ByteCount )
          {
            if ( v12 > v20 )
              v12 = v20;
            if ( (i->MdlFlags & 5) != 0 )
              v14 = (char *)i->MappedSystemVa;
            else
              v14 = (char *)MmMapLockedPagesSpecifyCache(i, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
            if ( v14 )
            {
              v15 = v25;
              goto LABEL_23;
            }
            return 3221225626LL;
          }
        }
LABEL_30:
        v10 -= v20;
        break;
      }
      v14 += v19;
      v12 -= v19;
    }
    *a6 = v10;
  }
  else
  {
    *a6 = 0LL;
  }
  return 0LL;
}
