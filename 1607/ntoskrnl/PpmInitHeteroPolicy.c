/*
 * XREFs of PpmInitHeteroPolicy @ 0x1407B6538
 * Callers:
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

char *PpmInitHeteroPolicy()
{
  char *result; // rax
  unsigned int v1; // ecx
  char v2; // dl
  char v3; // r8

  PpmHeteroMinRelativePerformance = 0x10000;
  result = (char *)&unk_140302020;
  v1 = 0;
  do
  {
    if ( v1 )
    {
      v2 = 50;
      v3 = 80;
    }
    else
    {
      v2 = 30;
      v3 = 90;
    }
    *(result - 1392) = v3;
    ++v1;
    *result = v3;
    *(result - 2032) = v2;
    *(result - 640) = v2;
    ++result;
  }
  while ( v1 < 0x40 );
  byte_14030182E = 3;
  byte_140301D9E = 3;
  word_140301D30 = 12850;
  word_1403022A0 = 12850;
  return result;
}
