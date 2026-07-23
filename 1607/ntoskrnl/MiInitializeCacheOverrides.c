/*
 * XREFs of MiInitializeCacheOverrides @ 0x14078F594
 * Callers:
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     xHalSetSystemInformation @ 0x140581DF0 (xHalSetSystemInformation.c)
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
  off_1402F37E8();
  result = off_1402F37E8();
  if ( (result & 0x80000000) != 0LL || v5 )
  {
    v2 = (unsigned __int64 *)&unk_1403A9408;
    v3 = 7LL;
    do
    {
      *v2 = *v2 & 0xFFFFFFFFFFFFFFE7uLL | 8;
      ++v2;
      --v3;
    }
    while ( v3 );
    v4 = (unsigned __int64 *)&unk_1403A9508;
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
