/*
 * XREFs of rand @ 0x140144F4C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl rand()
{
  dword_1402C7000 = 214013 * dword_1402C7000 + 2531011;
  return (dword_1402C7000 >> 16) & 0x7FFF;
}
