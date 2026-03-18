/*
 * XREFs of rand @ 0x140172F7C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl rand()
{
  dword_140316000 = 214013 * dword_140316000 + 2531011;
  return (dword_140316000 >> 16) & 0x7FFF;
}
