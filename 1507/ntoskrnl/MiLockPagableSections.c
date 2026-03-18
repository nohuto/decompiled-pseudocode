/*
 * XREFs of MiLockPagableSections @ 0x1407C9688
 * Callers:
 *     MiCancelPhase0Locking @ 0x1404F5498 (MiCancelPhase0Locking.c)
 *     MiUnlockBootPageSections @ 0x1407C9590 (MiUnlockBootPageSections.c)
 *     MiEnablePagingTheExecutive @ 0x1407C9640 (MiEnablePagingTheExecutive.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x140010490 (MiLockPagableImageSection.c)
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     MmImageSectionPagable @ 0x1404F5320 (MmImageSectionPagable.c)
 *     MiImagePagable @ 0x1404F5C58 (MiImagePagable.c)
 *     MmLockPagableDataSection @ 0x14052F798 (MmLockPagableDataSection.c)
 */

void __fastcall MiLockPagableSections(__int64 a1, int a2)
{
  char *v2; // rsi
  PIMAGE_NT_HEADERS v4; // rax
  int NumberOfSections; // edi
  __int64 v6; // rbx

  v2 = *(char **)(a1 + 48);
  if ( MiImagePagable((PVOID *)a1, (unsigned __int64)v2) )
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
