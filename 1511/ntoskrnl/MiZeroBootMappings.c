/*
 * XREFs of MiZeroBootMappings @ 0x140745DDC
 * Callers:
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 * Callees:
 *     MxZeroBootMappings @ 0x140747A20 (MxZeroBootMappings.c)
 */

void MiZeroBootMappings()
{
  unsigned __int64 v0; // rcx
  __int64 v1; // rax
  unsigned __int64 v2; // rdx

  v0 = 0xFFFFF68000000000uLL;
  v1 = 3LL;
  v2 = 0xFFFFF6C000000000uLL;
  do
  {
    v0 = ((v0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v2 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v1;
  }
  while ( v1 );
  MxZeroBootMappings(v0, v2);
  KeFlushCurrentTbOnly(1);
}
