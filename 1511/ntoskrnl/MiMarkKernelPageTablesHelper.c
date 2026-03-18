/*
 * XREFs of MiMarkKernelPageTablesHelper @ 0x14039F9D0
 * Callers:
 *     MiMarkKernelPageTablePages @ 0x14039ECA0 (MiMarkKernelPageTablePages.c)
 *     MiMarkKernelPageTablesHelper @ 0x14039F9D0 (MiMarkKernelPageTablesHelper.c)
 * Callees:
 *     PoSetHiberRange @ 0x1401188B0 (PoSetHiberRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMarkKernelPageTablesHelper @ 0x14039F9D0 (MiMarkKernelPageTablesHelper.c)
 */

void __fastcall MiMarkKernelPageTablesHelper(__int64 *a1, unsigned __int64 a2, int a3)
{
  __int64 *i; // rbx
  unsigned __int64 v6; // rax

  if ( a3 != 1 )
  {
    for ( i = a1; (unsigned __int64)i <= a2; ++i )
    {
      if ( (*i & 1) != 0 && (a3 != 2 || (*i & 0x80u) == 0LL) )
      {
        v6 = MI_READ_PTE_LOCK_FREE(i);
        PoSetHiberRange(0LL, 0x14000u, (PVOID)((v6 >> 12) & 0xFFFFFFFFFLL), 1uLL, 0x706B6D4Du);
        MiMarkKernelPageTablesHelper(
          (__int64)((_QWORD)i << 25) >> 16,
          ((__int64)((_QWORD)i << 25) >> 16) + 4088,
          (unsigned int)(a3 - 1));
      }
    }
  }
}
