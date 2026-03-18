/*
 * XREFs of IopLiveDumpFreeDumpBuffers @ 0x140626FD8
 * Callers:
 *     IopLiveDumpAllocateDumpBuffers @ 0x140626C5C (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpReleaseResources @ 0x1406272E8 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x140627610 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x14062782C (IopLiveDumpWriteDumpFileWithHvPages.c)
 * Callees:
 *     VslIsSecureKernelRunning @ 0x1400B5F98 (VslIsSecureKernelRunning.c)
 *     VslAbortLiveDump @ 0x1401C25F0 (VslAbortLiveDump.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MmFreeIndependentPages @ 0x1403E1F14 (MmFreeIndependentPages.c)
 */

void __fastcall IopLiveDumpFreeDumpBuffers(__int64 a1)
{
  unsigned __int64 i; // rdi
  unsigned __int64 v3; // rcx
  void *v4; // rcx

  if ( a1 )
  {
    if ( VslIsSecureKernelRunning() )
      VslAbortLiveDump();
    for ( i = 0LL; i < *(_QWORD *)(a1 + 56); ++i )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * i);
      if ( v3 )
      {
        MmFreeIndependentPages(v3, 0x40000uLL);
        *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * i) = 0LL;
      }
    }
    v4 = *(void **)(a1 + 64);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x706D644Cu);
      *(_QWORD *)(a1 + 64) = 0LL;
    }
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_DWORD *)(a1 + 32) = 0;
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
