/*
 * XREFs of rand @ 0x14014E8EC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl rand()
{
  dword_1402F4DB0 = 214013 * dword_1402F4DB0 + 2531011;
  return (dword_1402F4DB0 >> 16) & 0x7FFF;
}
