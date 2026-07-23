/*
 * XREFs of ExCreatePoolTagTable @ 0x14054ED40
 * Callers:
 *     KiStartDynamicProcessor @ 0x14064F124 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140792860 (KeStartAllProcessors.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     MmAllocateIndependentPages @ 0x1404C8A68 (MmAllocateIndependentPages.c)
 */

void *__fastcall ExCreatePoolTagTable(unsigned int a1, unsigned __int16 a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  void *IndependentPages; // rax
  void *v5; // rbx

  v3 = a1;
  if ( (unsigned __int64)PoolTrackTableSize >= 0x666666666666665LL )
    return 0LL;
  IndependentPages = (void *)MmAllocateIndependentPages(40 * (PoolTrackTableSize + 1), a2, a3);
  v5 = IndependentPages;
  if ( IndependentPages )
  {
    memset(IndependentPages, 0, 40 * PoolTrackTableSize);
    *(&ExPoolTagTables + v3) = v5;
  }
  return v5;
}
