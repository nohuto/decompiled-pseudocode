/*
 * XREFs of HvlpPreallocatePageListResources @ 0x1406206D8
 * Callers:
 *     PopPreallocateHibernateMemory @ 0x14056D238 (PopPreallocateHibernateMemory.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     MmAllocateIndependentPages @ 0x1404C8A68 (MmAllocateIndependentPages.c)
 */

__int64 __fastcall HvlpPreallocatePageListResources(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // ebx
  void *IndependentPages; // rax

  v3 = 0;
  if ( !HvlpFallbackScratchPage )
  {
    IndependentPages = (void *)MmAllocateIndependentPages(0x1000uLL, -1, a3);
    HvlpFallbackScratchPage = IndependentPages;
    if ( IndependentPages )
      memset(IndependentPages, 0, 0x1000uLL);
    else
      return (unsigned int)-1073741670;
  }
  return v3;
}
