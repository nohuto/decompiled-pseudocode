/*
 * XREFs of PpmInitCoreParkingPolicy @ 0x1407E7B4C
 * Callers:
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

_BYTE *PpmInitCoreParkingPolicy()
{
  __int64 v0; // rcx
  _BYTE *result; // rax

  v0 = 2LL;
  byte_14032C7C0 = 100;
  byte_14032CD30 = 100;
  result = &unk_14032CD32;
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
  word_14032C7B5 = 0;
  word_14032CD25 = 0;
  dword_14032C7BC = 1;
  dword_14032CD2C = 1;
  dword_14032C7B8 = 1;
  dword_14032CD28 = 1;
  word_14032C7B1 = 24902;
  word_14032CD21 = 24902;
  byte_14032C7B3 = 20;
  byte_14032CD23 = 20;
  return result;
}
