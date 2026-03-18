/*
 * XREFs of PpmInitCoreParkingPolicy @ 0x14077157C
 * Callers:
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

_BYTE *PpmInitCoreParkingPolicy()
{
  __int64 v0; // rcx
  _BYTE *result; // rax

  v0 = 2LL;
  byte_1402DC3E0 = 100;
  byte_1402DC950 = 100;
  result = &unk_1402DC952;
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
  word_1402DC3D5 = 0;
  word_1402DC945 = 0;
  dword_1402DC3DC = 1;
  dword_1402DC94C = 1;
  dword_1402DC3D8 = 1;
  dword_1402DC948 = 1;
  word_1402DC3D1 = 24902;
  word_1402DC941 = 24902;
  byte_1402DC3D3 = 20;
  byte_1402DC943 = 20;
  return result;
}
