/*
 * XREFs of MiFlushFileOnlyMdl @ 0x1401ED6C8
 * Callers:
 *     MiGatherMappedPages @ 0x1400201F0 (MiGatherMappedPages.c)
 *     MiFlushSectionInternal @ 0x140029DB0 (MiFlushSectionInternal.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001DBA0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MmUnmapLockedPages @ 0x140025D10 (MmUnmapLockedPages.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034990 (MiMapPageInHyperSpaceWorker.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DE220 (MmMapLockedPagesSpecifyCache.c)
 *     MiPersistMemory @ 0x1401EDA3C (MiPersistMemory.c)
 */

__int64 __fastcall MiFlushFileOnlyMdl(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  PVOID v9; // rsi
  unsigned int v10; // ebp
  __int64 *i; // r15
  __int64 v12; // rbx
  __int64 v13; // rdx
  unsigned __int8 v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = a3;
  v6 = *(unsigned int *)(a2 + 40);
  v7 = (*(_DWORD *)(a2 + 32) + *(_DWORD *)(a2 + 44)) & 0xFFF;
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_DWORD *)a4 = 0;
  v8 = (unsigned __int64)(v7 + v6 + 4095) >> 12;
  if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
    v9 = *(PVOID *)(a2 + 24);
  else
    v9 = MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0xC0000010);
  if ( v9 )
  {
    MiPersistMemory(v9, v8 << 12);
    MmUnmapLockedPages(*(PVOID *)(a2 + 24), (PMDL)a2);
  }
  v10 = 0;
  for ( i = (__int64 *)(a2 + 48); v10 < v8; ++i )
  {
    if ( !v9 )
    {
      v12 = MiMapPageInHyperSpaceWorker(*i, &v15, 0x80000000);
      MiPersistMemory(v12, 4096LL);
      LOBYTE(v13) = v15;
      MiUnmapPageInHyperSpaceWorker(v12, v13);
    }
    ++v10;
  }
  *(_DWORD *)a4 = 0;
  *(_QWORD *)(a4 + 8) = v8 << 12;
  return 0LL;
}
