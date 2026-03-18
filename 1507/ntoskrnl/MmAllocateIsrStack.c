/*
 * XREFs of MmAllocateIsrStack @ 0x14059A694
 * Callers:
 *     KiStartDynamicProcessor @ 0x14069849C (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1407D3888 (KeStartAllProcessors.c)
 * Callees:
 *     MmSetPageProtection @ 0x14013821C (MmSetPageProtection.c)
 *     MmAllocateIndependentPages @ 0x1405610B8 (MmAllocateIndependentPages.c)
 *     MiMarkBootGuardPage @ 0x14059A720 (MiMarkBootGuardPage.c)
 */

char __fastcall MmAllocateIsrStack(_QWORD *a1, unsigned __int16 a2, unsigned __int64 a3)
{
  __int64 IndependentPages; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // rbx

  if ( *a1 )
  {
    v7 = *a1 - 24576LL;
    if ( MmSetPageProtection(v7, 0x6000uLL, 4u) )
    {
      v5 = v7 - 4096;
      goto LABEL_4;
    }
  }
  else
  {
    IndependentPages = MmAllocateIndependentPages(0x7000uLL, a2, a3);
    v5 = IndependentPages;
    if ( IndependentPages )
    {
      *a1 = IndependentPages + 28672;
LABEL_4:
      MiMarkBootGuardPage(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      return 1;
    }
  }
  return 0;
}
