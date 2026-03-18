/*
 * XREFs of MiMarkKernelPageTablesHelper @ 0x1403F238C
 * Callers:
 *     MiMarkKernelPageTablePages @ 0x1403F1558 (MiMarkKernelPageTablePages.c)
 *     MiMarkKernelPageTablesHelper @ 0x1403F238C (MiMarkKernelPageTablesHelper.c)
 * Callees:
 *     PoSetHiberRange @ 0x14014D3AC (PoSetHiberRange.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiMarkKernelPageTablesHelper @ 0x1403F238C (MiMarkKernelPageTablesHelper.c)
 */

void __fastcall MiMarkKernelPageTablesHelper(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 i; // rdi
  unsigned __int64 PteShadow; // rbx

  if ( a3 != 1 )
  {
    for ( i = a1; i <= a2; i += 8LL )
    {
      PteShadow = *(_QWORD *)i;
      if ( (*(_QWORD *)i & 1) != 0 && (a3 != 2 || (PteShadow & 0x80u) == 0LL) )
      {
        if ( MiPteInShadowRange(i) )
          PteShadow = MiReadPteShadow(i, PteShadow);
        PoSetHiberRange(0LL, 0x14000u, (PVOID)((PteShadow >> 12) & 0xFFFFFFFFFLL), 1uLL, 0x706B6D4Du);
        MiMarkKernelPageTablesHelper(
          (__int64)(i << 25) >> 16,
          ((__int64)(i << 25) >> 16) + 4088,
          (unsigned int)(a3 - 1));
      }
    }
  }
}
