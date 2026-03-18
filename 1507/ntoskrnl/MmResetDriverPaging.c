/*
 * XREFs of MmResetDriverPaging @ 0x1404F523C
 * Callers:
 *     VerifierMmResetDriverPaging @ 0x140742338 (VerifierMmResetDriverPaging.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     MiLockCode @ 0x140010950 (MiLockCode.c)
 *     MmImageSectionPagable @ 0x1404F5320 (MmImageSectionPagable.c)
 *     MiCancelPhase0Locking @ 0x1404F5498 (MiCancelPhase0Locking.c)
 *     MiImagePagable @ 0x1404F5C58 (MiImagePagable.c)
 */

void __stdcall MmResetDriverPaging(PVOID AddressWithinSection)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  void *v3; // rbp
  PIMAGE_NT_HEADERS v4; // rbx
  __int64 SizeOfOptionalHeader; // rcx
  _IMAGE_OPTIONAL_HEADER64 *p_OptionalHeader; // rdi
  int NumberOfSections; // ebx
  _DWORD *i; // rdi
  unsigned int v9; // ecx

  v1 = MiImagePagable(0LL, AddressWithinSection);
  v2 = v1;
  if ( v1 )
  {
    v3 = *(void **)(v1 + 48);
    v4 = RtlImageNtHeader(v3);
    MiCancelPhase0Locking(v2);
    SizeOfOptionalHeader = v4->FileHeader.SizeOfOptionalHeader;
    p_OptionalHeader = &v4->OptionalHeader;
    NumberOfSections = v4->FileHeader.NumberOfSections;
    for ( i = (_DWORD *)((char *)&p_OptionalHeader->Magic + SizeOfOptionalHeader); NumberOfSections; --NumberOfSections )
    {
      if ( (i[9] & 0x2000000) == 0 && !(unsigned int)MmImageSectionPagable(i) )
      {
        v9 = i[2];
        if ( i[4] >= v9 )
          v9 = i[4];
        MiLockCode(
          v2,
          (ULONG_PTR *)(((((unsigned __int64)v3 + (unsigned int)i[3]) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
          ((((unsigned __int64)v3 + (unsigned int)i[3] + (unsigned __int64)v9 - 1) >> 9) & 0x7FFFFFFFF8LL)
        - 0x98000000000LL,
          2);
      }
      i += 10;
    }
  }
}
