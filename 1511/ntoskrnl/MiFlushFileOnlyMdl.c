/*
 * XREFs of MiFlushFileOnlyMdl @ 0x1401E35D4
 * Callers:
 *     MiGatherMappedPages @ 0x14002EDB4 (MiGatherMappedPages.c)
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14003A290 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     MiPersistMemory @ 0x1401E398C (MiPersistMemory.c)
 */

__int64 __fastcall MiFlushFileOnlyMdl(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  PVOID v9; // rsi
  unsigned int v10; // ebp
  __int64 *i; // r15
  unsigned __int64 v12; // rbx
  unsigned __int8 v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = a3;
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
      v12 = MiMapPageInHyperSpaceWorker(*i, &v14, 0x80000000);
      MiPersistMemory(v12, 4096LL);
      MiUnmapPageInHyperSpaceWorker(v12, v14);
    }
    ++v10;
  }
  *(_DWORD *)a4 = 0;
  *(_QWORD *)(a4 + 8) = v8 << 12;
  return 0LL;
}
