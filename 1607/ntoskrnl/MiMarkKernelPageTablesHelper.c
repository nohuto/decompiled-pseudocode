/*
 * XREFs of MiMarkKernelPageTablesHelper @ 0x1403CB6B0
 * Callers:
 *     MiMarkKernelPageTablePages @ 0x1403CA8B8 (MiMarkKernelPageTablePages.c)
 *     MiMarkKernelPageTablesHelper @ 0x1403CB6B0 (MiMarkKernelPageTablesHelper.c)
 * Callees:
 *     PoSetHiberRange @ 0x1401133D0 (PoSetHiberRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMarkKernelPageTablesHelper @ 0x1403CB6B0 (MiMarkKernelPageTablesHelper.c)
 */

void __fastcall MiMarkKernelPageTablesHelper(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 i; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // r9

  if ( a3 != 1 )
  {
    for ( i = a1; i <= a2; i += 8LL )
    {
      if ( (*(_QWORD *)i & 1) != 0 && (*(_QWORD *)i & 0x80u) == 0LL )
      {
        v6 = MI_READ_PTE_LOCK_FREE(i);
        PoSetHiberRange(0LL, 0x14000u, (PVOID)(v7 & (v6 >> 12)), 1uLL, 0x706B6D4Du);
        MiMarkKernelPageTablesHelper(
          (__int64)(i << 25) >> 16,
          ((__int64)(i << 25) >> 16) + 4088,
          (unsigned int)(a3 - 1));
      }
    }
  }
}
