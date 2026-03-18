/*
 * XREFs of MmResetDriverPaging @ 0x1403CF258
 * Callers:
 *     VerifierMmResetDriverPaging @ 0x1406C0AF8 (VerifierMmResetDriverPaging.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140037CD8 (RtlImageNtHeader.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiLockCode @ 0x1400B7B30 (MiLockCode.c)
 *     MmImageSectionPagable @ 0x1403CF324 (MmImageSectionPagable.c)
 *     MiImagePagable @ 0x1403CF474 (MiImagePagable.c)
 *     MiCancelPhase0Locking @ 0x1403CFE00 (MiCancelPhase0Locking.c)
 */

void __stdcall MmResetDriverPaging(PVOID AddressWithinSection)
{
  __int64 v1; // rax
  __int64 v2; // r14
  void *v3; // r15
  PIMAGE_NT_HEADERS v4; // rbx
  int NumberOfSections; // ebp
  _DWORD *v6; // rsi
  __int64 v7; // rbx
  __int64 PteAddress; // rax
  unsigned int v9; // edx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax

  v1 = MiImagePagable(0LL, AddressWithinSection);
  v2 = v1;
  if ( v1 )
  {
    v3 = *(void **)(v1 + 48);
    v4 = RtlImageNtHeader(v3);
    MiCancelPhase0Locking(v2);
    NumberOfSections = v4->FileHeader.NumberOfSections;
    v6 = (_DWORD *)((char *)&v4->OptionalHeader.Magic + v4->FileHeader.SizeOfOptionalHeader);
    if ( v4->FileHeader.NumberOfSections )
    {
      do
      {
        if ( (v6[9] & 0x2000000) == 0 && !(unsigned int)MmImageSectionPagable(v6) )
        {
          v7 = (unsigned int)v6[3];
          PteAddress = MiGetPteAddress((unsigned __int64)v3 + v7);
          v9 = v6[2];
          v10 = PteAddress;
          if ( v6[4] >= v9 )
            v9 = v6[4];
          v11 = MiGetPteAddress((unsigned __int64)v3 + v7 + v9 - 1);
          MiLockCode(v2, v10, v11, 2);
        }
        v6 += 10;
        --NumberOfSections;
      }
      while ( NumberOfSections );
    }
  }
}
