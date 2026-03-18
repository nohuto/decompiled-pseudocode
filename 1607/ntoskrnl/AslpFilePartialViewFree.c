/*
 * XREFs of AslpFilePartialViewFree @ 0x1406C9C28
 * Callers:
 *     AslpFileLargeMapDelete @ 0x1406C9BD4 (AslpFileLargeMapDelete.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x14015A1C0 (ZwUnmapViewOfSection.c)
 *     MmUnsecureVirtualMemory @ 0x14042A5DC (MmUnsecureVirtualMemory.c)
 */

void __fastcall AslpFilePartialViewFree(__int64 a1)
{
  void *v2; // rcx

  if ( a1 )
  {
    v2 = *(void **)(a1 + 24);
    if ( v2 )
    {
      MmUnsecureVirtualMemory(v2);
      *(_QWORD *)(a1 + 24) = 0LL;
    }
    if ( *(_QWORD *)a1 )
    {
      ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *(PVOID *)a1);
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
    }
  }
}
