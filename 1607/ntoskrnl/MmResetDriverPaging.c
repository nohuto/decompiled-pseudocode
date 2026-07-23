/*
 * XREFs of MmResetDriverPaging @ 0x14047C8AC
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     MiLockCode @ 0x140015170 (MiLockCode.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MmImageSectionPagable @ 0x14047C974 (MmImageSectionPagable.c)
 *     MiCancelPhase0Locking @ 0x14047CA7C (MiCancelPhase0Locking.c)
 *     MiImagePagable @ 0x14047CAD0 (MiImagePagable.c)
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
  __int64 v9; // r8
  unsigned int v10; // edx
  unsigned __int64 PteAddress; // rax
  unsigned __int64 v12; // r10

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
        MiGetPteAddress((unsigned __int64)v3 + (unsigned int)i[3]);
        v10 = i[2];
        if ( i[4] >= v10 )
          v10 = i[4];
        PteAddress = MiGetPteAddress((unsigned __int64)v3 + v9 + v10 - 1);
        MiLockCode(v2, v12, PteAddress, 2);
      }
      i += 10;
    }
  }
}
