/*
 * XREFs of MiZeroBootMappings @ 0x14078F9DC
 * Callers:
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     MxZeroBootMappings @ 0x1407B2838 (MxZeroBootMappings.c)
 */

void MiZeroBootMappings()
{
  unsigned __int64 v0; // rcx
  unsigned __int64 v1; // rdx
  __int64 v2; // r9

  v0 = 0xFFFFF68000000000uLL;
  v1 = 0xFFFFF6C000000000uLL;
  v2 = 3LL;
  do
  {
    v0 = ((v0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v2;
  }
  while ( v2 );
  MxZeroBootMappings(v0, v1);
  KeFlushCurrentTbOnly(1);
}
