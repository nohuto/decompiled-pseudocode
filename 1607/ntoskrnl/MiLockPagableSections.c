/*
 * XREFs of MiLockPagableSections @ 0x1407A41E0
 * Callers:
 *     MiCancelPhase0Locking @ 0x14047DD28 (MiCancelPhase0Locking.c)
 *     MiUnlockBootPageSections @ 0x1407A412C (MiUnlockBootPageSections.c)
 *     MiEnablePagingTheExecutive @ 0x1407A4198 (MiEnablePagingTheExecutive.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140014238 (RtlImageNtHeader.c)
 *     MiLockPagableImageSection @ 0x140014884 (MiLockPagableImageSection.c)
 *     MmImageSectionPagable @ 0x14047DC20 (MmImageSectionPagable.c)
 *     MiImagePagable @ 0x14047DD7C (MiImagePagable.c)
 *     MmLockPagableDataSection @ 0x1404830A8 (MmLockPagableDataSection.c)
 */

void __fastcall MiLockPagableSections(__int64 a1, int a2)
{
  char *v2; // rsi
  PIMAGE_NT_HEADERS v4; // rax
  int NumberOfSections; // edi
  __int64 v6; // rbx

  v2 = *(char **)(a1 + 48);
  if ( MiImagePagable(a1, (unsigned __int64)v2) )
  {
    v4 = RtlImageNtHeader(v2);
    NumberOfSections = v4->FileHeader.NumberOfSections;
    v6 = (__int64)&v4->OptionalHeader + v4->FileHeader.SizeOfOptionalHeader;
    if ( v4->FileHeader.NumberOfSections )
    {
      do
      {
        if ( (unsigned int)MmImageSectionPagable(v6) )
        {
          if ( a2 == 1 )
            MmLockPagableDataSection(&v2[*(unsigned int *)(v6 + 12)]);
          else
            MiLockPagableImageSection(v6, 0LL);
        }
        v6 += 40LL;
        --NumberOfSections;
      }
      while ( NumberOfSections );
    }
  }
}
