/*
 * XREFs of IopGetPhysicalMemoryBlock @ 0x140140DD4
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x140126DAC (IopLoadCrashdumpDriver.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1401B875C (IoUpdateDumpPhysicalRanges.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1405FCA38 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MmGetPhysicalMemoryRanges @ 0x140484B04 (MmGetPhysicalMemoryRanges.c)
 */

char *IopGetPhysicalMemoryBlock()
{
  char *v0; // r14
  PPHYSICAL_MEMORY_RANGE PhysicalMemoryRanges; // rax
  PPHYSICAL_MEMORY_RANGE v2; // rbx
  LARGE_INTEGER *p_NumberOfBytes; // rdi
  unsigned int v4; // esi
  __int64 QuadPart; // rax
  __int64 v6; // r15
  unsigned __int64 v7; // rax
  __int64 v8; // rbp
  unsigned int v9; // r12d
  char *PoolWithTag; // rax
  signed __int64 v11; // rcx
  __int64 v12; // rax

  v0 = 0LL;
  PhysicalMemoryRanges = MmGetPhysicalMemoryRanges();
  v2 = PhysicalMemoryRanges;
  if ( !PhysicalMemoryRanges )
    return v0;
  p_NumberOfBytes = &PhysicalMemoryRanges->NumberOfBytes;
  v4 = 0;
  QuadPart = PhysicalMemoryRanges->NumberOfBytes.QuadPart;
  v6 = 0LL;
  if ( QuadPart )
  {
    do
    {
      ++v4;
      v6 += QuadPart >> 12;
      QuadPart = v2[v4].NumberOfBytes.QuadPart;
    }
    while ( QuadPart );
    if ( v4 )
    {
      v7 = 16LL * v4;
      v8 = v4;
      if ( v7 <= 0xFFFFFFFF && (int)v7 + 32 >= (unsigned int)v7 )
      {
        v9 = v7 + 32;
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v7 + 32), 0x706D4443u);
        v0 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v9);
          *(_DWORD *)v0 = v4;
          *((_QWORD *)v0 + 1) = v6;
          v11 = v0 - (char *)v2;
          do
          {
            *(LONGLONG *)((char *)&p_NumberOfBytes[1].QuadPart + v11) = p_NumberOfBytes[-1].QuadPart >> 12;
            v12 = p_NumberOfBytes->QuadPart;
            p_NumberOfBytes += 2;
            *(LONGLONG *)((char *)&p_NumberOfBytes->QuadPart + v11) = v12 >> 12;
            --v8;
          }
          while ( v8 );
          ExFreePoolWithTag(v2, 0);
          return v0;
        }
      }
    }
  }
  ExFreePoolWithTag(v2, 0);
  return 0LL;
}
