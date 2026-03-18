/*
 * XREFs of MiMarkKernelPageTablePages @ 0x14039ECA0
 * Callers:
 *     MmMarkHiberPhase @ 0x14039EE0C (MmMarkHiberPhase.c)
 * Callees:
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiMarkKernelPageTablesHelper @ 0x14039F9D0 (MiMarkKernelPageTablesHelper.c)
 */

__int64 MiMarkKernelPageTablePages()
{
  unsigned __int64 PteAddress; // rbx
  unsigned __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rax

  PteAddress = (unsigned __int64)MmSystemRangeStart;
  if ( (unsigned __int64)MmSystemRangeStart < 0xFFFFF68000000000uLL )
  {
    v1 = 0xFFFFF67FFFFFFFFFuLL;
    v2 = 4LL;
    do
    {
      PteAddress = MiGetPteAddress(PteAddress);
      v3 = MiGetPteAddress(v1);
      v1 = v3;
      --v2;
    }
    while ( v2 );
    MiMarkKernelPageTablesHelper(PteAddress, v3, 4LL);
  }
  v4 = 0xFFFFF70000000000uLL;
  v5 = -1LL;
  v6 = 4LL;
  do
  {
    v4 = MiGetPteAddress(v4);
    v7 = MiGetPteAddress(v5);
    v5 = v7;
    --v6;
  }
  while ( v6 );
  return MiMarkKernelPageTablesHelper(v4, v7, 4LL);
}
