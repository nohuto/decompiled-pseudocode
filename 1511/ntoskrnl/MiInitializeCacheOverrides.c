/*
 * XREFs of MiInitializeCacheOverrides @ 0x14076EF1C
 * Callers:
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 * Callees:
 *     xHalSetSystemInformation @ 0x14054F598 (xHalSetSystemInformation.c)
 */

unsigned __int64 MiInitializeCacheOverrides()
{
  __int64 v0; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 *v2; // rcx
  __int64 v3; // rdx
  unsigned __int64 *v4; // rcx
  char v5; // [rsp+30h] [rbp+8h]

  v0 = 7LL;
  off_1402D29C8();
  result = off_1402D29C8();
  if ( (result & 0x80000000) != 0LL || v5 )
  {
    v2 = (unsigned __int64 *)&unk_1403813C8;
    v3 = 7LL;
    do
    {
      *v2 = *v2 & 0xFFFFFFFFFFFFFFE7uLL | 8;
      ++v2;
      --v3;
    }
    while ( v3 );
    v4 = (unsigned __int64 *)&unk_1403814C8;
    do
    {
      result = *v4 & 0xFFFFFFFFFFFFFFE7uLL | 8;
      *v4++ = result;
      --v0;
    }
    while ( v0 );
  }
  return result;
}
