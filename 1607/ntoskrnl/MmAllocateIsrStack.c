/*
 * XREFs of MmAllocateIsrStack @ 0x14054E5A4
 * Callers:
 *     KiStartDynamicProcessor @ 0x14064F124 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140792860 (KeStartAllProcessors.c)
 * Callees:
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MmSetPageProtection @ 0x1400B0300 (MmSetPageProtection.c)
 *     MmAllocateIndependentPages @ 0x1404C8A68 (MmAllocateIndependentPages.c)
 *     MiMarkBootGuardPage @ 0x14054E61C (MiMarkBootGuardPage.c)
 */

char __fastcall MmAllocateIsrStack(_QWORD *a1, unsigned __int16 a2, unsigned __int64 a3)
{
  __int64 IndependentPages; // rax
  unsigned __int64 v5; // rbx
  __int64 PteAddress; // rax
  unsigned __int64 v8; // rbx

  if ( *a1 )
  {
    v8 = *a1 - 24576LL;
    if ( MmSetPageProtection(v8, 0x6000uLL) )
    {
      v5 = v8 - 4096;
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
      PteAddress = MiGetPteAddress(v5);
      MiMarkBootGuardPage(PteAddress);
      return 1;
    }
  }
  return 0;
}
