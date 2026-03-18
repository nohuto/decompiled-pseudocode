/*
 * XREFs of IopLiveDumpFreeDumpBuffers @ 0x140677CBC
 * Callers:
 *     IopLiveDumpAllocateDumpBuffers @ 0x140677924 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpReleaseResources @ 0x140677FBC (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x140678288 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x1406783E0 (IopLiveDumpWriteDumpFileWithHvPages.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall IopLiveDumpFreeDumpBuffers(__int64 a1)
{
  unsigned __int64 i; // rdi
  void *v3; // rcx
  void *v4; // rcx

  if ( a1 )
  {
    for ( i = 0LL; i < *(_QWORD *)(a1 + 56); ++i )
    {
      v3 = *(void **)(*(_QWORD *)(a1 + 64) + 8 * i);
      if ( v3 )
      {
        ExFreePoolWithTag(v3, 0x706D644Cu);
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
