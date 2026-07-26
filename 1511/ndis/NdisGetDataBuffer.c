/*
 * XREFs of NdisGetDataBuffer @ 0x1C000CE60
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0026C00 (memmove.c)
 */

PVOID __stdcall NdisGetDataBuffer(
        PNET_BUFFER NetBuffer,
        ULONG BytesNeeded,
        PVOID Storage,
        UINT AlignMultiple,
        UINT AlignOffset)
{
  _MDL *CurrentMdl; // rbx
  unsigned __int64 CurrentMdlOffset; // rdi
  size_t v9; // rsi
  char *v10; // rax
  PVOID result; // rax
  char *v12; // r12
  unsigned __int64 ByteCount; // rax
  size_t v14; // r15
  __int64 v15; // rbp
  char *MappedSystemVa; // rax
  char *v17; // rax
  size_t v18; // rbp

  CurrentMdl = NetBuffer->CurrentMdl;
  if ( !BytesNeeded || !CurrentMdl || NetBuffer->DataLength < BytesNeeded )
    return 0LL;
  CurrentMdlOffset = NetBuffer->CurrentMdlOffset;
  v9 = BytesNeeded;
  if ( BytesNeeded + CurrentMdlOffset > CurrentMdl->ByteCount
    || ((CurrentMdl->MdlFlags & 5) == 0
      ? (v10 = (char *)MmMapLockedPagesSpecifyCache(CurrentMdl, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag))
      : (v10 = (char *)CurrentMdl->MappedSystemVa),
        !v10
     || (result = &v10[CurrentMdlOffset], ((unsigned int)result & (AlignMultiple - 1)) != (unsigned __int64)AlignOffset)) )
  {
    if ( Storage )
    {
      v12 = (char *)Storage;
      do
      {
        ByteCount = CurrentMdl->ByteCount;
        if ( CurrentMdlOffset < ByteCount )
          break;
        CurrentMdl = CurrentMdl->Next;
        CurrentMdlOffset -= ByteCount;
      }
      while ( CurrentMdl );
      v14 = v9;
      if ( CurrentMdl )
      {
        while ( v14 )
        {
          v15 = CurrentMdl->ByteCount;
          if ( CurrentMdl->ByteCount )
          {
            if ( (CurrentMdl->MdlFlags & 5) != 0 )
              MappedSystemVa = (char *)CurrentMdl->MappedSystemVa;
            else
              MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(
                                         CurrentMdl,
                                         0,
                                         MmCached,
                                         0LL,
                                         0,
                                         ndisMdlMappingNxFlag);
            if ( !MappedSystemVa )
              return 0LL;
            v17 = &MappedSystemVa[CurrentMdlOffset];
            v18 = v15 - CurrentMdlOffset;
            CurrentMdlOffset = 0LL;
            if ( v14 < v18 )
              v18 = v14;
            memmove(v12, v17, v18);
            v12 += v18;
            v14 -= v18;
          }
          CurrentMdl = CurrentMdl->Next;
          if ( !CurrentMdl )
            break;
        }
      }
      if ( v9 - v14 == v9 )
        return Storage;
      else
        return 0LL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
