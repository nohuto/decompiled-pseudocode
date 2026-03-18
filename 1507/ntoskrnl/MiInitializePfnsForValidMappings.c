/*
 * XREFs of MiInitializePfnsForValidMappings @ 0x1407C47D0
 * Callers:
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     MxCreatePfns @ 0x1407C6C34 (MxCreatePfns.c)
 *     MxZeroPageTablePfns @ 0x1407C7B48 (MxZeroPageTablePfns.c)
 */

void __fastcall MiInitializePfnsForValidMappings(__int64 a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  __int64 v4; // rax

  v2 = 0xFFFFF6C000000000uLL;
  v3 = 0xFFFFF6FFFFFFFFF8uLL;
  v4 = 3LL;
  do
  {
    v2 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v4;
  }
  while ( v4 );
  MxZeroPageTablePfns(v2, v3, 3LL, a1);
  MxCreatePfns(v2, v3, 3LL, a1);
  KeFlushCurrentTbOnly(0);
}
