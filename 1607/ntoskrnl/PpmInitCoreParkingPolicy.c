/*
 * XREFs of PpmInitCoreParkingPolicy @ 0x1407BC280
 * Callers:
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

_BYTE *PpmInitCoreParkingPolicy()
{
  __int64 v0; // rcx
  _BYTE *result; // rax

  v0 = 2LL;
  byte_140301820 = 100;
  byte_140301D90 = 100;
  result = &unk_140301D92;
  do
  {
    *(result - 1392) = 100;
    *result = 100;
    *(result - 1412) = 0;
    *(result - 20) = 0;
    ++result;
    --v0;
  }
  while ( v0 );
  word_140301815 = 0;
  word_140301D85 = 0;
  dword_14030181C = 1;
  dword_140301D8C = 1;
  dword_140301818 = 1;
  dword_140301D88 = 1;
  word_140301811 = 24902;
  word_140301D81 = 24902;
  byte_140301813 = 20;
  byte_140301D83 = 20;
  return result;
}
