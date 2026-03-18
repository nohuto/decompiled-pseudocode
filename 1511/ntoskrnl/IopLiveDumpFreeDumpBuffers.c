/*
 * XREFs of IopLiveDumpFreeDumpBuffers @ 0x1405FD364
 * Callers:
 *     IopLiveDumpAllocateDumpBuffers @ 0x1405FCFE8 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpReleaseResources @ 0x1405FD674 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x1405FD944 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x1405FDA9C (IopLiveDumpWriteDumpFileWithHvPages.c)
 * Callees:
 *     VslIsSecureKernelRunning @ 0x1401429E8 (VslIsSecureKernelRunning.c)
 *     HvlAbortLiveDump @ 0x1401B2FB8 (HvlAbortLiveDump.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MmFreeIndependentPages @ 0x1403C5554 (MmFreeIndependentPages.c)
 */

void __fastcall IopLiveDumpFreeDumpBuffers(__int64 a1)
{
  unsigned __int64 i; // rdi
  unsigned __int64 v3; // rcx
  void *v4; // rcx

  if ( a1 )
  {
    if ( VslIsSecureKernelRunning() )
      HvlAbortLiveDump();
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
