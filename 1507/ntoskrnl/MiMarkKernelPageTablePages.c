/*
 * XREFs of MiMarkKernelPageTablePages @ 0x1403F1558
 * Callers:
 *     MmMarkHiberPhase @ 0x1403F16C0 (MmMarkHiberPhase.c)
 * Callees:
 *     MiMarkKernelPageTablesHelper @ 0x1403F238C (MiMarkKernelPageTablesHelper.c)
 */

__int64 MiMarkKernelPageTablePages()
{
  unsigned __int64 v0; // rcx
  unsigned __int64 v1; // rdx
  __int64 v2; // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // rax

  v0 = (unsigned __int64)MmSystemRangeStart;
  if ( (unsigned __int64)MmSystemRangeStart < 0xFFFFF68000000000uLL )
  {
    v1 = 0xFFFFF67FFFFFFFFFuLL;
    v2 = 4LL;
    do
    {
      v0 = ((v0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v2;
    }
    while ( v2 );
    MiMarkKernelPageTablesHelper(v0, v1, 4LL);
  }
  v3 = 0xFFFFF70000000000uLL;
  v4 = -1LL;
  v5 = 4LL;
  do
  {
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v5;
  }
  while ( v5 );
  return MiMarkKernelPageTablesHelper(v3, v4, 4LL);
}
